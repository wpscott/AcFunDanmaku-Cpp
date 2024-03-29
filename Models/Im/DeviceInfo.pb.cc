// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DeviceInfo.proto

#include "DeviceInfo.pb.h"

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
namespace Basic {
PROTOBUF_CONSTEXPR DeviceInfo::DeviceInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.osversion_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.devicemodel_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.imeimd5_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.deviceid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.softdid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.kwaidid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.manufacturer_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.devicename_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.platformtype_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct DeviceInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR DeviceInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~DeviceInfoDefaultTypeInternal() {}
  union {
    DeviceInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 DeviceInfoDefaultTypeInternal _DeviceInfo_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_DeviceInfo_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_DeviceInfo_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_DeviceInfo_2eproto = nullptr;

const uint32_t TableStruct_DeviceInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.platformtype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.osversion_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.devicemodel_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.imeimd5_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.deviceid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.softdid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.kwaidid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.manufacturer_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::DeviceInfo, _impl_.devicename_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Basic::DeviceInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Basic::_DeviceInfo_default_instance_._instance,
};

const char descriptor_table_protodef_DeviceInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\020DeviceInfo.proto\022\023AcFunDanmu.Im.Basic\""
  "\242\003\n\nDeviceInfo\022B\n\014platformType\030\001 \001(\0162,.A"
  "cFunDanmu.Im.Basic.DeviceInfo.PlatformTy"
  "pe\022\021\n\tosVersion\030\002 \001(\t\022\023\n\013deviceModel\030\003 \001"
  "(\t\022\017\n\007imeiMd5\030\004 \001(\014\022\020\n\010deviceId\030\005 \001(\t\022\017\n"
  "\007softDid\030\006 \001(\t\022\017\n\007kwaiDid\030\007 \001(\t\022\024\n\014manuf"
  "acturer\030\010 \001(\t\022\022\n\ndeviceName\030\t \001(\t\"\270\001\n\014Pl"
  "atformType\022\014\n\010kInvalid\020\000\022\014\n\010kAndroid\020\001\022\010"
  "\n\004kiOS\020\002\022\014\n\010kWindows\020\003\022\022\n\016WECHAT_ANDROID"
  "\020\004\022\016\n\nWECHAT_IOS\020\005\022\006\n\002H5\020\006\022\016\n\nH5_ANDROID"
  "\020\007\022\n\n\006H5_IOS\020\010\022\016\n\nH5_WINDOWS\020\t\022\n\n\006H5_MAC"
  "\020\n\022\020\n\014kPlatformNum\020\013b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_DeviceInfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_DeviceInfo_2eproto = {
    false, false, 468, descriptor_table_protodef_DeviceInfo_2eproto,
    "DeviceInfo.proto",
    &descriptor_table_DeviceInfo_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_DeviceInfo_2eproto::offsets,
    file_level_metadata_DeviceInfo_2eproto, file_level_enum_descriptors_DeviceInfo_2eproto,
    file_level_service_descriptors_DeviceInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_DeviceInfo_2eproto_getter() {
  return &descriptor_table_DeviceInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_DeviceInfo_2eproto(&descriptor_table_DeviceInfo_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Basic {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DeviceInfo_PlatformType_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_DeviceInfo_2eproto);
  return file_level_enum_descriptors_DeviceInfo_2eproto[0];
}
bool DeviceInfo_PlatformType_IsValid(int value) {
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

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr DeviceInfo_PlatformType DeviceInfo::kInvalid;
constexpr DeviceInfo_PlatformType DeviceInfo::kAndroid;
constexpr DeviceInfo_PlatformType DeviceInfo::kiOS;
constexpr DeviceInfo_PlatformType DeviceInfo::kWindows;
constexpr DeviceInfo_PlatformType DeviceInfo::WECHAT_ANDROID;
constexpr DeviceInfo_PlatformType DeviceInfo::WECHAT_IOS;
constexpr DeviceInfo_PlatformType DeviceInfo::H5;
constexpr DeviceInfo_PlatformType DeviceInfo::H5_ANDROID;
constexpr DeviceInfo_PlatformType DeviceInfo::H5_IOS;
constexpr DeviceInfo_PlatformType DeviceInfo::H5_WINDOWS;
constexpr DeviceInfo_PlatformType DeviceInfo::H5_MAC;
constexpr DeviceInfo_PlatformType DeviceInfo::kPlatformNum;
constexpr DeviceInfo_PlatformType DeviceInfo::PlatformType_MIN;
constexpr DeviceInfo_PlatformType DeviceInfo::PlatformType_MAX;
constexpr int DeviceInfo::PlatformType_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class DeviceInfo::_Internal {
 public:
};

DeviceInfo::DeviceInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Basic.DeviceInfo)
}
DeviceInfo::DeviceInfo(const DeviceInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  DeviceInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.osversion_){}
    , decltype(_impl_.devicemodel_){}
    , decltype(_impl_.imeimd5_){}
    , decltype(_impl_.deviceid_){}
    , decltype(_impl_.softdid_){}
    , decltype(_impl_.kwaidid_){}
    , decltype(_impl_.manufacturer_){}
    , decltype(_impl_.devicename_){}
    , decltype(_impl_.platformtype_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.osversion_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.osversion_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_osversion().empty()) {
    _this->_impl_.osversion_.Set(from._internal_osversion(), 
      _this->GetArenaForAllocation());
  }
  _impl_.devicemodel_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.devicemodel_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_devicemodel().empty()) {
    _this->_impl_.devicemodel_.Set(from._internal_devicemodel(), 
      _this->GetArenaForAllocation());
  }
  _impl_.imeimd5_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.imeimd5_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_imeimd5().empty()) {
    _this->_impl_.imeimd5_.Set(from._internal_imeimd5(), 
      _this->GetArenaForAllocation());
  }
  _impl_.deviceid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.deviceid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_deviceid().empty()) {
    _this->_impl_.deviceid_.Set(from._internal_deviceid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.softdid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.softdid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_softdid().empty()) {
    _this->_impl_.softdid_.Set(from._internal_softdid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.kwaidid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.kwaidid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_kwaidid().empty()) {
    _this->_impl_.kwaidid_.Set(from._internal_kwaidid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.manufacturer_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.manufacturer_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_manufacturer().empty()) {
    _this->_impl_.manufacturer_.Set(from._internal_manufacturer(), 
      _this->GetArenaForAllocation());
  }
  _impl_.devicename_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.devicename_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_devicename().empty()) {
    _this->_impl_.devicename_.Set(from._internal_devicename(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.platformtype_ = from._impl_.platformtype_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Basic.DeviceInfo)
}

inline void DeviceInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.osversion_){}
    , decltype(_impl_.devicemodel_){}
    , decltype(_impl_.imeimd5_){}
    , decltype(_impl_.deviceid_){}
    , decltype(_impl_.softdid_){}
    , decltype(_impl_.kwaidid_){}
    , decltype(_impl_.manufacturer_){}
    , decltype(_impl_.devicename_){}
    , decltype(_impl_.platformtype_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.osversion_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.osversion_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.devicemodel_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.devicemodel_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.imeimd5_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.imeimd5_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.deviceid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.deviceid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.softdid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.softdid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.kwaidid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.kwaidid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.manufacturer_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.manufacturer_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.devicename_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.devicename_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

DeviceInfo::~DeviceInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Basic.DeviceInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void DeviceInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.osversion_.Destroy();
  _impl_.devicemodel_.Destroy();
  _impl_.imeimd5_.Destroy();
  _impl_.deviceid_.Destroy();
  _impl_.softdid_.Destroy();
  _impl_.kwaidid_.Destroy();
  _impl_.manufacturer_.Destroy();
  _impl_.devicename_.Destroy();
}

void DeviceInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void DeviceInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Basic.DeviceInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.osversion_.ClearToEmpty();
  _impl_.devicemodel_.ClearToEmpty();
  _impl_.imeimd5_.ClearToEmpty();
  _impl_.deviceid_.ClearToEmpty();
  _impl_.softdid_.ClearToEmpty();
  _impl_.kwaidid_.ClearToEmpty();
  _impl_.manufacturer_.ClearToEmpty();
  _impl_.devicename_.ClearToEmpty();
  _impl_.platformtype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* DeviceInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Basic.DeviceInfo.PlatformType platformType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_platformtype(static_cast<::AcFunDanmu::Im::Basic::DeviceInfo_PlatformType>(val));
        } else
          goto handle_unusual;
        continue;
      // string osVersion = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_osversion();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.DeviceInfo.osVersion"));
        } else
          goto handle_unusual;
        continue;
      // string deviceModel = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_devicemodel();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.DeviceInfo.deviceModel"));
        } else
          goto handle_unusual;
        continue;
      // bytes imeiMd5 = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_imeimd5();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string deviceId = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_deviceid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.DeviceInfo.deviceId"));
        } else
          goto handle_unusual;
        continue;
      // string softDid = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          auto str = _internal_mutable_softdid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.DeviceInfo.softDid"));
        } else
          goto handle_unusual;
        continue;
      // string kwaiDid = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          auto str = _internal_mutable_kwaidid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.DeviceInfo.kwaiDid"));
        } else
          goto handle_unusual;
        continue;
      // string manufacturer = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          auto str = _internal_mutable_manufacturer();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.DeviceInfo.manufacturer"));
        } else
          goto handle_unusual;
        continue;
      // string deviceName = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 74)) {
          auto str = _internal_mutable_devicename();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.DeviceInfo.deviceName"));
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

uint8_t* DeviceInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Basic.DeviceInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Basic.DeviceInfo.PlatformType platformType = 1;
  if (this->_internal_platformtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_platformtype(), target);
  }

  // string osVersion = 2;
  if (!this->_internal_osversion().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_osversion().data(), static_cast<int>(this->_internal_osversion().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.DeviceInfo.osVersion");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_osversion(), target);
  }

  // string deviceModel = 3;
  if (!this->_internal_devicemodel().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_devicemodel().data(), static_cast<int>(this->_internal_devicemodel().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.DeviceInfo.deviceModel");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_devicemodel(), target);
  }

  // bytes imeiMd5 = 4;
  if (!this->_internal_imeimd5().empty()) {
    target = stream->WriteBytesMaybeAliased(
        4, this->_internal_imeimd5(), target);
  }

  // string deviceId = 5;
  if (!this->_internal_deviceid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_deviceid().data(), static_cast<int>(this->_internal_deviceid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.DeviceInfo.deviceId");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_deviceid(), target);
  }

  // string softDid = 6;
  if (!this->_internal_softdid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_softdid().data(), static_cast<int>(this->_internal_softdid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.DeviceInfo.softDid");
    target = stream->WriteStringMaybeAliased(
        6, this->_internal_softdid(), target);
  }

  // string kwaiDid = 7;
  if (!this->_internal_kwaidid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_kwaidid().data(), static_cast<int>(this->_internal_kwaidid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.DeviceInfo.kwaiDid");
    target = stream->WriteStringMaybeAliased(
        7, this->_internal_kwaidid(), target);
  }

  // string manufacturer = 8;
  if (!this->_internal_manufacturer().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_manufacturer().data(), static_cast<int>(this->_internal_manufacturer().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.DeviceInfo.manufacturer");
    target = stream->WriteStringMaybeAliased(
        8, this->_internal_manufacturer(), target);
  }

  // string deviceName = 9;
  if (!this->_internal_devicename().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_devicename().data(), static_cast<int>(this->_internal_devicename().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.DeviceInfo.deviceName");
    target = stream->WriteStringMaybeAliased(
        9, this->_internal_devicename(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Basic.DeviceInfo)
  return target;
}

size_t DeviceInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Basic.DeviceInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string osVersion = 2;
  if (!this->_internal_osversion().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_osversion());
  }

  // string deviceModel = 3;
  if (!this->_internal_devicemodel().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_devicemodel());
  }

  // bytes imeiMd5 = 4;
  if (!this->_internal_imeimd5().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::BytesSize(
        this->_internal_imeimd5());
  }

  // string deviceId = 5;
  if (!this->_internal_deviceid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_deviceid());
  }

  // string softDid = 6;
  if (!this->_internal_softdid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_softdid());
  }

  // string kwaiDid = 7;
  if (!this->_internal_kwaidid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_kwaidid());
  }

  // string manufacturer = 8;
  if (!this->_internal_manufacturer().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_manufacturer());
  }

  // string deviceName = 9;
  if (!this->_internal_devicename().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_devicename());
  }

  // .AcFunDanmu.Im.Basic.DeviceInfo.PlatformType platformType = 1;
  if (this->_internal_platformtype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_platformtype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData DeviceInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    DeviceInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*DeviceInfo::GetClassData() const { return &_class_data_; }


void DeviceInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<DeviceInfo*>(&to_msg);
  auto& from = static_cast<const DeviceInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Basic.DeviceInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_osversion().empty()) {
    _this->_internal_set_osversion(from._internal_osversion());
  }
  if (!from._internal_devicemodel().empty()) {
    _this->_internal_set_devicemodel(from._internal_devicemodel());
  }
  if (!from._internal_imeimd5().empty()) {
    _this->_internal_set_imeimd5(from._internal_imeimd5());
  }
  if (!from._internal_deviceid().empty()) {
    _this->_internal_set_deviceid(from._internal_deviceid());
  }
  if (!from._internal_softdid().empty()) {
    _this->_internal_set_softdid(from._internal_softdid());
  }
  if (!from._internal_kwaidid().empty()) {
    _this->_internal_set_kwaidid(from._internal_kwaidid());
  }
  if (!from._internal_manufacturer().empty()) {
    _this->_internal_set_manufacturer(from._internal_manufacturer());
  }
  if (!from._internal_devicename().empty()) {
    _this->_internal_set_devicename(from._internal_devicename());
  }
  if (from._internal_platformtype() != 0) {
    _this->_internal_set_platformtype(from._internal_platformtype());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void DeviceInfo::CopyFrom(const DeviceInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Basic.DeviceInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool DeviceInfo::IsInitialized() const {
  return true;
}

void DeviceInfo::InternalSwap(DeviceInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.osversion_, lhs_arena,
      &other->_impl_.osversion_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.devicemodel_, lhs_arena,
      &other->_impl_.devicemodel_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.imeimd5_, lhs_arena,
      &other->_impl_.imeimd5_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.deviceid_, lhs_arena,
      &other->_impl_.deviceid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.softdid_, lhs_arena,
      &other->_impl_.softdid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.kwaidid_, lhs_arena,
      &other->_impl_.kwaidid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.manufacturer_, lhs_arena,
      &other->_impl_.manufacturer_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.devicename_, lhs_arena,
      &other->_impl_.devicename_, rhs_arena
  );
  swap(_impl_.platformtype_, other->_impl_.platformtype_);
}

::PROTOBUF_NAMESPACE_ID::Metadata DeviceInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_DeviceInfo_2eproto_getter, &descriptor_table_DeviceInfo_2eproto_once,
      file_level_metadata_DeviceInfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Basic::DeviceInfo*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Basic::DeviceInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Basic::DeviceInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
