// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AccountType.proto

#include "AccountType.pb.h"

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
namespace Message {
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_AccountType_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_AccountType_2eproto = nullptr;
const uint32_t TableStruct_AccountType_2eproto::offsets[1] = {};
static constexpr ::_pbi::MigrationSchema* schemas = nullptr;
static constexpr ::_pb::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_AccountType_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021AccountType.proto\022\025AcFunDanmu.Im.Messa"
  "ge*A\n\013AccountType\022\n\n\006UNKNOW\020\000\022\014\n\010OFFICIA"
  "L\020\001\022\n\n\006NORMAL\020\002\022\014\n\010STRANGER\020\003b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_AccountType_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_AccountType_2eproto = {
    false, false, 117, descriptor_table_protodef_AccountType_2eproto,
    "AccountType.proto",
    &descriptor_table_AccountType_2eproto_once, nullptr, 0, 0,
    schemas, file_default_instances, TableStruct_AccountType_2eproto::offsets,
    nullptr, file_level_enum_descriptors_AccountType_2eproto,
    file_level_service_descriptors_AccountType_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_AccountType_2eproto_getter() {
  return &descriptor_table_AccountType_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_AccountType_2eproto(&descriptor_table_AccountType_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AccountType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_AccountType_2eproto);
  return file_level_enum_descriptors_AccountType_2eproto[0];
}
bool AccountType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
