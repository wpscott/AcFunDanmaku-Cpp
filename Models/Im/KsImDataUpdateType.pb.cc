// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KsImDataUpdateType.proto

#include "KsImDataUpdateType.pb.h"

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
namespace Data {
namespace Update {
}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_KsImDataUpdateType_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_KsImDataUpdateType_2eproto = nullptr;
const uint32_t TableStruct_KsImDataUpdateType_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_KsImDataUpdateType_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030KsImDataUpdateType.proto\022\037AcFunDanmu.I"
  "m.Cloud.Data.Update*\222\002\n\022KsImDataUpdateTy"
  "pe\022\013\n\007INVALID\020\000\022\025\n\021GROUP_INFO_UPDATE\020\001\022\034"
  "\n\030GROUP_MEMBER_LIST_UPDATE\020\002\022\021\n\rYOU_BE_K"
  "ICKED\020\003\022\026\n\022MESSAGE_READ_EVENT\020\004\022\031\n\025MESSA"
  "GE_RECEIPT_EVENT\020\005\022\022\n\016SESSION_UPDATE\020\006\022\031"
  "\n\025SESSION_FOLDER_UPDATE\020\007\022\030\n\024FAVORITE_LI"
  "ST_UPDATE\020\010\022\026\n\022SESSION_TAG_UPDATE\020\t\022\023\n\017M"
  "ESSAGE_CLICKED\020\nb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_KsImDataUpdateType_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_KsImDataUpdateType_2eproto = {
    false, false, 344, descriptor_table_protodef_KsImDataUpdateType_2eproto,
    "KsImDataUpdateType.proto",
    &descriptor_table_KsImDataUpdateType_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_KsImDataUpdateType_2eproto::offsets,
    nullptr, file_level_enum_descriptors_KsImDataUpdateType_2eproto,
    file_level_service_descriptors_KsImDataUpdateType_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_KsImDataUpdateType_2eproto_getter() {
  return &descriptor_table_KsImDataUpdateType_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_KsImDataUpdateType_2eproto(&descriptor_table_KsImDataUpdateType_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* KsImDataUpdateType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_KsImDataUpdateType_2eproto);
  return file_level_enum_descriptors_KsImDataUpdateType_2eproto[0];
}
bool KsImDataUpdateType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
