// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChatMode.proto

#include "ChatMode.pb.h"

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
namespace Voice {
namespace Call {
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_ChatMode_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ChatMode_2eproto = nullptr;
const uint32_t TableStruct_ChatMode_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_ChatMode_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016ChatMode.proto\022\036AcFunDanmu.Im.Cloud.Vo"
  "ice.Call*1\n\010ChatMode\022\016\n\nCM_UNKNOWN\020\000\022\010\n\004"
  "CHAT\020\001\022\013\n\007MEETING\020\002b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_ChatMode_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ChatMode_2eproto = {
    false, false, 107, descriptor_table_protodef_ChatMode_2eproto,
    "ChatMode.proto",
    &descriptor_table_ChatMode_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_ChatMode_2eproto::offsets,
    nullptr, file_level_enum_descriptors_ChatMode_2eproto,
    file_level_service_descriptors_ChatMode_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ChatMode_2eproto_getter() {
  return &descriptor_table_ChatMode_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ChatMode_2eproto(&descriptor_table_ChatMode_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ChatMode_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_ChatMode_2eproto);
  return file_level_enum_descriptors_ChatMode_2eproto[0];
}
bool ChatMode_IsValid(int value) {
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
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
