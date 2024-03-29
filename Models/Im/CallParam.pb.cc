// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CallParam.proto

#include "CallParam.pb.h"

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
PROTOBUF_CONSTEXPR CallParam::CallParam(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.extra_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.microon_)*/false
  , /*decltype(_impl_.speakeron_)*/false
  , /*decltype(_impl_.cameraon_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CallParamDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CallParamDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CallParamDefaultTypeInternal() {}
  union {
    CallParam _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CallParamDefaultTypeInternal _CallParam_default_instance_;
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CallParam_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CallParam_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CallParam_2eproto = nullptr;

const uint32_t TableStruct_CallParam_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::CallParam, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::CallParam, _impl_.microon_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::CallParam, _impl_.speakeron_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::CallParam, _impl_.cameraon_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::CallParam, _impl_.extra_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Voice::Call::CallParam)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Voice::Call::_CallParam_default_instance_._instance,
};

const char descriptor_table_protodef_CallParam_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017CallParam.proto\022\036AcFunDanmu.Im.Cloud.V"
  "oice.Call\"P\n\tCallParam\022\017\n\007microOn\030\001 \001(\010\022"
  "\021\n\tspeakerOn\030\002 \001(\010\022\020\n\010cameraOn\030\003 \001(\010\022\r\n\005"
  "extra\030\004 \001(\014b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_CallParam_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CallParam_2eproto = {
    false, false, 139, descriptor_table_protodef_CallParam_2eproto,
    "CallParam.proto",
    &descriptor_table_CallParam_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_CallParam_2eproto::offsets,
    file_level_metadata_CallParam_2eproto, file_level_enum_descriptors_CallParam_2eproto,
    file_level_service_descriptors_CallParam_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CallParam_2eproto_getter() {
  return &descriptor_table_CallParam_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CallParam_2eproto(&descriptor_table_CallParam_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {

// ===================================================================

class CallParam::_Internal {
 public:
};

CallParam::CallParam(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
}
CallParam::CallParam(const CallParam& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CallParam* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.extra_){}
    , decltype(_impl_.microon_){}
    , decltype(_impl_.speakeron_){}
    , decltype(_impl_.cameraon_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.extra_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extra_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_extra().empty()) {
    _this->_impl_.extra_.Set(from._internal_extra(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.microon_, &from._impl_.microon_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.cameraon_) -
    reinterpret_cast<char*>(&_impl_.microon_)) + sizeof(_impl_.cameraon_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
}

inline void CallParam::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.extra_){}
    , decltype(_impl_.microon_){false}
    , decltype(_impl_.speakeron_){false}
    , decltype(_impl_.cameraon_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.extra_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extra_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CallParam::~CallParam() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CallParam::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.extra_.Destroy();
}

void CallParam::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CallParam::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.extra_.ClearToEmpty();
  ::memset(&_impl_.microon_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.cameraon_) -
      reinterpret_cast<char*>(&_impl_.microon_)) + sizeof(_impl_.cameraon_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CallParam::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool microOn = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.microon_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool speakerOn = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.speakeron_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool cameraOn = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.cameraon_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes extra = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_extra();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
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

uint8_t* CallParam::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool microOn = 1;
  if (this->_internal_microon() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_microon(), target);
  }

  // bool speakerOn = 2;
  if (this->_internal_speakeron() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_speakeron(), target);
  }

  // bool cameraOn = 3;
  if (this->_internal_cameraon() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_cameraon(), target);
  }

  // bytes extra = 4;
  if (!this->_internal_extra().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_extra(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
  return target;
}

size_t CallParam::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes extra = 4;
  if (!this->_internal_extra().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_extra());
  }

  // bool microOn = 1;
  if (this->_internal_microon() != 0) {
    total_size += 1 + 1;
  }

  // bool speakerOn = 2;
  if (this->_internal_speakeron() != 0) {
    total_size += 1 + 1;
  }

  // bool cameraOn = 3;
  if (this->_internal_cameraon() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CallParam::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CallParam::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CallParam::GetClassData() const { return &_class_data_; }


void CallParam::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CallParam*>(&to_msg);
  auto& from = static_cast<const CallParam&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_extra().empty()) {
    _this->_internal_set_extra(from._internal_extra());
  }
  if (from._internal_microon() != 0) {
    _this->_internal_set_microon(from._internal_microon());
  }
  if (from._internal_speakeron() != 0) {
    _this->_internal_set_speakeron(from._internal_speakeron());
  }
  if (from._internal_cameraon() != 0) {
    _this->_internal_set_cameraon(from._internal_cameraon());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CallParam::CopyFrom(const CallParam& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Voice.Call.CallParam)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CallParam::IsInitialized() const {
  return true;
}

void CallParam::InternalSwap(CallParam* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.extra_, lhs_arena,
      &other->_impl_.extra_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CallParam, _impl_.cameraon_)
      + sizeof(CallParam::_impl_.cameraon_)
      - PROTOBUF_FIELD_OFFSET(CallParam, _impl_.microon_)>(
          reinterpret_cast<char*>(&_impl_.microon_),
          reinterpret_cast<char*>(&other->_impl_.microon_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CallParam::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CallParam_2eproto_getter, &descriptor_table_CallParam_2eproto_once,
      file_level_metadata_CallParam_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Voice::Call::CallParam*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Voice::Call::CallParam >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Voice::Call::CallParam >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
