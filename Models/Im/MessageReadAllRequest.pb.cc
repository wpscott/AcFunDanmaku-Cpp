// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageReadAllRequest.proto

#include "MessageReadAllRequest.pb.h"

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
PROTOBUF_CONSTEXPR MessageReadAllRequest::MessageReadAllRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.sessioncategoryid_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MessageReadAllRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageReadAllRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageReadAllRequestDefaultTypeInternal() {}
  union {
    MessageReadAllRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageReadAllRequestDefaultTypeInternal _MessageReadAllRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MessageReadAllRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MessageReadAllRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageReadAllRequest_2eproto = nullptr;

const uint32_t TableStruct_MessageReadAllRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReadAllRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReadAllRequest, _impl_.sessioncategoryid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::MessageReadAllRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_MessageReadAllRequest_default_instance_._instance,
};

const char descriptor_table_protodef_MessageReadAllRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033MessageReadAllRequest.proto\022\025AcFunDanm"
  "u.Im.Message\"2\n\025MessageReadAllRequest\022\031\n"
  "\021sessionCategoryId\030\001 \001(\005b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_MessageReadAllRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageReadAllRequest_2eproto = {
    false, false, 112, descriptor_table_protodef_MessageReadAllRequest_2eproto,
    "MessageReadAllRequest.proto",
    &descriptor_table_MessageReadAllRequest_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_MessageReadAllRequest_2eproto::offsets,
    file_level_metadata_MessageReadAllRequest_2eproto, file_level_enum_descriptors_MessageReadAllRequest_2eproto,
    file_level_service_descriptors_MessageReadAllRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageReadAllRequest_2eproto_getter() {
  return &descriptor_table_MessageReadAllRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageReadAllRequest_2eproto(&descriptor_table_MessageReadAllRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageReadAllRequest::_Internal {
 public:
};

MessageReadAllRequest::MessageReadAllRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.MessageReadAllRequest)
}
MessageReadAllRequest::MessageReadAllRequest(const MessageReadAllRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageReadAllRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.sessioncategoryid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.sessioncategoryid_ = from._impl_.sessioncategoryid_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.MessageReadAllRequest)
}

inline void MessageReadAllRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.sessioncategoryid_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MessageReadAllRequest::~MessageReadAllRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.MessageReadAllRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageReadAllRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MessageReadAllRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageReadAllRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.MessageReadAllRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.sessioncategoryid_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageReadAllRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 sessionCategoryId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.sessioncategoryid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* MessageReadAllRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.MessageReadAllRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 sessionCategoryId = 1;
  if (this->_internal_sessioncategoryid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_sessioncategoryid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.MessageReadAllRequest)
  return target;
}

size_t MessageReadAllRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.MessageReadAllRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 sessionCategoryId = 1;
  if (this->_internal_sessioncategoryid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_sessioncategoryid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageReadAllRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageReadAllRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageReadAllRequest::GetClassData() const { return &_class_data_; }


void MessageReadAllRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageReadAllRequest*>(&to_msg);
  auto& from = static_cast<const MessageReadAllRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.MessageReadAllRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_sessioncategoryid() != 0) {
    _this->_internal_set_sessioncategoryid(from._internal_sessioncategoryid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageReadAllRequest::CopyFrom(const MessageReadAllRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.MessageReadAllRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageReadAllRequest::IsInitialized() const {
  return true;
}

void MessageReadAllRequest::InternalSwap(MessageReadAllRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.sessioncategoryid_, other->_impl_.sessioncategoryid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageReadAllRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MessageReadAllRequest_2eproto_getter, &descriptor_table_MessageReadAllRequest_2eproto_once,
      file_level_metadata_MessageReadAllRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::MessageReadAllRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::MessageReadAllRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::MessageReadAllRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
