// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LiveFeatureState.proto

#include "LiveFeatureState.pb.h"

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
PROTOBUF_CONSTEXPR LiveFeatureState::LiveFeatureState(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.type_)*/0
  , /*decltype(_impl_.state_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct LiveFeatureStateDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LiveFeatureStateDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LiveFeatureStateDefaultTypeInternal() {}
  union {
    LiveFeatureState _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LiveFeatureStateDefaultTypeInternal _LiveFeatureState_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_LiveFeatureState_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_LiveFeatureState_2eproto[2];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_LiveFeatureState_2eproto = nullptr;

const uint32_t TableStruct_LiveFeatureState_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::LiveFeatureState, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::LiveFeatureState, _impl_.type_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::LiveFeatureState, _impl_.state_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::LiveFeatureState)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_LiveFeatureState_default_instance_._instance,
};

const char descriptor_table_protodef_LiveFeatureState_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026LiveFeatureState.proto\022\nAcFunDanmu\"\235\002\n"
  "\020LiveFeatureState\0226\n\004type\030\001 \001(\0162(.AcFunD"
  "anmu.LiveFeatureState.FeatureType\0228\n\005sta"
  "te\030\002 \001(\0162).AcFunDanmu.LiveFeatureState.F"
  "eatureState\"9\n\013FeatureType\022\023\n\017FEATURE_UN"
  "KNOWN\020\000\022\025\n\021LANDSCAPE_COMMENT\020\001\"\\\n\014Featur"
  "eState\022\031\n\025FEATURE_STATE_UNKNOWN\020\000\022\027\n\023FEA"
  "TURE_STATE_OPEND\020\001\022\030\n\024FEATURE_STATE_CLOS"
  "ED\020\002b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_LiveFeatureState_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_LiveFeatureState_2eproto = {
    false, false, 332, descriptor_table_protodef_LiveFeatureState_2eproto,
    "LiveFeatureState.proto",
    &descriptor_table_LiveFeatureState_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_LiveFeatureState_2eproto::offsets,
    file_level_metadata_LiveFeatureState_2eproto, file_level_enum_descriptors_LiveFeatureState_2eproto,
    file_level_service_descriptors_LiveFeatureState_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_LiveFeatureState_2eproto_getter() {
  return &descriptor_table_LiveFeatureState_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_LiveFeatureState_2eproto(&descriptor_table_LiveFeatureState_2eproto);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LiveFeatureState_FeatureType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_LiveFeatureState_2eproto);
  return file_level_enum_descriptors_LiveFeatureState_2eproto[0];
}
bool LiveFeatureState_FeatureType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr LiveFeatureState_FeatureType LiveFeatureState::FEATURE_UNKNOWN;
constexpr LiveFeatureState_FeatureType LiveFeatureState::LANDSCAPE_COMMENT;
constexpr LiveFeatureState_FeatureType LiveFeatureState::FeatureType_MIN;
constexpr LiveFeatureState_FeatureType LiveFeatureState::FeatureType_MAX;
constexpr int LiveFeatureState::FeatureType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LiveFeatureState_FeatureState_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_LiveFeatureState_2eproto);
  return file_level_enum_descriptors_LiveFeatureState_2eproto[1];
}
bool LiveFeatureState_FeatureState_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr LiveFeatureState_FeatureState LiveFeatureState::FEATURE_STATE_UNKNOWN;
constexpr LiveFeatureState_FeatureState LiveFeatureState::FEATURE_STATE_OPEND;
constexpr LiveFeatureState_FeatureState LiveFeatureState::FEATURE_STATE_CLOSED;
constexpr LiveFeatureState_FeatureState LiveFeatureState::FeatureState_MIN;
constexpr LiveFeatureState_FeatureState LiveFeatureState::FeatureState_MAX;
constexpr int LiveFeatureState::FeatureState_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class LiveFeatureState::_Internal {
 public:
};

LiveFeatureState::LiveFeatureState(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.LiveFeatureState)
}
LiveFeatureState::LiveFeatureState(const LiveFeatureState& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  LiveFeatureState* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.type_){}
    , decltype(_impl_.state_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.type_, &from._impl_.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.state_) -
    reinterpret_cast<char*>(&_impl_.type_)) + sizeof(_impl_.state_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.LiveFeatureState)
}

inline void LiveFeatureState::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.type_){0}
    , decltype(_impl_.state_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

LiveFeatureState::~LiveFeatureState() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.LiveFeatureState)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void LiveFeatureState::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void LiveFeatureState::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void LiveFeatureState::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.LiveFeatureState)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.state_) -
      reinterpret_cast<char*>(&_impl_.type_)) + sizeof(_impl_.state_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* LiveFeatureState::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.LiveFeatureState.FeatureType type = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::AcFunDanmu::LiveFeatureState_FeatureType>(val));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.LiveFeatureState.FeatureState state = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_state(static_cast<::AcFunDanmu::LiveFeatureState_FeatureState>(val));
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

uint8_t* LiveFeatureState::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.LiveFeatureState)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.LiveFeatureState.FeatureType type = 1;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_type(), target);
  }

  // .AcFunDanmu.LiveFeatureState.FeatureState state = 2;
  if (this->_internal_state() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_state(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.LiveFeatureState)
  return target;
}

size_t LiveFeatureState::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.LiveFeatureState)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.LiveFeatureState.FeatureType type = 1;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  // .AcFunDanmu.LiveFeatureState.FeatureState state = 2;
  if (this->_internal_state() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_state());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData LiveFeatureState::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    LiveFeatureState::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*LiveFeatureState::GetClassData() const { return &_class_data_; }


void LiveFeatureState::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<LiveFeatureState*>(&to_msg);
  auto& from = static_cast<const LiveFeatureState&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.LiveFeatureState)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  if (from._internal_state() != 0) {
    _this->_internal_set_state(from._internal_state());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void LiveFeatureState::CopyFrom(const LiveFeatureState& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.LiveFeatureState)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool LiveFeatureState::IsInitialized() const {
  return true;
}

void LiveFeatureState::InternalSwap(LiveFeatureState* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(LiveFeatureState, _impl_.state_)
      + sizeof(LiveFeatureState::_impl_.state_)
      - PROTOBUF_FIELD_OFFSET(LiveFeatureState, _impl_.type_)>(
          reinterpret_cast<char*>(&_impl_.type_),
          reinterpret_cast<char*>(&other->_impl_.type_));
}

::PROTOBUF_NAMESPACE_ID::Metadata LiveFeatureState::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_LiveFeatureState_2eproto_getter, &descriptor_table_LiveFeatureState_2eproto_once,
      file_level_metadata_LiveFeatureState_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::LiveFeatureState*
Arena::CreateMaybeMessage< ::AcFunDanmu::LiveFeatureState >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::LiveFeatureState >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
