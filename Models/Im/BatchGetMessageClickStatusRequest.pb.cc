// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BatchGetMessageClickStatusRequest.proto

#include "BatchGetMessageClickStatusRequest.pb.h"

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
PROTOBUF_CONSTEXPR BatchGetMessageClickStatusRequest::BatchGetMessageClickStatusRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.seqid_)*/{}
  , /*decltype(_impl_._seqid_cached_byte_size_)*/{0}
  , /*decltype(_impl_.strtargetid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct BatchGetMessageClickStatusRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR BatchGetMessageClickStatusRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~BatchGetMessageClickStatusRequestDefaultTypeInternal() {}
  union {
    BatchGetMessageClickStatusRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 BatchGetMessageClickStatusRequestDefaultTypeInternal _BatchGetMessageClickStatusRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_BatchGetMessageClickStatusRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_BatchGetMessageClickStatusRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_BatchGetMessageClickStatusRequest_2eproto = nullptr;

const uint32_t TableStruct_BatchGetMessageClickStatusRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::BatchGetMessageClickStatusRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::BatchGetMessageClickStatusRequest, _impl_.strtargetid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::BatchGetMessageClickStatusRequest, _impl_.seqid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::BatchGetMessageClickStatusRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_BatchGetMessageClickStatusRequest_default_instance_._instance,
};

const char descriptor_table_protodef_BatchGetMessageClickStatusRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\'BatchGetMessageClickStatusRequest.prot"
  "o\022\025AcFunDanmu.Im.Message\"G\n!BatchGetMess"
  "ageClickStatusRequest\022\023\n\013strTargetId\030\001 \001"
  "(\t\022\r\n\005seqId\030\002 \003(\003b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_BatchGetMessageClickStatusRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_BatchGetMessageClickStatusRequest_2eproto = {
    false, false, 145, descriptor_table_protodef_BatchGetMessageClickStatusRequest_2eproto,
    "BatchGetMessageClickStatusRequest.proto",
    &descriptor_table_BatchGetMessageClickStatusRequest_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_BatchGetMessageClickStatusRequest_2eproto::offsets,
    file_level_metadata_BatchGetMessageClickStatusRequest_2eproto, file_level_enum_descriptors_BatchGetMessageClickStatusRequest_2eproto,
    file_level_service_descriptors_BatchGetMessageClickStatusRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_BatchGetMessageClickStatusRequest_2eproto_getter() {
  return &descriptor_table_BatchGetMessageClickStatusRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_BatchGetMessageClickStatusRequest_2eproto(&descriptor_table_BatchGetMessageClickStatusRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class BatchGetMessageClickStatusRequest::_Internal {
 public:
};

BatchGetMessageClickStatusRequest::BatchGetMessageClickStatusRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
}
BatchGetMessageClickStatusRequest::BatchGetMessageClickStatusRequest(const BatchGetMessageClickStatusRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  BatchGetMessageClickStatusRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.seqid_){from._impl_.seqid_}
    , /*decltype(_impl_._seqid_cached_byte_size_)*/{0}
    , decltype(_impl_.strtargetid_){}
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
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
}

inline void BatchGetMessageClickStatusRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.seqid_){arena}
    , /*decltype(_impl_._seqid_cached_byte_size_)*/{0}
    , decltype(_impl_.strtargetid_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.strtargetid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

BatchGetMessageClickStatusRequest::~BatchGetMessageClickStatusRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void BatchGetMessageClickStatusRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.seqid_.~RepeatedField();
  _impl_.strtargetid_.Destroy();
}

void BatchGetMessageClickStatusRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void BatchGetMessageClickStatusRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.seqid_.Clear();
  _impl_.strtargetid_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* BatchGetMessageClickStatusRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest.strTargetId"));
        } else
          goto handle_unusual;
        continue;
      // repeated int64 seqId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt64Parser(_internal_mutable_seqid(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 16) {
          _internal_add_seqid(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr));
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

uint8_t* BatchGetMessageClickStatusRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string strTargetId = 1;
  if (!this->_internal_strtargetid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_strtargetid().data(), static_cast<int>(this->_internal_strtargetid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest.strTargetId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_strtargetid(), target);
  }

  // repeated int64 seqId = 2;
  {
    int byte_size = _impl_._seqid_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt64Packed(
          2, _internal_seqid(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
  return target;
}

size_t BatchGetMessageClickStatusRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int64 seqId = 2;
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

  // string strTargetId = 1;
  if (!this->_internal_strtargetid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_strtargetid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData BatchGetMessageClickStatusRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    BatchGetMessageClickStatusRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*BatchGetMessageClickStatusRequest::GetClassData() const { return &_class_data_; }


void BatchGetMessageClickStatusRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<BatchGetMessageClickStatusRequest*>(&to_msg);
  auto& from = static_cast<const BatchGetMessageClickStatusRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.seqid_.MergeFrom(from._impl_.seqid_);
  if (!from._internal_strtargetid().empty()) {
    _this->_internal_set_strtargetid(from._internal_strtargetid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void BatchGetMessageClickStatusRequest::CopyFrom(const BatchGetMessageClickStatusRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.BatchGetMessageClickStatusRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool BatchGetMessageClickStatusRequest::IsInitialized() const {
  return true;
}

void BatchGetMessageClickStatusRequest::InternalSwap(BatchGetMessageClickStatusRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.seqid_.InternalSwap(&other->_impl_.seqid_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.strtargetid_, lhs_arena,
      &other->_impl_.strtargetid_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata BatchGetMessageClickStatusRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_BatchGetMessageClickStatusRequest_2eproto_getter, &descriptor_table_BatchGetMessageClickStatusRequest_2eproto_once,
      file_level_metadata_BatchGetMessageClickStatusRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::BatchGetMessageClickStatusRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::BatchGetMessageClickStatusRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::BatchGetMessageClickStatusRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
