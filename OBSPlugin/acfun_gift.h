#pragma once
#ifndef ACFUN_GIFT
#define ACFUN_GIFT
#include <graphics/image-file.h>

#include <Box2D/Box2D.h>

#include "acfun_utils.h"
#include "websocket_endpoint.h"

namespace AcFun {
	namespace Gift {
		constexpr auto GRAVITY = 9.81f;
		constexpr auto MET2PIX = 80.f; // conversion between Box2D and OBS
		constexpr auto RAD2DEG = 180.f / b2_pi;

		constexpr auto ICON_SIZE = 72;

		struct gift_data {
			obs_source_t* source;
		};
		enum class source_type {
			edge,
			gift,
		};
		class source_data {
		public:
			source_data(source_type type, int id, uint32_t width = ICON_SIZE) :type(type), id(id), size(width), createTime(std::time(nullptr)) {}
			source_type type;
			std::time_t createTime;
			int id;
			uint32_t size;
		};

		constexpr auto NAME = u8"AcFun礼物助手";

		static uint32_t width, height;
		static std::unique_ptr<b2World> world;

		static int32_t expire;

		static std::unique_ptr<std::filesystem::path> path;
		static std::unordered_map<int, gs_image_file_t*> textures;

		static std::unordered_map<std::string, int> NAME2ID{
			{u8"香蕉", 1},
			{u8"快乐水", 17},
			{u8"氧气瓶", 35},
			{u8"好听", 46},
			{u8"打Call", 12},
			{u8"月亮饼", 48},
			{u8"上天", 37},
			{u8"星蕉雨", 8},
			{u8"草", 38},
			{u8"牛啤", 4},
			{u8"奶瓶", 47},
			{u8"情书", 33},
			{u8"\\応❤️援/", 44},
			{u8"AC机娘", 15},
			{u8"猴岛", 16},
			{u8"爱你哟", 36},
			{u8"吃瓜", 2},
			{u8"狗粮", 34},
			{u8"告白", 9},
			{u8"菜鸡", 11},
			{u8"小PEACH", 40},
			{u8"立FLAG", 13},
			{u8"窜天猴", 14},
			{u8"对瓶吹", 43},
			{u8"鸽鸽", 30},
			{u8"冰淇淋", 42},
			{u8"好人卡", 7},
			{u8"生日快乐", 21}
		};

		constexpr static uint32_t scaled_width() { return width / MET2PIX; }
		constexpr static uint32_t scaled_height() { return height / MET2PIX; }
		constexpr static float scaled_size() { return ICON_SIZE / MET2PIX; }

		static int64_t uid;
		static time_t heartbeatTime;
		static websocket_endpoint endpoint;

		static void load_images() {
			if (path) {
				const auto& dir = std::filesystem::directory_entry(*path);
				if (!dir.is_directory()) { return blog(LOG_WARNING, "%s is not a directory", path->string().c_str()); }
				for (const auto& entry : std::filesystem::directory_iterator(dir)) {
					if (entry.is_regular_file()) {
						const auto& entryPath = entry.path();
						const auto& stem = entryPath.stem().string();
						const auto& ext = entryPath.extension().string();
						if (Utils::isNumber(stem) && (ext == ".png" || ext == ".PNG")) {
							int id = std::stoi(stem);

							gs_image_file* image = new gs_image_file_t();
							gs_image_file_init(image, entryPath.string().c_str());
							obs_enter_graphics();
							if (textures.find(id) != textures.end()) {
								gs_image_file_free(textures[id]);
							}
							gs_image_file_init_texture(image);
							obs_leave_graphics();

							if (!image->loaded) {
								blog(LOG_WARNING, "Failed to load texture %s", path->string().c_str());
							}
							else {
								textures[id] = image;
							}
						}
					}
				}
			}
		}

		static void create_edge() {
			{
				b2Vec2 startpoint(scaled_width() * -1.f, scaled_height() / 2.f - scaled_size() / 2.f);

				b2Vec2 endpoint(scaled_width() * 1.f, scaled_height() / 2.f - scaled_size() / 2.f);

				b2BodyDef groundDef;
				groundDef.position.Set(0.f, 0.f);
				groundDef.userData = new source_data(source_type::edge, 0);

				auto groundBody = world->CreateBody(&groundDef);

				b2EdgeShape bottomEdgeShape;
				bottomEdgeShape.SetTwoSided(startpoint, endpoint);

				b2FixtureDef edgeFixtureDef;
				edgeFixtureDef.shape = &bottomEdgeShape;
				groundBody->CreateFixture(&edgeFixtureDef);
			}
			{
				b2Vec2 startpoint(scaled_width() / -2.f - scaled_size() / 2.f, scaled_height() * -1.f);

				b2Vec2 endpoint(scaled_width() / -2.f - scaled_size() / 2.f, scaled_height() * 1.f);

				b2BodyDef groundDef;
				groundDef.position.Set(0.f, 0.f);
				groundDef.userData = new source_data(source_type::edge, 0);

				auto groundBody = world->CreateBody(&groundDef);

				b2EdgeShape sideEdgeShape;
				sideEdgeShape.SetTwoSided(startpoint, endpoint);

				b2FixtureDef edgeFixtureDef;
				edgeFixtureDef.shape = &sideEdgeShape;
				groundBody->CreateFixture(&edgeFixtureDef);
			}
			{
				b2Vec2 startpoint(scaled_width() / 2.f - scaled_size() / 2.f, scaled_height() * -1.f);

				b2Vec2 endpoint(scaled_width() / 2.f - scaled_size() / 2.f, scaled_height() * 1.f);

				b2BodyDef groundDef;
				groundDef.position.Set(0.f, 0.f);
				groundDef.userData = new source_data(source_type::edge, 0);

				auto groundBody = world->CreateBody(&groundDef);

				b2EdgeShape sideEdgeShape;
				sideEdgeShape.SetTwoSided(startpoint, endpoint);

				b2FixtureDef edgeFixtureDef;
				edgeFixtureDef.shape = &sideEdgeShape;
				groundBody->CreateFixture(&edgeFixtureDef);
			}
		}

		static void add_gift(const std::string& name, const int& count) {
			if (world) {
				if (NAME2ID.find(name) != NAME2ID.end()) {
					const auto& id = NAME2ID[name];
					const auto& data = new source_data(source_type::gift, id);
					b2BodyDef def;
					def.type = b2_dynamicBody;
					def.userData = data;

					b2CircleShape shape;
					shape.m_radius = scaled_size() / 2.f;

					b2FixtureDef fixtureDef;
					fixtureDef.shape = &shape;
					fixtureDef.density = 1.f;
					fixtureDef.friction = 0.3f;
					fixtureDef.restitution = 0.5f;

					for (int i = 0; i < count; i++) {
						const auto& x = (rand() % (scaled_width() - 1)) - (scaled_width() - 2) / 2.f;
						def.position.Set(x, scaled_height() / -2.f);
						def.angle = rand() & 255;

						b2Body* gift = world->CreateBody(&def);
						gift->CreateFixture(&fixtureDef);
					}
				}
			}
		}

		static const char* get_name(void* data) { return NAME; }

		static void* create(obs_data_t* settings, obs_source_t* source) {
			width = obs_data_get_int(settings, "width");
			height = obs_data_get_int(settings, "height");
			path = std::make_unique<std::filesystem::path>(std::filesystem::u8path(obs_data_get_string(settings, "path")));
			const std::string& userId = obs_data_get_string(settings, "uid");

			b2Vec2 gravity(0.0f, GRAVITY);
			b2World* newWorld = new b2World(gravity);
			world = std::make_unique<b2World>(*newWorld);

			create_edge();

			load_images();

			if (Utils::isNumber(userId)) {
				uid = std::stoll(userId);
				if (uid != 0) {
					if (endpoint.connect(uid, add_gift)) {
						blog(LOG_INFO, "ws connected");
					}
				}
			}

			gift_data* data = (gift_data*)malloc(sizeof(gift_data));
			if (data) {
				data->source = source;
			}
			return data;
		}

		static void destory(void* data) {
			if (world) {
				auto node = world->GetBodyList();
				while (node) {
					auto b = node;
					node = node->GetNext();
					world->DestroyBody(b);
				}
				const auto& ptr = world.release();
				delete ptr;
				world = nullptr;
			}
			obs_enter_graphics();
			for (const auto& [id, image] : textures) {
				gs_image_file_free(image);
			}
			obs_leave_graphics();

			textures.clear();

			delete data;
		}

		static uint32_t get_width(void* data) {
			return width;
		}

		static uint32_t get_height(void* dat) {
			return height;
		}

		static void get_defaults(obs_data* settings) {
			obs_data_set_default_int(settings, "width", 1920);
			obs_data_set_default_int(settings, "height", 1080);
			obs_data_set_default_int(settings, "expire", 15);
			obs_data_set_default_string(settings, "path", "Path to AcFun Gifts");
			obs_data_set_default_string(settings, "uid", "User Id");
		}

		static obs_properties_t* get_properties(void* data) {
			obs_properties_t* ppts = obs_properties_create();
			obs_properties_set_param(ppts, data, NULL);

			obs_properties_add_int(ppts, "width", obs_module_text("Width"), 144, 1920, 32);
			obs_properties_add_int(ppts, "height", obs_module_text("Height"), 144, 1080, 32);
			obs_properties_add_int(ppts, "expire", obs_module_text("Expire"), 10, 60, 5);
			obs_properties_add_path(ppts, "path", obs_module_text("Path"), OBS_PATH_DIRECTORY, NULL, NULL);
			obs_properties_add_text(ppts, "uid", obs_module_text("UserId"), OBS_TEXT_DEFAULT);

			return ppts;
		}

		static void update(void* dat, obs_data_t* settings) {
			const auto& newWidth = obs_data_get_int(settings, "width");
			const auto& newHeight = obs_data_get_int(settings, "height");
			expire = obs_data_get_int(settings, "expire");
			const auto& newPath = std::filesystem::u8path(obs_data_get_string(settings, "path"));
			const std::string& newId = obs_data_get_string(settings, "uid");

			if (path->string() != newPath) {
				path = std::move(std::make_unique<std::filesystem::path>(newPath));
				load_images();
			}

			if (newWidth != width || newHeight != height) {
				width = newWidth;
				height = newHeight;

				if (world) {
					auto node = world->GetBodyList();
					while (node) {
						auto body = node;
						node = body->GetNext();
						auto data = (source_data*)body->GetUserData();
						if (data && data->type == source_type::edge) {
							world->DestroyBody(body);
						}
					}
					create_edge();
				}
			}

			if (Utils::isNumber(newId)) {
				const auto& id = std::stoll(newId);
				if (id != uid) {
					uid = id;
					endpoint.close();
					endpoint.connect(uid, add_gift);
				}
			}
		}

		static void render(void* data, gs_effect_t* effect) {
			const auto& now = std::time(nullptr);
			if ((now - heartbeatTime) >= 10) {
				heartbeatTime = now;
				endpoint.send("{\"cmd\":0}");
			}
			if (world) {
				auto node = world->GetBodyList();
				while (node) {
					auto body = node;
					const auto& data = (source_data*)body->GetUserData();

					node = node->GetNext();

					if (data) {
						switch (data->type) {
						case source_type::edge:
							break;
						case source_type::gift:
							if ((now - data->createTime) > expire) {
								world->DestroyBody(body);
							}
							else if (textures.find(data->id) != textures.end()) {
								gs_effect_set_texture(gs_effect_get_param_by_name(effect, "image"), textures[data->id]->texture);

								const auto& pos = body->GetPosition();
								const auto& angle = body->GetAngle();

								const auto& x = ((scaled_width() / 2.f) + pos.x) * MET2PIX + data->size;
								const auto& y = ((scaled_height() / 2.f) + pos.y) * MET2PIX + data->size;

								gs_matrix_push();
								gs_matrix_translate3f(x, y, 1.f);
								gs_matrix_translate3f(data->size / -2.f, data->size / -2.f, 1.f);
								gs_matrix_rotaa4f(0.f, 0.f, 1.f, angle);
								gs_matrix_translate3f(data->size / -2.f, data->size / -2.f, 1.f);
								gs_draw_sprite(textures[data->id]->texture, 0, data->size, data->size);
								gs_matrix_pop();
							}
							else {
								blog(LOG_WARNING, "Unable to find texture for gift %d", data->id);
							}
							break;
						}
					}
				}
				world->Step(1.f / 60.f, 8, 3);
			}
		}
	}
}
#endif // !ACFUN_GIFT