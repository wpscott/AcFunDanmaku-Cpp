// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalPkEnd.proto

#include "CommonStateSignalPkEnd.pb.h"

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
class CommonStateSignalPkEndDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<CommonStateSignalPkEnd> _instance;
} _CommonStateSignalPkEnd_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_CommonStateSignalPkEnd_CommonStateSignalPkEnd_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_CommonStateSignalPkEnd_default_instance_;
    new (ptr) ::AcFunDanmu::CommonStateSignalPkEnd();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_CommonStateSignalPkEnd_CommonStateSignalPkEnd_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_CommonStateSignalPkEnd_CommonStateSignalPkEnd_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_CommonStateSignalPkEnd_2eproto[1];
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_CommonStateSignalPkEnd_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalPkEnd_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_CommonStateSignalPkEnd_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPkEnd, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPkEnd, a_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPkEnd, b_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalPkEnd, c_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::CommonStateSignalPkEnd)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_CommonStateSignalPkEnd_default_instance_),
};

const char descriptor_table_protodef_CommonStateSignalPkEnd_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034CommonStateSignalPkEnd.proto\022\nAcFunDan"
  "mu\"\304\001\n\026CommonStateSignalPkEnd\022\t\n\001a\030\001 \001(\t"
  "\0225\n\001b\030\002 \001(\0162*.AcFunDanmu.CommonStateSign"
  "alPkEnd.unknown\022\t\n\001c\030\003 \001(\t\"]\n\007unknown\022\005\n"
  "\001d\020\000\022\005\n\001e\020\001\022\005\n\001f\020\002\022\005\n\001g\020\003\022\005\n\001h\020\004\022\005\n\001i\020\005\022"
  "\005\n\001j\020\006\022\005\n\001k\020\007\022\005\n\001l\020\010\022\005\n\001m\020\t\022\005\n\001n\020\n\022\005\n\001o\020"
  "\013b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_CommonStateSignalPkEnd_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_CommonStateSignalPkEnd_2eproto_sccs[1] = {
  &scc_info_CommonStateSignalPkEnd_CommonStateSignalPkEnd_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_CommonStateSignalPkEnd_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalPkEnd_2eproto = {
  false, false, descriptor_table_protodef_CommonStateSignalPkEnd_2eproto, "CommonStateSignalPkEnd.proto", 249,
  &descriptor_table_CommonStateSignalPkEnd_2eproto_once, descriptor_table_CommonStateSignalPkEnd_2eproto_sccs, descriptor_table_CommonStateSignalPkEnd_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_CommonStateSignalPkEnd_2eproto::offsets,
  file_level_metadata_CommonStateSignalPkEnd_2eproto, 1, file_level_enum_descriptors_CommonStateSignalPkEnd_2eproto, file_level_service_descriptors_CommonStateSignalPkEnd_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_CommonStateSignalPkEnd_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_CommonStateSignalPkEnd_2eproto)), true);
namespace AcFunDanmu {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommonStateSignalPkEnd_unknown_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_CommonStateSignalPkEnd_2eproto);
  return file_level_enum_descriptors_CommonStateSignalPkEnd_2eproto[0];
}
bool CommonStateSignalPkEnd_unknown_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::d;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::e;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::f;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::g;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::h;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::i;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::j;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::k;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::l;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::m;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::n;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::o;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::unknown_MIN;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::unknown_MAX;
constexpr int CommonStateSignalPkEnd::unknown_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || _MSC_VER >= 1900)

// ===================================================================

class CommonStateSignalPkEnd::_Internal {
 public:
};

CommonStateSignalPkEnd::CommonStateSignalPkEnd(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalPkEnd)
}
CommonStateSignalPkEnd::CommonStateSignalPkEnd(const CommonStateSignalPkEnd& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  a_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_a().empty()) {
    a_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_a(), 
      GetArena());
  }
  c_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_c().empty()) {
    c_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_c(), 
      GetArena());
  }
  b_ = from.b_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalPkEnd)
}

void CommonStateSignalPkEnd::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_CommonStateSignalPkEnd_CommonStateSignalPkEnd_2eproto.base);
  a_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  c_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  b_ = 0;
}

CommonStateSignalPkEnd::~CommonStateSignalPkEnd() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalPkEnd)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void CommonStateSignalPkEnd::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  a_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  c_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void CommonStateSignalPkEnd::ArenaDtor(void* object) {
  CommonStateSignalPkEnd* _this = reinterpret_cast< CommonStateSignalPkEnd* >(object);
  (void)_this;
}
void CommonStateSignalPkEnd::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void CommonStateSignalPkEnd::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const CommonStateSignalPkEnd& CommonStateSignalPkEnd::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_CommonStateSignalPkEnd_CommonStateSignalPkEnd_2eproto.base);
  return *internal_default_instance();
}


void CommonStateSignalPkEnd::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalPkEnd)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  a_.ClearToEmpty();
  c_.ClearToEmpty();
  b_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalPkEnd::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
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
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.CommonStateSignalPkEnd.a"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // .AcFunDanmu.CommonStateSignalPkEnd.unknown b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          ::PROTOBUF_NAMESPACE_ID::uint64 val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_b(static_cast<::AcFunDanmu::CommonStateSignalPkEnd_unknown>(val));
        } else goto handle_unusual;
        continue;
      // string c = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          auto str = _internal_mutable_c();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.CommonStateSignalPkEnd.c"));
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

::PROTOBUF_NAMESPACE_ID::uint8* CommonStateSignalPkEnd::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalPkEnd)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string a = 1;
  if (this->a().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_a().data(), static_cast<int>(this->_internal_a().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonStateSignalPkEnd.a");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_a(), target);
  }

  // .AcFunDanmu.CommonStateSignalPkEnd.unknown b = 2;
  if (this->b() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteEnumToArray(
      2, this->_internal_b(), target);
  }

  // string c = 3;
  if (this->c().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_c().data(), static_cast<int>(this->_internal_c().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.CommonStateSignalPkEnd.c");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_c(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalPkEnd)
  return target;
}

size_t CommonStateSignalPkEnd::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalPkEnd)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string a = 1;
  if (this->a().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_a());
  }

  // string c = 3;
  if (this->c().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_c());
  }

  // .AcFunDanmu.CommonStateSignalPkEnd.unknown b = 2;
  if (this->b() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::EnumSize(this->_internal_b());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void CommonStateSignalPkEnd::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.CommonStateSignalPkEnd)
  GOOGLE_DCHECK_NE(&from, this);
  const CommonStateSignalPkEnd* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<CommonStateSignalPkEnd>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.CommonStateSignalPkEnd)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.CommonStateSignalPkEnd)
    MergeFrom(*source);
  }
}

void CommonStateSignalPkEnd::MergeFrom(const CommonStateSignalPkEnd& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalPkEnd)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.a().size() > 0) {
    _internal_set_a(from._internal_a());
  }
  if (from.c().size() > 0) {
    _internal_set_c(from._internal_c());
  }
  if (from.b() != 0) {
    _internal_set_b(from._internal_b());
  }
}

void CommonStateSignalPkEnd::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.CommonStateSignalPkEnd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CommonStateSignalPkEnd::CopyFrom(const CommonStateSignalPkEnd& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalPkEnd)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalPkEnd::IsInitialized() const {
  return true;
}

void CommonStateSignalPkEnd::InternalSwap(CommonStateSignalPkEnd* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  a_.Swap(&other->a_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  c_.Swap(&other->c_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  swap(b_, other->b_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalPkEnd::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalPkEnd* Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalPkEnd >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalPkEnd >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
