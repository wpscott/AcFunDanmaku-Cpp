// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveNotifySignalItem.proto

#include "ZtLiveNotifySignalItem.pb.h"

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
class ZtLiveNotifySignalItemDefaultTypeInternal {
 public:
  ::PROTOBUF_NAMESPACE_ID::internal::ExplicitlyConstructed<ZtLiveNotifySignalItem> _instance;
} _ZtLiveNotifySignalItem_default_instance_;
}  // namespace AcFunDanmu
static void InitDefaultsscc_info_ZtLiveNotifySignalItem_ZtLiveNotifySignalItem_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::AcFunDanmu::_ZtLiveNotifySignalItem_default_instance_;
    new (ptr) ::AcFunDanmu::ZtLiveNotifySignalItem();
    ::PROTOBUF_NAMESPACE_ID::internal::OnShutdownDestroyMessage(ptr);
  }
  ::AcFunDanmu::ZtLiveNotifySignalItem::InitAsDefaultInstance();
}

::PROTOBUF_NAMESPACE_ID::internal::SCCInfo<0> scc_info_ZtLiveNotifySignalItem_ZtLiveNotifySignalItem_2eproto =
    {{ATOMIC_VAR_INIT(::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase::kUninitialized), 0, 0, InitDefaultsscc_info_ZtLiveNotifySignalItem_ZtLiveNotifySignalItem_2eproto}, {}};

static ::PROTOBUF_NAMESPACE_ID::Metadata file_level_metadata_ZtLiveNotifySignalItem_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::EnumDescriptor const** file_level_enum_descriptors_ZtLiveNotifySignalItem_2eproto = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_ZtLiveNotifySignalItem_2eproto = nullptr;

const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_ZtLiveNotifySignalItem_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveNotifySignalItem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveNotifySignalItem, signaltype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveNotifySignalItem, payload_),
};
static const ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::AcFunDanmu::ZtLiveNotifySignalItem)},
};

static ::PROTOBUF_NAMESPACE_ID::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::PROTOBUF_NAMESPACE_ID::Message*>(&::AcFunDanmu::_ZtLiveNotifySignalItem_default_instance_),
};

const char descriptor_table_protodef_ZtLiveNotifySignalItem_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034ZtLiveNotifySignalItem.proto\022\nAcFunDan"
  "mu\"=\n\026ZtLiveNotifySignalItem\022\022\n\nsignalTy"
  "pe\030\001 \001(\t\022\017\n\007payload\030\002 \001(\014b\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_ZtLiveNotifySignalItem_2eproto_deps[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_ZtLiveNotifySignalItem_2eproto_sccs[1] = {
  &scc_info_ZtLiveNotifySignalItem_ZtLiveNotifySignalItem_2eproto.base,
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_ZtLiveNotifySignalItem_2eproto_once;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveNotifySignalItem_2eproto = {
  false, false, descriptor_table_protodef_ZtLiveNotifySignalItem_2eproto, "ZtLiveNotifySignalItem.proto", 113,
  &descriptor_table_ZtLiveNotifySignalItem_2eproto_once, descriptor_table_ZtLiveNotifySignalItem_2eproto_sccs, descriptor_table_ZtLiveNotifySignalItem_2eproto_deps, 1, 0,
  schemas, file_default_instances, TableStruct_ZtLiveNotifySignalItem_2eproto::offsets,
  file_level_metadata_ZtLiveNotifySignalItem_2eproto, 1, file_level_enum_descriptors_ZtLiveNotifySignalItem_2eproto, file_level_service_descriptors_ZtLiveNotifySignalItem_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_ZtLiveNotifySignalItem_2eproto = (static_cast<void>(::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_ZtLiveNotifySignalItem_2eproto)), true);
namespace AcFunDanmu {

// ===================================================================

void ZtLiveNotifySignalItem::InitAsDefaultInstance() {
}
class ZtLiveNotifySignalItem::_Internal {
 public:
};

ZtLiveNotifySignalItem::ZtLiveNotifySignalItem(::PROTOBUF_NAMESPACE_ID::Arena* arena)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena) {
  SharedCtor();
  RegisterArenaDtor(arena);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveNotifySignalItem)
}
ZtLiveNotifySignalItem::ZtLiveNotifySignalItem(const ZtLiveNotifySignalItem& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  signaltype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_signaltype().empty()) {
    signaltype_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_signaltype(),
      GetArena());
  }
  payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  if (!from._internal_payload().empty()) {
    payload_.Set(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), from._internal_payload(),
      GetArena());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveNotifySignalItem)
}

void ZtLiveNotifySignalItem::SharedCtor() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&scc_info_ZtLiveNotifySignalItem_ZtLiveNotifySignalItem_2eproto.base);
  signaltype_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  payload_.UnsafeSetDefault(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

ZtLiveNotifySignalItem::~ZtLiveNotifySignalItem() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveNotifySignalItem)
  SharedDtor();
  _internal_metadata_.Delete<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

void ZtLiveNotifySignalItem::SharedDtor() {
  GOOGLE_DCHECK(GetArena() == nullptr);
  signaltype_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
  payload_.DestroyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}

void ZtLiveNotifySignalItem::ArenaDtor(void* object) {
  ZtLiveNotifySignalItem* _this = reinterpret_cast< ZtLiveNotifySignalItem* >(object);
  (void)_this;
}
void ZtLiveNotifySignalItem::RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena*) {
}
void ZtLiveNotifySignalItem::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const ZtLiveNotifySignalItem& ZtLiveNotifySignalItem::default_instance() {
  ::PROTOBUF_NAMESPACE_ID::internal::InitSCC(&::scc_info_ZtLiveNotifySignalItem_ZtLiveNotifySignalItem_2eproto.base);
  return *internal_default_instance();
}


void ZtLiveNotifySignalItem::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveNotifySignalItem)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  signaltype_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  payload_.ClearToEmpty(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveNotifySignalItem::_InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  ::PROTOBUF_NAMESPACE_ID::Arena* arena = GetArena(); (void)arena;
  while (!ctx->Done(&ptr)) {
    ::PROTOBUF_NAMESPACE_ID::uint32 tag;
    ptr = ::PROTOBUF_NAMESPACE_ID::internal::ReadTag(ptr, &tag);
    CHK_(ptr);
    switch (tag >> 3) {
      // string signalType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 10)) {
          auto str = _internal_mutable_signaltype();
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(::PROTOBUF_NAMESPACE_ID::internal::VerifyUTF8(str, "AcFunDanmu.ZtLiveNotifySignalItem.signalType"));
          CHK_(ptr);
        } else goto handle_unusual;
        continue;
      // bytes payload = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<::PROTOBUF_NAMESPACE_ID::uint8>(tag) == 18)) {
          auto str = _internal_mutable_payload();
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

::PROTOBUF_NAMESPACE_ID::uint8* ZtLiveNotifySignalItem::_InternalSerialize(
    ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveNotifySignalItem)
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string signalType = 1;
  if (this->signaltype().size() > 0) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_signaltype().data(), static_cast<int>(this->_internal_signaltype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveNotifySignalItem.signalType");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_signaltype(), target);
  }

  // bytes payload = 2;
  if (this->payload().size() > 0) {
    target = stream->WriteBytesMaybeAliased(
        2, this->_internal_payload(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveNotifySignalItem)
  return target;
}

size_t ZtLiveNotifySignalItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveNotifySignalItem)
  size_t total_size = 0;

  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string signalType = 1;
  if (this->signaltype().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_signaltype());
  }

  // bytes payload = 2;
  if (this->payload().size() > 0) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_payload());
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    return ::PROTOBUF_NAMESPACE_ID::internal::ComputeUnknownFieldsSize(
        _internal_metadata_, total_size, &_cached_size_);
  }
  int cached_size = ::PROTOBUF_NAMESPACE_ID::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void ZtLiveNotifySignalItem::MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:AcFunDanmu.ZtLiveNotifySignalItem)
  GOOGLE_DCHECK_NE(&from, this);
  const ZtLiveNotifySignalItem* source =
      ::PROTOBUF_NAMESPACE_ID::DynamicCastToGenerated<ZtLiveNotifySignalItem>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:AcFunDanmu.ZtLiveNotifySignalItem)
    ::PROTOBUF_NAMESPACE_ID::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:AcFunDanmu.ZtLiveNotifySignalItem)
    MergeFrom(*source);
  }
}

void ZtLiveNotifySignalItem::MergeFrom(const ZtLiveNotifySignalItem& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveNotifySignalItem)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.signaltype().size() > 0) {
    _internal_set_signaltype(from._internal_signaltype());
  }
  if (from.payload().size() > 0) {
    _internal_set_payload(from._internal_payload());
  }
}

void ZtLiveNotifySignalItem::CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:AcFunDanmu.ZtLiveNotifySignalItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ZtLiveNotifySignalItem::CopyFrom(const ZtLiveNotifySignalItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveNotifySignalItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveNotifySignalItem::IsInitialized() const {
  return true;
}

void ZtLiveNotifySignalItem::InternalSwap(ZtLiveNotifySignalItem* other) {
  using std::swap;
  _internal_metadata_.Swap<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(&other->_internal_metadata_);
  signaltype_.Swap(&other->signaltype_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
  payload_.Swap(&other->payload_, &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveNotifySignalItem::GetMetadata() const {
  return GetMetadataStatic();
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveNotifySignalItem* Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveNotifySignalItem >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveNotifySignalItem >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>