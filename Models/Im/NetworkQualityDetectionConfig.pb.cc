// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NetworkQualityDetectionConfig.proto

#include "NetworkQualityDetectionConfig.pb.h"

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
PROTOBUF_CONSTEXPR NetworkQualityDetectionConfig::NetworkQualityDetectionConfig(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.detectiondomain_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.detectionintervalsec_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct NetworkQualityDetectionConfigDefaultTypeInternal {
  PROTOBUF_CONSTEXPR NetworkQualityDetectionConfigDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~NetworkQualityDetectionConfigDefaultTypeInternal() {}
  union {
    NetworkQualityDetectionConfig _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 NetworkQualityDetectionConfigDefaultTypeInternal _NetworkQualityDetectionConfig_default_instance_;
}  // namespace Config
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_NetworkQualityDetectionConfig_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_NetworkQualityDetectionConfig_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_NetworkQualityDetectionConfig_2eproto = nullptr;

const uint32_t TableStruct_NetworkQualityDetectionConfig_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::NetworkQualityDetectionConfig, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::NetworkQualityDetectionConfig, _impl_.detectiondomain_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Config::NetworkQualityDetectionConfig, _impl_.detectionintervalsec_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Config::NetworkQualityDetectionConfig)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Config::_NetworkQualityDetectionConfig_default_instance_._instance,
};

const char descriptor_table_protodef_NetworkQualityDetectionConfig_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#NetworkQualityDetectionConfig.proto\022\032A"
  "cFunDanmu.Im.Cloud.Config\"V\n\035NetworkQual"
  "ityDetectionConfig\022\027\n\017detectionDomain\030\001 "
  "\001(\t\022\034\n\024detectionIntervalSec\030\002 \001(\005b\006proto"
  "3"
  ;
static ::_pbi::once_flag descriptor_table_NetworkQualityDetectionConfig_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_NetworkQualityDetectionConfig_2eproto = {
    false, false, 161, descriptor_table_protodef_NetworkQualityDetectionConfig_2eproto,
    "NetworkQualityDetectionConfig.proto",
    &descriptor_table_NetworkQualityDetectionConfig_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_NetworkQualityDetectionConfig_2eproto::offsets,
    file_level_metadata_NetworkQualityDetectionConfig_2eproto, file_level_enum_descriptors_NetworkQualityDetectionConfig_2eproto,
    file_level_service_descriptors_NetworkQualityDetectionConfig_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_NetworkQualityDetectionConfig_2eproto_getter() {
  return &descriptor_table_NetworkQualityDetectionConfig_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_NetworkQualityDetectionConfig_2eproto(&descriptor_table_NetworkQualityDetectionConfig_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Config {

// ===================================================================

class NetworkQualityDetectionConfig::_Internal {
 public:
};

NetworkQualityDetectionConfig::NetworkQualityDetectionConfig(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
}
NetworkQualityDetectionConfig::NetworkQualityDetectionConfig(const NetworkQualityDetectionConfig& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  NetworkQualityDetectionConfig* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.detectiondomain_){}
    , decltype(_impl_.detectionintervalsec_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.detectiondomain_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.detectiondomain_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_detectiondomain().empty()) {
    _this->_impl_.detectiondomain_.Set(from._internal_detectiondomain(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.detectionintervalsec_ = from._impl_.detectionintervalsec_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
}

inline void NetworkQualityDetectionConfig::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.detectiondomain_){}
    , decltype(_impl_.detectionintervalsec_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.detectiondomain_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.detectiondomain_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

NetworkQualityDetectionConfig::~NetworkQualityDetectionConfig() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void NetworkQualityDetectionConfig::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.detectiondomain_.Destroy();
}

void NetworkQualityDetectionConfig::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void NetworkQualityDetectionConfig::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.detectiondomain_.ClearToEmpty();
  _impl_.detectionintervalsec_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* NetworkQualityDetectionConfig::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string detectionDomain = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_detectiondomain();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig.detectionDomain"));
        } else
          goto handle_unusual;
        continue;
      // int32 detectionIntervalSec = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.detectionintervalsec_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* NetworkQualityDetectionConfig::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string detectionDomain = 1;
  if (!this->_internal_detectiondomain().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_detectiondomain().data(), static_cast<int>(this->_internal_detectiondomain().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig.detectionDomain");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_detectiondomain(), target);
  }

  // int32 detectionIntervalSec = 2;
  if (this->_internal_detectionintervalsec() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_detectionintervalsec(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
  return target;
}

size_t NetworkQualityDetectionConfig::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string detectionDomain = 1;
  if (!this->_internal_detectiondomain().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_detectiondomain());
  }

  // int32 detectionIntervalSec = 2;
  if (this->_internal_detectionintervalsec() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_detectionintervalsec());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData NetworkQualityDetectionConfig::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    NetworkQualityDetectionConfig::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*NetworkQualityDetectionConfig::GetClassData() const { return &_class_data_; }


void NetworkQualityDetectionConfig::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<NetworkQualityDetectionConfig*>(&to_msg);
  auto& from = static_cast<const NetworkQualityDetectionConfig&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_detectiondomain().empty()) {
    _this->_internal_set_detectiondomain(from._internal_detectiondomain());
  }
  if (from._internal_detectionintervalsec() != 0) {
    _this->_internal_set_detectionintervalsec(from._internal_detectionintervalsec());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void NetworkQualityDetectionConfig::CopyFrom(const NetworkQualityDetectionConfig& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Config.NetworkQualityDetectionConfig)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool NetworkQualityDetectionConfig::IsInitialized() const {
  return true;
}

void NetworkQualityDetectionConfig::InternalSwap(NetworkQualityDetectionConfig* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.detectiondomain_, lhs_arena,
      &other->_impl_.detectiondomain_, rhs_arena
  );
  swap(_impl_.detectionintervalsec_, other->_impl_.detectionintervalsec_);
}

::PROTOBUF_NAMESPACE_ID::Metadata NetworkQualityDetectionConfig::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_NetworkQualityDetectionConfig_2eproto_getter, &descriptor_table_NetworkQualityDetectionConfig_2eproto_once,
      file_level_metadata_NetworkQualityDetectionConfig_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Config
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Config::NetworkQualityDetectionConfig*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Config::NetworkQualityDetectionConfig >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Config::NetworkQualityDetectionConfig >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
