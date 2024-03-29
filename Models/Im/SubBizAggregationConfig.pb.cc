// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SubBizAggregationConfig.proto

#include "SubBizAggregationConfig.pb.h"

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
namespace Im {
namespace Cloud {
namespace Config {
PROTOBUF_CONSTEXPR SubBizAggregationConfig::SubBizAggregationConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.mastersubbiz_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.needaggregate_)*/false
  , /*decltype(_impl_.categoryid_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SubBizAggregationConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SubBizAggregationConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SubBizAggregationConfigDefaultTypeInternal() {}
  union {
    SubBizAggregationConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SubBizAggregationConfigDefaultTypeInternal _SubBizAggregationConfig_default_instance_;
}  // namespace Config
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SubBizAggregationConfig_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SubBizAggregationConfig_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SubBizAggregationConfig_2eproto = nullptr;

const uint32_t TableStruct_SubBizAggregationConfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::SubBizAggregationConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::SubBizAggregationConfig, _impl_.needaggregate_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::SubBizAggregationConfig, _impl_.mastersubbiz_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::SubBizAggregationConfig, _impl_.categoryid_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Config::SubBizAggregationConfig)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Config::_SubBizAggregationConfig_default_instance_._instance,
};

const char descriptor_table_protodef_SubBizAggregationConfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035SubBizAggregationConfig.proto\022\032AcFunDa"
  "nmu.Im.Cloud.Config\"Z\n\027SubBizAggregation"
  "Config\022\025\n\rneedAggregate\030\001 \001(\010\022\024\n\014masterS"
  "ubBiz\030\002 \001(\t\022\022\n\ncategoryId\030\003 \001(\005b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_SubBizAggregationConfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SubBizAggregationConfig_2eproto = {
    false, false, 159, descriptor_table_protodef_SubBizAggregationConfig_2eproto,
    "SubBizAggregationConfig.proto",
    &descriptor_table_SubBizAggregationConfig_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_SubBizAggregationConfig_2eproto::offsets,
    file_level_metadata_SubBizAggregationConfig_2eproto, file_level_enum_descriptors_SubBizAggregationConfig_2eproto,
    file_level_service_descriptors_SubBizAggregationConfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SubBizAggregationConfig_2eproto_getter() {
  return &descriptor_table_SubBizAggregationConfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SubBizAggregationConfig_2eproto(&descriptor_table_SubBizAggregationConfig_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Config {

// ===================================================================

class SubBizAggregationConfig::_Internal {
 public:
};

SubBizAggregationConfig::SubBizAggregationConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
}
SubBizAggregationConfig::SubBizAggregationConfig(const SubBizAggregationConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SubBizAggregationConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.mastersubbiz_){}
    , decltype(_impl_.needaggregate_){}
    , decltype(_impl_.categoryid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.mastersubbiz_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.mastersubbiz_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_mastersubbiz().empty()) {
    _this->_impl_.mastersubbiz_.Set(from._internal_mastersubbiz(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.needaggregate_, &from._impl_.needaggregate_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.categoryid_) -
    reinterpret_cast<char*>(&_impl_.needaggregate_)) + sizeof(_impl_.categoryid_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
}

inline void SubBizAggregationConfig::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.mastersubbiz_){}
    , decltype(_impl_.needaggregate_){false}
    , decltype(_impl_.categoryid_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.mastersubbiz_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.mastersubbiz_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

SubBizAggregationConfig::~SubBizAggregationConfig() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SubBizAggregationConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.mastersubbiz_.Destroy();
}

void SubBizAggregationConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SubBizAggregationConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.mastersubbiz_.ClearToEmpty();
  ::memset(&_impl_.needaggregate_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.categoryid_) -
      reinterpret_cast<char*>(&_impl_.needaggregate_)) + sizeof(_impl_.categoryid_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SubBizAggregationConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool needAggregate = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.needaggregate_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string masterSubBiz = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_mastersubbiz();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig.masterSubBiz"));
        } else
          goto handle_unusual;
        continue;
      // int32 categoryId = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.categoryid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
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

uint8_t* SubBizAggregationConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool needAggregate = 1;
  if (this->_internal_needaggregate() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_needaggregate(), target);
  }

  // string masterSubBiz = 2;
  if (!this->_internal_mastersubbiz().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_mastersubbiz().data(), static_cast<int>(this->_internal_mastersubbiz().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig.masterSubBiz");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_mastersubbiz(), target);
  }

  // int32 categoryId = 3;
  if (this->_internal_categoryid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_categoryid(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
  return target;
}

size_t SubBizAggregationConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string masterSubBiz = 2;
  if (!this->_internal_mastersubbiz().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_mastersubbiz());
  }

  // bool needAggregate = 1;
  if (this->_internal_needaggregate() != 0) {
    total_size += 1 + 1;
  }

  // int32 categoryId = 3;
  if (this->_internal_categoryid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_categoryid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SubBizAggregationConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SubBizAggregationConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SubBizAggregationConfig::GetClassData() const { return &_class_data_; }


void SubBizAggregationConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SubBizAggregationConfig*>(&to_msg);
  auto& from = static_cast<const SubBizAggregationConfig&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_mastersubbiz().empty()) {
    _this->_internal_set_mastersubbiz(from._internal_mastersubbiz());
  }
  if (from._internal_needaggregate() != 0) {
    _this->_internal_set_needaggregate(from._internal_needaggregate());
  }
  if (from._internal_categoryid() != 0) {
    _this->_internal_set_categoryid(from._internal_categoryid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SubBizAggregationConfig::CopyFrom(const SubBizAggregationConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Config.SubBizAggregationConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SubBizAggregationConfig::IsInitialized() const {
  return true;
}

void SubBizAggregationConfig::InternalSwap(SubBizAggregationConfig* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.mastersubbiz_, lhs_arena,
      &other->_impl_.mastersubbiz_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SubBizAggregationConfig, _impl_.categoryid_)
      + sizeof(SubBizAggregationConfig::_impl_.categoryid_)
      - PROTOBUF_FIELD_OFFSET(SubBizAggregationConfig, _impl_.needaggregate_)>(
          reinterpret_cast<char*>(&_impl_.needaggregate_),
          reinterpret_cast<char*>(&other->_impl_.needaggregate_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SubBizAggregationConfig::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SubBizAggregationConfig_2eproto_getter, &descriptor_table_SubBizAggregationConfig_2eproto_once,
      file_level_metadata_SubBizAggregationConfig_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Config
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Config::SubBizAggregationConfig*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Config::SubBizAggregationConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Config::SubBizAggregationConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
