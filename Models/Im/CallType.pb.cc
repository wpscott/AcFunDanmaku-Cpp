// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CallType.proto

#include "CallType.pb.h"

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
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_CallType_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CallType_2eproto = nullptr;
const uint32_t TableStruct_CallType_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_CallType_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016CallType.proto\022\036AcFunDanmu.Im.Cloud.Vo"
  "ice.Call*0\n\010CallType\022\016\n\nCT_UNKNOWN\020\000\022\t\n\005"
  "VOICE\020\001\022\t\n\005VIDEO\020\002b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_CallType_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CallType_2eproto = {
    false, false, 106, descriptor_table_protodef_CallType_2eproto,
    "CallType.proto",
    &descriptor_table_CallType_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_CallType_2eproto::offsets,
    nullptr, file_level_enum_descriptors_CallType_2eproto,
    file_level_service_descriptors_CallType_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CallType_2eproto_getter() {
  return &descriptor_table_CallType_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CallType_2eproto(&descriptor_table_CallType_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CallType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CallType_2eproto);
  return file_level_enum_descriptors_CallType_2eproto[0];
}
bool CallType_IsValid(int value) {
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
