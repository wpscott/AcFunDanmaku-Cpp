// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: DeviceInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_DeviceInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_DeviceInfo_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_DeviceInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_DeviceInfo_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_DeviceInfo_2eproto;
namespace AcFunDanmu {
class DeviceInfo;
class DeviceInfoDefaultTypeInternal;
extern DeviceInfoDefaultTypeInternal _DeviceInfo_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::DeviceInfo* Arena::CreateMaybeMessage<::AcFunDanmu::DeviceInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum DeviceInfo_PlatformType : int {
  DeviceInfo_PlatformType_kInvalid = 0,
  DeviceInfo_PlatformType_kAndroid = 1,
  DeviceInfo_PlatformType_kiOS = 2,
  DeviceInfo_PlatformType_kWindows = 3,
  DeviceInfo_PlatformType_WECHAT_ANDROID = 4,
  DeviceInfo_PlatformType_WECHAT_IOS = 5,
  DeviceInfo_PlatformType_H5 = 6,
  DeviceInfo_PlatformType_H5_ANDROID = 7,
  DeviceInfo_PlatformType_H5_IOS = 8,
  DeviceInfo_PlatformType_H5_WINDOWS = 9,
  DeviceInfo_PlatformType_H5_MAC = 10,
  DeviceInfo_PlatformType_kPlatformNum = 11,
  DeviceInfo_PlatformType_DeviceInfo_PlatformType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  DeviceInfo_PlatformType_DeviceInfo_PlatformType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool DeviceInfo_PlatformType_IsValid(int value);
constexpr DeviceInfo_PlatformType DeviceInfo_PlatformType_PlatformType_MIN = DeviceInfo_PlatformType_kInvalid;
constexpr DeviceInfo_PlatformType DeviceInfo_PlatformType_PlatformType_MAX = DeviceInfo_PlatformType_kPlatformNum;
constexpr int DeviceInfo_PlatformType_PlatformType_ARRAYSIZE = DeviceInfo_PlatformType_PlatformType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* DeviceInfo_PlatformType_descriptor();
template<typename T>
inline const std::string& DeviceInfo_PlatformType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, DeviceInfo_PlatformType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function DeviceInfo_PlatformType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    DeviceInfo_PlatformType_descriptor(), enum_t_value);
}
inline bool DeviceInfo_PlatformType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, DeviceInfo_PlatformType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<DeviceInfo_PlatformType>(
    DeviceInfo_PlatformType_descriptor(), name, value);
}
// ===================================================================

class DeviceInfo PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.DeviceInfo) */ {
 public:
  inline DeviceInfo() : DeviceInfo(nullptr) {}
  virtual ~DeviceInfo();

  DeviceInfo(const DeviceInfo& from);
  DeviceInfo(DeviceInfo&& from) noexcept
    : DeviceInfo() {
    *this = ::std::move(from);
  }

  inline DeviceInfo& operator=(const DeviceInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline DeviceInfo& operator=(DeviceInfo&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const DeviceInfo& default_instance();

  static inline const DeviceInfo* internal_default_instance() {
    return reinterpret_cast<const DeviceInfo*>(
               &_DeviceInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(DeviceInfo& a, DeviceInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(DeviceInfo* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(DeviceInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline DeviceInfo* New() const final {
    return CreateMaybeMessage<DeviceInfo>(nullptr);
  }

  DeviceInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<DeviceInfo>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const DeviceInfo& from);
  void MergeFrom(const DeviceInfo& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(DeviceInfo* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.DeviceInfo";
  }
  protected:
  explicit DeviceInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_DeviceInfo_2eproto);
    return ::descriptor_table_DeviceInfo_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef DeviceInfo_PlatformType PlatformType;
  static constexpr PlatformType kInvalid =
    DeviceInfo_PlatformType_kInvalid;
  static constexpr PlatformType kAndroid =
    DeviceInfo_PlatformType_kAndroid;
  static constexpr PlatformType kiOS =
    DeviceInfo_PlatformType_kiOS;
  static constexpr PlatformType kWindows =
    DeviceInfo_PlatformType_kWindows;
  static constexpr PlatformType WECHAT_ANDROID =
    DeviceInfo_PlatformType_WECHAT_ANDROID;
  static constexpr PlatformType WECHAT_IOS =
    DeviceInfo_PlatformType_WECHAT_IOS;
  static constexpr PlatformType H5 =
    DeviceInfo_PlatformType_H5;
  static constexpr PlatformType H5_ANDROID =
    DeviceInfo_PlatformType_H5_ANDROID;
  static constexpr PlatformType H5_IOS =
    DeviceInfo_PlatformType_H5_IOS;
  static constexpr PlatformType H5_WINDOWS =
    DeviceInfo_PlatformType_H5_WINDOWS;
  static constexpr PlatformType H5_MAC =
    DeviceInfo_PlatformType_H5_MAC;
  static constexpr PlatformType kPlatformNum =
    DeviceInfo_PlatformType_kPlatformNum;
  static inline bool PlatformType_IsValid(int value) {
    return DeviceInfo_PlatformType_IsValid(value);
  }
  static constexpr PlatformType PlatformType_MIN =
    DeviceInfo_PlatformType_PlatformType_MIN;
  static constexpr PlatformType PlatformType_MAX =
    DeviceInfo_PlatformType_PlatformType_MAX;
  static constexpr int PlatformType_ARRAYSIZE =
    DeviceInfo_PlatformType_PlatformType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PlatformType_descriptor() {
    return DeviceInfo_PlatformType_descriptor();
  }
  template<typename T>
  static inline const std::string& PlatformType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PlatformType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PlatformType_Name.");
    return DeviceInfo_PlatformType_Name(enum_t_value);
  }
  static inline bool PlatformType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PlatformType* value) {
    return DeviceInfo_PlatformType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kOsVersionFieldNumber = 2,
    kDeviceModelFieldNumber = 3,
    kImeiMd5FieldNumber = 4,
    kDeviceIdFieldNumber = 5,
    kSoftDidFieldNumber = 6,
    kKwaiDidFieldNumber = 7,
    kManufacturerFieldNumber = 8,
    kDeviceNameFieldNumber = 9,
    kPlatformTypeFieldNumber = 1,
  };
  // string osVersion = 2;
  void clear_osversion();
  const std::string& osversion() const;
  void set_osversion(const std::string& value);
  void set_osversion(std::string&& value);
  void set_osversion(const char* value);
  void set_osversion(const char* value, size_t size);
  std::string* mutable_osversion();
  std::string* release_osversion();
  void set_allocated_osversion(std::string* osversion);
  private:
  const std::string& _internal_osversion() const;
  void _internal_set_osversion(const std::string& value);
  std::string* _internal_mutable_osversion();
  public:

  // string deviceModel = 3;
  void clear_devicemodel();
  const std::string& devicemodel() const;
  void set_devicemodel(const std::string& value);
  void set_devicemodel(std::string&& value);
  void set_devicemodel(const char* value);
  void set_devicemodel(const char* value, size_t size);
  std::string* mutable_devicemodel();
  std::string* release_devicemodel();
  void set_allocated_devicemodel(std::string* devicemodel);
  private:
  const std::string& _internal_devicemodel() const;
  void _internal_set_devicemodel(const std::string& value);
  std::string* _internal_mutable_devicemodel();
  public:

  // bytes imeiMd5 = 4;
  void clear_imeimd5();
  const std::string& imeimd5() const;
  void set_imeimd5(const std::string& value);
  void set_imeimd5(std::string&& value);
  void set_imeimd5(const char* value);
  void set_imeimd5(const void* value, size_t size);
  std::string* mutable_imeimd5();
  std::string* release_imeimd5();
  void set_allocated_imeimd5(std::string* imeimd5);
  private:
  const std::string& _internal_imeimd5() const;
  void _internal_set_imeimd5(const std::string& value);
  std::string* _internal_mutable_imeimd5();
  public:

  // string deviceId = 5;
  void clear_deviceid();
  const std::string& deviceid() const;
  void set_deviceid(const std::string& value);
  void set_deviceid(std::string&& value);
  void set_deviceid(const char* value);
  void set_deviceid(const char* value, size_t size);
  std::string* mutable_deviceid();
  std::string* release_deviceid();
  void set_allocated_deviceid(std::string* deviceid);
  private:
  const std::string& _internal_deviceid() const;
  void _internal_set_deviceid(const std::string& value);
  std::string* _internal_mutable_deviceid();
  public:

  // string softDid = 6;
  void clear_softdid();
  const std::string& softdid() const;
  void set_softdid(const std::string& value);
  void set_softdid(std::string&& value);
  void set_softdid(const char* value);
  void set_softdid(const char* value, size_t size);
  std::string* mutable_softdid();
  std::string* release_softdid();
  void set_allocated_softdid(std::string* softdid);
  private:
  const std::string& _internal_softdid() const;
  void _internal_set_softdid(const std::string& value);
  std::string* _internal_mutable_softdid();
  public:

  // string kwaiDid = 7;
  void clear_kwaidid();
  const std::string& kwaidid() const;
  void set_kwaidid(const std::string& value);
  void set_kwaidid(std::string&& value);
  void set_kwaidid(const char* value);
  void set_kwaidid(const char* value, size_t size);
  std::string* mutable_kwaidid();
  std::string* release_kwaidid();
  void set_allocated_kwaidid(std::string* kwaidid);
  private:
  const std::string& _internal_kwaidid() const;
  void _internal_set_kwaidid(const std::string& value);
  std::string* _internal_mutable_kwaidid();
  public:

  // string manufacturer = 8;
  void clear_manufacturer();
  const std::string& manufacturer() const;
  void set_manufacturer(const std::string& value);
  void set_manufacturer(std::string&& value);
  void set_manufacturer(const char* value);
  void set_manufacturer(const char* value, size_t size);
  std::string* mutable_manufacturer();
  std::string* release_manufacturer();
  void set_allocated_manufacturer(std::string* manufacturer);
  private:
  const std::string& _internal_manufacturer() const;
  void _internal_set_manufacturer(const std::string& value);
  std::string* _internal_mutable_manufacturer();
  public:

  // string deviceName = 9;
  void clear_devicename();
  const std::string& devicename() const;
  void set_devicename(const std::string& value);
  void set_devicename(std::string&& value);
  void set_devicename(const char* value);
  void set_devicename(const char* value, size_t size);
  std::string* mutable_devicename();
  std::string* release_devicename();
  void set_allocated_devicename(std::string* devicename);
  private:
  const std::string& _internal_devicename() const;
  void _internal_set_devicename(const std::string& value);
  std::string* _internal_mutable_devicename();
  public:

  // .AcFunDanmu.DeviceInfo.PlatformType platformType = 1;
  void clear_platformtype();
  ::AcFunDanmu::DeviceInfo_PlatformType platformtype() const;
  void set_platformtype(::AcFunDanmu::DeviceInfo_PlatformType value);
  private:
  ::AcFunDanmu::DeviceInfo_PlatformType _internal_platformtype() const;
  void _internal_set_platformtype(::AcFunDanmu::DeviceInfo_PlatformType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.DeviceInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr osversion_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr devicemodel_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr imeimd5_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr deviceid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr softdid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr kwaidid_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr manufacturer_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr devicename_;
  int platformtype_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_DeviceInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// DeviceInfo

// .AcFunDanmu.DeviceInfo.PlatformType platformType = 1;
inline void DeviceInfo::clear_platformtype() {
  platformtype_ = 0;
}
inline ::AcFunDanmu::DeviceInfo_PlatformType DeviceInfo::_internal_platformtype() const {
  return static_cast< ::AcFunDanmu::DeviceInfo_PlatformType >(platformtype_);
}
inline ::AcFunDanmu::DeviceInfo_PlatformType DeviceInfo::platformtype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.platformType)
  return _internal_platformtype();
}
inline void DeviceInfo::_internal_set_platformtype(::AcFunDanmu::DeviceInfo_PlatformType value) {
  
  platformtype_ = value;
}
inline void DeviceInfo::set_platformtype(::AcFunDanmu::DeviceInfo_PlatformType value) {
  _internal_set_platformtype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.platformType)
}

// string osVersion = 2;
inline void DeviceInfo::clear_osversion() {
  osversion_.ClearToEmpty();
}
inline const std::string& DeviceInfo::osversion() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.osVersion)
  return _internal_osversion();
}
inline void DeviceInfo::set_osversion(const std::string& value) {
  _internal_set_osversion(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.osVersion)
}
inline std::string* DeviceInfo::mutable_osversion() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.DeviceInfo.osVersion)
  return _internal_mutable_osversion();
}
inline const std::string& DeviceInfo::_internal_osversion() const {
  return osversion_.Get();
}
inline void DeviceInfo::_internal_set_osversion(const std::string& value) {
  
  osversion_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceInfo::set_osversion(std::string&& value) {
  
  osversion_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.DeviceInfo.osVersion)
}
inline void DeviceInfo::set_osversion(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  osversion_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.DeviceInfo.osVersion)
}
inline void DeviceInfo::set_osversion(const char* value,
    size_t size) {
  
  osversion_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.DeviceInfo.osVersion)
}
inline std::string* DeviceInfo::_internal_mutable_osversion() {
  
  return osversion_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceInfo::release_osversion() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.DeviceInfo.osVersion)
  return osversion_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceInfo::set_allocated_osversion(std::string* osversion) {
  if (osversion != nullptr) {
    
  } else {
    
  }
  osversion_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), osversion,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.DeviceInfo.osVersion)
}

// string deviceModel = 3;
inline void DeviceInfo::clear_devicemodel() {
  devicemodel_.ClearToEmpty();
}
inline const std::string& DeviceInfo::devicemodel() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.deviceModel)
  return _internal_devicemodel();
}
inline void DeviceInfo::set_devicemodel(const std::string& value) {
  _internal_set_devicemodel(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.deviceModel)
}
inline std::string* DeviceInfo::mutable_devicemodel() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.DeviceInfo.deviceModel)
  return _internal_mutable_devicemodel();
}
inline const std::string& DeviceInfo::_internal_devicemodel() const {
  return devicemodel_.Get();
}
inline void DeviceInfo::_internal_set_devicemodel(const std::string& value) {
  
  devicemodel_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceInfo::set_devicemodel(std::string&& value) {
  
  devicemodel_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.DeviceInfo.deviceModel)
}
inline void DeviceInfo::set_devicemodel(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  devicemodel_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.DeviceInfo.deviceModel)
}
inline void DeviceInfo::set_devicemodel(const char* value,
    size_t size) {
  
  devicemodel_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.DeviceInfo.deviceModel)
}
inline std::string* DeviceInfo::_internal_mutable_devicemodel() {
  
  return devicemodel_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceInfo::release_devicemodel() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.DeviceInfo.deviceModel)
  return devicemodel_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceInfo::set_allocated_devicemodel(std::string* devicemodel) {
  if (devicemodel != nullptr) {
    
  } else {
    
  }
  devicemodel_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), devicemodel,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.DeviceInfo.deviceModel)
}

// bytes imeiMd5 = 4;
inline void DeviceInfo::clear_imeimd5() {
  imeimd5_.ClearToEmpty();
}
inline const std::string& DeviceInfo::imeimd5() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.imeiMd5)
  return _internal_imeimd5();
}
inline void DeviceInfo::set_imeimd5(const std::string& value) {
  _internal_set_imeimd5(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.imeiMd5)
}
inline std::string* DeviceInfo::mutable_imeimd5() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.DeviceInfo.imeiMd5)
  return _internal_mutable_imeimd5();
}
inline const std::string& DeviceInfo::_internal_imeimd5() const {
  return imeimd5_.Get();
}
inline void DeviceInfo::_internal_set_imeimd5(const std::string& value) {
  
  imeimd5_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceInfo::set_imeimd5(std::string&& value) {
  
  imeimd5_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.DeviceInfo.imeiMd5)
}
inline void DeviceInfo::set_imeimd5(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  imeimd5_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.DeviceInfo.imeiMd5)
}
inline void DeviceInfo::set_imeimd5(const void* value,
    size_t size) {
  
  imeimd5_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.DeviceInfo.imeiMd5)
}
inline std::string* DeviceInfo::_internal_mutable_imeimd5() {
  
  return imeimd5_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceInfo::release_imeimd5() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.DeviceInfo.imeiMd5)
  return imeimd5_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceInfo::set_allocated_imeimd5(std::string* imeimd5) {
  if (imeimd5 != nullptr) {
    
  } else {
    
  }
  imeimd5_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), imeimd5,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.DeviceInfo.imeiMd5)
}

// string deviceId = 5;
inline void DeviceInfo::clear_deviceid() {
  deviceid_.ClearToEmpty();
}
inline const std::string& DeviceInfo::deviceid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.deviceId)
  return _internal_deviceid();
}
inline void DeviceInfo::set_deviceid(const std::string& value) {
  _internal_set_deviceid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.deviceId)
}
inline std::string* DeviceInfo::mutable_deviceid() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.DeviceInfo.deviceId)
  return _internal_mutable_deviceid();
}
inline const std::string& DeviceInfo::_internal_deviceid() const {
  return deviceid_.Get();
}
inline void DeviceInfo::_internal_set_deviceid(const std::string& value) {
  
  deviceid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceInfo::set_deviceid(std::string&& value) {
  
  deviceid_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.DeviceInfo.deviceId)
}
inline void DeviceInfo::set_deviceid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  deviceid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.DeviceInfo.deviceId)
}
inline void DeviceInfo::set_deviceid(const char* value,
    size_t size) {
  
  deviceid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.DeviceInfo.deviceId)
}
inline std::string* DeviceInfo::_internal_mutable_deviceid() {
  
  return deviceid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceInfo::release_deviceid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.DeviceInfo.deviceId)
  return deviceid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceInfo::set_allocated_deviceid(std::string* deviceid) {
  if (deviceid != nullptr) {
    
  } else {
    
  }
  deviceid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), deviceid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.DeviceInfo.deviceId)
}

// string softDid = 6;
inline void DeviceInfo::clear_softdid() {
  softdid_.ClearToEmpty();
}
inline const std::string& DeviceInfo::softdid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.softDid)
  return _internal_softdid();
}
inline void DeviceInfo::set_softdid(const std::string& value) {
  _internal_set_softdid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.softDid)
}
inline std::string* DeviceInfo::mutable_softdid() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.DeviceInfo.softDid)
  return _internal_mutable_softdid();
}
inline const std::string& DeviceInfo::_internal_softdid() const {
  return softdid_.Get();
}
inline void DeviceInfo::_internal_set_softdid(const std::string& value) {
  
  softdid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceInfo::set_softdid(std::string&& value) {
  
  softdid_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.DeviceInfo.softDid)
}
inline void DeviceInfo::set_softdid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  softdid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.DeviceInfo.softDid)
}
inline void DeviceInfo::set_softdid(const char* value,
    size_t size) {
  
  softdid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.DeviceInfo.softDid)
}
inline std::string* DeviceInfo::_internal_mutable_softdid() {
  
  return softdid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceInfo::release_softdid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.DeviceInfo.softDid)
  return softdid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceInfo::set_allocated_softdid(std::string* softdid) {
  if (softdid != nullptr) {
    
  } else {
    
  }
  softdid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), softdid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.DeviceInfo.softDid)
}

// string kwaiDid = 7;
inline void DeviceInfo::clear_kwaidid() {
  kwaidid_.ClearToEmpty();
}
inline const std::string& DeviceInfo::kwaidid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.kwaiDid)
  return _internal_kwaidid();
}
inline void DeviceInfo::set_kwaidid(const std::string& value) {
  _internal_set_kwaidid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.kwaiDid)
}
inline std::string* DeviceInfo::mutable_kwaidid() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.DeviceInfo.kwaiDid)
  return _internal_mutable_kwaidid();
}
inline const std::string& DeviceInfo::_internal_kwaidid() const {
  return kwaidid_.Get();
}
inline void DeviceInfo::_internal_set_kwaidid(const std::string& value) {
  
  kwaidid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceInfo::set_kwaidid(std::string&& value) {
  
  kwaidid_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.DeviceInfo.kwaiDid)
}
inline void DeviceInfo::set_kwaidid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  kwaidid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.DeviceInfo.kwaiDid)
}
inline void DeviceInfo::set_kwaidid(const char* value,
    size_t size) {
  
  kwaidid_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.DeviceInfo.kwaiDid)
}
inline std::string* DeviceInfo::_internal_mutable_kwaidid() {
  
  return kwaidid_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceInfo::release_kwaidid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.DeviceInfo.kwaiDid)
  return kwaidid_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceInfo::set_allocated_kwaidid(std::string* kwaidid) {
  if (kwaidid != nullptr) {
    
  } else {
    
  }
  kwaidid_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), kwaidid,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.DeviceInfo.kwaiDid)
}

// string manufacturer = 8;
inline void DeviceInfo::clear_manufacturer() {
  manufacturer_.ClearToEmpty();
}
inline const std::string& DeviceInfo::manufacturer() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.manufacturer)
  return _internal_manufacturer();
}
inline void DeviceInfo::set_manufacturer(const std::string& value) {
  _internal_set_manufacturer(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.manufacturer)
}
inline std::string* DeviceInfo::mutable_manufacturer() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.DeviceInfo.manufacturer)
  return _internal_mutable_manufacturer();
}
inline const std::string& DeviceInfo::_internal_manufacturer() const {
  return manufacturer_.Get();
}
inline void DeviceInfo::_internal_set_manufacturer(const std::string& value) {
  
  manufacturer_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceInfo::set_manufacturer(std::string&& value) {
  
  manufacturer_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.DeviceInfo.manufacturer)
}
inline void DeviceInfo::set_manufacturer(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  manufacturer_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.DeviceInfo.manufacturer)
}
inline void DeviceInfo::set_manufacturer(const char* value,
    size_t size) {
  
  manufacturer_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.DeviceInfo.manufacturer)
}
inline std::string* DeviceInfo::_internal_mutable_manufacturer() {
  
  return manufacturer_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceInfo::release_manufacturer() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.DeviceInfo.manufacturer)
  return manufacturer_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceInfo::set_allocated_manufacturer(std::string* manufacturer) {
  if (manufacturer != nullptr) {
    
  } else {
    
  }
  manufacturer_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), manufacturer,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.DeviceInfo.manufacturer)
}

// string deviceName = 9;
inline void DeviceInfo::clear_devicename() {
  devicename_.ClearToEmpty();
}
inline const std::string& DeviceInfo::devicename() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.DeviceInfo.deviceName)
  return _internal_devicename();
}
inline void DeviceInfo::set_devicename(const std::string& value) {
  _internal_set_devicename(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.DeviceInfo.deviceName)
}
inline std::string* DeviceInfo::mutable_devicename() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.DeviceInfo.deviceName)
  return _internal_mutable_devicename();
}
inline const std::string& DeviceInfo::_internal_devicename() const {
  return devicename_.Get();
}
inline void DeviceInfo::_internal_set_devicename(const std::string& value) {
  
  devicename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void DeviceInfo::set_devicename(std::string&& value) {
  
  devicename_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.DeviceInfo.deviceName)
}
inline void DeviceInfo::set_devicename(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  devicename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.DeviceInfo.deviceName)
}
inline void DeviceInfo::set_devicename(const char* value,
    size_t size) {
  
  devicename_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.DeviceInfo.deviceName)
}
inline std::string* DeviceInfo::_internal_mutable_devicename() {
  
  return devicename_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* DeviceInfo::release_devicename() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.DeviceInfo.deviceName)
  return devicename_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void DeviceInfo::set_allocated_devicename(std::string* devicename) {
  if (devicename != nullptr) {
    
  } else {
    
  }
  devicename_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), devicename,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.DeviceInfo.deviceName)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::DeviceInfo_PlatformType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::DeviceInfo_PlatformType>() {
  return ::AcFunDanmu::DeviceInfo_PlatformType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_DeviceInfo_2eproto
