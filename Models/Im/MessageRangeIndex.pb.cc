// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRangeIndex.proto

#include "MessageRangeIndex.pb.h"

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
PROTOBUF_CONSTEXPR MessageRangeIndex::MessageRangeIndex(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.daytime_)*/int64_t{0}
  , /*decltype(_impl_.seqidmin_)*/int64_t{0}
  , /*decltype(_impl_.seqidmax_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MessageRangeIndexDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageRangeIndexDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageRangeIndexDefaultTypeInternal() {}
  union {
    MessageRangeIndex _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageRangeIndexDefaultTypeInternal _MessageRangeIndex_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MessageRangeIndex_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MessageRangeIndex_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageRangeIndex_2eproto = nullptr;

const uint32_t TableStruct_MessageRangeIndex_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageRangeIndex, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageRangeIndex, _impl_.daytime_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageRangeIndex, _impl_.seqidmin_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageRangeIndex, _impl_.seqidmax_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::MessageRangeIndex)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_MessageRangeIndex_default_instance_._instance,
};

const char descriptor_table_protodef_MessageRangeIndex_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027MessageRangeIndex.proto\022\025AcFunDanmu.Im"
  ".Message\"H\n\021MessageRangeIndex\022\017\n\007dayTime"
  "\030\001 \001(\003\022\020\n\010seqIdMin\030\002 \001(\003\022\020\n\010seqIdMax\030\003 \001"
  "(\003b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_MessageRangeIndex_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageRangeIndex_2eproto = {
    false, false, 130, descriptor_table_protodef_MessageRangeIndex_2eproto,
    "MessageRangeIndex.proto",
    &descriptor_table_MessageRangeIndex_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_MessageRangeIndex_2eproto::offsets,
    file_level_metadata_MessageRangeIndex_2eproto, file_level_enum_descriptors_MessageRangeIndex_2eproto,
    file_level_service_descriptors_MessageRangeIndex_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageRangeIndex_2eproto_getter() {
  return &descriptor_table_MessageRangeIndex_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageRangeIndex_2eproto(&descriptor_table_MessageRangeIndex_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageRangeIndex::_Internal {
 public:
};

MessageRangeIndex::MessageRangeIndex(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.MessageRangeIndex)
}
MessageRangeIndex::MessageRangeIndex(const MessageRangeIndex& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageRangeIndex* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.daytime_){}
    , decltype(_impl_.seqidmin_){}
    , decltype(_impl_.seqidmax_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.daytime_, &from._impl_.daytime_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.seqidmax_) -
    reinterpret_cast<char*>(&_impl_.daytime_)) + sizeof(_impl_.seqidmax_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.MessageRangeIndex)
}

inline void MessageRangeIndex::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.daytime_){int64_t{0}}
    , decltype(_impl_.seqidmin_){int64_t{0}}
    , decltype(_impl_.seqidmax_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MessageRangeIndex::~MessageRangeIndex() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.MessageRangeIndex)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageRangeIndex::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MessageRangeIndex::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageRangeIndex::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.MessageRangeIndex)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.daytime_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.seqidmax_) -
      reinterpret_cast<char*>(&_impl_.daytime_)) + sizeof(_impl_.seqidmax_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageRangeIndex::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 dayTime = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.daytime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 seqIdMin = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.seqidmin_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 seqIdMax = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.seqidmax_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* MessageRangeIndex::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.MessageRangeIndex)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 dayTime = 1;
  if (this->_internal_daytime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_daytime(), target);
  }

  // int64 seqIdMin = 2;
  if (this->_internal_seqidmin() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_seqidmin(), target);
  }

  // int64 seqIdMax = 3;
  if (this->_internal_seqidmax() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_seqidmax(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.MessageRangeIndex)
  return target;
}

size_t MessageRangeIndex::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.MessageRangeIndex)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 dayTime = 1;
  if (this->_internal_daytime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_daytime());
  }

  // int64 seqIdMin = 2;
  if (this->_internal_seqidmin() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_seqidmin());
  }

  // int64 seqIdMax = 3;
  if (this->_internal_seqidmax() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_seqidmax());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageRangeIndex::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageRangeIndex::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageRangeIndex::GetClassData() const { return &_class_data_; }


void MessageRangeIndex::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageRangeIndex*>(&to_msg);
  auto& from = static_cast<const MessageRangeIndex&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.MessageRangeIndex)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_daytime() != 0) {
    _this->_internal_set_daytime(from._internal_daytime());
  }
  if (from._internal_seqidmin() != 0) {
    _this->_internal_set_seqidmin(from._internal_seqidmin());
  }
  if (from._internal_seqidmax() != 0) {
    _this->_internal_set_seqidmax(from._internal_seqidmax());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageRangeIndex::CopyFrom(const MessageRangeIndex& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.MessageRangeIndex)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageRangeIndex::IsInitialized() const {
  return true;
}

void MessageRangeIndex::InternalSwap(MessageRangeIndex* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MessageRangeIndex, _impl_.seqidmax_)
      + sizeof(MessageRangeIndex::_impl_.seqidmax_)
      - PROTOBUF_FIELD_OFFSET(MessageRangeIndex, _impl_.daytime_)>(
          reinterpret_cast<char*>(&_impl_.daytime_),
          reinterpret_cast<char*>(&other->_impl_.daytime_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageRangeIndex::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MessageRangeIndex_2eproto_getter, &descriptor_table_MessageRangeIndex_2eproto_once,
      file_level_metadata_MessageRangeIndex_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::MessageRangeIndex*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::MessageRangeIndex >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::MessageRangeIndex >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
