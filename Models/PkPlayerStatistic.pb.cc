// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PkPlayerStatistic.proto

#include "PkPlayerStatistic.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_PkPlayerRoundStatistic_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_PkPlayerRoundStatistic_PkPlayerRoundStatistic_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_ZtLiveUserInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_ZtLiveUserInfo_ZtLiveUserInfo_2eproto;
namespace AcFunDanmu {
class PkPlayerStatisticDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<PkPlayerStatistic> _instance;
} _PkPlayerStatistic_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_PkPlayerStatistic_PkPlayerStatistic_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_PkPlayerStatistic_default_instance_;
    new (ptr) ::AcFunDanmu::PkPlayerStatistic();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<2> scc_info_PkPlayerStatistic_PkPlayerStatistic_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 2, 0, InitDefaultsscc_info_PkPlayerStatistic_PkPlayerStatistic_2eproto}, {
      &scc_info_ZtLiveUserInfo_ZtLiveUserInfo_2eproto.base,
      &scc_info_PkPlayerRoundStatistic_PkPlayerRoundStatistic_2eproto.base,}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_PkPlayerStatistic_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_PkPlayerStatistic_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_PkPlayerStatistic_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_PkPlayerStatistic_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkPlayerStatistic, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkPlayerStatistic, a_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkPlayerStatistic, b_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkPlayerStatistic, c_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkPlayerStatistic, d_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::PkPlayerStatistic, e_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::PkPlayerStatistic)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_PkPlayerStatistic_default_instance_),
};

const char descriptor_table_protodef_PkPlayerStatistic_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027PkPlayerStatistic.proto\022\nAcFunDanmu\032\024Z"
  "tLiveUserInfo.proto\032\034PkPlayerRoundStatis"
  "tic.proto\"\212\001\n\021PkPlayerStatistic\022%\n\001a\030\001 \001"
  "(\0132\032.AcFunDanmu.ZtLiveUserInfo\022\t\n\001b\030\002 \001("
  "\t\022\t\n\001c\030\003 \001(\003\022-\n\001d\030\004 \003(\0132\".AcFunDanmu.PkP"
  "layerRoundStatistic\022\t\n\001e\030\005 \001(\005b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_PkPlayerStatistic_2eproto_deps[2] = {
  &::descriptor_table_PkPlayerRoundStatistic_2eproto,
  &::descriptor_table_ZtLiveUserInfo_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_PkPlayerStatistic_2eproto_sccs[1] = {
  &scc_info_PkPlayerStatistic_PkPlayerStatistic_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_PkPlayerStatistic_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PkPlayerStatistic_2eproto = {
  false, false, descriptor_table_protodef_PkPlayerStatistic_2eproto, "PkPlayerStatistic.proto", 238,
  &descriptor_table_PkPlayerStatistic_2eproto_once, descriptor_table_PkPlayerStatistic_2eproto_sccs, descriptor_table_PkPlayerStatistic_2eproto_deps, 1, 2,
  schemas, file_default_instances, TableStruct_PkPlayerStatistic_2eproto::offsets,
  file_level_metadata_PkPlayerStatistic_2eproto, 1, file_level_enum_descriptors_PkPlayerStatistic_2eproto, file_level_service_descriptors_PkPlayerStatistic_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_PkPlayerStatistic_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_PkPlayerStatistic_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class PkPlayerStatistic::_Internal {
 public:
  static const ::AcFunDanmu::ZtLiveUserInfo& a(const PkPlayerStatistic* msg);
};

const ::AcFunDanmu::ZtLiveUserInfo&
PkPlayerStatistic::_Internal::a(const PkPlayerStatistic* msg) {
  return *msg->a_;
}
void PkPlayerStatistic::clear_a() {
  if (GetArena() == nullptr && a_ != nullptr) {
    delete a_;
  }
  a_ = nullptr;
}
void PkPlayerStatistic::clear_d() {
  d_.Clear();
}
PkPlayerStatistic::PkPlayerStatistic(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  d_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.PkPlayerStatistic)
}
PkPlayerStatistic::PkPlayerStatistic(const PkPlayerStatistic& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      d_(from.d_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  b_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_b().empty()) {
    b_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, from._internal_b(), 
      GetArena());
  }
  if (from._internal_has_a()) {
    a_ = new ::AcFunDanmu::ZtLiveUserInfo(*from.a_);
  } else {
    a_ = nullptr;
  }
  ::memcpy(&c_, &from.c_,
    static_cast<size_t>(reinterpret_cast<char*>(&e_) -
    reinterpret_cast<char*>(&c_)) + sizeof(e_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.PkPlayerStatistic)
}

void PkPlayerStatistic::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_PkPlayerStatistic_PkPlayerStatistic_2eproto.base);
  b_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&a_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&e_) -
      reinterpret_cast<char*>(&a_)) + sizeof(e_));
}

PkPlayerStatistic::~PkPlayerStatistic() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.PkPlayerStatistic)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void PkPlayerStatistic::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  b_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (this != internal_default_instance()) delete a_;
}

void PkPlayerStatistic::ArenaDtor(void* object) {
  PkPlayerStatistic* _this = reinterpret_cast< PkPlayerStatistic* >(object);
  (void)_this;
}
void PkPlayerStatistic::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void PkPlayerStatistic::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const PkPlayerStatistic& PkPlayerStatistic::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_PkPlayerStatistic_PkPlayerStatistic_2eproto.base);
  return *internal_default_instance();
}


void PkPlayerStatistic::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.PkPlayerStatistic)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  d_.Clear();
  b_.ClearToEmpty();
  if (GetArena() == nullptr && a_ != nullptr) {
    delete a_;
  }
  a_ = nullptr;
  ::memset(&c_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&e_) -
      reinterpret_cast<char*>(&c_)) + sizeof(e_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PkPlayerStatistic::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // .AcFunDanmu.ZtLiveUserInfo a = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_a(), ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // string b = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_b();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.PkPlayerStatistic.b"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 c = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 24)) {
          c_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.PkPlayerRoundStatistic d = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 34)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_d(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<34>(ptr));
        } else goto handle_unusual;
        continue;
      // int32 e = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 40)) {
          e_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* PkPlayerStatistic::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.PkPlayerStatistic)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.ZtLiveUserInfo a = 1;
  if (this->has_a()) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(
        1, _Internal::a(this), target, stream);
  }

  // string b = 2;
  if (this->b().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_b().data(), static_cast<int>(this->_internal_b().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.PkPlayerStatistic.b");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_b(), target);
  }

  // int64 c = 3;
  if (this->c() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(3, this->_internal_c(), target);
  }

  // repeated .AcFunDanmu.PkPlayerRoundStatistic d = 4;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_d_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, this->_internal_d(i), target, stream);
  }

  // int32 e = 5;
  if (this->e() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt32ToArray(5, this->_internal_e(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.PkPlayerStatistic)
  return target;
}

size_t PkPlayerStatistic::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.PkPlayerStatistic)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.PkPlayerRoundStatistic d = 4;
  total_size += 1UL * this->_internal_d_size();
  for (const auto& msg : this->d_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string b = 2;
  if (this->b().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_b());
  }

  // .AcFunDanmu.ZtLiveUserInfo a = 1;
  if (this->has_a()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *a_);
  }

  // int64 c = 3;
  if (this->c() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_c());
  }

  // int32 e = 5;
  if (this->e() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int32Size(
        this->_internal_e());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void PkPlayerStatistic::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.PkPlayerStatistic)
  GOOGLE_DCHECK_NE(&from, this);
  const PkPlayerStatistic* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<PkPlayerStatistic>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.PkPlayerStatistic)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.PkPlayerStatistic)
    MergeFrom(*source);
  }
}

void PkPlayerStatistic::MergeFrom(const PkPlayerStatistic& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.PkPlayerStatistic)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  d_.MergeFrom(from.d_);
  if (from.b().size() > 0) {
    _internal_set_b(from._internal_b());
  }
  if (from.has_a()) {
    _internal_mutable_a()->::AcFunDanmu::ZtLiveUserInfo::MergeFrom(from._internal_a());
  }
  if (from.c() != 0) {
    _internal_set_c(from._internal_c());
  }
  if (from.e() != 0) {
    _internal_set_e(from._internal_e());
  }
}

void PkPlayerStatistic::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.PkPlayerStatistic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void PkPlayerStatistic::CopyFrom(const PkPlayerStatistic& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.PkPlayerStatistic)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PkPlayerStatistic::IsInitialized() const {
  return true;
}

void PkPlayerStatistic::InternalSwap(PkPlayerStatistic* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  d_.InternalSwap(&other->d_);
  b_.Swap(&other->b_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PkPlayerStatistic, e_)
      + sizeof(PkPlayerStatistic::e_)
      - PROTOBUF_FIELD_OFFSET(PkPlayerStatistic, a_)>(
          reinterpret_cast<char*>(&a_),
          reinterpret_cast<char*>(&other->a_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PkPlayerStatistic::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::PkPlayerStatistic* Arena::CreateMaybeMessage< ::AcFunDanmu::PkPlayerStatistic >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::PkPlayerStatistic >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>