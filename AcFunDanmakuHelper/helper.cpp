#include "helper.hpp"

OBS_DECLARE_MODULE()

HelperSource::HelperSource() {}
HelperSource::HelperSource(std::string source) : source(source) {
  const auto address = net::ip::make_address("127.0.0.1");
  const auto port = (unsigned short)65432;

  std::make_shared<listener>(
      ioc, tcp::endpoint{address, port},
      [this](const std::string& css) {
        const auto& browser = obs_get_source_by_name(this->source.c_str());
        if (browser != NULL) {
          const auto& browserSettings = obs_data_create();
          obs_data_set_string(browserSettings, "css", css.c_str());

          obs_source_update(browser, browserSettings);

          obs_data_release(browserSettings);
          obs_source_release(browser);
        } else {
          blog(LOG_WARNING, "cannot find source: %s", this->source.c_str());
        }
      })
      ->run();
  t = std::thread([&] { ioc.run(); });

  blog(LOG_INFO, u8"AcFunµØƒªºß÷˙ ÷“—∆Ù∂Ø");
}
HelperSource::~HelperSource() {
  ioc.stop();
  if (t.joinable()) {
    t.join();
  }
  blog(LOG_INFO, u8"AcFunµØƒªºß÷˙ ÷“—Õ£÷π");
}
void HelperSource::Update(obs_data_t* settings) {
  const auto& newSource = obs_data_get_string(settings, "source");

  if (strcmp(source.c_str(), newSource) != 0) {
    source = newSource;
  }
}

static bool enum_sources(void* param, obs_source_t* source) {
  if (strcmp(obs_source_get_id(source), "browser_source") == 0) {
    const auto& name = obs_source_get_name(source);
    const auto& list = static_cast<obs_property_t*>(param);
    obs_property_list_add_string(list, name, name);
  }
  return true;
}

static void helper_source_get_defaults(obs_data_t* settings) {
  obs_data_set_default_string(settings, "source", "");
}

static obs_properties_t* helper_source_get_properties(void* data) {
  obs_properties_t* props = obs_properties_create();
  HelperSource* helper = static_cast<HelperSource*>(data);

  obs_properties_set_flags(props, OBS_PROPERTIES_DEFER_UPDATE);
  const auto& list =
      obs_properties_add_list(props, "source", u8"‰Ø¿¿∆˜‘¥",
                              OBS_COMBO_TYPE_LIST, OBS_COMBO_FORMAT_STRING);
  obs_enum_sources(enum_sources, list);

  return props;
}

bool obs_module_load() {
  std::thread thttp;
  net::io_context ioc{1};

  obs_source_info helper{};
  helper.id = u8"AcFunµØƒªºß÷˙ ÷";
  helper.type = OBS_SOURCE_TYPE_INPUT;
  helper.output_flags = OBS_SOURCE_VIDEO | OBS_SOURCE_DO_NOT_DUPLICATE;
  helper.icon_type = OBS_ICON_TYPE_BROWSER;
  helper.get_name = [](void*) { return u8"AcFunµØƒªºß÷˙ ÷"; };
  helper.get_properties = helper_source_get_properties;
  helper.get_defaults = helper_source_get_defaults;
  helper.create = [](obs_data_t* settings, obs_source_t* source) -> void* {
    const auto& browser = obs_data_get_string(settings, "source");
    return new HelperSource(browser);
  };
  helper.destroy = [](void* data) { delete static_cast<HelperSource*>(data); };
  helper.update = [](void* data, obs_data_t* settings) {
    static_cast<HelperSource*>(data)->Update(settings);
  };
  helper.get_width = [](void* data) { return (uint32_t)0; };
  helper.get_height = [](void* data) { return (uint32_t)0; };

  obs_register_source(&helper);
  blog(LOG_INFO, u8"AcFunµØƒªºß÷˙ ÷“—º”‘ÿ");
  return true;
}

void obs_modle_unload() { blog(LOG_INFO, u8"AcFunµØƒªºß÷˙ ÷“—–∂‘ÿ"); }
