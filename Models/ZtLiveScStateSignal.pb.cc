// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveScStateSignal.proto

#include "ZtLiveScStateSignal.pb.h"

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
PROTOBUF_CONSTEXPR ZtLiveScStateSignal::ZtLiveScStateSignal(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.item_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ZtLiveScStateSignalDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ZtLiveScStateSignalDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ZtLiveScStateSignalDefaultTypeInternal() {}
  union {
    ZtLiveScStateSignal _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ZtLiveScStateSignalDefaultTypeInternal _ZtLiveScStateSignal_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_ZtLiveScStateSignal_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_ZtLiveScStateSignal_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_ZtLiveScStateSignal_2eproto = nullptr;

const uint32_t TableStruct_ZtLiveScStateSignal_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStateSignal, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::ZtLiveScStateSignal, _impl_.item_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::ZtLiveScStateSignal)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_ZtLiveScStateSignal_default_instance_._instance,
};

const char descriptor_table_protodef_ZtLiveScStateSignal_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031ZtLiveScStateSignal.proto\022\nAcFunDanmu\032"
  "\033ZtLiveStateSignalItem.proto\"F\n\023ZtLiveSc"
  "StateSignal\022/\n\004item\030\001 \003(\0132!.AcFunDanmu.Z"
  "tLiveStateSignalItemb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_ZtLiveScStateSignal_2eproto_deps[1] = {
  &::descriptor_table_ZtLiveStateSignalItem_2eproto,
};
static ::_pbi::once_flag descriptor_table_ZtLiveScStateSignal_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_ZtLiveScStateSignal_2eproto = {
    false, false, 148, descriptor_table_protodef_ZtLiveScStateSignal_2eproto,
    "ZtLiveScStateSignal.proto",
    &descriptor_table_ZtLiveScStateSignal_2eproto_once, descriptor_table_ZtLiveScStateSignal_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_ZtLiveScStateSignal_2eproto::offsets,
    file_level_metadata_ZtLiveScStateSignal_2eproto, file_level_enum_descriptors_ZtLiveScStateSignal_2eproto,
    file_level_service_descriptors_ZtLiveScStateSignal_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_ZtLiveScStateSignal_2eproto_getter() {
  return &descriptor_table_ZtLiveScStateSignal_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_ZtLiveScStateSignal_2eproto(&descriptor_table_ZtLiveScStateSignal_2eproto);
namespace AcFunDanmu {

// ===================================================================

class ZtLiveScStateSignal::_Internal {
 public:
};

void ZtLiveScStateSignal::clear_item() {
  _impl_.item_.Clear();
}
ZtLiveScStateSignal::ZtLiveScStateSignal(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.ZtLiveScStateSignal)
}
ZtLiveScStateSignal::ZtLiveScStateSignal(const ZtLiveScStateSignal& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ZtLiveScStateSignal* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.item_){from._impl_.item_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.ZtLiveScStateSignal)
}

inline void ZtLiveScStateSignal::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.item_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ZtLiveScStateSignal::~ZtLiveScStateSignal() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.ZtLiveScStateSignal)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ZtLiveScStateSignal::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.item_.~RepeatedPtrField();
}

void ZtLiveScStateSignal::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ZtLiveScStateSignal::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.ZtLiveScStateSignal)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.item_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ZtLiveScStateSignal::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .AcFunDanmu.ZtLiveStateSignalItem item = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_item(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* ZtLiveScStateSignal::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.ZtLiveScStateSignal)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .AcFunDanmu.ZtLiveStateSignalItem item = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_item_size()); i < n; i++) {
    const auto& repfield = this->_internal_item(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.ZtLiveScStateSignal)
  return target;
}

size_t ZtLiveScStateSignal::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.ZtLiveScStateSignal)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.ZtLiveStateSignalItem item = 1;
  total_size += 1UL * this->_internal_item_size();
  for (const auto& msg : this->_impl_.item_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ZtLiveScStateSignal::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ZtLiveScStateSignal::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ZtLiveScStateSignal::GetClassData() const { return &_class_data_; }


void ZtLiveScStateSignal::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ZtLiveScStateSignal*>(&to_msg);
  auto& from = static_cast<const ZtLiveScStateSignal&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.ZtLiveScStateSignal)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.item_.MergeFrom(from._impl_.item_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ZtLiveScStateSignal::CopyFrom(const ZtLiveScStateSignal& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.ZtLiveScStateSignal)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ZtLiveScStateSignal::IsInitialized() const {
  return true;
}

void ZtLiveScStateSignal::InternalSwap(ZtLiveScStateSignal* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.item_.InternalSwap(&other->_impl_.item_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ZtLiveScStateSignal::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_ZtLiveScStateSignal_2eproto_getter, &descriptor_table_ZtLiveScStateSignal_2eproto_once,
      file_level_metadata_ZtLiveScStateSignal_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::ZtLiveScStateSignal*
Arena::CreateMaybeMessage< ::AcFunDanmu::ZtLiveScStateSignal >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::ZtLiveScStateSignal >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
