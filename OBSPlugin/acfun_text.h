#ifndef ACFUN_TEXT
#define ACFUN_TEXT

#define WIN32_LEAN_AND_MEAN

#include <Windows.h>
#include <d2d1.h>
#include <dwrite.h>
#include <math.h>
#include <obs-module.h>
#include <sys/stat.h>
#include <util/platform.h>

#include <algorithm>
#include <string>
#include <util/util.hpp>

#ifndef clamp
#define clamp(val, min_val, max_val) \
  if (val < min_val)                 \
    val = min_val;                   \
  else if (val > max_val)            \
    val = max_val;
#endif  //！clamp
namespace AcFun {
namespace Text {
template <class T>
void SafeRelease(T** ppT) {
  if (*ppT) {
    (*ppT)->Release();
    *ppT = nullptr;
  }
}

static inline std::wstring to_wide(const char* utf8) {
  std::wstring text;

  size_t len = os_utf8_to_wcs(utf8, 0, nullptr, 0);
  text.resize(len);
  if (len) os_utf8_to_wcs(utf8, 0, &text[0], len + 1);

  return text;
}

struct RGBText {
  static constexpr auto NAME = u8"RGB文本";
  static const char* get_name(void* data) { return NAME; }

  RGBText(obs_source_t* source, obs_data_t* settings) {
    initialize_direct_write();
    update(settings);
  }

  ~RGBText() {
    if (texture) {
      obs_enter_graphics();
      gs_texture_destroy(texture);
      obs_leave_graphics();
    }
    release_resource();
  }

  void update(obs_data_t* settings) {
    const char* new_text = obs_data_get_string(settings, "text");

    auto font_obj = obs_data_get_obj(settings, "font");
    const char* new_font_face = obs_data_get_string(font_obj, "face");
    const auto& new_font_size = obs_data_get_int(font_obj, "size");

    obs_data_release(font_obj);

    const auto& new_face = to_wide(new_font_face);
    if (new_face != font_face || new_font_size != font_size) {
      font_face = new_face;
      font_size = new_font_size;
      SafeRelease(&pTextFormat);
      pWriteFactory->CreateTextFormat(font_face.c_str(), NULL, weight, style,
                                      stretch, font_size, L"zh-CN",
                                      &pTextFormat);
      pTextFormat->SetTextAlignment(align);
      pTextFormat->SetParagraphAlignment(valign);
      pTextFormat->SetWordWrapping(wrapping);
    }

    gradient_direction = obs_data_get_int(settings, "direction");
    step = obs_data_get_int(settings, "speed");

    text = to_wide(new_text);
    render_text();
  }

  void render_text() {
    if (!text.empty()) {
      UINT32 length = wcslen(text.c_str());
      float cx = 0, cy = 0;
      HRESULT hr = S_OK;

      hr = pWriteFactory->CreateTextLayout(text.c_str(), length, pTextFormat,
                                           4096.f, 2160.f, &pTextLayout);

      if (SUCCEEDED(hr)) {
        DWRITE_TEXT_METRICS metrics;
        hr = pTextLayout->GetMetrics(&metrics);

        cx = ceil(metrics.width);
        cy = ceil(metrics.height);

        clamp(cx, 2.f, 4096.f);
        clamp(cy, 2.f, 2160.f);
      }

      if (SUCCEEDED(hr)) {
        DWRITE_TEXT_RANGE text_range = {0, length};
        pTextLayout->SetMaxWidth(cx);
        pTextLayout->SetMaxHeight(cy);
        hr = pD2DFactory->CreateDCRenderTarget(&props, &pRT);
      }

      if (SUCCEEDED(hr)) {
        const float angle = DEG(atan(cy / cx));
        if (gradient_direction <= angle || gradient_direction > 360.f - angle) {
          const float y = cx / 2.f * tan(RAD(gradient_direction));
          gradient_x = cx;
          gradient_y = cy / 2.f - y;
          gradient2_x = 0.f;
          gradient2_y = cy / 2.f + y;
        } else if (gradient_direction <= 180.f - angle &&
                   gradient_direction > angle) {
          const float x = cy / 2.f * tan(RAD(90.f - gradient_direction));
          gradient_x = cx / 2.f + x;
          gradient_y = 0.f;
          gradient2_x = cx / 2.f - x;
          gradient2_y = cy;
        } else if (gradient_direction <= 180.f + angle &&
                   gradient_direction > 180.f - angle) {
          const float y = cx / 2.f * tan(RAD(gradient_direction));
          gradient_x = 0.f;
          gradient_y = cy / 2.f + y;
          gradient2_x = cx;
          gradient2_y = cy / 2.f - y;
        } else {
          const float x = cy / 2.f * tan(RAD(270.f - gradient_direction));
          gradient_x = cx / 2.f - x;
          gradient_y = cy;
          gradient2_x = cx / 2.f + x;
          gradient2_y = 0.f;
        }

        ID2D1GradientStopCollection* pGradientStops;

        gradient_stops[0].color = D2D1::ColorF(color1, 1.f);
        gradient_stops[0].position = 1.f - ratio;
        gradient_stops[1].color = D2D1::ColorF(color2, 1.f);
        gradient_stops[1].position = ratio;
        // gradient_stops[2].color = D2D1::ColorF(color3, 1.f);
        // gradient_stops[2].position = 1.f;

        hr = pRT->CreateGradientStopCollection(
            gradient_stops, stops, D2D1_GAMMA_2_2, D2D1_EXTEND_MODE_MIRROR,
            &pGradientStops);

        if (SUCCEEDED(hr)) {
          hr = pRT->CreateLinearGradientBrush(
              D2D1::LinearGradientBrushProperties(
                  D2D1::Point2F(gradient_x, gradient_y),
                  D2D1::Point2F(gradient2_x, gradient2_y)),
              pGradientStops, (ID2D1LinearGradientBrush**)&pFillBrush);
        }
        SafeRelease(&pGradientStops);
      }

      if (SUCCEEDED(hr)) {
        RECT rc;
        SetRect(&rc, 0, 0, cx, cy);

        obs_enter_graphics();
        if (!texture || width != cx || height != cy) {
          if (texture) {
            gs_texture_destroy(texture);
          }
          texture = gs_texture_create_gdi(cx, cy);
        }
        HDC hdc = (HDC)gs_texture_get_dc(texture);
        if (hdc) {
          pRT->BindDC(hdc, &rc);
          pRT->BeginDraw();
          pRT->SetTransform(D2D1::IdentityMatrix());
          pRT->Clear(D2D1::ColorF(0x000000, 0.f));
          pRT->DrawTextLayout(D2D1_POINT_2F{0, 0}, pTextLayout, pFillBrush,
                              D2D1_DRAW_TEXT_OPTIONS_ENABLE_COLOR_FONT);
          // pRT->FillRectangle(D2D1::RectF(0.f, 0.f, cx, cy), pFillBrush);
          hr = pRT->EndDraw();

          gs_texture_release_dc(texture);
        }
        obs_leave_graphics();

        width = cx;
        height = cy;
      }

      SafeRelease(&pFillBrush);
      SafeRelease(&pOutlineBrush);
      SafeRelease(&pTextLayout);
      SafeRelease(&pRT);
    }
  }

  inline void color_tick(UINT32& color) {
    if ((color & 0xFF0000) == 0xFF0000 && color != 0xFFFF00) {
      if ((color & 0x0000FF) > 0) {
        color -= step;
        if (color < 0xFF0000) {
          color = 0xFF0000;
        }
      } else {
        color = min(color + (step << 8), 0xFFFF00);
      }
    } else if ((color & 0x00FF00) == 0x00FF00 && color != 0x00FFFF) {
      if ((color & 0xFF0000) > 0) {
        color -= step << 16;
        if (color > 0xFFFFFF) {
          color = 0x00FF00;
        }
      } else {
        color = min(color + step, 0x00FFFF);
      }
    } else if ((color & 0x0000FF) == 0x0000FF && color != 0xFF00FF) {
      if ((color & 0x00FF00) > 0) {
        color -= step << 8;
        if (color > 0xFFFFFF) {
          color = 0x0000FF;
        }
      } else {
        color = min(color + (step << 16), 0xFF00FF);
      }
    }
  }

  void tick() {
    color_tick(color1);
    color_tick(color2);
    // color_tick(color3);
    render_text();
  }

  void render() {
    if (texture) {
      gs_effect_t* effect = obs_get_base_effect(OBS_EFFECT_DEFAULT);
      gs_technique_t* tech = gs_effect_get_technique(effect, "Draw");
      gs_technique_begin(tech);
      gs_technique_begin_pass(tech, 0);

      gs_effect_set_texture(gs_effect_get_param_by_name(effect, "image"),
                            texture);
      gs_draw_sprite(texture, 0, width, height);

      gs_technique_end_pass(tech);
      gs_technique_end(tech);
    }
  }

  void initialize_direct_write() {
    HRESULT hr = S_OK;
    hr = D2D1CreateFactory(D2D1_FACTORY_TYPE_SINGLE_THREADED, &pD2DFactory);
    if (SUCCEEDED(hr)) {
      hr = DWriteCreateFactory(DWRITE_FACTORY_TYPE_SHARED,
                               __uuidof(IDWriteFactory),
                               reinterpret_cast<IUnknown**>(&pWriteFactory));

      props = D2D1::RenderTargetProperties(
          D2D1_RENDER_TARGET_TYPE_DEFAULT,
          D2D1::PixelFormat(DXGI_FORMAT_B8G8R8A8_UNORM,
                            D2D1_ALPHA_MODE_PREMULTIPLIED),
          0, 0, D2D1_RENDER_TARGET_USAGE_GDI_COMPATIBLE,
          D2D1_FEATURE_LEVEL_DEFAULT);
    }
  }

  void release_resource() {
    SafeRelease(&pRT);
    SafeRelease(&pFillBrush);
    SafeRelease(&pOutlineBrush);
    SafeRelease(&pTextLayout);
    SafeRelease(&pTextFormat);
    SafeRelease(&pWriteFactory);
    SafeRelease(&pD2DFactory);
  }

  static void get_defaults(obs_data* settings) {
    obs_data_t* font_obj = obs_data_create();
    obs_data_set_default_string(font_obj, "face", "Arial");
    obs_data_set_default_int(font_obj, "size", 32);
    obs_data_set_default_obj(settings, "font", font_obj);

    obs_data_set_default_string(settings, "text", "");

    obs_data_set_default_int(settings, "direction", 0);
    obs_data_set_default_int(settings, "speed", 1);

    obs_data_release(font_obj);
  }
  static obs_properties_t* get_properties(void* data) {
    obs_properties_t* ppts = obs_properties_create();
    obs_properties_set_flags(ppts, OBS_PROPERTIES_DEFER_UPDATE);

    obs_properties_set_param(ppts, data, NULL);

    obs_properties_add_font(ppts, "font", u8"字体");
    obs_properties_add_text(ppts, "text", u8"文本", OBS_TEXT_DEFAULT);

    obs_properties_add_int_slider(ppts, "direction", u8"渐变角度", 0, 360, 1);
    obs_properties_add_int(ppts, "speed", u8"速度", 1, 10, 1);

    return ppts;
  }

  std::wstring text;
  std::wstring font_face = L"Arial";
  int font_size = 32;
  uint32_t width = 10;
  uint32_t height = 10;

  static constexpr float ratio = 1.6180339887498948482f;

  static constexpr int stops = 2;
  D2D1_GRADIENT_STOP gradient_stops[2];

  UINT32 step = 1;
  UINT32 color1 = 0xFF0000;
  UINT32 color2 = 0x0000FF;
  UINT32 color3 = 0x0000FF;

  float gradient_direction = 0.f;
  float gradient_x;
  float gradient_y;
  float gradient2_x;
  float gradient2_y;

  gs_texture_t* texture = nullptr;

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
  constexpr static DWRITE_WORD_WRAPPING wrapping = DWRITE_WORD_WRAPPING_NO_WRAP;
};
}  // namespace Text
}  // namespace AcFun
#endif  // !ACFUN_TEXT