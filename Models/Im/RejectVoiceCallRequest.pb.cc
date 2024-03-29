// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RejectVoiceCallRequest.proto

#include "RejectVoiceCallRequest.pb.h"

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
PROTOBUF_CONSTEXPR RejectVoiceCallRequest::RejectVoiceCallRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.roomid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RejectVoiceCallRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RejectVoiceCallRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RejectVoiceCallRequestDefaultTypeInternal() {}
  union {
    RejectVoiceCallRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RejectVoiceCallRequestDefaultTypeInternal _RejectVoiceCallRequest_default_instance_;
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_RejectVoiceCallRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_RejectVoiceCallRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_RejectVoiceCallRequest_2eproto = nullptr;

const uint32_t TableStruct_RejectVoiceCallRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::RejectVoiceCallRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::RejectVoiceCallRequest, _impl_.roomid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Voice::Call::RejectVoiceCallRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Voice::Call::_RejectVoiceCallRequest_default_instance_._instance,
};

const char descriptor_table_protodef_RejectVoiceCallRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034RejectVoiceCallRequest.proto\022\036AcFunDan"
  "mu.Im.Cloud.Voice.Call\"(\n\026RejectVoiceCal"
  "lRequest\022\016\n\006roomId\030\001 \001(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_RejectVoiceCallRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_RejectVoiceCallRequest_2eproto = {
    false, false, 112, descriptor_table_protodef_RejectVoiceCallRequest_2eproto,
    "RejectVoiceCallRequest.proto",
    &descriptor_table_RejectVoiceCallRequest_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_RejectVoiceCallRequest_2eproto::offsets,
    file_level_metadata_RejectVoiceCallRequest_2eproto, file_level_enum_descriptors_RejectVoiceCallRequest_2eproto,
    file_level_service_descriptors_RejectVoiceCallRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_RejectVoiceCallRequest_2eproto_getter() {
  return &descriptor_table_RejectVoiceCallRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_RejectVoiceCallRequest_2eproto(&descriptor_table_RejectVoiceCallRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {

// ===================================================================

class RejectVoiceCallRequest::_Internal {
 public:
};

RejectVoiceCallRequest::RejectVoiceCallRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
}
RejectVoiceCallRequest::RejectVoiceCallRequest(const RejectVoiceCallRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  RejectVoiceCallRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.roomid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.roomid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.roomid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_roomid().empty()) {
    _this->_impl_.roomid_.Set(from._internal_roomid(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
}

inline void RejectVoiceCallRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.roomid_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.roomid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.roomid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

RejectVoiceCallRequest::~RejectVoiceCallRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RejectVoiceCallRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.roomid_.Destroy();
}

void RejectVoiceCallRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RejectVoiceCallRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.roomid_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RejectVoiceCallRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string roomId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_roomid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest.roomId"));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* RejectVoiceCallRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string roomId = 1;
  if (!this->_internal_roomid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_roomid().data(), static_cast<int>(this->_internal_roomid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest.roomId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_roomid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
  return target;
}

size_t RejectVoiceCallRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string roomId = 1;
  if (!this->_internal_roomid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_roomid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RejectVoiceCallRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RejectVoiceCallRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RejectVoiceCallRequest::GetClassData() const { return &_class_data_; }


void RejectVoiceCallRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<RejectVoiceCallRequest*>(&to_msg);
  auto& from = static_cast<const RejectVoiceCallRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_roomid().empty()) {
    _this->_internal_set_roomid(from._internal_roomid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RejectVoiceCallRequest::CopyFrom(const RejectVoiceCallRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Voice.Call.RejectVoiceCallRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RejectVoiceCallRequest::IsInitialized() const {
  return true;
}

void RejectVoiceCallRequest::InternalSwap(RejectVoiceCallRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.roomid_, lhs_arena,
      &other->_impl_.roomid_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata RejectVoiceCallRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_RejectVoiceCallRequest_2eproto_getter, &descriptor_table_RejectVoiceCallRequest_2eproto_once,
      file_level_metadata_RejectVoiceCallRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Voice::Call::RejectVoiceCallRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Voice::Call::RejectVoiceCallRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Voice::Call::RejectVoiceCallRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
