// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CsAckErrorCode.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CsAckErrorCode_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CsAckErrorCode_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_CsAckErrorCode_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CsAckErrorCode_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CsAckErrorCode_2eproto;
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum CsAckErrorCode : int {
  SUCCESS_CS_ACK = 0,
  LIVE_CLOSED = 1,
  TICKET_ILLEGAL = 2,
  ATTACH_ILLEGAL = 3,
  USER_NOT_IN_ROOM = 4,
  SERVER_ERROR = 5,
  REQUEST_PARAM_INVALID = 6,
  ROOM_NOT_EXIST_IN_STATE_MANAGER = 7,
  NEW_LIVE_OPENED = 8,
  CsAckErrorCode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  CsAckErrorCode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool CsAckErrorCode_IsValid(int value);
constexpr CsAckErrorCode CsAckErrorCode_MIN = SUCCESS_CS_ACK;
constexpr CsAckErrorCode CsAckErrorCode_MAX = NEW_LIVE_OPENED;
constexpr int CsAckErrorCode_ARRAYSIZE = CsAckErrorCode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CsAckErrorCode_descriptor();
template<typename T>
inline const std::string& CsAckErrorCode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CsAckErrorCode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CsAckErrorCode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CsAckErrorCode_descriptor(), enum_t_value);
}
inline bool CsAckErrorCode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CsAckErrorCode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CsAckErrorCode>(
    CsAckErrorCode_descriptor(), name, value);
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

template <> struct is_proto_enum< ::AcFunDanmu::CsAckErrorCode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::CsAckErrorCode>() {
  return ::AcFunDanmu::CsAckErrorCode_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CsAckErrorCode_2eproto
