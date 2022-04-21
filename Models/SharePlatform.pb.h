// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SharePlatform.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SharePlatform_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SharePlatform_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SharePlatform_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SharePlatform_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SharePlatform_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum SharePlatform : int {
  kSharePlatformInvalid = 0,
  kSharePlatformWechat = 1,
  kSharePlatformWechatMoments = 2,
  kSharePlatformQQ = 3,
  kSharePlatformQzone = 4,
  kSharePlatformWeibo = 5,
  kSharePlatformKuaishou = 6,
  kSharePlatformFacebook = 7,
  kSharePlatformTwitter = 8,
  kSharePlatformGoogle = 9,
  kSharePlatformKakao = 10,
  kSharePlatformZalo = 11,
  SharePlatform_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  SharePlatform_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool SharePlatform_IsValid(int value);
constexpr SharePlatform SharePlatform_MIN = kSharePlatformInvalid;
constexpr SharePlatform SharePlatform_MAX = kSharePlatformZalo;
constexpr int SharePlatform_ARRAYSIZE = SharePlatform_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SharePlatform_descriptor();
template<typename T>
inline const std::string& SharePlatform_Name(T enum_t_value) {
  static_assert(::std::is_same<T, SharePlatform>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function SharePlatform_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    SharePlatform_descriptor(), enum_t_value);
}
inline bool SharePlatform_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, SharePlatform* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<SharePlatform>(
    SharePlatform_descriptor(), name, value);
}
// ===================================================================


// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::SharePlatform> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::SharePlatform>() {
  return ::AcFunDanmu::SharePlatform_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SharePlatform_2eproto
