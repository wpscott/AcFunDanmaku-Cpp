// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InvitePermissionType.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_InvitePermissionType_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_InvitePermissionType_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_InvitePermissionType_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_InvitePermissionType_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_InvitePermissionType_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

enum InvitePermissionType : int {
  UNKNOWN_INVITE_PERMISSION_TYPE = 0,
  EVERYONE = 1,
  ONLY_ADMIN = 2,
  InvitePermissionType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  InvitePermissionType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool InvitePermissionType_IsValid(int value);
constexpr InvitePermissionType InvitePermissionType_MIN = UNKNOWN_INVITE_PERMISSION_TYPE;
constexpr InvitePermissionType InvitePermissionType_MAX = ONLY_ADMIN;
constexpr int InvitePermissionType_ARRAYSIZE = InvitePermissionType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* InvitePermissionType_descriptor();
template<typename T>
inline const std::string& InvitePermissionType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, InvitePermissionType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function InvitePermissionType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    InvitePermissionType_descriptor(), enum_t_value);
}
inline bool InvitePermissionType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, InvitePermissionType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<InvitePermissionType>(
    InvitePermissionType_descriptor(), name, value);
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

}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Cloud::Message::InvitePermissionType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Cloud::Message::InvitePermissionType>() {
  return ::AcFunDanmu::Im::Cloud::Message::InvitePermissionType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_InvitePermissionType_2eproto
