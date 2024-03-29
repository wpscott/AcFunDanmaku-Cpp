// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveDownstreamPayloadErrorCode.proto

#include "ZtLiveDownstreamPayloadErrorCode.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace AcFunDanmu {
}  // namespace AcFunDanmu
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_ZtLiveDownstreamPayloadErrorCode_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ZtLiveDownstreamPayloadErrorCode_2eproto = nullptr;
const uint32_t TableStruct_ZtLiveDownstreamPayloadErrorCode_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_ZtLiveDownstreamPayloadErrorCode_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&ZtLiveDownstreamPayloadErrorCode.proto"
  "\022\nAcFunDanmu*\227\001\n ZtLiveDownstreamPayload"
  "ErrorCode\022\036\n\032SUCCESS_DOWNSTREAM_PAYLOAD\020"
  "\000\022\030\n\022CS_CMD_PARSE_ERROR\020\241\215\006\022\034\n\026CS_CMD_CM"
  "D_NOT_SUPPORT\020\242\215\006\022\033\n\025CS_CMD_TICKET_ILLEG"
  "AL\020\243\215\006b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_ZtLiveDownstreamPayloadErrorCode_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ZtLiveDownstreamPayloadErrorCode_2eproto = {
    false, false, 214, descriptor_table_protodef_ZtLiveDownstreamPayloadErrorCode_2eproto,
    "ZtLiveDownstreamPayloadErrorCode.proto",
    &descriptor_table_ZtLiveDownstreamPayloadErrorCode_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_ZtLiveDownstreamPayloadErrorCode_2eproto::offsets,
    nullptr, file_level_enum_descriptors_ZtLiveDownstreamPayloadErrorCode_2eproto,
    file_level_service_descriptors_ZtLiveDownstreamPayloadErrorCode_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ZtLiveDownstreamPayloadErrorCode_2eproto_getter() {
  return &descriptor_table_ZtLiveDownstreamPayloadErrorCode_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ZtLiveDownstreamPayloadErrorCode_2eproto(&descriptor_table_ZtLiveDownstreamPayloadErrorCode_2eproto);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ZtLiveDownstreamPayloadErrorCode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ZtLiveDownstreamPayloadErrorCode_2eproto);
  return file_level_enum_descriptors_ZtLiveDownstreamPayloadErrorCode_2eproto[0];
}
bool ZtLiveDownstreamPayloadErrorCode_IsValid(int value) {
  switch (value) {
    case 0:
    case 100001:
    case 100002:
    case 100003:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
