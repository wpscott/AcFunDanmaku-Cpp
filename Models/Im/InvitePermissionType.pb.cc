// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InvitePermissionType.proto

#include "InvitePermissionType.pb.h"

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
namespace Im {
namespace Cloud {
namespace Message {
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_InvitePermissionType_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_InvitePermissionType_2eproto = nullptr;
const uint32_t TableStruct_InvitePermissionType_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_InvitePermissionType_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032InvitePermissionType.proto\022\033AcFunDanmu"
  ".Im.Cloud.Message*X\n\024InvitePermissionTyp"
  "e\022\"\n\036UNKNOWN_INVITE_PERMISSION_TYPE\020\000\022\014\n"
  "\010EVERYONE\020\001\022\016\n\nONLY_ADMIN\020\002b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_InvitePermissionType_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_InvitePermissionType_2eproto = {
    false, false, 155, descriptor_table_protodef_InvitePermissionType_2eproto,
    "InvitePermissionType.proto",
    &descriptor_table_InvitePermissionType_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_InvitePermissionType_2eproto::offsets,
    nullptr, file_level_enum_descriptors_InvitePermissionType_2eproto,
    file_level_service_descriptors_InvitePermissionType_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_InvitePermissionType_2eproto_getter() {
  return &descriptor_table_InvitePermissionType_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_InvitePermissionType_2eproto(&descriptor_table_InvitePermissionType_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* InvitePermissionType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_InvitePermissionType_2eproto);
  return file_level_enum_descriptors_InvitePermissionType_2eproto[0];
}
bool InvitePermissionType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
