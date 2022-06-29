// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PingResponse.proto

#include "PingResponse.pb.h"

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
PROTOBUF_CONSTEXPR PingResponse::PingResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.clientipv6_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.servertimestamp_)*/0
  , /*decltype(_impl_.clientip_)*/0u
  , /*decltype(_impl_.redirectip_)*/0u
  , /*decltype(_impl_.redirectport_)*/0u
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PingResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PingResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PingResponseDefaultTypeInternal() {}
  union {
    PingResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PingResponseDefaultTypeInternal _PingResponse_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_PingResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_PingResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_PingResponse_2eproto = nullptr;

const uint32_t TableStruct_PingResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::PingResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::PingResponse, _impl_.servertimestamp_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::PingResponse, _impl_.clientip_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::PingResponse, _impl_.redirectip_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::PingResponse, _impl_.redirectport_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::PingResponse, _impl_.clientipv6_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Basic::PingResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Basic::_PingResponse_default_instance_._instance,
};

const char descriptor_table_protodef_PingResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\022PingResponse.proto\022\023AcFunDanmu.Im.Basi"
  "c\"w\n\014PingResponse\022\027\n\017serverTimestamp\030\001 \001"
  "(\017\022\020\n\010clientIp\030\002 \001(\007\022\022\n\nredirectIp\030\003 \001(\007"
  "\022\024\n\014redirectPort\030\004 \001(\r\022\022\n\nclientIpV6\030\005 \001"
  "(\014b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_PingResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_PingResponse_2eproto = {
    false, false, 170, descriptor_table_protodef_PingResponse_2eproto,
    "PingResponse.proto",
    &descriptor_table_PingResponse_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_PingResponse_2eproto::offsets,
    file_level_metadata_PingResponse_2eproto, file_level_enum_descriptors_PingResponse_2eproto,
    file_level_service_descriptors_PingResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_PingResponse_2eproto_getter() {
  return &descriptor_table_PingResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_PingResponse_2eproto(&descriptor_table_PingResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Basic {

// ===================================================================

class PingResponse::_Internal {
 public:
};

PingResponse::PingResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Basic.PingResponse)
}
PingResponse::PingResponse(const PingResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PingResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.clientipv6_){}
    , decltype(_impl_.servertimestamp_){}
    , decltype(_impl_.clientip_){}
    , decltype(_impl_.redirectip_){}
    , decltype(_impl_.redirectport_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.clientipv6_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientipv6_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_clientipv6().empty()) {
    _this->_impl_.clientipv6_.Set(from._internal_clientipv6(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.servertimestamp_, &from._impl_.servertimestamp_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.redirectport_) -
    reinterpret_cast<char*>(&_impl_.servertimestamp_)) + sizeof(_impl_.redirectport_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Basic.PingResponse)
}

inline void PingResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.clientipv6_){}
    , decltype(_impl_.servertimestamp_){0}
    , decltype(_impl_.clientip_){0u}
    , decltype(_impl_.redirectip_){0u}
    , decltype(_impl_.redirectport_){0u}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.clientipv6_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientipv6_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

PingResponse::~PingResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Basic.PingResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PingResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.clientipv6_.Destroy();
}

void PingResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PingResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Basic.PingResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.clientipv6_.ClearToEmpty();
  ::memset(&_impl_.servertimestamp_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.redirectport_) -
      reinterpret_cast<char*>(&_impl_.servertimestamp_)) + sizeof(_impl_.redirectport_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PingResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // sfixed32 serverTimestamp = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 13)) {
          _impl_.servertimestamp_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<int32_t>(ptr);
          ptr += sizeof(int32_t);
        } else
          goto handle_unusual;
        continue;
      // fixed32 clientIp = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 21)) {
          _impl_.clientip_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint32_t>(ptr);
          ptr += sizeof(uint32_t);
        } else
          goto handle_unusual;
        continue;
      // fixed32 redirectIp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 29)) {
          _impl_.redirectip_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<uint32_t>(ptr);
          ptr += sizeof(uint32_t);
        } else
          goto handle_unusual;
        continue;
      // uint32 redirectPort = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.redirectport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bytes clientIpV6 = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_clientipv6();
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

uint8_t* PingResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Basic.PingResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // sfixed32 serverTimestamp = 1;
  if (this->_internal_servertimestamp() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteSFixed32ToArray(1, this->_internal_servertimestamp(), target);
  }

  // fixed32 clientIp = 2;
  if (this->_internal_clientip() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed32ToArray(2, this->_internal_clientip(), target);
  }

  // fixed32 redirectIp = 3;
  if (this->_internal_redirectip() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteFixed32ToArray(3, this->_internal_redirectip(), target);
  }

  // uint32 redirectPort = 4;
  if (this->_internal_redirectport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteUInt32ToArray(4, this->_internal_redirectport(), target);
  }

  // bytes clientIpV6 = 5;
  if (!this->_internal_clientipv6().empty()) {
    target = stream->WriteBytesMaybeAliased(
        5, this->_internal_clientipv6(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Basic.PingResponse)
  return target;
}

size_t PingResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Basic.PingResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes clientIpV6 = 5;
  if (!this->_internal_clientipv6().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_clientipv6());
  }

  // sfixed32 serverTimestamp = 1;
  if (this->_internal_servertimestamp() != 0) {
    total_size += 1 + 4;
  }

  // fixed32 clientIp = 2;
  if (this->_internal_clientip() != 0) {
    total_size += 1 + 4;
  }

  // fixed32 redirectIp = 3;
  if (this->_internal_redirectip() != 0) {
    total_size += 1 + 4;
  }

  // uint32 redirectPort = 4;
  if (this->_internal_redirectport() != 0) {
    total_size += ::_pbi::WireFormatLite::UInt32SizePlusOne(this->_internal_redirectport());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PingResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PingResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PingResponse::GetClassData() const { return &_class_data_; }


void PingResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PingResponse*>(&to_msg);
  auto& from = static_cast<const PingResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Basic.PingResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_clientipv6().empty()) {
    _this->_internal_set_clientipv6(from._internal_clientipv6());
  }
  if (from._internal_servertimestamp() != 0) {
    _this->_internal_set_servertimestamp(from._internal_servertimestamp());
  }
  if (from._internal_clientip() != 0) {
    _this->_internal_set_clientip(from._internal_clientip());
  }
  if (from._internal_redirectip() != 0) {
    _this->_internal_set_redirectip(from._internal_redirectip());
  }
  if (from._internal_redirectport() != 0) {
    _this->_internal_set_redirectport(from._internal_redirectport());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PingResponse::CopyFrom(const PingResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Basic.PingResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PingResponse::IsInitialized() const {
  return true;
}

void PingResponse::InternalSwap(PingResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.clientipv6_, lhs_arena,
      &other->_impl_.clientipv6_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PingResponse, _impl_.redirectport_)
      + sizeof(PingResponse::_impl_.redirectport_)
      - PROTOBUF_FIELD_OFFSET(PingResponse, _impl_.servertimestamp_)>(
          reinterpret_cast<char*>(&_impl_.servertimestamp_),
          reinterpret_cast<char*>(&other->_impl_.servertimestamp_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PingResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_PingResponse_2eproto_getter, &descriptor_table_PingResponse_2eproto_once,
      file_level_metadata_PingResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Basic::PingResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Basic::PingResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Basic::PingResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
