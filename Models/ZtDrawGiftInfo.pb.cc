// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtDrawGiftInfo.proto

#include "ZtDrawGiftInfo.pb.h"

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
extern PROTOBUF_INTERNAL_EXPORT_ZtDrawGiftInfo_2eproto ::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ZtDrawGiftInfo_ZtDrawPoint_ZtDrawGiftInfo_2eproto;
namespace AcFunDanmu {
class ZtDrawGiftInfo_ZtDrawPointDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ZtDrawGiftInfo_ZtDrawPoint> _instance;
} _ZtDrawGiftInfo_ZtDrawPoint_default_instance_;
class ZtDrawGiftInfoDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ZtDrawGiftInfo> _instance;
} _ZtDrawGiftInfo_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_ZtDrawGiftInfo_ZtDrawGiftInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_ZtDrawGiftInfo_default_instance_;
    new (ptr) ::AcFunDanmu::ZtDrawGiftInfo();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<1> scc_info_ZtDrawGiftInfo_ZtDrawGiftInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 1, 0, InitDefaultsscc_info_ZtDrawGiftInfo_ZtDrawGiftInfo_2eproto}, {
      &scc_info_ZtDrawGiftInfo_ZtDrawPoint_ZtDrawGiftInfo_2eproto.base,}};

static void InitDefaultsscc_info_ZtDrawGiftInfo_ZtDrawPoint_ZtDrawGiftInfo_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_ZtDrawGiftInfo_ZtDrawPoint_default_instance_;
    new (ptr) ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ZtDrawGiftInfo_ZtDrawPoint_ZtDrawGiftInfo_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ZtDrawGiftInfo_ZtDrawPoint_ZtDrawGiftInfo_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ZtDrawGiftInfo_2eproto[2];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ZtDrawGiftInfo_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ZtDrawGiftInfo_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ZtDrawGiftInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint, marginleft_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint, margintop_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint, scaleratio_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint, handup_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo, screenwidth_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo, screenheight_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtDrawGiftInfo, drawpoint_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint)},
  { 9, -1, sizeof(::AcFunDanmu::ZtDrawGiftInfo)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtDrawGiftInfo_ZtDrawPoint_default_instance_),
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtDrawGiftInfo_default_instance_),
};

const char descriptor_table_protodef_ZtDrawGiftInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024ZtDrawGiftInfo.proto\022\nAcFunDanmu\"\320\001\n\016Z"
  "tDrawGiftInfo\022\023\n\013screenWidth\030\001 \001(\003\022\024\n\014sc"
  "reenHeight\030\002 \001(\003\0229\n\tdrawPoint\030\003 \003(\0132&.Ac"
  "FunDanmu.ZtDrawGiftInfo.ZtDrawPoint\032X\n\013Z"
  "tDrawPoint\022\022\n\nmarginLeft\030\001 \001(\003\022\021\n\tmargin"
  "Top\030\002 \001(\003\022\022\n\nscaleRatio\030\003 \001(\001\022\016\n\006handup\030"
  "\004 \001(\010b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ZtDrawGiftInfo_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ZtDrawGiftInfo_2eproto_sccs[2] = {
  &scc_info_ZtDrawGiftInfo_ZtDrawGiftInfo_2eproto.base,
  &scc_info_ZtDrawGiftInfo_ZtDrawPoint_ZtDrawGiftInfo_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ZtDrawGiftInfo_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtDrawGiftInfo_2eproto = {
  false, false, descriptor_table_protodef_ZtDrawGiftInfo_2eproto, "ZtDrawGiftInfo.proto", 253,
  &descriptor_table_ZtDrawGiftInfo_2eproto_once, descriptor_table_ZtDrawGiftInfo_2eproto_sccs, descriptor_table_ZtDrawGiftInfo_2eproto_deps, 2, 0,
  schemas, file_default_instances, TableStruct_ZtDrawGiftInfo_2eproto::offsets,
  file_level_metadata_ZtDrawGiftInfo_2eproto, 2, file_level_enum_descriptors_ZtDrawGiftInfo_2eproto, file_level_service_descriptors_ZtDrawGiftInfo_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ZtDrawGiftInfo_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ZtDrawGiftInfo_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

class ZtDrawGiftInfo_ZtDrawPoint::_Internal {
 public:
};

ZtDrawGiftInfo_ZtDrawPoint::ZtDrawGiftInfo_ZtDrawPoint(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
}
ZtDrawGiftInfo_ZtDrawPoint::ZtDrawGiftInfo_ZtDrawPoint(const ZtDrawGiftInfo_ZtDrawPoint& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&marginleft_, &from.marginleft_,
    static_cast<size_t>(reinterpret_cast<char*>(&handup_) -
    reinterpret_cast<char*>(&marginleft_)) + sizeof(handup_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
}

void ZtDrawGiftInfo_ZtDrawPoint::SharedCtor() {
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&marginleft_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&handup_) -
      reinterpret_cast<char*>(&marginleft_)) + sizeof(handup_));
}

ZtDrawGiftInfo_ZtDrawPoint::~ZtDrawGiftInfo_ZtDrawPoint() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtDrawGiftInfo_ZtDrawPoint::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void ZtDrawGiftInfo_ZtDrawPoint::ArenaDtor(void* object) {
  ZtDrawGiftInfo_ZtDrawPoint* _this = reinterpret_cast< ZtDrawGiftInfo_ZtDrawPoint* >(object);
  (void)_this;
}
void ZtDrawGiftInfo_ZtDrawPoint::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtDrawGiftInfo_ZtDrawPoint::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ZtDrawGiftInfo_ZtDrawPoint& ZtDrawGiftInfo_ZtDrawPoint::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ZtDrawGiftInfo_ZtDrawPoint_ZtDrawGiftInfo_2eproto.base);
  return *internal_default_instance();
}


void ZtDrawGiftInfo_ZtDrawPoint::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  ::memset(&marginleft_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&handup_) -
      reinterpret_cast<char*>(&marginleft_)) + sizeof(handup_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtDrawGiftInfo_ZtDrawPoint::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 marginLeft = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          marginleft_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 marginTop = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          margintop_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // double scaleRatio = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 25)) {
          scaleratio_ = ::PROTOBUF_NAMESPACE_ID::internal::UnalignedLoad<double>(ptr);
          ptr += sizeof(double);
        } else goto handle_unusual;
        continue;
      // bool handup = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 32)) {
          handup_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

::PROTOBUF_NAMESPACE_ID::uint8* ZtDrawGiftInfo_ZtDrawPoint::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 marginLeft = 1;
  if (this->marginleft() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_marginleft(), target);
  }

  // int64 marginTop = 2;
  if (this->margintop() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_margintop(), target);
  }

  // double scaleRatio = 3;
  if (!(this->scaleratio() <= 0 && this->scaleratio() >= 0)) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteDoubleToArray(3, this->_internal_scaleratio(), target);
  }

  // bool handup = 4;
  if (this->handup() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteBoolToArray(4, this->_internal_handup(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  return target;
}

size_t ZtDrawGiftInfo_ZtDrawPoint::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int64 marginLeft = 1;
  if (this->marginleft() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_marginleft());
  }

  // int64 marginTop = 2;
  if (this->margintop() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_margintop());
  }

  // double scaleRatio = 3;
  if (!(this->scaleratio() <= 0 && this->scaleratio() >= 0)) {
    total_size += 1 + 8;
  }

  // bool handup = 4;
  if (this->handup() != 0) {
    total_size += 1 + 1;
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtDrawGiftInfo_ZtDrawPoint::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtDrawGiftInfo_ZtDrawPoint* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtDrawGiftInfo_ZtDrawPoint>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
    MergeFrom(*source);
  }
}

void ZtDrawGiftInfo_ZtDrawPoint::MergeFrom(const ZtDrawGiftInfo_ZtDrawPoint& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.marginleft() != 0) {
    _internal_set_marginleft(from._internal_marginleft());
  }
  if (from.margintop() != 0) {
    _internal_set_margintop(from._internal_margintop());
  }
  if (!(from.scaleratio() <= 0 && from.scaleratio() >= 0)) {
    _internal_set_scaleratio(from._internal_scaleratio());
  }
  if (from.handup() != 0) {
    _internal_set_handup(from._internal_handup());
  }
}

void ZtDrawGiftInfo_ZtDrawPoint::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtDrawGiftInfo_ZtDrawPoint::CopyFrom(const ZtDrawGiftInfo_ZtDrawPoint& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtDrawGiftInfo_ZtDrawPoint::IsInitialized() const {
  return true;
}

void ZtDrawGiftInfo_ZtDrawPoint::InternalSwap(ZtDrawGiftInfo_ZtDrawPoint* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ZtDrawGiftInfo_ZtDrawPoint, handup_)
      + sizeof(ZtDrawGiftInfo_ZtDrawPoint::handup_)
      - PROTOBUF_FIELD_OFFSET(ZtDrawGiftInfo_ZtDrawPoint, marginleft_)>(
          reinterpret_cast<char*>(&marginleft_),
          reinterpret_cast<char*>(&other->marginleft_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtDrawGiftInfo_ZtDrawPoint::GetMetadata() const {
  return GetMetadataStatic();
}


// ===================================================================

class ZtDrawGiftInfo::_Internal {
 public:
};

ZtDrawGiftInfo::ZtDrawGiftInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena),
  drawpoint_(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtDrawGiftInfo)
}
ZtDrawGiftInfo::ZtDrawGiftInfo(const ZtDrawGiftInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message(),
      drawpoint_(from.drawpoint_) {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&screenwidth_, &from.screenwidth_,
    static_cast<size_t>(reinterpret_cast<char*>(&screenheight_) -
    reinterpret_cast<char*>(&screenwidth_)) + sizeof(screenheight_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtDrawGiftInfo)
}

void ZtDrawGiftInfo::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ZtDrawGiftInfo_ZtDrawGiftInfo_2eproto.base);
  ::memset(reinterpret_cast<char*>(this) + static_cast<size_t>(
      reinterpret_cast<char*>(&screenwidth_) - reinterpret_cast<char*>(this)),
      0, static_cast<size_t>(reinterpret_cast<char*>(&screenheight_) -
      reinterpret_cast<char*>(&screenwidth_)) + sizeof(screenheight_));
}

ZtDrawGiftInfo::~ZtDrawGiftInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtDrawGiftInfo)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtDrawGiftInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
}

void ZtDrawGiftInfo::ArenaDtor(void* object) {
  ZtDrawGiftInfo* _this = reinterpret_cast< ZtDrawGiftInfo* >(object);
  (void)_this;
}
void ZtDrawGiftInfo::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtDrawGiftInfo::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ZtDrawGiftInfo& ZtDrawGiftInfo::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ZtDrawGiftInfo_ZtDrawGiftInfo_2eproto.base);
  return *internal_default_instance();
}


void ZtDrawGiftInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtDrawGiftInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  drawpoint_.Clear();
  ::memset(&screenwidth_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&screenheight_) -
      reinterpret_cast<char*>(&screenwidth_)) + sizeof(screenheight_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtDrawGiftInfo::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // int64 screenWidth = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 8)) {
          screenwidth_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // int64 screenHeight = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 16)) {
          screenheight_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint drawPoint = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_drawpoint(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
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

::PROTOBUF_NAMESPACE_ID::uint8* ZtDrawGiftInfo::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtDrawGiftInfo)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 screenWidth = 1;
  if (this->screenwidth() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(1, this->_internal_screenwidth(), target);
  }

  // int64 screenHeight = 2;
  if (this->screenheight() != 0) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::WriteInt64ToArray(2, this->_internal_screenheight(), target);
  }

  // repeated .AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint drawPoint = 3;
  for (unsigned int i = 0,
      n = static_cast<unsigned int>(this->_internal_drawpoint_size()); i < n; i++) {
    target = stream->EnsureSpace(target);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, this->_internal_drawpoint(i), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtDrawGiftInfo)
  return target;
}

size_t ZtDrawGiftInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtDrawGiftInfo)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.ZtDrawGiftInfo.ZtDrawPoint drawPoint = 3;
  total_size += 1UL * this->_internal_drawpoint_size();
  for (const auto& msg : this->drawpoint_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // int64 screenWidth = 1;
  if (this->screenwidth() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_screenwidth());
  }

  // int64 screenHeight = 2;
  if (this->screenheight() != 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::Int64Size(
        this->_internal_screenheight());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtDrawGiftInfo::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtDrawGiftInfo)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtDrawGiftInfo* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtDrawGiftInfo>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtDrawGiftInfo)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtDrawGiftInfo)
    MergeFrom(*source);
  }
}

void ZtDrawGiftInfo::MergeFrom(const ZtDrawGiftInfo& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtDrawGiftInfo)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  drawpoint_.MergeFrom(from.drawpoint_);
  if (from.screenwidth() != 0) {
    _internal_set_screenwidth(from._internal_screenwidth());
  }
  if (from.screenheight() != 0) {
    _internal_set_screenheight(from._internal_screenheight());
  }
}

void ZtDrawGiftInfo::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtDrawGiftInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtDrawGiftInfo::CopyFrom(const ZtDrawGiftInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtDrawGiftInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtDrawGiftInfo::IsInitialized() const {
  return true;
}

void ZtDrawGiftInfo::InternalSwap(ZtDrawGiftInfo* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  drawpoint_.InternalSwap(&other->drawpoint_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(ZtDrawGiftInfo, screenheight_)
      + sizeof(ZtDrawGiftInfo::screenheight_)
      - PROTOBUF_FIELD_OFFSET(ZtDrawGiftInfo, screenwidth_)>(
          reinterpret_cast<char*>(&screenwidth_),
          reinterpret_cast<char*>(&other->screenwidth_));
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtDrawGiftInfo::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtDrawGiftInfo_ZtDrawPoint >(arena);
}
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtDrawGiftInfo* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtDrawGiftInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtDrawGiftInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
