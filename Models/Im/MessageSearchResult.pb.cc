// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageSearchResult.proto

#include "MessageSearchResult.pb.h"

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
namespace Search {
PROTOBUF_CONSTEXPR MessageSearchResult::MessageSearchResult(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.chattarget_)*/nullptr
  , /*decltype(_impl_.msg_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MessageSearchResultDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageSearchResultDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageSearchResultDefaultTypeInternal() {}
  union {
    MessageSearchResult _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageSearchResultDefaultTypeInternal _MessageSearchResult_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MessageSearchResult_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MessageSearchResult_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageSearchResult_2eproto = nullptr;

const uint32_t TableStruct_MessageSearchResult_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchResult, _impl_.chattarget_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::MessageSearchResult, _impl_.msg_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Search::MessageSearchResult)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Search::_MessageSearchResult_default_instance_._instance,
};

const char descriptor_table_protodef_MessageSearchResult_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031MessageSearchResult.proto\022\032AcFunDanmu."
  "Im.Cloud.Search\032\020ChatTarget.proto\032\rMessa"
  "ge.proto\"y\n\023MessageSearchResult\0225\n\nchatT"
  "arget\030\001 \001(\0132!.AcFunDanmu.Im.Message.Chat"
  "Target\022+\n\003msg\030\002 \001(\0132\036.AcFunDanmu.Im.Mess"
  "age.Messageb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MessageSearchResult_2eproto_deps[2] = {
  &::descriptor_table_ChatTarget_2eproto,
  &::descriptor_table_Message_2eproto,
};
static ::_pbi::once_flag descriptor_table_MessageSearchResult_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageSearchResult_2eproto = {
    false, false, 219, descriptor_table_protodef_MessageSearchResult_2eproto,
    "MessageSearchResult.proto",
    &descriptor_table_MessageSearchResult_2eproto_once, descriptor_table_MessageSearchResult_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_MessageSearchResult_2eproto::offsets,
    file_level_metadata_MessageSearchResult_2eproto, file_level_enum_descriptors_MessageSearchResult_2eproto,
    file_level_service_descriptors_MessageSearchResult_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageSearchResult_2eproto_getter() {
  return &descriptor_table_MessageSearchResult_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageSearchResult_2eproto(&descriptor_table_MessageSearchResult_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class MessageSearchResult::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& chattarget(const MessageSearchResult* msg);
  static const ::AcFunDanmu::Im::Message::Message& msg(const MessageSearchResult* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
MessageSearchResult::_Internal::chattarget(const MessageSearchResult* msg) {
  return *msg->_impl_.chattarget_;
}
const ::AcFunDanmu::Im::Message::Message&
MessageSearchResult::_Internal::msg(const MessageSearchResult* msg) {
  return *msg->_impl_.msg_;
}
void MessageSearchResult::clear_chattarget() {
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
}
void MessageSearchResult::clear_msg() {
  if (GetArenaForAllocation() == nullptr && _impl_.msg_ != nullptr) {
    delete _impl_.msg_;
  }
  _impl_.msg_ = nullptr;
}
MessageSearchResult::MessageSearchResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
}
MessageSearchResult::MessageSearchResult(const MessageSearchResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageSearchResult* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){nullptr}
    , decltype(_impl_.msg_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_chattarget()) {
    _this->_impl_.chattarget_ = new ::AcFunDanmu::Im::Message::ChatTarget(*from._impl_.chattarget_);
  }
  if (from._internal_has_msg()) {
    _this->_impl_.msg_ = new ::AcFunDanmu::Im::Message::Message(*from._impl_.msg_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
}

inline void MessageSearchResult::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){nullptr}
    , decltype(_impl_.msg_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MessageSearchResult::~MessageSearchResult() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageSearchResult::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.chattarget_;
  if (this != internal_default_instance()) delete _impl_.msg_;
}

void MessageSearchResult::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageSearchResult::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.msg_ != nullptr) {
    delete _impl_.msg_;
  }
  _impl_.msg_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageSearchResult::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_chattarget(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Message.Message msg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_msg(), ptr);
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

uint8_t* MessageSearchResult::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::chattarget(this),
        _Internal::chattarget(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Message.Message msg = 2;
  if (this->_internal_has_msg()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::msg(this),
        _Internal::msg(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
  return target;
}

size_t MessageSearchResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.chattarget_);
  }

  // .AcFunDanmu.Im.Message.Message msg = 2;
  if (this->_internal_has_msg()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.msg_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageSearchResult::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageSearchResult::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageSearchResult::GetClassData() const { return &_class_data_; }


void MessageSearchResult::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageSearchResult*>(&to_msg);
  auto& from = static_cast<const MessageSearchResult&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_chattarget()) {
    _this->_internal_mutable_chattarget()->::AcFunDanmu::Im::Message::ChatTarget::MergeFrom(
        from._internal_chattarget());
  }
  if (from._internal_has_msg()) {
    _this->_internal_mutable_msg()->::AcFunDanmu::Im::Message::Message::MergeFrom(
        from._internal_msg());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageSearchResult::CopyFrom(const MessageSearchResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Search.MessageSearchResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageSearchResult::IsInitialized() const {
  return true;
}

void MessageSearchResult::InternalSwap(MessageSearchResult* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MessageSearchResult, _impl_.msg_)
      + sizeof(MessageSearchResult::_impl_.msg_)
      - PROTOBUF_FIELD_OFFSET(MessageSearchResult, _impl_.chattarget_)>(
          reinterpret_cast<char*>(&_impl_.chattarget_),
          reinterpret_cast<char*>(&other->_impl_.chattarget_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageSearchResult::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MessageSearchResult_2eproto_getter, &descriptor_table_MessageSearchResult_2eproto_once,
      file_level_metadata_MessageSearchResult_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Search::MessageSearchResult*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Search::MessageSearchResult >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Search::MessageSearchResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
