// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: RequsetBasicInfo.proto

#include "RequsetBasicInfo.pb.h"

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
PROTOBUF_CONSTEXPR RequsetBasicInfo::RequsetBasicInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.deviceid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.clientip_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.appversion_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.channel_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.location_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.kpf_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.clientipv6_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.appinfo_)*/nullptr
  , /*decltype(_impl_.deviceinfo_)*/nullptr
  , /*decltype(_impl_.envinfo_)*/nullptr
  , /*decltype(_impl_.clienttype_)*/0
  , /*decltype(_impl_.clientport_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct RequsetBasicInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR RequsetBasicInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~RequsetBasicInfoDefaultTypeInternal() {}
  union {
    RequsetBasicInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 RequsetBasicInfoDefaultTypeInternal _RequsetBasicInfo_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_RequsetBasicInfo_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_RequsetBasicInfo_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_RequsetBasicInfo_2eproto = nullptr;

const uint32_t TableStruct_RequsetBasicInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.clienttype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.deviceid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.clientip_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.appversion_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.channel_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.appinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.deviceinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.envinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.clientport_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.location_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.kpf_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Basic::RequsetBasicInfo, _impl_.clientipv6_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Basic::RequsetBasicInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Basic::_RequsetBasicInfo_default_instance_._instance,
};

const char descriptor_table_protodef_RequsetBasicInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026RequsetBasicInfo.proto\022\023AcFunDanmu.Im."
  "Basic\032\rAppInfo.proto\032\020DeviceInfo.proto\032\r"
  "EnvInfo.proto\"\367\002\n\020RequsetBasicInfo\022@\n\ncl"
  "ientType\030\001 \001(\0162,.AcFunDanmu.Im.Basic.Dev"
  "iceInfo.PlatformType\022\020\n\010deviceId\030\002 \001(\t\022\020"
  "\n\010clientIp\030\003 \001(\t\022\022\n\nappVersion\030\004 \001(\t\022\017\n\007"
  "channel\030\005 \001(\t\022-\n\007appInfo\030\006 \001(\0132\034.AcFunDa"
  "nmu.Im.Basic.AppInfo\0223\n\ndeviceInfo\030\007 \001(\013"
  "2\037.AcFunDanmu.Im.Basic.DeviceInfo\022-\n\007env"
  "Info\030\010 \001(\0132\034.AcFunDanmu.Im.Basic.EnvInfo"
  "\022\022\n\nclientPort\030\t \001(\005\022\020\n\010location\030\n \001(\t\022\013"
  "\n\003kpf\030\013 \001(\t\022\022\n\nclientIpV6\030\014 \001(\tb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_RequsetBasicInfo_2eproto_deps[3] = {
  &::descriptor_table_AppInfo_2eproto,
  &::descriptor_table_DeviceInfo_2eproto,
  &::descriptor_table_EnvInfo_2eproto,
};
static ::_pbi::once_flag descriptor_table_RequsetBasicInfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_RequsetBasicInfo_2eproto = {
    false, false, 479, descriptor_table_protodef_RequsetBasicInfo_2eproto,
    "RequsetBasicInfo.proto",
    &descriptor_table_RequsetBasicInfo_2eproto_once, descriptor_table_RequsetBasicInfo_2eproto_deps, 3, 1,
    schemas, file_default_instances, TableStruct_RequsetBasicInfo_2eproto::offsets,
    file_level_metadata_RequsetBasicInfo_2eproto, file_level_enum_descriptors_RequsetBasicInfo_2eproto,
    file_level_service_descriptors_RequsetBasicInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_RequsetBasicInfo_2eproto_getter() {
  return &descriptor_table_RequsetBasicInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_RequsetBasicInfo_2eproto(&descriptor_table_RequsetBasicInfo_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Basic {

// ===================================================================

class RequsetBasicInfo::_Internal {
 public:
  static const ::AcFunDanmu::Im::Basic::AppInfo& appinfo(const RequsetBasicInfo* msg);
  static const ::AcFunDanmu::Im::Basic::DeviceInfo& deviceinfo(const RequsetBasicInfo* msg);
  static const ::AcFunDanmu::Im::Basic::EnvInfo& envinfo(const RequsetBasicInfo* msg);
};

const ::AcFunDanmu::Im::Basic::AppInfo&
RequsetBasicInfo::_Internal::appinfo(const RequsetBasicInfo* msg) {
  return *msg->_impl_.appinfo_;
}
const ::AcFunDanmu::Im::Basic::DeviceInfo&
RequsetBasicInfo::_Internal::deviceinfo(const RequsetBasicInfo* msg) {
  return *msg->_impl_.deviceinfo_;
}
const ::AcFunDanmu::Im::Basic::EnvInfo&
RequsetBasicInfo::_Internal::envinfo(const RequsetBasicInfo* msg) {
  return *msg->_impl_.envinfo_;
}
void RequsetBasicInfo::clear_appinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.appinfo_ != nullptr) {
    delete _impl_.appinfo_;
  }
  _impl_.appinfo_ = nullptr;
}
void RequsetBasicInfo::clear_deviceinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.deviceinfo_ != nullptr) {
    delete _impl_.deviceinfo_;
  }
  _impl_.deviceinfo_ = nullptr;
}
void RequsetBasicInfo::clear_envinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.envinfo_ != nullptr) {
    delete _impl_.envinfo_;
  }
  _impl_.envinfo_ = nullptr;
}
RequsetBasicInfo::RequsetBasicInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Basic.RequsetBasicInfo)
}
RequsetBasicInfo::RequsetBasicInfo(const RequsetBasicInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  RequsetBasicInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.deviceid_){}
    , decltype(_impl_.clientip_){}
    , decltype(_impl_.appversion_){}
    , decltype(_impl_.channel_){}
    , decltype(_impl_.location_){}
    , decltype(_impl_.kpf_){}
    , decltype(_impl_.clientipv6_){}
    , decltype(_impl_.appinfo_){nullptr}
    , decltype(_impl_.deviceinfo_){nullptr}
    , decltype(_impl_.envinfo_){nullptr}
    , decltype(_impl_.clienttype_){}
    , decltype(_impl_.clientport_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.deviceid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.deviceid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_deviceid().empty()) {
    _this->_impl_.deviceid_.Set(from._internal_deviceid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.clientip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_clientip().empty()) {
    _this->_impl_.clientip_.Set(from._internal_clientip(), 
      _this->GetArenaForAllocation());
  }
  _impl_.appversion_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.appversion_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_appversion().empty()) {
    _this->_impl_.appversion_.Set(from._internal_appversion(), 
      _this->GetArenaForAllocation());
  }
  _impl_.channel_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.channel_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_channel().empty()) {
    _this->_impl_.channel_.Set(from._internal_channel(), 
      _this->GetArenaForAllocation());
  }
  _impl_.location_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.location_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_location().empty()) {
    _this->_impl_.location_.Set(from._internal_location(), 
      _this->GetArenaForAllocation());
  }
  _impl_.kpf_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.kpf_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_kpf().empty()) {
    _this->_impl_.kpf_.Set(from._internal_kpf(), 
      _this->GetArenaForAllocation());
  }
  _impl_.clientipv6_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientipv6_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_clientipv6().empty()) {
    _this->_impl_.clientipv6_.Set(from._internal_clientipv6(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_appinfo()) {
    _this->_impl_.appinfo_ = new ::AcFunDanmu::Im::Basic::AppInfo(*from._impl_.appinfo_);
  }
  if (from._internal_has_deviceinfo()) {
    _this->_impl_.deviceinfo_ = new ::AcFunDanmu::Im::Basic::DeviceInfo(*from._impl_.deviceinfo_);
  }
  if (from._internal_has_envinfo()) {
    _this->_impl_.envinfo_ = new ::AcFunDanmu::Im::Basic::EnvInfo(*from._impl_.envinfo_);
  }
  ::memcpy(&_impl_.clienttype_, &from._impl_.clienttype_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.clientport_) -
    reinterpret_cast<char*>(&_impl_.clienttype_)) + sizeof(_impl_.clientport_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Basic.RequsetBasicInfo)
}

inline void RequsetBasicInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.deviceid_){}
    , decltype(_impl_.clientip_){}
    , decltype(_impl_.appversion_){}
    , decltype(_impl_.channel_){}
    , decltype(_impl_.location_){}
    , decltype(_impl_.kpf_){}
    , decltype(_impl_.clientipv6_){}
    , decltype(_impl_.appinfo_){nullptr}
    , decltype(_impl_.deviceinfo_){nullptr}
    , decltype(_impl_.envinfo_){nullptr}
    , decltype(_impl_.clienttype_){0}
    , decltype(_impl_.clientport_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.deviceid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.deviceid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.clientip_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientip_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.appversion_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.appversion_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.channel_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.channel_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.location_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.location_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.kpf_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.kpf_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.clientipv6_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.clientipv6_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

RequsetBasicInfo::~RequsetBasicInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Basic.RequsetBasicInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void RequsetBasicInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.deviceid_.Destroy();
  _impl_.clientip_.Destroy();
  _impl_.appversion_.Destroy();
  _impl_.channel_.Destroy();
  _impl_.location_.Destroy();
  _impl_.kpf_.Destroy();
  _impl_.clientipv6_.Destroy();
  if (this != internal_default_instance()) delete _impl_.appinfo_;
  if (this != internal_default_instance()) delete _impl_.deviceinfo_;
  if (this != internal_default_instance()) delete _impl_.envinfo_;
}

void RequsetBasicInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void RequsetBasicInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Basic.RequsetBasicInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.deviceid_.ClearToEmpty();
  _impl_.clientip_.ClearToEmpty();
  _impl_.appversion_.ClearToEmpty();
  _impl_.channel_.ClearToEmpty();
  _impl_.location_.ClearToEmpty();
  _impl_.kpf_.ClearToEmpty();
  _impl_.clientipv6_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.appinfo_ != nullptr) {
    delete _impl_.appinfo_;
  }
  _impl_.appinfo_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.deviceinfo_ != nullptr) {
    delete _impl_.deviceinfo_;
  }
  _impl_.deviceinfo_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.envinfo_ != nullptr) {
    delete _impl_.envinfo_;
  }
  _impl_.envinfo_ = nullptr;
  ::memset(&_impl_.clienttype_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.clientport_) -
      reinterpret_cast<char*>(&_impl_.clienttype_)) + sizeof(_impl_.clientport_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* RequsetBasicInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Basic.DeviceInfo.PlatformType clientType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_clienttype(static_cast<::AcFunDanmu::Im::Basic::DeviceInfo_PlatformType>(val));
        } else
          goto handle_unusual;
        continue;
      // string deviceId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_deviceid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.RequsetBasicInfo.deviceId"));
        } else
          goto handle_unusual;
        continue;
      // string clientIp = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_clientip();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.RequsetBasicInfo.clientIp"));
        } else
          goto handle_unusual;
        continue;
      // string appVersion = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_appversion();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.RequsetBasicInfo.appVersion"));
        } else
          goto handle_unusual;
        continue;
      // string channel = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_channel();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.RequsetBasicInfo.channel"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Basic.AppInfo appInfo = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 50)) {
          ptr = ctx->ParseMessage(_internal_mutable_appinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Basic.DeviceInfo deviceInfo = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 58)) {
          ptr = ctx->ParseMessage(_internal_mutable_deviceinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Basic.EnvInfo envInfo = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          ptr = ctx->ParseMessage(_internal_mutable_envinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 clientPort = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          _impl_.clientport_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string location = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 82)) {
          auto str = _internal_mutable_location();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.RequsetBasicInfo.location"));
        } else
          goto handle_unusual;
        continue;
      // string kpf = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 90)) {
          auto str = _internal_mutable_kpf();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.RequsetBasicInfo.kpf"));
        } else
          goto handle_unusual;
        continue;
      // string clientIpV6 = 12;
      case 12:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 98)) {
          auto str = _internal_mutable_clientipv6();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Basic.RequsetBasicInfo.clientIpV6"));
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

uint8_t* RequsetBasicInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Basic.RequsetBasicInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Basic.DeviceInfo.PlatformType clientType = 1;
  if (this->_internal_clienttype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_clienttype(), target);
  }

  // string deviceId = 2;
  if (!this->_internal_deviceid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_deviceid().data(), static_cast<int>(this->_internal_deviceid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.RequsetBasicInfo.deviceId");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_deviceid(), target);
  }

  // string clientIp = 3;
  if (!this->_internal_clientip().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_clientip().data(), static_cast<int>(this->_internal_clientip().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.RequsetBasicInfo.clientIp");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_clientip(), target);
  }

  // string appVersion = 4;
  if (!this->_internal_appversion().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_appversion().data(), static_cast<int>(this->_internal_appversion().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.RequsetBasicInfo.appVersion");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_appversion(), target);
  }

  // string channel = 5;
  if (!this->_internal_channel().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_channel().data(), static_cast<int>(this->_internal_channel().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.RequsetBasicInfo.channel");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_channel(), target);
  }

  // .AcFunDanmu.Im.Basic.AppInfo appInfo = 6;
  if (this->_internal_has_appinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(6, _Internal::appinfo(this),
        _Internal::appinfo(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Basic.DeviceInfo deviceInfo = 7;
  if (this->_internal_has_deviceinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(7, _Internal::deviceinfo(this),
        _Internal::deviceinfo(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Basic.EnvInfo envInfo = 8;
  if (this->_internal_has_envinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(8, _Internal::envinfo(this),
        _Internal::envinfo(this).GetCachedSize(), target, stream);
  }

  // int32 clientPort = 9;
  if (this->_internal_clientport() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(9, this->_internal_clientport(), target);
  }

  // string location = 10;
  if (!this->_internal_location().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_location().data(), static_cast<int>(this->_internal_location().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.RequsetBasicInfo.location");
    target = stream->WriteStringMaybeAliased(
        10, this->_internal_location(), target);
  }

  // string kpf = 11;
  if (!this->_internal_kpf().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_kpf().data(), static_cast<int>(this->_internal_kpf().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.RequsetBasicInfo.kpf");
    target = stream->WriteStringMaybeAliased(
        11, this->_internal_kpf(), target);
  }

  // string clientIpV6 = 12;
  if (!this->_internal_clientipv6().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_clientipv6().data(), static_cast<int>(this->_internal_clientipv6().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Basic.RequsetBasicInfo.clientIpV6");
    target = stream->WriteStringMaybeAliased(
        12, this->_internal_clientipv6(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Basic.RequsetBasicInfo)
  return target;
}

size_t RequsetBasicInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Basic.RequsetBasicInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string deviceId = 2;
  if (!this->_internal_deviceid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_deviceid());
  }

  // string clientIp = 3;
  if (!this->_internal_clientip().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_clientip());
  }

  // string appVersion = 4;
  if (!this->_internal_appversion().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_appversion());
  }

  // string channel = 5;
  if (!this->_internal_channel().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_channel());
  }

  // string location = 10;
  if (!this->_internal_location().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_location());
  }

  // string kpf = 11;
  if (!this->_internal_kpf().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_kpf());
  }

  // string clientIpV6 = 12;
  if (!this->_internal_clientipv6().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_clientipv6());
  }

  // .AcFunDanmu.Im.Basic.AppInfo appInfo = 6;
  if (this->_internal_has_appinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.appinfo_);
  }

  // .AcFunDanmu.Im.Basic.DeviceInfo deviceInfo = 7;
  if (this->_internal_has_deviceinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.deviceinfo_);
  }

  // .AcFunDanmu.Im.Basic.EnvInfo envInfo = 8;
  if (this->_internal_has_envinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.envinfo_);
  }

  // .AcFunDanmu.Im.Basic.DeviceInfo.PlatformType clientType = 1;
  if (this->_internal_clienttype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_clienttype());
  }

  // int32 clientPort = 9;
  if (this->_internal_clientport() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_clientport());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData RequsetBasicInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    RequsetBasicInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*RequsetBasicInfo::GetClassData() const { return &_class_data_; }


void RequsetBasicInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<RequsetBasicInfo*>(&to_msg);
  auto& from = static_cast<const RequsetBasicInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Basic.RequsetBasicInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_deviceid().empty()) {
    _this->_internal_set_deviceid(from._internal_deviceid());
  }
  if (!from._internal_clientip().empty()) {
    _this->_internal_set_clientip(from._internal_clientip());
  }
  if (!from._internal_appversion().empty()) {
    _this->_internal_set_appversion(from._internal_appversion());
  }
  if (!from._internal_channel().empty()) {
    _this->_internal_set_channel(from._internal_channel());
  }
  if (!from._internal_location().empty()) {
    _this->_internal_set_location(from._internal_location());
  }
  if (!from._internal_kpf().empty()) {
    _this->_internal_set_kpf(from._internal_kpf());
  }
  if (!from._internal_clientipv6().empty()) {
    _this->_internal_set_clientipv6(from._internal_clientipv6());
  }
  if (from._internal_has_appinfo()) {
    _this->_internal_mutable_appinfo()->::AcFunDanmu::Im::Basic::AppInfo::MergeFrom(
        from._internal_appinfo());
  }
  if (from._internal_has_deviceinfo()) {
    _this->_internal_mutable_deviceinfo()->::AcFunDanmu::Im::Basic::DeviceInfo::MergeFrom(
        from._internal_deviceinfo());
  }
  if (from._internal_has_envinfo()) {
    _this->_internal_mutable_envinfo()->::AcFunDanmu::Im::Basic::EnvInfo::MergeFrom(
        from._internal_envinfo());
  }
  if (from._internal_clienttype() != 0) {
    _this->_internal_set_clienttype(from._internal_clienttype());
  }
  if (from._internal_clientport() != 0) {
    _this->_internal_set_clientport(from._internal_clientport());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void RequsetBasicInfo::CopyFrom(const RequsetBasicInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Basic.RequsetBasicInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RequsetBasicInfo::IsInitialized() const {
  return true;
}

void RequsetBasicInfo::InternalSwap(RequsetBasicInfo* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.deviceid_, lhs_arena,
      &other->_impl_.deviceid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.clientip_, lhs_arena,
      &other->_impl_.clientip_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.appversion_, lhs_arena,
      &other->_impl_.appversion_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.channel_, lhs_arena,
      &other->_impl_.channel_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.location_, lhs_arena,
      &other->_impl_.location_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.kpf_, lhs_arena,
      &other->_impl_.kpf_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.clientipv6_, lhs_arena,
      &other->_impl_.clientipv6_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(RequsetBasicInfo, _impl_.clientport_)
      + sizeof(RequsetBasicInfo::_impl_.clientport_)
      - PROTOBUF_FIELD_OFFSET(RequsetBasicInfo, _impl_.appinfo_)>(
          reinterpret_cast<char*>(&_impl_.appinfo_),
          reinterpret_cast<char*>(&other->_impl_.appinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata RequsetBasicInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_RequsetBasicInfo_2eproto_getter, &descriptor_table_RequsetBasicInfo_2eproto_once,
      file_level_metadata_RequsetBasicInfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Basic::RequsetBasicInfo*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Basic::RequsetBasicInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Basic::RequsetBasicInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
