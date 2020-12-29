#include "acfun_gift.h"

OBS_DECLARE_MODULE()

OBS_MODULE_USE_DEFAULT_LOCALE("acfun_danmaku_plugin", "zh-CN")

bool obs_module_load() {
  obs_source_info gift{};

  gift.id = AcFun::Gift::NAME;
  gift.type = OBS_SOURCE_TYPE_INPUT;
  gift.output_flags = OBS_SOURCE_VIDEO | OBS_SOURCE_DO_NOT_DUPLICATE;
  gift.get_name = AcFun::Gift::get_name;
  gift.create = AcFun::Gift::create;
  gift.destroy = AcFun::Gift::destory;
  gift.get_width = AcFun::Gift::get_width;
  gift.get_height = AcFun::Gift::get_height;
  gift.get_defaults = AcFun::Gift::get_defaults;
  gift.get_properties = AcFun::Gift::get_properties;
  gift.update = AcFun::Gift::update;
  gift.video_render = AcFun::Gift::render;

  obs_register_source(&gift);

  return true;
}

void obs_module_unload() {}