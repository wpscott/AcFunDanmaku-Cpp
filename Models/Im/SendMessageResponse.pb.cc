// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SendMessageResponse.proto

#include "SendMessageResponse.pb.h"

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
PROTOBUF_CONSTEXPR SendMessageResponse::SendMessageResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.content_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.clientseqid_)*/int64_t{0}
  , /*decltype(_impl_.messagetimestamp_)*/int64_t{0}
  , /*decltype(_impl_.seqid_)*/int64_t{0}
  , /*decltype(_impl_.sessionaccounttype_)*/0
  , /*decltype(_impl_.sessionpriority_)*/0
  , /*decltype(_impl_.sessioncategoryid_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SendMessageResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SendMessageResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SendMessageResponseDefaultTypeInternal() {}
  union {
    SendMessageResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SendMessageResponseDefaultTypeInternal _SendMessageResponse_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SendMessageResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SendMessageResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SendMessageResponse_2eproto = nullptr;

const uint32_t TableStruct_SendMessageResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SendMessageResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SendMessageResponse, _impl_.clientseqid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SendMessageResponse, _impl_.messagetimestamp_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SendMessageResponse, _impl_.seqid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SendMessageResponse, _impl_.sessionaccounttype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SendMessageResponse, _impl_.sessionpriority_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SendMessageResponse, _impl_.sessioncategoryid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SendMessageResponse, _impl_.content_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::SendMessageResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_SendMessageResponse_default_instance_._instance,
};

const char descriptor_table_protodef_SendMessageResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031SendMessageResponse.proto\022\025AcFunDanmu."
  "Im.Message\"\264\001\n\023SendMessageResponse\022\023\n\013cl"
  "ientSeqId\030\001 \001(\003\022\030\n\020messageTimestamp\030\002 \001("
  "\003\022\r\n\005seqId\030\003 \001(\003\022\032\n\022sessionAccountType\030\004"
  " \001(\005\022\027\n\017sessionPriority\030\005 \001(\005\022\031\n\021session"
  "CategoryId\030\006 \001(\005\022\017\n\007content\030\007 \001(\014b\006proto"
  "3"
  ;
static ::_pbi::once_flag descriptor_table_SendMessageResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SendMessageResponse_2eproto = {
    false, false, 241, descriptor_table_protodef_SendMessageResponse_2eproto,
    "SendMessageResponse.proto",
    &descriptor_table_SendMessageResponse_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_SendMessageResponse_2eproto::offsets,
    file_level_metadata_SendMessageResponse_2eproto, file_level_enum_descriptors_SendMessageResponse_2eproto,
    file_level_service_descriptors_SendMessageResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SendMessageResponse_2eproto_getter() {
  return &descriptor_table_SendMessageResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SendMessageResponse_2eproto(&descriptor_table_SendMessageResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class SendMessageResponse::_Internal {
 public:
};

SendMessageResponse::SendMessageResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.SendMessageResponse)
}
SendMessageResponse::SendMessageResponse(const SendMessageResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SendMessageResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.content_){}
    , decltype(_impl_.clientseqid_){}
    , decltype(_impl_.messagetimestamp_){}
    , decltype(_impl_.seqid_){}
    , decltype(_impl_.sessionaccounttype_){}
    , decltype(_impl_.sessionpriority_){}
    , decltype(_impl_.sessioncategoryid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.content_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.content_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_content().empty()) {
    _this->_impl_.content_.Set(from._internal_content(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.clientseqid_, &from._impl_.clientseqid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.sessioncategoryid_) -
    reinterpret_cast<char*>(&_impl_.clientseqid_)) + sizeof(_impl_.sessioncategoryid_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.SendMessageResponse)
}

inline void SendMessageResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.content_){}
    , decltype(_impl_.clientseqid_){int64_t{0}}
    , decltype(_impl_.messagetimestamp_){int64_t{0}}
    , decltype(_impl_.seqid_){int64_t{0}}
    , decltype(_impl_.sessionaccounttype_){0}
    , decltype(_impl_.sessionpriority_){0}
    , decltype(_impl_.sessioncategoryid_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.content_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.content_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SendMessageResponse::~SendMessageResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.SendMessageResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SendMessageResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.content_.Destroy();
}

void SendMessageResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SendMessageResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.SendMessageResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.content_.ClearToEmpty();
  ::memset(&_impl_.clientseqid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.sessioncategoryid_) -
      reinterpret_cast<char*>(&_impl_.clientseqid_)) + sizeof(_impl_.sessioncategoryid_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SendMessageResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 clientSeqId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.clientseqid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 messageTimestamp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.messagetimestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 seqId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.seqid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 sessionAccountType = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.sessionaccounttype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 sessionPriority = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.sessionpriority_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 sessionCategoryId = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.sessioncategoryid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes content = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_content();
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

uint8_t* SendMessageResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.SendMessageResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 clientSeqId = 1;
  if (this->_internal_clientseqid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_clientseqid(), target);
  }

  // int64 messageTimestamp = 2;
  if (this->_internal_messagetimestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_messagetimestamp(), target);
  }

  // int64 seqId = 3;
  if (this->_internal_seqid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_seqid(), target);
  }

  // int32 sessionAccountType = 4;
  if (this->_internal_sessionaccounttype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_sessionaccounttype(), target);
  }

  // int32 sessionPriority = 5;
  if (this->_internal_sessionpriority() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(5, this->_internal_sessionpriority(), target);
  }

  // int32 sessionCategoryId = 6;
  if (this->_internal_sessioncategoryid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_sessioncategoryid(), target);
  }

  // bytes content = 7;
  if (!this->_internal_content().empty()) {
    target = stream->WriteBytesMaybeAliased(
        7, this->_internal_content(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.SendMessageResponse)
  return target;
}

size_t SendMessageResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.SendMessageResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes content = 7;
  if (!this->_internal_content().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_content());
  }

  // int64 clientSeqId = 1;
  if (this->_internal_clientseqid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_clientseqid());
  }

  // int64 messageTimestamp = 2;
  if (this->_internal_messagetimestamp() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_messagetimestamp());
  }

  // int64 seqId = 3;
  if (this->_internal_seqid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_seqid());
  }

  // int32 sessionAccountType = 4;
  if (this->_internal_sessionaccounttype() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_sessionaccounttype());
  }

  // int32 sessionPriority = 5;
  if (this->_internal_sessionpriority() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_sessionpriority());
  }

  // int32 sessionCategoryId = 6;
  if (this->_internal_sessioncategoryid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_sessioncategoryid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SendMessageResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SendMessageResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SendMessageResponse::GetClassData() const { return &_class_data_; }


void SendMessageResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SendMessageResponse*>(&to_msg);
  auto& from = static_cast<const SendMessageResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.SendMessageResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_content().empty()) {
    _this->_internal_set_content(from._internal_content());
  }
  if (from._internal_clientseqid() != 0) {
    _this->_internal_set_clientseqid(from._internal_clientseqid());
  }
  if (from._internal_messagetimestamp() != 0) {
    _this->_internal_set_messagetimestamp(from._internal_messagetimestamp());
  }
  if (from._internal_seqid() != 0) {
    _this->_internal_set_seqid(from._internal_seqid());
  }
  if (from._internal_sessionaccounttype() != 0) {
    _this->_internal_set_sessionaccounttype(from._internal_sessionaccounttype());
  }
  if (from._internal_sessionpriority() != 0) {
    _this->_internal_set_sessionpriority(from._internal_sessionpriority());
  }
  if (from._internal_sessioncategoryid() != 0) {
    _this->_internal_set_sessioncategoryid(from._internal_sessioncategoryid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SendMessageResponse::CopyFrom(const SendMessageResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.SendMessageResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SendMessageResponse::IsInitialized() const {
  return true;
}

void SendMessageResponse::InternalSwap(SendMessageResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.content_, lhs_arena,
      &other->_impl_.content_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SendMessageResponse, _impl_.sessioncategoryid_)
      + sizeof(SendMessageResponse::_impl_.sessioncategoryid_)
      - PROTOBUF_FIELD_OFFSET(SendMessageResponse, _impl_.clientseqid_)>(
          reinterpret_cast<char*>(&_impl_.clientseqid_),
          reinterpret_cast<char*>(&other->_impl_.clientseqid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SendMessageResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SendMessageResponse_2eproto_getter, &descriptor_table_SendMessageResponse_2eproto_once,
      file_level_metadata_SendMessageResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::SendMessageResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::SendMessageResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::SendMessageResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
