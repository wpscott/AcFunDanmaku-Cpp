// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PkAudienceContributionInfo.proto

#include "PkAudienceContributionInfo.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_PkAudienceContributionDetail_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PkAudienceContributionDetail_PkAudienceContributionDetail_2eproto;
namespace AcFunDanmu {
class PkAudienceContributionInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PkAudienceContributionInfo> _instance;
} _PkAudienceContributionInfo_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_PkAudienceContributionInfo_PkAudienceContributionInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_PkAudienceContributionInfo_default_instance_;
    new (ptr) ::AcFunDanmu::PkAudienceContributionInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PkAudienceContributionInfo_PkAudienceContributionInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_PkAudienceContributionInfo_PkAudienceContributionInfo_2eproto}, {
      &scc_info_PkAudienceContributionDetail_PkAudienceContributionDetail_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PkAudienceContributionInfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PkAudienceContributionInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PkAudienceContributionInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PkAudienceContributionInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkAudienceContributionInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkAudienceContributionInfo, a_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkAudienceContributionInfo, b_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::PkAudienceContributionInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_PkAudienceContributionInfo_default_instance_),
};

const char descriptor_table_protodef_PkAudienceContributionInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n PkAudienceContributionInfo.proto\022\nAcFu"
  "nDanmu\032\"PkAudienceContributionDetail.pro"
  "to\"\\\n\032PkAudienceContributionInfo\022\t\n\001a\030\001 "
  "\001(\003\0223\n\001b\030\002 \003(\0132(.AcFunDanmu.PkAudienceCo"
  "ntributionDetailb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_PkAudienceContributionInfo_2eproto_deps[1] = {
  &::descriptor_table_PkAudienceContributionDetail_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_PkAudienceContributionInfo_2eproto_sccs[1] = {
  &scc_info_PkAudienceContributionInfo_PkAudienceContributionInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PkAudienceContributionInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PkAudienceContributionInfo_2eproto = {
  false, false, descriptor_table_protodef_PkAudienceContributionInfo_2eproto, "PkAudienceContributionInfo.proto", 184,
  &descriptor_table_PkAudienceContributionInfo_2eproto_once, descriptor_table_PkAudienceContributionInfo_2eproto_sccs, descriptor_table_PkAudienceContributionInfo_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_PkAudienceContributionInfo_2eproto::offsets,
  file_level_metadata_PkAudienceContributionInfo_2eproto, 1, file_level_enum_descriptors_PkAudienceContributionInfo_2eproto, file_level_service_descriptors_PkAudienceContributionInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_PkAudienceContributionInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_PkAudienceContributionInfo_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class PkAudienceContributionInfo::_Internal {
 public:
};

void PkAudienceContributionInfo::clear_b() {
  b_.Clear();
}
PkAudienceContributionInfo::PkAudienceContributionInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  b_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.PkAudienceContributionInfo)
}
PkAudienceContributionInfo::PkAudienceContributionInfo(const PkAudienceContributionInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      b_(from.b_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  a_ = from.a_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.PkAudienceContributionInfo)
}

void PkAudienceContributionInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PkAudienceContributionInfo_PkAudienceContributionInfo_2eproto.base);
  a_ = PROTOBUF_LONGLONG(0);
}

PkAudienceContributionInfo::~PkAudienceContributionInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.PkAudienceContributionInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PkAudienceContributionInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void PkAudienceContributionInfo::ArenaDtor(void* object) {
  PkAudienceContributionInfo* _this = reinterpret_cast< PkAudienceContributionInfo* >(object);
  (void)_this;
}
void PkAudienceContributionInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PkAudienceContributionInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PkAudienceContributionInfo& PkAudienceContributionInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PkAudienceContributionInfo_PkAudienceContributionInfo_2eproto.base);
  return *internal_default_instance();
}


void PkAudienceContributionInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.PkAudienceContributionInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  b_.Clear();
  a_ = PROTOBUF_LONGLONG(0);
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PkAudienceContributionInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          a_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.PkAudienceContributionDetail b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_b(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else goto handle_unusual;
        continue;
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->SetLastTag(tag);
          goto success;
        }
        ptr = UnknownFieldParse(tag,
            _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
            ptr, ctx);
        CHK_(ptr != nullptr);
        continue;
      }
    }  // switch
  }  // while
success:
  return ptr;
failure:
  ptr = nullptr;
  goto success;
#undef CHK_
}

::PROTOBUF_NAMESPACE_ID::uint8* PkAudienceContributionInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.PkAudienceContributionInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 a = 1;
  if (this->a() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_a(), target);
  }

  // repeated .AcFunDanmu.PkAudienceContributionDetail b = 2;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_b_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, this->_internal_b(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.PkAudienceContributionInfo)
  return target;
}

size_t PkAudienceContributionInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.PkAudienceContributionInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.PkAudienceContributionDetail b = 2;
  total_size += 1UL * this->_internal_b_size();
  for (const auto& msg : this->b_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // int64 a = 1;
  if (this->a() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_a());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PkAudienceContributionInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.PkAudienceContributionInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const PkAudienceContributionInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PkAudienceContributionInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.PkAudienceContributionInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.PkAudienceContributionInfo)
    MergeFrom(*source);
  }
}

void PkAudienceContributionInfo::MergeFrom(const PkAudienceContributionInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.PkAudienceContributionInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  b_.MergeFrom(from.b_);
  if (from.a() != 0) {
    _internal_set_a(from._internal_a());
  }
}

void PkAudienceContributionInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.PkAudienceContributionInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PkAudienceContributionInfo::CopyFrom(const PkAudienceContributionInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.PkAudienceContributionInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PkAudienceContributionInfo::IsInitialized() const {
  return true;
}

void PkAudienceContributionInfo::InternalSwap(PkAudienceContributionInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  b_.InternalSwap(&other->b_);
  swap(a_, other->a_);
}

::PROTOBUF_NAMESPACE_ID::Metadata PkAudienceContributionInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::PkAudienceContributionInfo* Arena::CreateMaybeMessage< ::AcFunDanmu::PkAudienceContributionInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::PkAudienceContributionInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
