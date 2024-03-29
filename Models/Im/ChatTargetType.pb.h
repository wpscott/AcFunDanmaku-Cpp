// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChatTargetType.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ChatTargetType_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ChatTargetType_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ChatTargetType_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ChatTargetType_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChatTargetType_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

enum ChatTargetType : int {
  CTT_USER = 0,
  CTT_CHAT_ROOM = 2,
  CTT_MULTI_PLAYER_ROOM = 3,
  CTT_GROUP = 4,
  CTT_CHANNEL = 5,
  CTT_AGGREGATE = 6,
  CTT_B2C = 7,
  CTT_SUB_BIZ_AGGREGATE = 8,
  ChatTargetType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  ChatTargetType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool ChatTargetType_IsValid(int value);
constexpr ChatTargetType ChatTargetType_MIN = CTT_USER;
constexpr ChatTargetType ChatTargetType_MAX = CTT_SUB_BIZ_AGGREGATE;
constexpr int ChatTargetType_ARRAYSIZE = ChatTargetType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChatTargetType_descriptor();
template<typename T>
inline const std::string& ChatTargetType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ChatTargetType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ChatTargetType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ChatTargetType_descriptor(), enum_t_value);
}
inline bool ChatTargetType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ChatTargetType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ChatTargetType>(
    ChatTargetType_descriptor(), name, value);
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
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Message::ChatTargetType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Message::ChatTargetType>() {
  return ::AcFunDanmu::Im::Message::ChatTargetType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ChatTargetType_2eproto
