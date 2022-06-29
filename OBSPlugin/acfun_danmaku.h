#ifndef ACFUN_DANMAKU
#define ACFUN_DANMAKU

#include "acfun_body_data.h"
#include "acfun_text.h"
#include "acfun_utils.h"
#include "websocket_endpoint.h"

namespace AcFun
{
	namespace Danmaku
	{
		using namespace Text;

		constexpr auto GRAVITY = 0.f;

		constexpr auto NAME = u8"AcFun弹幕姬(初号机)";

		static const char* get_name(void* data) { return NAME; }

		struct Danmaku
		{
			Danmaku(obs_source_t* source, obs_data_t* settings)
			{
				width = obs_data_get_int(settings, "width");
				height = obs_data_get_int(settings, "height");
				const std::string& userId = obs_data_get_string(settings, "uid");

				b2Vec2 gravity(0.0f, GRAVITY);
				world = new b2World(gravity);

				create_edge();

				if (Utils::isNumber(userId))
				{
					uid = std::stoll(userId);
					if (uid != 0)
					{
						if (endpoint.connect(
							uid, [this](const json& data) { this->add_text(data); }))
						{
							blog(LOG_INFO, "ws connected");
						}
					}
				}

				initialize_direct_write();
			}

			~Danmaku()
			{
				if (world)
				{
					auto node = world->GetBodyList();
					obs_enter_graphics();
					while (node)
					{
						auto body = node;
						node = node->GetNext();
						delete reinterpret_cast<BodyData::body_data*>(body->GetUserData().pointer);
						world->DestroyBody(body);
					}
					obs_leave_graphics();
					delete world;
					world = nullptr;
				}
				release_resource();
			}

			void initialize_direct_write()
			{
				HRESULT hr = S_OK;
				hr = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &pD2DFactory);
				if (SUCCEEDED(hr))
				{
					hr = DWriteCreateFactory(DWRITE_FACTORY_TYPE_SHARED,
					                         __uuidof(IDWriteFactory),
					                         reinterpret_cast<IUnknown**>(&pWriteFactory));

					props = D2D1::RenderTargetProperties(
						D2D1_RENDER_TARGET_TYPE_DEFAULT,
						D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM,
						                  D2D1_ALPHA_MODE_PREMULTIPLIED),
						0, 0, D2D1_RENDER_TARGET_USAGE_NONE, D2D1_FEATURE_LEVEL_DEFAULT);
				}
				if (SUCCEEDED(hr))
				{
					hr = pWriteFactory->CreateTextFormat(L"Microsoft Yahei UI", nullptr, weight,
					                                     style, stretch, font_size, L"zh-CN",
					                                     &pTextFormat);
				}
				if (SUCCEEDED(hr))
				{
					pTextFormat->SetTextAlignment(align);
					pTextFormat->SetParagraphAlignment(valign);
					pTextFormat->SetWordWrapping(DWRITE_WORD_WRAPPING_NO_WRAP);
				}
			}

			void release_resource()
			{
				SafeRelease(&pRT);
				SafeRelease(&pFillBrush);
				SafeRelease(&pOutlineBrush);
				SafeRelease(&pTextLayout);
				SafeRelease(&pTextFormat);
				SafeRelease(&pWriteFactory);
				SafeRelease(&pD2DFactory);
			}

			void create_edge()
			{
				{
					b2Vec2 startpoint{scaled_width() * -1.f, 0.f};
					b2Vec2 endpoint{scaled_width() * 1.f, 0.f};

					b2BodyDef groundDef;
					groundDef.position.Set(0.f, scaled_height() / 1.9f);

					auto groundBody = world->CreateBody(&groundDef);

					b2EdgeShape bottomEdgeShape;
					bottomEdgeShape.SetTwoSided(startpoint, endpoint);

					b2FixtureDef edgeFixtureDef;
					edgeFixtureDef.shape = &bottomEdgeShape;
					groundBody->CreateFixture(&edgeFixtureDef);
				}
			}

			void add_text(const json& data)
			{
				blog(LOG_INFO, "check type");
				if (data["cmd"].get<int>() == 2)
				{
					blog(LOG_INFO, "get content");
					const auto& content = data["data"]["content"].get<std::string>();
					if (world)
					{
						const auto& wcontent = to_wide(content.c_str());
						UINT32 length = wcslen(wcontent.c_str());

						float cx = 0, cy = 0;
						HRESULT hr = S_OK;

						hr = pWriteFactory->CreateTextLayout(
							wcontent.c_str(), length, pTextFormat, width, height, &pTextLayout);

						if (SUCCEEDED(hr))
						{
							DWRITE_TEXT_METRICS metrics;
							hr = pTextLayout->GetMetrics(&metrics);

							cx = ceil(metrics.width);
							cy = ceil(metrics.height);

							clamp(cx, 2.f, width);
							clamp(cy, 2.f, height);
						}

						if (SUCCEEDED(hr))
						{
							DWRITE_TEXT_RANGE text_range = {0, length};
							pTextLayout->SetMaxWidth(cx);
							pTextLayout->SetMaxHeight(cy);
							hr = pD2DFactory->CreateDCRenderTarget(&props, &pRT);
						}

						if (SUCCEEDED(hr))
						{
							hr = pRT->CreateSolidColorBrush(D2D1::ColorF(color, 1),
							                                (ID2D1SolidColorBrush**)&pFillBrush);
						}

						if (SUCCEEDED(hr))
						{
							RECT rc;
							SetRect(&rc, 0, 0, cx, cy);

							obs_enter_graphics();
							gs_texture_t* texture = gs_texture_create_gdi(cx, cy);
							auto hdc = static_cast<HDC>(gs_texture_get_dc(texture));
							if (hdc)
							{
								pRT->BindDC(hdc, &rc);
								pRT->BeginDraw();
								pRT->SetTransform(D2D1::IdentityMatrix());
								pRT->Clear(D2D1::ColorF(0x000000, 0.f));
								pRT->DrawTextLayout(D2D1_POINT_2F{0, 0}, pTextLayout, pFillBrush,
								                    D2D1_DRAW_TEXT_OPTIONS_ENABLE_COLOR_FONT);
								hr = pRT->EndDraw();

								gs_texture_release_dc(texture);
							}
							obs_leave_graphics();

							const auto& source = new BodyData::body_data(
								BodyData::body_type::text, cx, cy, texture);
							b2BodyDef def;
							def.type = b2_dynamicBody;
							def.userData.pointer = reinterpret_cast<uintptr_t>(source);
							def.linearVelocity = {-8.f / log1pf(length), 0.f};
							// def.gravityScale = 0.f;

							b2PolygonShape shape;
							shape.SetAsBox(cx / 2.f / BodyData::MET2PIX,
							               cy / 2.f / BodyData::MET2PIX);

							b2FixtureDef fixtureDef;
							fixtureDef.shape = &shape;
							fixtureDef.density = log1pf(length);
							fixtureDef.friction = 0.3f;
							fixtureDef.restitution = 0.5f;

							// const auto& x =
							//(rand() % (scaled_width() - 1)) - (scaled_width() - 2) / 2.f;
							const auto& y =
								rand() % (scaled_height() - 1) - (scaled_height() - 2) / 2.f;
							// def.position.Set(x, scaled_height() / -2.f);
							def.position.Set(scaled_width() / 2.f, y);

							b2Body* text = world->CreateBody(&def);
							text->CreateFixture(&fixtureDef);
						}

						SafeRelease(&pFillBrush);
						SafeRelease(&pOutlineBrush);
						SafeRelease(&pTextLayout);
						SafeRelease(&pRT);
					}
				}
			}

			void update(obs_data_t* settings)
			{
				const auto& newWidth = obs_data_get_int(settings, "width");
				const auto& newHeight = obs_data_get_int(settings, "height");
				const auto& newPath =
					std::filesystem::u8path(obs_data_get_string(settings, "path"));
				const std::string& newId = obs_data_get_string(settings, "uid");

				if (newWidth != width || newHeight != height)
				{
					width = newWidth;
					height = newHeight;

					if (world)
					{
						auto node = world->GetBodyList();
						while (node)
						{
							const auto body = node;
							node = body->GetNext();
							if (const auto& data = body->GetUserData(); data.pointer == 0)
							{
								world->DestroyBody(body);
							}
						}
						create_edge();
					}
				}

				if (Utils::isNumber(newId))
				{
					if (const auto& id = std::stoll(newId); id != uid)
					{
						uid = id;
						endpoint.close();
						endpoint.connect(uid,
						                 [this](const json& data) { this->add_text(data); });
					}
				}
			}

			void toggle(const bool& status) { show = status; }

			void render()
			{
				const auto& now = std::time(nullptr);
				if (now - heartbeatTime >= 10)
				{
					heartbeatTime = now;
					endpoint.send("{\"cmd\":0}");
				}
				if (world)
				{
					if (show)
					{
						auto node = world->GetBodyList();
						while (node)
						{
							const auto body = node;
							const auto& data = body->GetUserData();

							node = node->GetNext();

							if (data.pointer != 0)
							{
								switch (reinterpret_cast<BodyData::body_data*>(data.pointer)->type)
								{
								case BodyData::body_type::text:
									if (now - reinterpret_cast<BodyData::body_data*>(data.pointer)->createTime > 30)
									{
										world->DestroyBody(body);
										obs_enter_graphics();
										delete reinterpret_cast<BodyData::body_data*>(data.pointer);
										obs_leave_graphics();
									}
									else
									{
										gs_effect_t* effect = obs_get_base_effect(OBS_EFFECT_DEFAULT);
										gs_technique_t* tech =
											gs_effect_get_technique(effect, "Draw");
										gs_technique_begin(tech);
										gs_technique_begin_pass(tech, 0);
										gs_effect_set_texture(
											gs_effect_get_param_by_name(effect, "image"),
											reinterpret_cast<BodyData::body_data*>(data.pointer)->texture);

										const auto& pos = body->GetPosition();
										const auto& angle = body->GetAngle();

										const auto& x =
											(scaled_width() / 2.f + pos.x) * BodyData::MET2PIX +
											reinterpret_cast<BodyData::body_data*>(data.pointer)->width;
										const auto& y =
											(scaled_height() / 2.f + pos.y) * BodyData::MET2PIX +
											reinterpret_cast<BodyData::body_data*>(data.pointer)->height;

										gs_matrix_push();
										gs_matrix_translate3f(x, y, 1.f);
										gs_matrix_translate3f(
											reinterpret_cast<BodyData::body_data*>(data.pointer)->width / -2.f,
											reinterpret_cast<BodyData::body_data*>(data.pointer)->height / -2.f,
											1.f);
										gs_matrix_rotaa4f(0.f, 0.f, 1.f, angle);
										gs_matrix_translate3f(
											reinterpret_cast<BodyData::body_data*>(data.pointer)->width / -2.f,
											reinterpret_cast<BodyData::body_data*>(data.pointer)->height / -2.f,
											1.f);
										gs_draw_sprite(reinterpret_cast<BodyData::body_data*>(data.pointer)->texture, 0,
										               reinterpret_cast<BodyData::body_data*>(data.pointer)->width,
										               reinterpret_cast<BodyData::body_data*>(data.pointer)->height);
										gs_matrix_pop();
										gs_technique_end_pass(tech);
										gs_technique_end(tech);
									}
									break;
								}
							}
						}
					}
					world->Step(1.f / 60.f, 10, 10);
				}
			}

			static void get_defaults(obs_data* settings)
			{
				obs_data_set_default_int(settings, "width", 1920);
				obs_data_set_default_int(settings, "height", 1080);
				obs_data_set_default_string(settings, "uid", "User Id");
			}

			static obs_properties_t* get_properties(void* data)
			{
				obs_properties_t* ppts = obs_properties_create();
				obs_properties_set_flags(ppts, OBS_PROPERTIES_DEFER_UPDATE);

				obs_properties_set_param(ppts, data, nullptr);

				obs_properties_add_int(ppts, "width", u8"宽度", 144, 1920, 32);
				obs_properties_add_int(ppts, "height", u8"高度", 144, 1080, 32);
				obs_properties_add_text(ppts, "uid", u8"用户ID", OBS_TEXT_DEFAULT);

				return ppts;
			}

			constexpr uint32_t scaled_width() { return width / BodyData::MET2PIX; }
			constexpr uint32_t scaled_height() { return height / BodyData::MET2PIX; }

			bool show = true;

			b2World* world;
			uint32_t width;
			uint32_t height;
			int64_t uid;
			time_t heartbeatTime;
			websocket_endpoint endpoint;

			IDWriteFactory* pWriteFactory = nullptr;
			IDWriteTextFormat* pTextFormat = nullptr;
			ID2D1Factory* pD2DFactory = nullptr;
			ID2D1Brush* pFillBrush = nullptr;
			ID2D1Brush* pOutlineBrush = nullptr;
			ID2D1DCRenderTarget* pRT = nullptr;
			IDWriteTextLayout* pTextLayout = nullptr;

			D2D1_RENDER_TARGET_PROPERTIES props{};

			constexpr static DWRITE_FONT_WEIGHT weight = DWRITE_FONT_WEIGHT_REGULAR;
			constexpr static DWRITE_FONT_STYLE style = DWRITE_FONT_STYLE_NORMAL;
			constexpr static DWRITE_FONT_STRETCH stretch = DWRITE_FONT_STRETCH_NORMAL;
			constexpr static DWRITE_TEXT_ALIGNMENT align = DWRITE_TEXT_ALIGNMENT_LEADING;
			constexpr static DWRITE_PARAGRAPH_ALIGNMENT valign =
				DWRITE_PARAGRAPH_ALIGNMENT_NEAR;

			uint32_t color = 0xFB4B5A;
			int font_size = 32;
		};
	} // namespace Danmaku
} // namespace AcFun
#endif  //! ACFUN_DANMAKU
