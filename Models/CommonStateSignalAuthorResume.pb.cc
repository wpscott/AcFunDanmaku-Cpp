// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalAuthorResume.proto

#include "CommonStateSignalAuthorResume.pb.h"

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
PROTOBUF_CONSTEXPR CommonStateSignalAuthorResume::CommonStateSignalAuthorResume(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.a_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommonStateSignalAuthorResumeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommonStateSignalAuthorResumeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommonStateSignalAuthorResumeDefaultTypeInternal() {}
  union {
    CommonStateSignalAuthorResume _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommonStateSignalAuthorResumeDefaultTypeInternal _CommonStateSignalAuthorResume_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CommonStateSignalAuthorResume_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CommonStateSignalAuthorResume_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalAuthorResume_2eproto = nullptr;

const uint32_t TableStruct_CommonStateSignalAuthorResume_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorResume, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalAuthorResume, _impl_.a_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::CommonStateSignalAuthorResume)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_CommonStateSignalAuthorResume_default_instance_._instance,
};

const char descriptor_table_protodef_CommonStateSignalAuthorResume_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#CommonStateSignalAuthorResume.proto\022\nA"
  "cFunDanmu\"*\n\035CommonStateSignalAuthorResu"
  "me\022\t\n\001a\030\001 \001(\003b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_CommonStateSignalAuthorResume_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CommonStateSignalAuthorResume_2eproto = {
    false, false, 101, descriptor_table_protodef_CommonStateSignalAuthorResume_2eproto,
    "CommonStateSignalAuthorResume.proto",
    &descriptor_table_CommonStateSignalAuthorResume_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_CommonStateSignalAuthorResume_2eproto::offsets,
    file_level_metadata_CommonStateSignalAuthorResume_2eproto, file_level_enum_descriptors_CommonStateSignalAuthorResume_2eproto,
    file_level_service_descriptors_CommonStateSignalAuthorResume_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CommonStateSignalAuthorResume_2eproto_getter() {
  return &descriptor_table_CommonStateSignalAuthorResume_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CommonStateSignalAuthorResume_2eproto(&descriptor_table_CommonStateSignalAuthorResume_2eproto);
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalAuthorResume::_Internal {
 public:
};

CommonStateSignalAuthorResume::CommonStateSignalAuthorResume(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalAuthorResume)
}
CommonStateSignalAuthorResume::CommonStateSignalAuthorResume(const CommonStateSignalAuthorResume& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommonStateSignalAuthorResume* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.a_ = from._impl_.a_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalAuthorResume)
}

inline void CommonStateSignalAuthorResume::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.a_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

CommonStateSignalAuthorResume::~CommonStateSignalAuthorResume() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalAuthorResume)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommonStateSignalAuthorResume::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void CommonStateSignalAuthorResume::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommonStateSignalAuthorResume::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalAuthorResume)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.a_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalAuthorResume::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* CommonStateSignalAuthorResume::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalAuthorResume)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 a = 1;
  if (this->_internal_a() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_a(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalAuthorResume)
  return target;
}

size_t CommonStateSignalAuthorResume::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalAuthorResume)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 a = 1;
  if (this->_internal_a() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_a());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommonStateSignalAuthorResume::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommonStateSignalAuthorResume::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommonStateSignalAuthorResume::GetClassData() const { return &_class_data_; }


void CommonStateSignalAuthorResume::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommonStateSignalAuthorResume*>(&to_msg);
  auto& from = static_cast<const CommonStateSignalAuthorResume&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalAuthorResume)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_a() != 0) {
    _this->_internal_set_a(from._internal_a());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommonStateSignalAuthorResume::CopyFrom(const CommonStateSignalAuthorResume& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalAuthorResume)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalAuthorResume::IsInitialized() const {
  return true;
}

void CommonStateSignalAuthorResume::InternalSwap(CommonStateSignalAuthorResume* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.a_, other->_impl_.a_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalAuthorResume::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CommonStateSignalAuthorResume_2eproto_getter, &descriptor_table_CommonStateSignalAuthorResume_2eproto_once,
      file_level_metadata_CommonStateSignalAuthorResume_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalAuthorResume*
Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalAuthorResume >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalAuthorResume >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
