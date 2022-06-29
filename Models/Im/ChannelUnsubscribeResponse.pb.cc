// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChannelUnsubscribeResponse.proto

#include "ChannelUnsubscribeResponse.pb.h"

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
namespace Channel {
PROTOBUF_CONSTEXPR ChannelUnsubscribeResponse::ChannelUnsubscribeResponse(
    ::_pbi::ConstantInitialized) {}
struct ChannelUnsubscribeResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ChannelUnsubscribeResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ChannelUnsubscribeResponseDefaultTypeInternal() {}
  union {
    ChannelUnsubscribeResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ChannelUnsubscribeResponseDefaultTypeInternal _ChannelUnsubscribeResponse_default_instance_;
}  // namespace Channel
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_ChannelUnsubscribeResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ChannelUnsubscribeResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ChannelUnsubscribeResponse_2eproto = nullptr;

const uint32_t TableStruct_ChannelUnsubscribeResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Channel::ChannelUnsubscribeResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Channel::ChannelUnsubscribeResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Channel::_ChannelUnsubscribeResponse_default_instance_._instance,
};

const char descriptor_table_protodef_ChannelUnsubscribeResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n ChannelUnsubscribeResponse.proto\022\033AcFu"
  "nDanmu.Im.Cloud.Channel\"\034\n\032ChannelUnsubs"
  "cribeResponseb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_ChannelUnsubscribeResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ChannelUnsubscribeResponse_2eproto = {
    false, false, 101, descriptor_table_protodef_ChannelUnsubscribeResponse_2eproto,
    "ChannelUnsubscribeResponse.proto",
    &descriptor_table_ChannelUnsubscribeResponse_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_ChannelUnsubscribeResponse_2eproto::offsets,
    file_level_metadata_ChannelUnsubscribeResponse_2eproto, file_level_enum_descriptors_ChannelUnsubscribeResponse_2eproto,
    file_level_service_descriptors_ChannelUnsubscribeResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ChannelUnsubscribeResponse_2eproto_getter() {
  return &descriptor_table_ChannelUnsubscribeResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ChannelUnsubscribeResponse_2eproto(&descriptor_table_ChannelUnsubscribeResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Channel {

// ===================================================================

class ChannelUnsubscribeResponse::_Internal {
 public:
};

ChannelUnsubscribeResponse::ChannelUnsubscribeResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Channel.ChannelUnsubscribeResponse)
}
ChannelUnsubscribeResponse::ChannelUnsubscribeResponse(const ChannelUnsubscribeResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  ChannelUnsubscribeResponse* const _this = this; (void)_this;
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Channel.ChannelUnsubscribeResponse)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ChannelUnsubscribeResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ChannelUnsubscribeResponse::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata ChannelUnsubscribeResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ChannelUnsubscribeResponse_2eproto_getter, &descriptor_table_ChannelUnsubscribeResponse_2eproto_once,
      file_level_metadata_ChannelUnsubscribeResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Channel
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Channel::ChannelUnsubscribeResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Channel::ChannelUnsubscribeResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Channel::ChannelUnsubscribeResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
