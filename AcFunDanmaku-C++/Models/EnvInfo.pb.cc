// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: EnvInfo.proto

#include "EnvInfo.pb.h"

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
namespace AcFunDanmu {
class EnvInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<EnvInfo> _instance;
} _EnvInfo_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_EnvInfo_EnvInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_EnvInfo_default_instance_;
    new (ptr) ::AcFunDanmu::EnvInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_EnvInfo_EnvInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_EnvInfo_EnvInfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_EnvInfo_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_EnvInfo_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_EnvInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_EnvInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::EnvInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::EnvInfo, networktype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::EnvInfo, appname_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::EnvInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_EnvInfo_default_instance_),
};

const char descriptor_table_protodef_EnvInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\rEnvInfo.proto\022\nAcFunDanmu\"\207\001\n\007EnvInfo\022"
  "4\n\013networkType\030\001 \001(\0162\037.AcFunDanmu.EnvInf"
  "o.NetworkType\022\017\n\007appName\030\002 \001(\014\"5\n\013Networ"
  "kType\022\014\n\010kInvalid\020\000\022\t\n\005kWIFI\020\001\022\r\n\tkCellu"
  "lar\020\002b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_EnvInfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_EnvInfo_2eproto_sccs[1] = {
  &scc_info_EnvInfo_EnvInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_EnvInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_EnvInfo_2eproto = {
  false, false, descriptor_table_protodef_EnvInfo_2eproto, "EnvInfo.proto", 173,
  &descriptor_table_EnvInfo_2eproto_once, descriptor_table_EnvInfo_2eproto_sccs, descriptor_table_EnvInfo_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_EnvInfo_2eproto::offsets,
  file_level_metadata_EnvInfo_2eproto, 1, file_level_enum_descriptors_EnvInfo_2eproto, file_level_service_descriptors_EnvInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_EnvInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_EnvInfo_2eproto)), true);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* EnvInfo_NetworkType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_EnvInfo_2eproto);
  return file_level_enum_descriptors_EnvInfo_2eproto[0];
}
bool EnvInfo_NetworkType_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr EnvInfo_NetworkType EnvInfo::kInvalid;
constexpr EnvInfo_NetworkType EnvInfo::kWIFI;
constexpr EnvInfo_NetworkType EnvInfo::kCellular;
constexpr EnvInfo_NetworkType EnvInfo::NetworkType_MIN;
constexpr EnvInfo_NetworkType EnvInfo::NetworkType_MAX;
constexpr int EnvInfo::NetworkType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class EnvInfo::_Internal {
 public:
};

EnvInfo::EnvInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.EnvInfo)
}
EnvInfo::EnvInfo(const EnvInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  appname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_appname().empty()) {
    appname_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_appname(), 
      GetArena());
  }
  networktype_ = from.networktype_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.EnvInfo)
}

void EnvInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_EnvInfo_EnvInfo_2eproto.base);
  appname_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  networktype_ = 0;
}

EnvInfo::~EnvInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.EnvInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void EnvInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  appname_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void EnvInfo::ArenaDtor(void* object) {
  EnvInfo* _this = reinterpret_cast< EnvInfo* >(object);
  (void)_this;
}
void EnvInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void EnvInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const EnvInfo& EnvInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_EnvInfo_EnvInfo_2eproto.base);
  return *internal_default_instance();
}


void EnvInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.EnvInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  appname_.ClearToEmpty();
  networktype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* EnvInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .AcFunDanmu.EnvInfo.NetworkType networkType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_networktype(static_cast<::AcFunDanmu::EnvInfo_NetworkType>(val));
        } else goto handle_unusual;
        continue;
      // bytes appName = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_appname();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* EnvInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.EnvInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.EnvInfo.NetworkType networkType = 1;
  if (this->networktype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      1, this->_internal_networktype(), target);
  }

  // bytes appName = 2;
  if (this->appname().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_appname(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.EnvInfo)
  return target;
}

size_t EnvInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.EnvInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bytes appName = 2;
  if (this->appname().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_appname());
  }

  // .AcFunDanmu.EnvInfo.NetworkType networkType = 1;
  if (this->networktype() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_networktype());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void EnvInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.EnvInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const EnvInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<EnvInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.EnvInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.EnvInfo)
    MergeFrom(*source);
  }
}

void EnvInfo::MergeFrom(const EnvInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.EnvInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.appname().size() > 0) {
    _internal_set_appname(from._internal_appname());
  }
  if (from.networktype() != 0) {
    _internal_set_networktype(from._internal_networktype());
  }
}

void EnvInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.EnvInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EnvInfo::CopyFrom(const EnvInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.EnvInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EnvInfo::IsInitialized() const {
  return true;
}

void EnvInfo::InternalSwap(EnvInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  appname_.Swap(&other->appname_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(networktype_, other->networktype_);
}

::PROTOBUF_NAMESPACE_ID::Metadata EnvInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::EnvInfo* Arena::CreateMaybeMessage< ::AcFunDanmu::EnvInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::EnvInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
