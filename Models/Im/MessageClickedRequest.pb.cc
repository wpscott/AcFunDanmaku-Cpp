// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageClickedRequest.proto

#include "MessageClickedRequest.pb.h"

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
PROTOBUF_CONSTEXPR MessageClickedRequest::MessageClickedRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.target_)*/nullptr
  , /*decltype(_impl_.seqid_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MessageClickedRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageClickedRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageClickedRequestDefaultTypeInternal() {}
  union {
    MessageClickedRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageClickedRequestDefaultTypeInternal _MessageClickedRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MessageClickedRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MessageClickedRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageClickedRequest_2eproto = nullptr;

const uint32_t TableStruct_MessageClickedRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageClickedRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageClickedRequest, _impl_.seqid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageClickedRequest, _impl_.target_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::MessageClickedRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_MessageClickedRequest_default_instance_._instance,
};

const char descriptor_table_protodef_MessageClickedRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033MessageClickedRequest.proto\022\025AcFunDanm"
  "u.Im.Message\032\020ChatTarget.proto\"Y\n\025Messag"
  "eClickedRequest\022\r\n\005seqId\030\001 \001(\003\0221\n\006target"
  "\030\002 \001(\0132!.AcFunDanmu.Im.Message.ChatTarge"
  "tb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MessageClickedRequest_2eproto_deps[1] = {
  &::descriptor_table_ChatTarget_2eproto,
};
static ::_pbi::once_flag descriptor_table_MessageClickedRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageClickedRequest_2eproto = {
    false, false, 169, descriptor_table_protodef_MessageClickedRequest_2eproto,
    "MessageClickedRequest.proto",
    &descriptor_table_MessageClickedRequest_2eproto_once, descriptor_table_MessageClickedRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_MessageClickedRequest_2eproto::offsets,
    file_level_metadata_MessageClickedRequest_2eproto, file_level_enum_descriptors_MessageClickedRequest_2eproto,
    file_level_service_descriptors_MessageClickedRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageClickedRequest_2eproto_getter() {
  return &descriptor_table_MessageClickedRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageClickedRequest_2eproto(&descriptor_table_MessageClickedRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageClickedRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& target(const MessageClickedRequest* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
MessageClickedRequest::_Internal::target(const MessageClickedRequest* msg) {
  return *msg->_impl_.target_;
}
void MessageClickedRequest::clear_target() {
  if (GetArenaForAllocation() == nullptr && _impl_.target_ != nullptr) {
    delete _impl_.target_;
  }
  _impl_.target_ = nullptr;
}
MessageClickedRequest::MessageClickedRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.MessageClickedRequest)
}
MessageClickedRequest::MessageClickedRequest(const MessageClickedRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageClickedRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.target_){nullptr}
    , decltype(_impl_.seqid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_target()) {
    _this->_impl_.target_ = new ::AcFunDanmu::Im::Message::ChatTarget(*from._impl_.target_);
  }
  _this->_impl_.seqid_ = from._impl_.seqid_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.MessageClickedRequest)
}

inline void MessageClickedRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.target_){nullptr}
    , decltype(_impl_.seqid_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MessageClickedRequest::~MessageClickedRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.MessageClickedRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageClickedRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.target_;
}

void MessageClickedRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageClickedRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.MessageClickedRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.target_ != nullptr) {
    delete _impl_.target_;
  }
  _impl_.target_ = nullptr;
  _impl_.seqid_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageClickedRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 seqId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.seqid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Message.ChatTarget target = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_target(), ptr);
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

uint8_t* MessageClickedRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.MessageClickedRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 seqId = 1;
  if (this->_internal_seqid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_seqid(), target);
  }

  // .AcFunDanmu.Im.Message.ChatTarget target = 2;
  if (this->_internal_has_target()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::target(this),
        _Internal::target(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.MessageClickedRequest)
  return target;
}

size_t MessageClickedRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.MessageClickedRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget target = 2;
  if (this->_internal_has_target()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.target_);
  }

  // int64 seqId = 1;
  if (this->_internal_seqid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_seqid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageClickedRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageClickedRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageClickedRequest::GetClassData() const { return &_class_data_; }


void MessageClickedRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageClickedRequest*>(&to_msg);
  auto& from = static_cast<const MessageClickedRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.MessageClickedRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_target()) {
    _this->_internal_mutable_target()->::AcFunDanmu::Im::Message::ChatTarget::MergeFrom(
        from._internal_target());
  }
  if (from._internal_seqid() != 0) {
    _this->_internal_set_seqid(from._internal_seqid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageClickedRequest::CopyFrom(const MessageClickedRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.MessageClickedRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageClickedRequest::IsInitialized() const {
  return true;
}

void MessageClickedRequest::InternalSwap(MessageClickedRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MessageClickedRequest, _impl_.seqid_)
      + sizeof(MessageClickedRequest::_impl_.seqid_)
      - PROTOBUF_FIELD_OFFSET(MessageClickedRequest, _impl_.target_)>(
          reinterpret_cast<char*>(&_impl_.target_),
          reinterpret_cast<char*>(&other->_impl_.target_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageClickedRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MessageClickedRequest_2eproto_getter, &descriptor_table_MessageClickedRequest_2eproto_once,
      file_level_metadata_MessageClickedRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::MessageClickedRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::MessageClickedRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::MessageClickedRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
