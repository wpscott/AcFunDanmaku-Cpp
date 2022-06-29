// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CloseVoiceCallResponse.proto

#include "CloseVoiceCallResponse.pb.h"

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
PROTOBUF_CONSTEXPR CloseVoiceCallResponse::CloseVoiceCallResponse(
    ::_pbi::ConstantInitialized) {}
struct CloseVoiceCallResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CloseVoiceCallResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CloseVoiceCallResponseDefaultTypeInternal() {}
  union {
    CloseVoiceCallResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CloseVoiceCallResponseDefaultTypeInternal _CloseVoiceCallResponse_default_instance_;
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CloseVoiceCallResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CloseVoiceCallResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CloseVoiceCallResponse_2eproto = nullptr;

const uint32_t TableStruct_CloseVoiceCallResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Voice::Call::_CloseVoiceCallResponse_default_instance_._instance,
};

const char descriptor_table_protodef_CloseVoiceCallResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034CloseVoiceCallResponse.proto\022\036AcFunDan"
  "mu.Im.Cloud.Voice.Call\"\030\n\026CloseVoiceCall"
  "Responseb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_CloseVoiceCallResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CloseVoiceCallResponse_2eproto = {
    false, false, 96, descriptor_table_protodef_CloseVoiceCallResponse_2eproto,
    "CloseVoiceCallResponse.proto",
    &descriptor_table_CloseVoiceCallResponse_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_CloseVoiceCallResponse_2eproto::offsets,
    file_level_metadata_CloseVoiceCallResponse_2eproto, file_level_enum_descriptors_CloseVoiceCallResponse_2eproto,
    file_level_service_descriptors_CloseVoiceCallResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CloseVoiceCallResponse_2eproto_getter() {
  return &descriptor_table_CloseVoiceCallResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CloseVoiceCallResponse_2eproto(&descriptor_table_CloseVoiceCallResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {

// ===================================================================

class CloseVoiceCallResponse::_Internal {
 public:
};

CloseVoiceCallResponse::CloseVoiceCallResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase(arena, is_message_owned) {
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallResponse)
}
CloseVoiceCallResponse::CloseVoiceCallResponse(const CloseVoiceCallResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase() {
  CloseVoiceCallResponse* const _this = this; (void)_this;
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallResponse)
}





const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CloseVoiceCallResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl,
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl,
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CloseVoiceCallResponse::GetClassData() const { return &_class_data_; }







::PROTOBUF_NAMESPACE_ID::Metadata CloseVoiceCallResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CloseVoiceCallResponse_2eproto_getter, &descriptor_table_CloseVoiceCallResponse_2eproto_once,
      file_level_metadata_CloseVoiceCallResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
