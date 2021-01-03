#include "acfun_danmaku.h"
#include "acfun_gift.h"

OBS_DECLARE_MODULE()

bool obs_module_load() {
  obs_source_info gift{};

  gift.id = AcFun::Gift::NAME;
  gift.icon_type = OBS_ICON_TYPE_CUSTOM;
  gift.type = OBS_SOURCE_TYPE_INPUT;
  gift.output_flags =
      OBS_SOURCE_VIDEO | OBS_SOURCE_CUSTOM_DRAW | OBS_SOURCE_DO_NOT_DUPLICATE;
  gift.get_name = AcFun::Gift::get_name;
  gift.create = AcFun::Gift::create;
  gift.destroy = AcFun::Gift::destory;
  gift.get_width = AcFun::Gift::get_width;
  gift.get_height = AcFun::Gift::get_height;
  gift.get_defaults = AcFun::Gift::get_defaults;
  gift.get_properties = AcFun::Gift::get_properties;
  gift.update = AcFun::Gift::update;
  gift.video_render = AcFun::Gift::render;

  obs_source_info danmaku{};
  danmaku.id = AcFun::Danmaku::NAME;
  danmaku.icon_type = OBS_ICON_TYPE_TEXT;
  danmaku.type = OBS_SOURCE_TYPE_INPUT;
  danmaku.output_flags =
      OBS_SOURCE_VIDEO | OBS_SOURCE_CUSTOM_DRAW | OBS_SOURCE_DO_NOT_DUPLICATE;
  danmaku.get_name = AcFun::Danmaku::get_name;
  danmaku.create = [](obs_data_t* settings, obs_source_t* source) -> void* {
    return new AcFun::Danmaku::Danmaku(source, settings);
  };
  danmaku.destroy = [](void* data) {
    delete static_cast<AcFun::Danmaku::Danmaku*>(data);
  };
  danmaku.get_width = [](void* data) {
    return static_cast<AcFun::Danmaku::Danmaku*>(data)->width;
  };
  danmaku.get_height = [](void* data) {
    return static_cast<AcFun::Danmaku::Danmaku*>(data)->height;
  };
  danmaku.show = [](void* data) {
    static_cast<AcFun::Danmaku::Danmaku*>(data)->toggle(true);
  };
  danmaku.hide = [](void* data) {
    static_cast<AcFun::Danmaku::Danmaku*>(data)->toggle(false);
  };
  danmaku.get_defaults = AcFun::Danmaku::Danmaku::get_defaults;
  danmaku.get_properties = AcFun::Danmaku::Danmaku::get_properties;
  danmaku.update = [](void* data, obs_data_t* settings) {
    static_cast<AcFun::Danmaku::Danmaku*>(data)->update(settings);
  };
  danmaku.video_render = [](void* data, gs_effect_t* effect) {
    static_cast<AcFun::Danmaku::Danmaku*>(data)->render();
  };

  // danmaku.video_tick = [](void* data, float seconds) {
  //  const auto& danmaku = static_cast<AcFun::Danmaku::Danmaku*>(data);
  //  const auto& random = rand() & 1023;
  //  if (random < 16) {
  //    danmaku->add_text(
  //        json::parse(u8"{\"cmd\":2,\"data\":{\"content\":"
  //                    u8"\"测试测试测试测试测试测试测试测试测试测试测试测试测试"
  //                    u8"测试测试测试\"}}"));
  //  } else if (random < 64) {
  //    danmaku->add_text(json::parse(
  //        u8"{\"cmd\":2,\"data\":{\"content\":\"🍌┯━┯ノ('－'ノ)\"}}"));
  //  } else if (random < 128) {
  //    danmaku->add_text(
  //        json::parse(u8"{\"cmd\":2,\"data\":{\"content\":\"test\"}}"));
  //  }
  //};

  obs_source_info rgb_text{};
  rgb_text.id = AcFun::Text::RGBText::NAME;
  rgb_text.icon_type = OBS_ICON_TYPE_TEXT;
  rgb_text.type = OBS_SOURCE_TYPE_INPUT;
  rgb_text.output_flags = OBS_SOURCE_VIDEO | OBS_SOURCE_CUSTOM_DRAW;
  rgb_text.get_name = AcFun::Text::RGBText::get_name;
  rgb_text.create = [](obs_data_t* settings, obs_source_t* source) -> void* {
    return new AcFun::Text::RGBText(source, settings);
  };
  rgb_text.destroy = [](void* data) {
    delete static_cast<AcFun::Text::RGBText*>(data);
  };
  rgb_text.get_width = [](void* data) {
    return static_cast<AcFun::Text::RGBText*>(data)->width;
  };
  rgb_text.get_height = [](void* data) {
    return static_cast<AcFun::Text::RGBText*>(data)->height;
  };
  rgb_text.get_defaults = AcFun::Text::RGBText::get_defaults;
  rgb_text.get_properties = AcFun::Text::RGBText::get_properties;
  rgb_text.update = [](void* data, obs_data_t* settings) {
    static_cast<AcFun::Text::RGBText*>(data)->update(settings);
  };
  rgb_text.video_render = [](void* data, gs_effect_t* effect) {
    static_cast<AcFun::Text::RGBText*>(data)->render();
  };
  rgb_text.video_tick = [](void* data, float seconds) {
    static_cast<AcFun::Text::RGBText*>(data)->tick();
  };

  obs_register_source(&gift);
  obs_register_source(&danmaku);
  obs_register_source(&rgb_text);

  return true;
}

void obs_module_unload() {}