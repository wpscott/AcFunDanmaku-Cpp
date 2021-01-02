#ifndef ACFUN_BODY_DATA
#define ACFUN_BODY_DATA

#include <box2d/box2d.h>
#include <obs-module.h>

#include <ctime>

namespace AcFun {
namespace BodyData {
constexpr auto MET2PIX = 80.f;  // conversion between Box2D and OBS
constexpr auto RAD2DEG = 180.f / b2_pi;

enum class body_type {
  edge,
  text,
  gift,
};
struct body_data {
  body_data(const body_type& type, const float& width, const float& height,
            gs_texture_t* texture)
      : type(type),
        width(width),
        height(height),
        texture(texture),
        createTime(std::time(nullptr)) {}
  body_data(const body_type& type, const float& size, gs_texture_t* texture)
      : type(type),
        width(size),
        height(size),
        texture(texture),
        createTime(std::time(nullptr)) {}
  body_data(const body_type& type)
      : type(type), width(0), height(0), texture(nullptr), createTime(0) {}
  ~body_data() {
    if (texture && type == body_type::text) {
      gs_texture_destroy(texture);
    }
    texture = nullptr;
  }
  body_type type;
  std::time_t createTime;
  float width = 0;
  float height = 0;
  gs_texture_t* texture;
};
}  // namespace BodyData
}  // namespace AcFun
#endif  // ACFUN_BODY_DATA