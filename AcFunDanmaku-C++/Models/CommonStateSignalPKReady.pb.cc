// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalPKReady.proto

#include "CommonStateSignalPKReady.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_PkPlayerInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_PkPlayerInfo_PkPlayerInfo_2eproto;
namespace AcFunDanmu {
class CommonStateSignalPKReadyDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CommonStateSignalPKReady> _instance;
} _CommonStateSignalPKReady_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_CommonStateSignalPKReady_CommonStateSignalPKReady_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_CommonStateSignalPKReady_default_instance_;
    new (ptr) ::AcFunDanmu::CommonStateSignalPKReady();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_CommonStateSignalPKReady_CommonStateSignalPKReady_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_CommonStateSignalPKReady_CommonStateSignalPKReady_2eproto}, {
      &scc_info_PkPlayerInfo_PkPlayerInfo_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_CommonStateSignalPKReady_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_CommonStateSignalPKReady_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalPKReady_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CommonStateSignalPKReady_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPKReady, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPKReady, a_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPKReady, b_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::CommonStateSignalPKReady)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_CommonStateSignalPKReady_default_instance_),
};

const char descriptor_table_protodef_CommonStateSignalPKReady_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036CommonStateSignalPKReady.proto\022\nAcFunD"
  "anmu\032\022PkPlayerInfo.proto\"J\n\030CommonStateS"
  "ignalPKReady\022\t\n\001a\030\001 \001(\t\022#\n\001b\030\002 \003(\0132\030.AcF"
  "unDanmu.PkPlayerInfob\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonStateSignalPKReady_2eproto_deps[1] = {
  &::descriptor_table_PkPlayerInfo_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommonStateSignalPKReady_2eproto_sccs[1] = {
  &scc_info_CommonStateSignalPKReady_CommonStateSignalPKReady_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonStateSignalPKReady_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalPKReady_2eproto = {
  false, false, descriptor_table_protodef_CommonStateSignalPKReady_2eproto, "CommonStateSignalPKReady.proto", 148,
  &descriptor_table_CommonStateSignalPKReady_2eproto_once, descriptor_table_CommonStateSignalPKReady_2eproto_sccs, descriptor_table_CommonStateSignalPKReady_2eproto_deps, 1, 1,
  schemas, file_default_instances, TableStruct_CommonStateSignalPKReady_2eproto::offsets,
  file_level_metadata_CommonStateSignalPKReady_2eproto, 1, file_level_enum_descriptors_CommonStateSignalPKReady_2eproto, file_level_service_descriptors_CommonStateSignalPKReady_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_CommonStateSignalPKReady_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_CommonStateSignalPKReady_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalPKReady::_Internal {
 public:
};

void CommonStateSignalPKReady::clear_b() {
  b_.Clear();
}
CommonStateSignalPKReady::CommonStateSignalPKReady(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  b_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalPKReady)
}
CommonStateSignalPKReady::CommonStateSignalPKReady(const CommonStateSignalPKReady& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      b_(from.b_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  a_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_a().empty()) {
    a_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_a(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalPKReady)
}

void CommonStateSignalPKReady::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CommonStateSignalPKReady_CommonStateSignalPKReady_2eproto.base);
  a_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

CommonStateSignalPKReady::~CommonStateSignalPKReady() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalPKReady)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CommonStateSignalPKReady::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  a_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CommonStateSignalPKReady::ArenaDtor(void* object) {
  CommonStateSignalPKReady* _this = reinterpret_cast< CommonStateSignalPKReady* >(object);
  (void)_this;
}
void CommonStateSignalPKReady::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CommonStateSignalPKReady::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CommonStateSignalPKReady& CommonStateSignalPKReady::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CommonStateSignalPKReady_CommonStateSignalPKReady_2eproto.base);
  return *internal_default_instance();
}


void CommonStateSignalPKReady::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalPKReady)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  b_.Clear();
  a_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalPKReady::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_a();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.CommonStateSignalPKReady.a"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.PkPlayerInfo b = 2;
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

::PROTOBUF_NAMESPACE_ID::uint8* CommonStateSignalPKReady::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalPKReady)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string a = 1;
  if (this->a().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_a().data(), static_cast<int>(this->_internal_a().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonStateSignalPKReady.a");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_a(), target);
  }

  // repeated .AcFunDanmu.PkPlayerInfo b = 2;
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
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalPKReady)
  return target;
}

size_t CommonStateSignalPKReady::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalPKReady)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.PkPlayerInfo b = 2;
  total_size += 1UL * this->_internal_b_size();
  for (const auto& msg : this->b_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string a = 1;
  if (this->a().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
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

void CommonStateSignalPKReady::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.CommonStateSignalPKReady)
  GOOGLE_DCHECK_NE(&from, this);
  const CommonStateSignalPKReady* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CommonStateSignalPKReady>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.CommonStateSignalPKReady)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.CommonStateSignalPKReady)
    MergeFrom(*source);
  }
}

void CommonStateSignalPKReady::MergeFrom(const CommonStateSignalPKReady& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalPKReady)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  b_.MergeFrom(from.b_);
  if (from.a().size() > 0) {
    _internal_set_a(from._internal_a());
  }
}

void CommonStateSignalPKReady::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.CommonStateSignalPKReady)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommonStateSignalPKReady::CopyFrom(const CommonStateSignalPKReady& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalPKReady)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalPKReady::IsInitialized() const {
  return true;
}

void CommonStateSignalPKReady::InternalSwap(CommonStateSignalPKReady* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  b_.InternalSwap(&other->b_);
  a_.Swap(&other->a_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalPKReady::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalPKReady* Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalPKReady >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalPKReady >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
