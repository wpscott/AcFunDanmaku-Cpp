// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageReadRequest.proto

#include "MessageReadRequest.pb.h"

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
PROTOBUF_CONSTEXPR MessageReadRequest::MessageReadRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.strtargetid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.target_)*/nullptr
  , /*decltype(_impl_.readseq_)*/int64_t{0}
  , /*decltype(_impl_.targetid_)*/int64_t{0}
  , /*decltype(_impl_.chattargettype_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MessageReadRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MessageReadRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MessageReadRequestDefaultTypeInternal() {}
  union {
    MessageReadRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MessageReadRequestDefaultTypeInternal _MessageReadRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MessageReadRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MessageReadRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MessageReadRequest_2eproto = nullptr;

const uint32_t TableStruct_MessageReadRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReadRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReadRequest, _impl_.target_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReadRequest, _impl_.readseq_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReadRequest, _impl_.targetid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReadRequest, _impl_.strtargetid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::MessageReadRequest, _impl_.chattargettype_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::MessageReadRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_MessageReadRequest_default_instance_._instance,
};

const char descriptor_table_protodef_MessageReadRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030MessageReadRequest.proto\022\025AcFunDanmu.I"
  "m.Message\032\024ChatTargetType.proto\032\nUser.pr"
  "oto\"\266\001\n\022MessageReadRequest\022)\n\006target\030\001 \001"
  "(\0132\031.AcFunDanmu.Im.Basic.User\022\017\n\007readSeq"
  "\030\002 \001(\003\022\020\n\010targetId\030\003 \001(\003\022\023\n\013strTargetId\030"
  "\004 \001(\t\022=\n\016chatTargetType\030\005 \001(\0162%.AcFunDan"
  "mu.Im.Message.ChatTargetTypeb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MessageReadRequest_2eproto_deps[2] = {
  &::descriptor_table_ChatTargetType_2eproto,
  &::descriptor_table_User_2eproto,
};
static ::_pbi::once_flag descriptor_table_MessageReadRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MessageReadRequest_2eproto = {
    false, false, 276, descriptor_table_protodef_MessageReadRequest_2eproto,
    "MessageReadRequest.proto",
    &descriptor_table_MessageReadRequest_2eproto_once, descriptor_table_MessageReadRequest_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_MessageReadRequest_2eproto::offsets,
    file_level_metadata_MessageReadRequest_2eproto, file_level_enum_descriptors_MessageReadRequest_2eproto,
    file_level_service_descriptors_MessageReadRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MessageReadRequest_2eproto_getter() {
  return &descriptor_table_MessageReadRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MessageReadRequest_2eproto(&descriptor_table_MessageReadRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageReadRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Basic::User& target(const MessageReadRequest* msg);
};

const ::AcFunDanmu::Im::Basic::User&
MessageReadRequest::_Internal::target(const MessageReadRequest* msg) {
  return *msg->_impl_.target_;
}
void MessageReadRequest::clear_target() {
  if (GetArenaForAllocation() == nullptr && _impl_.target_ != nullptr) {
    delete _impl_.target_;
  }
  _impl_.target_ = nullptr;
}
MessageReadRequest::MessageReadRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.MessageReadRequest)
}
MessageReadRequest::MessageReadRequest(const MessageReadRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MessageReadRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.strtargetid_){}
    , decltype(_impl_.target_){nullptr}
    , decltype(_impl_.readseq_){}
    , decltype(_impl_.targetid_){}
    , decltype(_impl_.chattargettype_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.strtargetid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_strtargetid().empty()) {
    _this->_impl_.strtargetid_.Set(from._internal_strtargetid(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_target()) {
    _this->_impl_.target_ = new ::AcFunDanmu::Im::Basic::User(*from._impl_.target_);
  }
  ::memcpy(&_impl_.readseq_, &from._impl_.readseq_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.chattargettype_) -
    reinterpret_cast<char*>(&_impl_.readseq_)) + sizeof(_impl_.chattargettype_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.MessageReadRequest)
}

inline void MessageReadRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.strtargetid_){}
    , decltype(_impl_.target_){nullptr}
    , decltype(_impl_.readseq_){int64_t{0}}
    , decltype(_impl_.targetid_){int64_t{0}}
    , decltype(_impl_.chattargettype_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.strtargetid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MessageReadRequest::~MessageReadRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.MessageReadRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MessageReadRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.strtargetid_.Destroy();
  if (this != internal_default_instance()) delete _impl_.target_;
}

void MessageReadRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MessageReadRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.MessageReadRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.strtargetid_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.target_ != nullptr) {
    delete _impl_.target_;
  }
  _impl_.target_ = nullptr;
  ::memset(&_impl_.readseq_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.chattargettype_) -
      reinterpret_cast<char*>(&_impl_.readseq_)) + sizeof(_impl_.chattargettype_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MessageReadRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Basic.User target = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_target(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 readSeq = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.readseq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 targetId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.targetid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string strTargetId = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_strtargetid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.MessageReadRequest.strTargetId"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Message.ChatTargetType chatTargetType = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_chattargettype(static_cast<::AcFunDanmu::Im::Message::ChatTargetType>(val));
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

uint8_t* MessageReadRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.MessageReadRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Basic.User target = 1;
  if (this->_internal_has_target()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::target(this),
        _Internal::target(this).GetCachedSize(), target, stream);
  }

  // int64 readSeq = 2;
  if (this->_internal_readseq() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_readseq(), target);
  }

  // int64 targetId = 3;
  if (this->_internal_targetid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_targetid(), target);
  }

  // string strTargetId = 4;
  if (!this->_internal_strtargetid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strtargetid().data(), static_cast<int>(this->_internal_strtargetid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.MessageReadRequest.strTargetId");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_strtargetid(), target);
  }

  // .AcFunDanmu.Im.Message.ChatTargetType chatTargetType = 5;
  if (this->_internal_chattargettype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      5, this->_internal_chattargettype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.MessageReadRequest)
  return target;
}

size_t MessageReadRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.MessageReadRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string strTargetId = 4;
  if (!this->_internal_strtargetid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strtargetid());
  }

  // .AcFunDanmu.Im.Basic.User target = 1;
  if (this->_internal_has_target()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.target_);
  }

  // int64 readSeq = 2;
  if (this->_internal_readseq() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_readseq());
  }

  // int64 targetId = 3;
  if (this->_internal_targetid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_targetid());
  }

  // .AcFunDanmu.Im.Message.ChatTargetType chatTargetType = 5;
  if (this->_internal_chattargettype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_chattargettype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MessageReadRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MessageReadRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MessageReadRequest::GetClassData() const { return &_class_data_; }


void MessageReadRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MessageReadRequest*>(&to_msg);
  auto& from = static_cast<const MessageReadRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.MessageReadRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_strtargetid().empty()) {
    _this->_internal_set_strtargetid(from._internal_strtargetid());
  }
  if (from._internal_has_target()) {
    _this->_internal_mutable_target()->::AcFunDanmu::Im::Basic::User::MergeFrom(
        from._internal_target());
  }
  if (from._internal_readseq() != 0) {
    _this->_internal_set_readseq(from._internal_readseq());
  }
  if (from._internal_targetid() != 0) {
    _this->_internal_set_targetid(from._internal_targetid());
  }
  if (from._internal_chattargettype() != 0) {
    _this->_internal_set_chattargettype(from._internal_chattargettype());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MessageReadRequest::CopyFrom(const MessageReadRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.MessageReadRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MessageReadRequest::IsInitialized() const {
  return true;
}

void MessageReadRequest::InternalSwap(MessageReadRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strtargetid_, lhs_arena,
      &other->_impl_.strtargetid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(MessageReadRequest, _impl_.chattargettype_)
      + sizeof(MessageReadRequest::_impl_.chattargettype_)
      - PROTOBUF_FIELD_OFFSET(MessageReadRequest, _impl_.target_)>(
          reinterpret_cast<char*>(&_impl_.target_),
          reinterpret_cast<char*>(&other->_impl_.target_));
}

::PROTOBUF_NAMESPACE_ID::Metadata MessageReadRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MessageReadRequest_2eproto_getter, &descriptor_table_MessageReadRequest_2eproto_once,
      file_level_metadata_MessageReadRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::MessageReadRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::MessageReadRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::MessageReadRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
