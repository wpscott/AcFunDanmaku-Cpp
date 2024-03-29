// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SystemSessionFolder.proto

#include "SystemSessionFolder.pb.h"

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
namespace SessionFolder {
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_SystemSessionFolder_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SystemSessionFolder_2eproto = nullptr;
const uint32_t TableStruct_SystemSessionFolder_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_SystemSessionFolder_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031SystemSessionFolder.proto\022!AcFunDanmu."
  "Im.Cloud.SessionFolder*\236\001\n\023SystemSession"
  "Folder\022\013\n\007UNKNOWN\020\000\022\026\n\022FOLDER_DISPATCHIN"
  "G\020\001\022\022\n\016FOLDER_SERVING\020\002\022\020\n\014FOLDER_REPLY\020"
  "\003\022\025\n\021FOLDER_AUTO_REPLY\020\004\022\022\n\016FOLDER_TIMEO"
  "UT\020\005\022\021\n\rFOLDER_CLOSED\020\006b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_SystemSessionFolder_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SystemSessionFolder_2eproto = {
    false, false, 231, descriptor_table_protodef_SystemSessionFolder_2eproto,
    "SystemSessionFolder.proto",
    &descriptor_table_SystemSessionFolder_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_SystemSessionFolder_2eproto::offsets,
    nullptr, file_level_enum_descriptors_SystemSessionFolder_2eproto,
    file_level_service_descriptors_SystemSessionFolder_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SystemSessionFolder_2eproto_getter() {
  return &descriptor_table_SystemSessionFolder_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SystemSessionFolder_2eproto(&descriptor_table_SystemSessionFolder_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* SystemSessionFolder_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_SystemSessionFolder_2eproto);
  return file_level_enum_descriptors_SystemSessionFolder_2eproto[0];
}
bool SystemSessionFolder_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
