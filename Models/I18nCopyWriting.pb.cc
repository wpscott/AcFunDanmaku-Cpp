// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: I18nCopyWriting.proto

#include "I18nCopyWriting.pb.h"

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
class I18nCopyWritingDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<I18nCopyWriting> _instance;
} _I18nCopyWriting_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_I18nCopyWriting_I18nCopyWriting_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_I18nCopyWriting_default_instance_;
    new (ptr) ::AcFunDanmu::I18nCopyWriting();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_I18nCopyWriting_I18nCopyWriting_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_I18nCopyWriting_I18nCopyWriting_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_I18nCopyWriting_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_I18nCopyWriting_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_I18nCopyWriting_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_I18nCopyWriting_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::I18nCopyWriting, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::I18nCopyWriting, formatkey_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::I18nCopyWriting, formatparam_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::I18nCopyWriting)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_I18nCopyWriting_default_instance_),
};

const char descriptor_table_protodef_I18nCopyWriting_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\025I18nCopyWriting.proto\022\nAcFunDanmu\"9\n\017I"
  "18nCopyWriting\022\021\n\tformatKey\030\001 \001(\t\022\023\n\013for"
  "matParam\030\002 \003(\tb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_I18nCopyWriting_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_I18nCopyWriting_2eproto_sccs[1] = {
  &scc_info_I18nCopyWriting_I18nCopyWriting_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_I18nCopyWriting_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_I18nCopyWriting_2eproto = {
  false, false, descriptor_table_protodef_I18nCopyWriting_2eproto, "I18nCopyWriting.proto", 102,
  &descriptor_table_I18nCopyWriting_2eproto_once, descriptor_table_I18nCopyWriting_2eproto_sccs, descriptor_table_I18nCopyWriting_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_I18nCopyWriting_2eproto::offsets,
  file_level_metadata_I18nCopyWriting_2eproto, 1, file_level_enum_descriptors_I18nCopyWriting_2eproto, file_level_service_descriptors_I18nCopyWriting_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_I18nCopyWriting_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_I18nCopyWriting_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class I18nCopyWriting::_Internal {
 public:
};

I18nCopyWriting::I18nCopyWriting(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  formatparam_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.I18nCopyWriting)
}
I18nCopyWriting::I18nCopyWriting(const I18nCopyWriting& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      formatparam_(from.formatparam_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  formatkey_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_formatkey().empty()) {
    formatkey_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_formatkey(), 
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.I18nCopyWriting)
}

void I18nCopyWriting::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_I18nCopyWriting_I18nCopyWriting_2eproto.base);
  formatkey_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

I18nCopyWriting::~I18nCopyWriting() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.I18nCopyWriting)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void I18nCopyWriting::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  formatkey_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void I18nCopyWriting::ArenaDtor(void* object) {
  I18nCopyWriting* _this = reinterpret_cast< I18nCopyWriting* >(object);
  (void)_this;
}
void I18nCopyWriting::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void I18nCopyWriting::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const I18nCopyWriting& I18nCopyWriting::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_I18nCopyWriting_I18nCopyWriting_2eproto.base);
  return *internal_default_instance();
}


void I18nCopyWriting::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.I18nCopyWriting)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  formatparam_.Clear();
  formatkey_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* I18nCopyWriting::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string formatKey = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_formatkey();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.I18nCopyWriting.formatKey"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated string formatParam = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_formatparam();
            ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.I18nCopyWriting.formatParam"));
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

::PROTOBUF_NAMESPACE_ID::uint8* I18nCopyWriting::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.I18nCopyWriting)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string formatKey = 1;
  if (this->formatkey().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_formatkey().data(), static_cast<int>(this->_internal_formatkey().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.I18nCopyWriting.formatKey");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_formatkey(), target);
  }

  // repeated string formatParam = 2;
  for (int i = 0, n = this->_internal_formatparam_size(); i < n; i++) {
    const auto& s = this->_internal_formatparam(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.I18nCopyWriting.formatParam");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.I18nCopyWriting)
  return target;
}

size_t I18nCopyWriting::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.I18nCopyWriting)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string formatParam = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(formatparam_.size());
  for (int i = 0, n = formatparam_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      formatparam_.Get(i));
  }

  // string formatKey = 1;
  if (this->formatkey().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_formatkey());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void I18nCopyWriting::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.I18nCopyWriting)
  GOOGLE_DCHECK_NE(&from, this);
  const I18nCopyWriting* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<I18nCopyWriting>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.I18nCopyWriting)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.I18nCopyWriting)
    MergeFrom(*source);
  }
}

void I18nCopyWriting::MergeFrom(const I18nCopyWriting& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.I18nCopyWriting)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  formatparam_.MergeFrom(from.formatparam_);
  if (from.formatkey().size() > 0) {
    _internal_set_formatkey(from._internal_formatkey());
  }
}

void I18nCopyWriting::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.I18nCopyWriting)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void I18nCopyWriting::CopyFrom(const I18nCopyWriting& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.I18nCopyWriting)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool I18nCopyWriting::IsInitialized() const {
  return true;
}

void I18nCopyWriting::InternalSwap(I18nCopyWriting* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  formatparam_.InternalSwap(&other->formatparam_);
  formatkey_.Swap(&other->formatkey_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata I18nCopyWriting::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::I18nCopyWriting* Arena::CreateMaybeMessage< ::AcFunDanmu::I18nCopyWriting >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::I18nCopyWriting >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
