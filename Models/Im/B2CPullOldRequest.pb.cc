// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CPullOldRequest.proto

#include "B2CPullOldRequest.pb.h"

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
PROTOBUF_CONSTEXPR B2CPullOldRequest::B2CPullOldRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.strtargetid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.minseq_)*/int64_t{0}
  , /*decltype(_impl_.maxseq_)*/int64_t{0}
  , /*decltype(_impl_.count_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct B2CPullOldRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR B2CPullOldRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~B2CPullOldRequestDefaultTypeInternal() {}
  union {
    B2CPullOldRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 B2CPullOldRequestDefaultTypeInternal _B2CPullOldRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_B2CPullOldRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_B2CPullOldRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_B2CPullOldRequest_2eproto = nullptr;

const uint32_t TableStruct_B2CPullOldRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CPullOldRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CPullOldRequest, _impl_.strtargetid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CPullOldRequest, _impl_.minseq_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CPullOldRequest, _impl_.maxseq_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CPullOldRequest, _impl_.count_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::B2CPullOldRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_B2CPullOldRequest_default_instance_._instance,
};

const char descriptor_table_protodef_B2CPullOldRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027B2CPullOldRequest.proto\022\025AcFunDanmu.Im"
  ".Message\"W\n\021B2CPullOldRequest\022\023\n\013strTarg"
  "etId\030\001 \001(\t\022\016\n\006minSeq\030\002 \001(\003\022\016\n\006maxSeq\030\003 \001"
  "(\003\022\r\n\005count\030\004 \001(\005b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_B2CPullOldRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_B2CPullOldRequest_2eproto = {
    false, false, 145, descriptor_table_protodef_B2CPullOldRequest_2eproto,
    "B2CPullOldRequest.proto",
    &descriptor_table_B2CPullOldRequest_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_B2CPullOldRequest_2eproto::offsets,
    file_level_metadata_B2CPullOldRequest_2eproto, file_level_enum_descriptors_B2CPullOldRequest_2eproto,
    file_level_service_descriptors_B2CPullOldRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_B2CPullOldRequest_2eproto_getter() {
  return &descriptor_table_B2CPullOldRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_B2CPullOldRequest_2eproto(&descriptor_table_B2CPullOldRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CPullOldRequest::_Internal {
 public:
};

B2CPullOldRequest::B2CPullOldRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.B2CPullOldRequest)
}
B2CPullOldRequest::B2CPullOldRequest(const B2CPullOldRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  B2CPullOldRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.strtargetid_){}
    , decltype(_impl_.minseq_){}
    , decltype(_impl_.maxseq_){}
    , decltype(_impl_.count_){}
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
  ::memcpy(&_impl_.minseq_, &from._impl_.minseq_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.count_) -
    reinterpret_cast<char*>(&_impl_.minseq_)) + sizeof(_impl_.count_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.B2CPullOldRequest)
}

inline void B2CPullOldRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.strtargetid_){}
    , decltype(_impl_.minseq_){int64_t{0}}
    , decltype(_impl_.maxseq_){int64_t{0}}
    , decltype(_impl_.count_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.strtargetid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

B2CPullOldRequest::~B2CPullOldRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.B2CPullOldRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void B2CPullOldRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.strtargetid_.Destroy();
}

void B2CPullOldRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void B2CPullOldRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.B2CPullOldRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.strtargetid_.ClearToEmpty();
  ::memset(&_impl_.minseq_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.count_) -
      reinterpret_cast<char*>(&_impl_.minseq_)) + sizeof(_impl_.count_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* B2CPullOldRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string strTargetId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_strtargetid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.B2CPullOldRequest.strTargetId"));
        } else
          goto handle_unusual;
        continue;
      // int64 minSeq = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.minseq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 maxSeq = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.maxseq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 count = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.count_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* B2CPullOldRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.B2CPullOldRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string strTargetId = 1;
  if (!this->_internal_strtargetid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strtargetid().data(), static_cast<int>(this->_internal_strtargetid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.B2CPullOldRequest.strTargetId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_strtargetid(), target);
  }

  // int64 minSeq = 2;
  if (this->_internal_minseq() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_minseq(), target);
  }

  // int64 maxSeq = 3;
  if (this->_internal_maxseq() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_maxseq(), target);
  }

  // int32 count = 4;
  if (this->_internal_count() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_count(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.B2CPullOldRequest)
  return target;
}

size_t B2CPullOldRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.B2CPullOldRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string strTargetId = 1;
  if (!this->_internal_strtargetid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strtargetid());
  }

  // int64 minSeq = 2;
  if (this->_internal_minseq() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_minseq());
  }

  // int64 maxSeq = 3;
  if (this->_internal_maxseq() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_maxseq());
  }

  // int32 count = 4;
  if (this->_internal_count() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_count());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData B2CPullOldRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    B2CPullOldRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*B2CPullOldRequest::GetClassData() const { return &_class_data_; }


void B2CPullOldRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<B2CPullOldRequest*>(&to_msg);
  auto& from = static_cast<const B2CPullOldRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.B2CPullOldRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_strtargetid().empty()) {
    _this->_internal_set_strtargetid(from._internal_strtargetid());
  }
  if (from._internal_minseq() != 0) {
    _this->_internal_set_minseq(from._internal_minseq());
  }
  if (from._internal_maxseq() != 0) {
    _this->_internal_set_maxseq(from._internal_maxseq());
  }
  if (from._internal_count() != 0) {
    _this->_internal_set_count(from._internal_count());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void B2CPullOldRequest::CopyFrom(const B2CPullOldRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.B2CPullOldRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool B2CPullOldRequest::IsInitialized() const {
  return true;
}

void B2CPullOldRequest::InternalSwap(B2CPullOldRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strtargetid_, lhs_arena,
      &other->_impl_.strtargetid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(B2CPullOldRequest, _impl_.count_)
      + sizeof(B2CPullOldRequest::_impl_.count_)
      - PROTOBUF_FIELD_OFFSET(B2CPullOldRequest, _impl_.minseq_)>(
          reinterpret_cast<char*>(&_impl_.minseq_),
          reinterpret_cast<char*>(&other->_impl_.minseq_));
}

::PROTOBUF_NAMESPACE_ID::Metadata B2CPullOldRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_B2CPullOldRequest_2eproto_getter, &descriptor_table_B2CPullOldRequest_2eproto_once,
      file_level_metadata_B2CPullOldRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::B2CPullOldRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::B2CPullOldRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::B2CPullOldRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
