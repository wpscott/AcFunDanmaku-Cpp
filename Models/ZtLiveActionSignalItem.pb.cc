// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveActionSignalItem.proto

#include "ZtLiveActionSignalItem.pb.h"

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

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace AcFunDanmu {
PROTOBUF_CONSTEXPR ZtLiveActionSignalItem::ZtLiveActionSignalItem(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.payload_)*/{}
  , /*decltype(_impl_.signaltype_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ZtLiveActionSignalItemDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ZtLiveActionSignalItemDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ZtLiveActionSignalItemDefaultTypeInternal() {}
  union {
    ZtLiveActionSignalItem _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ZtLiveActionSignalItemDefaultTypeInternal _ZtLiveActionSignalItem_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_ZtLiveActionSignalItem_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ZtLiveActionSignalItem_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ZtLiveActionSignalItem_2eproto = nullptr;

const uint32_t TableStruct_ZtLiveActionSignalItem_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveActionSignalItem, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveActionSignalItem, _impl_.signaltype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveActionSignalItem, _impl_.payload_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::ZtLiveActionSignalItem)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_ZtLiveActionSignalItem_default_instance_._instance,
};

const char descriptor_table_protodef_ZtLiveActionSignalItem_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034ZtLiveActionSignalItem.proto\022\nAcFunDan"
  "mu\"=\n\026ZtLiveActionSignalItem\022\022\n\nsignalTy"
  "pe\030\001 \001(\t\022\017\n\007payload\030\002 \003(\014b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_ZtLiveActionSignalItem_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ZtLiveActionSignalItem_2eproto = {
    false, false, 113, descriptor_table_protodef_ZtLiveActionSignalItem_2eproto,
    "ZtLiveActionSignalItem.proto",
    &descriptor_table_ZtLiveActionSignalItem_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_ZtLiveActionSignalItem_2eproto::offsets,
    file_level_metadata_ZtLiveActionSignalItem_2eproto, file_level_enum_descriptors_ZtLiveActionSignalItem_2eproto,
    file_level_service_descriptors_ZtLiveActionSignalItem_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ZtLiveActionSignalItem_2eproto_getter() {
  return &descriptor_table_ZtLiveActionSignalItem_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ZtLiveActionSignalItem_2eproto(&descriptor_table_ZtLiveActionSignalItem_2eproto);
namespace AcFunDanmu {

// ===================================================================

class ZtLiveActionSignalItem::_Internal {
 public:
};

ZtLiveActionSignalItem::ZtLiveActionSignalItem(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveActionSignalItem)
}
ZtLiveActionSignalItem::ZtLiveActionSignalItem(const ZtLiveActionSignalItem& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ZtLiveActionSignalItem* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.payload_){from._impl_.payload_}
    , decltype(_impl_.signaltype_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.signaltype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.signaltype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_signaltype().empty()) {
    _this->_impl_.signaltype_.Set(from._internal_signaltype(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveActionSignalItem)
}

inline void ZtLiveActionSignalItem::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.payload_){arena}
    , decltype(_impl_.signaltype_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.signaltype_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.signaltype_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

ZtLiveActionSignalItem::~ZtLiveActionSignalItem() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveActionSignalItem)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ZtLiveActionSignalItem::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.payload_.~RepeatedPtrField();
  _impl_.signaltype_.Destroy();
}

void ZtLiveActionSignalItem::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ZtLiveActionSignalItem::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveActionSignalItem)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.payload_.Clear();
  _impl_.signaltype_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveActionSignalItem::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string signalType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_signaltype();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.ZtLiveActionSignalItem.signalType"));
        } else
          goto handle_unusual;
        continue;
      // repeated bytes payload = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_payload();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ZtLiveActionSignalItem::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveActionSignalItem)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string signalType = 1;
  if (!this->_internal_signaltype().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_signaltype().data(), static_cast<int>(this->_internal_signaltype().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.ZtLiveActionSignalItem.signalType");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_signaltype(), target);
  }

  // repeated bytes payload = 2;
  for (int i = 0, n = this->_internal_payload_size(); i < n; i++) {
    const auto& s = this->_internal_payload(i);
    target = stream->WriteBytes(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveActionSignalItem)
  return target;
}

size_t ZtLiveActionSignalItem::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveActionSignalItem)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated bytes payload = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.payload_.size());
  for (int i = 0, n = _impl_.payload_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
      _impl_.payload_.Get(i));
  }

  // string signalType = 1;
  if (!this->_internal_signaltype().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_signaltype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ZtLiveActionSignalItem::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ZtLiveActionSignalItem::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ZtLiveActionSignalItem::GetClassData() const { return &_class_data_; }


void ZtLiveActionSignalItem::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ZtLiveActionSignalItem*>(&to_msg);
  auto& from = static_cast<const ZtLiveActionSignalItem&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveActionSignalItem)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.payload_.MergeFrom(from._impl_.payload_);
  if (!from._internal_signaltype().empty()) {
    _this->_internal_set_signaltype(from._internal_signaltype());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ZtLiveActionSignalItem::CopyFrom(const ZtLiveActionSignalItem& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveActionSignalItem)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveActionSignalItem::IsInitialized() const {
  return true;
}

void ZtLiveActionSignalItem::InternalSwap(ZtLiveActionSignalItem* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.payload_.InternalSwap(&other->_impl_.payload_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.signaltype_, lhs_arena,
      &other->_impl_.signaltype_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveActionSignalItem::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ZtLiveActionSignalItem_2eproto_getter, &descriptor_table_ZtLiveActionSignalItem_2eproto_once,
      file_level_metadata_ZtLiveActionSignalItem_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveActionSignalItem*
Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveActionSignalItem >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveActionSignalItem >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
