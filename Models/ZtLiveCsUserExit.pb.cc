// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveCsUserExit.proto

#include "ZtLiveCsUserExit.pb.h"

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
namespace AcFunDanmu {
constexpr ZtLiveCsUserExit::ZtLiveCsUserExit(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct ZtLiveCsUserExitDefaultTypeInternal {
  constexpr ZtLiveCsUserExitDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ZtLiveCsUserExitDefaultTypeInternal() {}
  union {
    ZtLiveCsUserExit _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ZtLiveCsUserExitDefaultTypeInternal _ZtLiveCsUserExit_default_instance_;
constexpr ZtLiveCsUserExitAck::ZtLiveCsUserExitAck(
  ::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized){}
struct ZtLiveCsUserExitAckDefaultTypeInternal {
  constexpr ZtLiveCsUserExitAckDefaultTypeInternal()
    : _instance(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized{}) {}
  ~ZtLiveCsUserExitAckDefaultTypeInternal() {}
  union {
    ZtLiveCsUserExitAck _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT ZtLiveCsUserExitAckDefaultTypeInternal _ZtLiveCsUserExitAck_default_instance_;
}  // namespace AcFunDanmu
static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ZtLiveCsUserExit_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ZtLiveCsUserExit_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ZtLiveCsUserExit_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ZtLiveCsUserExit_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsUserExit, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveCsUserExitAck, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::ZtLiveCsUserExit)},
  { 5, -1, sizeof(::AcFunDanmu::ZtLiveCsUserExitAck)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtLiveCsUserExit_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtLiveCsUserExitAck_default_instance_),
};

const char descriptor_table_protodef_ZtLiveCsUserExit_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026ZtLiveCsUserExit.proto\022\nAcFunDanmu\"\022\n\020"
  "ZtLiveCsUserExit\"\025\n\023ZtLiveCsUserExitAckb"
  "\006proto3"
  ;
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ZtLiveCsUserExit_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveCsUserExit_2eproto = {
  false, false, 87, descriptor_table_protodef_ZtLiveCsUserExit_2eproto, "ZtLiveCsUserExit.proto", 
  &descriptor_table_ZtLiveCsUserExit_2eproto_once, nullptr, 0, 2,
  schemas, file_default_instances, TableStruct_ZtLiveCsUserExit_2eproto::offsets,
  file_level_metadata_ZtLiveCsUserExit_2eproto, file_level_enum_descriptors_ZtLiveCsUserExit_2eproto, file_level_service_descriptors_ZtLiveCsUserExit_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable* descriptor_table_ZtLiveCsUserExit_2eproto_getter() {
  return &descriptor_table_ZtLiveCsUserExit_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY static ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptorsRunner dynamic_init_dummy_ZtLiveCsUserExit_2eproto(&descriptor_table_ZtLiveCsUserExit_2eproto);
namespace AcFunDanmu {

// ===================================================================

class ZtLiveCsUserExit::_Internal {
 public:
};

ZtLiveCsUserExit::ZtLiveCsUserExit(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveCsUserExit)
}
ZtLiveCsUserExit::ZtLiveCsUserExit(const ZtLiveCsUserExit& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveCsUserExit)
}

void ZtLiveCsUserExit::SharedCtor() {
}

ZtLiveCsUserExit::~ZtLiveCsUserExit() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveCsUserExit)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtLiveCsUserExit::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ZtLiveCsUserExit::ArenaDtor(void* object) {
  ZtLiveCsUserExit* _this = reinterpret_cast< ZtLiveCsUserExit* >(object);
  (void)_this;
}
void ZtLiveCsUserExit::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtLiveCsUserExit::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ZtLiveCsUserExit::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveCsUserExit)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveCsUserExit::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ZtLiveCsUserExit::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveCsUserExit)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveCsUserExit)
  return target;
}

size_t ZtLiveCsUserExit::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveCsUserExit)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtLiveCsUserExit::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtLiveCsUserExit)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtLiveCsUserExit* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtLiveCsUserExit>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtLiveCsUserExit)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtLiveCsUserExit)
    MergeFrom(*source);
  }
}

void ZtLiveCsUserExit::MergeFrom(const ZtLiveCsUserExit& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveCsUserExit)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void ZtLiveCsUserExit::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtLiveCsUserExit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtLiveCsUserExit::CopyFrom(const ZtLiveCsUserExit& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveCsUserExit)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveCsUserExit::IsInitialized() const {
  return true;
}

void ZtLiveCsUserExit::InternalSwap(ZtLiveCsUserExit* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveCsUserExit::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ZtLiveCsUserExit_2eproto_getter, &descriptor_table_ZtLiveCsUserExit_2eproto_once,
      file_level_metadata_ZtLiveCsUserExit_2eproto[0]);
}

// ===================================================================

class ZtLiveCsUserExitAck::_Internal {
 public:
};

ZtLiveCsUserExitAck::ZtLiveCsUserExitAck(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveCsUserExitAck)
}
ZtLiveCsUserExitAck::ZtLiveCsUserExitAck(const ZtLiveCsUserExitAck& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveCsUserExitAck)
}

void ZtLiveCsUserExitAck::SharedCtor() {
}

ZtLiveCsUserExitAck::~ZtLiveCsUserExitAck() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveCsUserExitAck)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtLiveCsUserExitAck::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void ZtLiveCsUserExitAck::ArenaDtor(void* object) {
  ZtLiveCsUserExitAck* _this = reinterpret_cast< ZtLiveCsUserExitAck* >(object);
  (void)_this;
}
void ZtLiveCsUserExitAck::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtLiveCsUserExitAck::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}

void ZtLiveCsUserExitAck::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveCsUserExitAck)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveCsUserExitAck::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
        if ((tag == 0) || ((tag & 7) == 4)) {
          CHK_(ptr);
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* ZtLiveCsUserExitAck::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveCsUserExitAck)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveCsUserExitAck)
  return target;
}

size_t ZtLiveCsUserExitAck::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveCsUserExitAck)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtLiveCsUserExitAck::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtLiveCsUserExitAck)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtLiveCsUserExitAck* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtLiveCsUserExitAck>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtLiveCsUserExitAck)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtLiveCsUserExitAck)
    MergeFrom(*source);
  }
}

void ZtLiveCsUserExitAck::MergeFrom(const ZtLiveCsUserExitAck& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveCsUserExitAck)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

}

void ZtLiveCsUserExitAck::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtLiveCsUserExitAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtLiveCsUserExitAck::CopyFrom(const ZtLiveCsUserExitAck& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveCsUserExitAck)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveCsUserExitAck::IsInitialized() const {
  return true;
}

void ZtLiveCsUserExitAck::InternalSwap(ZtLiveCsUserExitAck* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveCsUserExitAck::GetMetadata() const {
  return ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(
      &descriptor_table_ZtLiveCsUserExit_2eproto_getter, &descriptor_table_ZtLiveCsUserExit_2eproto_once,
      file_level_metadata_ZtLiveCsUserExit_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveCsUserExit* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveCsUserExit >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveCsUserExit >(arena);
}
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveCsUserExitAck* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveCsUserExitAck >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveCsUserExitAck >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
