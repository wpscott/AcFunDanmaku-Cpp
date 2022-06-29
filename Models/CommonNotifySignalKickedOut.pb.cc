// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonNotifySignalKickedOut.proto

#include "CommonNotifySignalKickedOut.pb.h"

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
PROTOBUF_CONSTEXPR CommonNotifySignalKickedOut::CommonNotifySignalKickedOut(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.reason_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.b_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommonNotifySignalKickedOutDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommonNotifySignalKickedOutDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommonNotifySignalKickedOutDefaultTypeInternal() {}
  union {
    CommonNotifySignalKickedOut _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommonNotifySignalKickedOutDefaultTypeInternal _CommonNotifySignalKickedOut_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CommonNotifySignalKickedOut_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CommonNotifySignalKickedOut_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CommonNotifySignalKickedOut_2eproto = nullptr;

const uint32_t TableStruct_CommonNotifySignalKickedOut_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonNotifySignalKickedOut, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonNotifySignalKickedOut, _impl_.reason_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonNotifySignalKickedOut, _impl_.b_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::CommonNotifySignalKickedOut)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_CommonNotifySignalKickedOut_default_instance_._instance,
};

const char descriptor_table_protodef_CommonNotifySignalKickedOut_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!CommonNotifySignalKickedOut.proto\022\nAcF"
  "unDanmu\"8\n\033CommonNotifySignalKickedOut\022\016"
  "\n\006reason\030\001 \001(\t\022\t\n\001b\030\002 \001(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_CommonNotifySignalKickedOut_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CommonNotifySignalKickedOut_2eproto = {
    false, false, 113, descriptor_table_protodef_CommonNotifySignalKickedOut_2eproto,
    "CommonNotifySignalKickedOut.proto",
    &descriptor_table_CommonNotifySignalKickedOut_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_CommonNotifySignalKickedOut_2eproto::offsets,
    file_level_metadata_CommonNotifySignalKickedOut_2eproto, file_level_enum_descriptors_CommonNotifySignalKickedOut_2eproto,
    file_level_service_descriptors_CommonNotifySignalKickedOut_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CommonNotifySignalKickedOut_2eproto_getter() {
  return &descriptor_table_CommonNotifySignalKickedOut_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CommonNotifySignalKickedOut_2eproto(&descriptor_table_CommonNotifySignalKickedOut_2eproto);
namespace AcFunDanmu {

// ===================================================================

class CommonNotifySignalKickedOut::_Internal {
 public:
};

CommonNotifySignalKickedOut::CommonNotifySignalKickedOut(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonNotifySignalKickedOut)
}
CommonNotifySignalKickedOut::CommonNotifySignalKickedOut(const CommonNotifySignalKickedOut& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommonNotifySignalKickedOut* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.reason_){}
    , decltype(_impl_.b_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.reason_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.reason_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_reason().empty()) {
    _this->_impl_.reason_.Set(from._internal_reason(), 
      _this->GetArenaForAllocation());
  }
  _impl_.b_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.b_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_b().empty()) {
    _this->_impl_.b_.Set(from._internal_b(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonNotifySignalKickedOut)
}

inline void CommonNotifySignalKickedOut::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.reason_){}
    , decltype(_impl_.b_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.reason_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.reason_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.b_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.b_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

CommonNotifySignalKickedOut::~CommonNotifySignalKickedOut() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonNotifySignalKickedOut)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommonNotifySignalKickedOut::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.reason_.Destroy();
  _impl_.b_.Destroy();
}

void CommonNotifySignalKickedOut::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommonNotifySignalKickedOut::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonNotifySignalKickedOut)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.reason_.ClearToEmpty();
  _impl_.b_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonNotifySignalKickedOut::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string reason = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_reason();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.CommonNotifySignalKickedOut.reason"));
        } else
          goto handle_unusual;
        continue;
      // string b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_b();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.CommonNotifySignalKickedOut.b"));
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

uint8_t* CommonNotifySignalKickedOut::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonNotifySignalKickedOut)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string reason = 1;
  if (!this->_internal_reason().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_reason().data(), static_cast<int>(this->_internal_reason().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonNotifySignalKickedOut.reason");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_reason(), target);
  }

  // string b = 2;
  if (!this->_internal_b().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_b().data(), static_cast<int>(this->_internal_b().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonNotifySignalKickedOut.b");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_b(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonNotifySignalKickedOut)
  return target;
}

size_t CommonNotifySignalKickedOut::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonNotifySignalKickedOut)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string reason = 1;
  if (!this->_internal_reason().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_reason());
  }

  // string b = 2;
  if (!this->_internal_b().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_b());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommonNotifySignalKickedOut::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommonNotifySignalKickedOut::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommonNotifySignalKickedOut::GetClassData() const { return &_class_data_; }


void CommonNotifySignalKickedOut::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommonNotifySignalKickedOut*>(&to_msg);
  auto& from = static_cast<const CommonNotifySignalKickedOut&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonNotifySignalKickedOut)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_reason().empty()) {
    _this->_internal_set_reason(from._internal_reason());
  }
  if (!from._internal_b().empty()) {
    _this->_internal_set_b(from._internal_b());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommonNotifySignalKickedOut::CopyFrom(const CommonNotifySignalKickedOut& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonNotifySignalKickedOut)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonNotifySignalKickedOut::IsInitialized() const {
  return true;
}

void CommonNotifySignalKickedOut::InternalSwap(CommonNotifySignalKickedOut* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.reason_, lhs_arena,
      &other->_impl_.reason_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.b_, lhs_arena,
      &other->_impl_.b_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonNotifySignalKickedOut::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CommonNotifySignalKickedOut_2eproto_getter, &descriptor_table_CommonNotifySignalKickedOut_2eproto_once,
      file_level_metadata_CommonNotifySignalKickedOut_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonNotifySignalKickedOut*
Arena::CreateMaybeMessage< ::AcFunDanmu::CommonNotifySignalKickedOut >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonNotifySignalKickedOut >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
