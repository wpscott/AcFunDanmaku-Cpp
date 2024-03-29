// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HandshakeResponse.proto

#include "HandshakeResponse.pb.h"

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
namespace Basic {
PROTOBUF_CONSTEXPR HansshakeResponse::HansshakeResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.unknown1_)*/0u
  , /*decltype(_impl_.unknown2_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct HansshakeResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR HansshakeResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~HansshakeResponseDefaultTypeInternal() {}
  union {
    HansshakeResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 HansshakeResponseDefaultTypeInternal _HansshakeResponse_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_HandshakeResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_HandshakeResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_HandshakeResponse_2eproto = nullptr;

const uint32_t TableStruct_HandshakeResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::HansshakeResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::HansshakeResponse, _impl_.unknown1_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::HansshakeResponse, _impl_.unknown2_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Basic::HansshakeResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Basic::_HansshakeResponse_default_instance_._instance,
};

const char descriptor_table_protodef_HandshakeResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027HandshakeResponse.proto\022\023AcFunDanmu.Im"
  ".Basic\"7\n\021HansshakeResponse\022\020\n\010unknown1\030"
  "\001 \001(\007\022\020\n\010unknown2\030\002 \001(\007b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_HandshakeResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_HandshakeResponse_2eproto = {
    false, false, 111, descriptor_table_protodef_HandshakeResponse_2eproto,
    "HandshakeResponse.proto",
    &descriptor_table_HandshakeResponse_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_HandshakeResponse_2eproto::offsets,
    file_level_metadata_HandshakeResponse_2eproto, file_level_enum_descriptors_HandshakeResponse_2eproto,
    file_level_service_descriptors_HandshakeResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_HandshakeResponse_2eproto_getter() {
  return &descriptor_table_HandshakeResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_HandshakeResponse_2eproto(&descriptor_table_HandshakeResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Basic {

// ===================================================================

class HansshakeResponse::_Internal {
 public:
};

HansshakeResponse::HansshakeResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Basic.HansshakeResponse)
}
HansshakeResponse::HansshakeResponse(const HansshakeResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  HansshakeResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.unknown1_){}
    , decltype(_impl_.unknown2_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.unknown1_, &from._impl_.unknown1_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.unknown2_) -
    reinterpret_cast<char*>(&_impl_.unknown1_)) + sizeof(_impl_.unknown2_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Basic.HansshakeResponse)
}

inline void HansshakeResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.unknown1_){0u}
    , decltype(_impl_.unknown2_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

HansshakeResponse::~HansshakeResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Basic.HansshakeResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void HansshakeResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void HansshakeResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void HansshakeResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Basic.HansshakeResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&_impl_.unknown1_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.unknown2_) -
      reinterpret_cast<char*>(&_impl_.unknown1_)) + sizeof(_impl_.unknown2_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* HansshakeResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // fixed32 unknown1 = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _impl_.unknown1_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint32_t>(ptr);
          ptr += sizeof(uint32_t);
        } else
          goto handle_unusual;
        continue;
      // fixed32 unknown2 = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _impl_.unknown2_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint32_t>(ptr);
          ptr += sizeof(uint32_t);
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

uint8_t* HansshakeResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Basic.HansshakeResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // fixed32 unknown1 = 1;
  if (this->_internal_unknown1() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed32ToArray(1, this->_internal_unknown1(), target);
  }

  // fixed32 unknown2 = 2;
  if (this->_internal_unknown2() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed32ToArray(2, this->_internal_unknown2(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Basic.HansshakeResponse)
  return target;
}

size_t HansshakeResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Basic.HansshakeResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // fixed32 unknown1 = 1;
  if (this->_internal_unknown1() != 0) {
    total_size += 1 + 4;
  }

  // fixed32 unknown2 = 2;
  if (this->_internal_unknown2() != 0) {
    total_size += 1 + 4;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData HansshakeResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    HansshakeResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*HansshakeResponse::GetClassData() const { return &_class_data_; }


void HansshakeResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<HansshakeResponse*>(&to_msg);
  auto& from = static_cast<const HansshakeResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Basic.HansshakeResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_unknown1() != 0) {
    _this->_internal_set_unknown1(from._internal_unknown1());
  }
  if (from._internal_unknown2() != 0) {
    _this->_internal_set_unknown2(from._internal_unknown2());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void HansshakeResponse::CopyFrom(const HansshakeResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Basic.HansshakeResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool HansshakeResponse::IsInitialized() const {
  return true;
}

void HansshakeResponse::InternalSwap(HansshakeResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(HansshakeResponse, _impl_.unknown2_)
      + sizeof(HansshakeResponse::_impl_.unknown2_)
      - PROTOBUF_FIELD_OFFSET(HansshakeResponse, _impl_.unknown1_)>(
          reinterpret_cast<char*>(&_impl_.unknown1_),
          reinterpret_cast<char*>(&other->_impl_.unknown1_));
}

::PROTOBUF_NAMESPACE_ID::Metadata HansshakeResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_HandshakeResponse_2eproto_getter, &descriptor_table_HandshakeResponse_2eproto_once,
      file_level_metadata_HandshakeResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Basic::HansshakeResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Basic::HansshakeResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Basic::HansshakeResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
