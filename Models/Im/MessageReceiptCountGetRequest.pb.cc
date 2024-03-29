// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageReceiptCountGetRequest.proto

#include "MessageReceiptCountGetRequest.pb.h"

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
PROTOBUF_CONSTEXPR MessageReceiptCountGetRequest::MessageReceiptCountGetRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.seqid_)*/{}
  , /*decltype(_impl_._seqid_cached_byte_size_)*/{0}
  , /*decltype(_impl_.chattarget_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MessageReceiptCountGetRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageReceiptCountGetRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageReceiptCountGetRequestDefaultTypeInternal() {}
  union {
    MessageReceiptCountGetRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageReceiptCountGetRequestDefaultTypeInternal _MessageReceiptCountGetRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MessageReceiptCountGetRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MessageReceiptCountGetRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageReceiptCountGetRequest_2eproto = nullptr;

const uint32_t TableStruct_MessageReceiptCountGetRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReceiptCountGetRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReceiptCountGetRequest, _impl_.seqid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReceiptCountGetRequest, _impl_.chattarget_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::MessageReceiptCountGetRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_MessageReceiptCountGetRequest_default_instance_._instance,
};

const char descriptor_table_protodef_MessageReceiptCountGetRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#MessageReceiptCountGetRequest.proto\022\025A"
  "cFunDanmu.Im.Message\032\020ChatTarget.proto\"e"
  "\n\035MessageReceiptCountGetRequest\022\r\n\005seqId"
  "\030\001 \003(\003\0225\n\nchatTarget\030\002 \001(\0132!.AcFunDanmu."
  "Im.Message.ChatTargetb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MessageReceiptCountGetRequest_2eproto_deps[1] = {
  &::descriptor_table_ChatTarget_2eproto,
};
static ::_pbi::once_flag descriptor_table_MessageReceiptCountGetRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageReceiptCountGetRequest_2eproto = {
    false, false, 189, descriptor_table_protodef_MessageReceiptCountGetRequest_2eproto,
    "MessageReceiptCountGetRequest.proto",
    &descriptor_table_MessageReceiptCountGetRequest_2eproto_once, descriptor_table_MessageReceiptCountGetRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_MessageReceiptCountGetRequest_2eproto::offsets,
    file_level_metadata_MessageReceiptCountGetRequest_2eproto, file_level_enum_descriptors_MessageReceiptCountGetRequest_2eproto,
    file_level_service_descriptors_MessageReceiptCountGetRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageReceiptCountGetRequest_2eproto_getter() {
  return &descriptor_table_MessageReceiptCountGetRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageReceiptCountGetRequest_2eproto(&descriptor_table_MessageReceiptCountGetRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageReceiptCountGetRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& chattarget(const MessageReceiptCountGetRequest* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
MessageReceiptCountGetRequest::_Internal::chattarget(const MessageReceiptCountGetRequest* msg) {
  return *msg->_impl_.chattarget_;
}
void MessageReceiptCountGetRequest::clear_chattarget() {
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
}
MessageReceiptCountGetRequest::MessageReceiptCountGetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
}
MessageReceiptCountGetRequest::MessageReceiptCountGetRequest(const MessageReceiptCountGetRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageReceiptCountGetRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.seqid_){from._impl_.seqid_}
    , /*decltype(_impl_._seqid_cached_byte_size_)*/{0}
    , decltype(_impl_.chattarget_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_chattarget()) {
    _this->_impl_.chattarget_ = new ::AcFunDanmu::Im::Message::ChatTarget(*from._impl_.chattarget_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
}

inline void MessageReceiptCountGetRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.seqid_){arena}
    , /*decltype(_impl_._seqid_cached_byte_size_)*/{0}
    , decltype(_impl_.chattarget_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MessageReceiptCountGetRequest::~MessageReceiptCountGetRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageReceiptCountGetRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.seqid_.~RepeatedField();
  if (this != internal_default_instance()) delete _impl_.chattarget_;
}

void MessageReceiptCountGetRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageReceiptCountGetRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.seqid_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageReceiptCountGetRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated int64 seqId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_seqid(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 8) {
          _internal_add_seqid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_chattarget(), ptr);
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

uint8_t* MessageReceiptCountGetRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int64 seqId = 1;
  {
    int byte_size = _impl_._seqid_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          1, _internal_seqid(), byte_size, target);
    }
  }

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 2;
  if (this->_internal_has_chattarget()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::chattarget(this),
        _Internal::chattarget(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
  return target;
}

size_t MessageReceiptCountGetRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 seqId = 1;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int64Size(this->_impl_.seqid_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._seqid_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 2;
  if (this->_internal_has_chattarget()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.chattarget_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageReceiptCountGetRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageReceiptCountGetRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageReceiptCountGetRequest::GetClassData() const { return &_class_data_; }


void MessageReceiptCountGetRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageReceiptCountGetRequest*>(&to_msg);
  auto& from = static_cast<const MessageReceiptCountGetRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.seqid_.MergeFrom(from._impl_.seqid_);
  if (from._internal_has_chattarget()) {
    _this->_internal_mutable_chattarget()->::AcFunDanmu::Im::Message::ChatTarget::MergeFrom(
        from._internal_chattarget());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageReceiptCountGetRequest::CopyFrom(const MessageReceiptCountGetRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.MessageReceiptCountGetRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageReceiptCountGetRequest::IsInitialized() const {
  return true;
}

void MessageReceiptCountGetRequest::InternalSwap(MessageReceiptCountGetRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.seqid_.InternalSwap(&other->_impl_.seqid_);
  swap(_impl_.chattarget_, other->_impl_.chattarget_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageReceiptCountGetRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MessageReceiptCountGetRequest_2eproto_getter, &descriptor_table_MessageReceiptCountGetRequest_2eproto_once,
      file_level_metadata_MessageReceiptCountGetRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::MessageReceiptCountGetRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::MessageReceiptCountGetRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::MessageReceiptCountGetRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
