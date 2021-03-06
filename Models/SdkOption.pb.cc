// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SdkOption.proto

#include "SdkOption.pb.h"

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
class SdkOptionDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<SdkOption> _instance;
} _SdkOption_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_SdkOption_SdkOption_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_SdkOption_default_instance_;
    new (ptr) ::AcFunDanmu::SdkOption();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_SdkOption_SdkOption_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_SdkOption_SdkOption_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_SdkOption_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_SdkOption_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_SdkOption_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_SdkOption_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::SdkOption, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::SdkOption, reportintervalseconds_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::SdkOption, reportsecurity_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::SdkOption, lz4compressionthresholdbytes_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::SdkOption, netcheckservers_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::SdkOption)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_SdkOption_default_instance_),
};

const char descriptor_table_protodef_SdkOption_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\017SdkOption.proto\022\nAcFunDanmu\"\201\001\n\tSdkOpt"
  "ion\022\035\n\025reportIntervalSeconds\030\001 \001(\005\022\026\n\016re"
  "portSecurity\030\002 \001(\t\022$\n\034lz4CompressionThre"
  "sholdBytes\030\003 \001(\005\022\027\n\017netCheckServers\030\004 \003("
  "\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_SdkOption_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_SdkOption_2eproto_sccs[1] = {
  &scc_info_SdkOption_SdkOption_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_SdkOption_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SdkOption_2eproto = {
  false, false, descriptor_table_protodef_SdkOption_2eproto, "SdkOption.proto", 169,
  &descriptor_table_SdkOption_2eproto_once, descriptor_table_SdkOption_2eproto_sccs, descriptor_table_SdkOption_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_SdkOption_2eproto::offsets,
  file_level_metadata_SdkOption_2eproto, 1, file_level_enum_descriptors_SdkOption_2eproto, file_level_service_descriptors_SdkOption_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_SdkOption_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_SdkOption_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class SdkOption::_Internal {
 public:
};

SdkOption::SdkOption(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  netcheckservers_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.SdkOption)
}
SdkOption::SdkOption(const SdkOption& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      netcheckservers_(from.netcheckservers_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  reportsecurity_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_reportsecurity().empty()) {
    reportsecurity_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_reportsecurity(), 
      GetArena());
  }
  ::memcpy(&reportintervalseconds_, &from.reportintervalseconds_,
    static_cast<size_t>(reinterpret_cast<char*>(&lz4compressionthresholdbytes_) -
    reinterpret_cast<char*>(&reportintervalseconds_)) + sizeof(lz4compressionthresholdbytes_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.SdkOption)
}

void SdkOption::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_SdkOption_SdkOption_2eproto.base);
  reportsecurity_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&reportintervalseconds_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&lz4compressionthresholdbytes_) -
      reinterpret_cast<char*>(&reportintervalseconds_)) + sizeof(lz4compressionthresholdbytes_));
}

SdkOption::~SdkOption() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.SdkOption)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void SdkOption::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  reportsecurity_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void SdkOption::ArenaDtor(void* object) {
  SdkOption* _this = reinterpret_cast< SdkOption* >(object);
  (void)_this;
}
void SdkOption::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void SdkOption::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const SdkOption& SdkOption::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_SdkOption_SdkOption_2eproto.base);
  return *internal_default_instance();
}


void SdkOption::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.SdkOption)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  netcheckservers_.Clear();
  reportsecurity_.ClearToEmpty();
  ::memset(&reportintervalseconds_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&lz4compressionthresholdbytes_) -
      reinterpret_cast<char*>(&reportintervalseconds_)) + sizeof(lz4compressionthresholdbytes_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SdkOption::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int32 reportIntervalSeconds = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          reportintervalseconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string reportSecurity = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_reportsecurity();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.SdkOption.reportSecurity"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int32 lz4CompressionThresholdBytes = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          lz4compressionthresholdbytes_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string netCheckServers = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_netcheckservers();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.SdkOption.netCheckServers"));
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* SdkOption::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.SdkOption)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 reportIntervalSeconds = 1;
  if (this->reportintervalseconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(1, this->_internal_reportintervalseconds(), target);
  }

  // string reportSecurity = 2;
  if (this->reportsecurity().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_reportsecurity().data(), static_cast<int>(this->_internal_reportsecurity().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.SdkOption.reportSecurity");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_reportsecurity(), target);
  }

  // int32 lz4CompressionThresholdBytes = 3;
  if (this->lz4compressionthresholdbytes() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(3, this->_internal_lz4compressionthresholdbytes(), target);
  }

  // repeated string netCheckServers = 4;
  for (int i = 0, n = this->_internal_netcheckservers_size(); i < n; i++) {
    const auto& s = this->_internal_netcheckservers(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.SdkOption.netCheckServers");
    target = stream->WriteString(4, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.SdkOption)
  return target;
}

size_t SdkOption::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.SdkOption)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string netCheckServers = 4;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(netcheckservers_.size());
  for (int i = 0, n = netcheckservers_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      netcheckservers_.Get(i));
  }

  // string reportSecurity = 2;
  if (this->reportsecurity().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_reportsecurity());
  }

  // int32 reportIntervalSeconds = 1;
  if (this->reportintervalseconds() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_reportintervalseconds());
  }

  // int32 lz4CompressionThresholdBytes = 3;
  if (this->lz4compressionthresholdbytes() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_lz4compressionthresholdbytes());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void SdkOption::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.SdkOption)
  GOOGLE_DCHECK_NE(&from, this);
  const SdkOption* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<SdkOption>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.SdkOption)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.SdkOption)
    MergeFrom(*source);
  }
}

void SdkOption::MergeFrom(const SdkOption& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.SdkOption)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  netcheckservers_.MergeFrom(from.netcheckservers_);
  if (from.reportsecurity().size() > 0) {
    _internal_set_reportsecurity(from._internal_reportsecurity());
  }
  if (from.reportintervalseconds() != 0) {
    _internal_set_reportintervalseconds(from._internal_reportintervalseconds());
  }
  if (from.lz4compressionthresholdbytes() != 0) {
    _internal_set_lz4compressionthresholdbytes(from._internal_lz4compressionthresholdbytes());
  }
}

void SdkOption::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.SdkOption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SdkOption::CopyFrom(const SdkOption& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.SdkOption)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SdkOption::IsInitialized() const {
  return true;
}

void SdkOption::InternalSwap(SdkOption* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  netcheckservers_.InternalSwap(&other->netcheckservers_);
  reportsecurity_.Swap(&other->reportsecurity_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SdkOption, lz4compressionthresholdbytes_)
      + sizeof(SdkOption::lz4compressionthresholdbytes_)
      - PROTOBUF_FIELD_OFFSET(SdkOption, reportintervalseconds_)>(
          reinterpret_cast<char*>(&reportintervalseconds_),
          reinterpret_cast<char*>(&other->reportintervalseconds_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SdkOption::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::SdkOption* Arena::CreateMaybeMessage< ::AcFunDanmu::SdkOption >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::SdkOption >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
