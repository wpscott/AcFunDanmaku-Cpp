// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonActionSignalUserShareLive.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalUserShareLive_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalUserShareLive_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3021000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3021002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "ZtLiveUserInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonActionSignalUserShareLive_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonActionSignalUserShareLive_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonActionSignalUserShareLive_2eproto;
namespace AcFunDanmu {
class CommonActionSignalUserShareLive;
struct CommonActionSignalUserShareLiveDefaultTypeInternal;
extern CommonActionSignalUserShareLiveDefaultTypeInternal _CommonActionSignalUserShareLive_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonActionSignalUserShareLive* Arena::CreateMaybeMessage<::AcFunDanmu::CommonActionSignalUserShareLive>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum CommonActionSignalUserShareLive_unknown : int {
  CommonActionSignalUserShareLive_unknown_e = 0,
  CommonActionSignalUserShareLive_unknown_f = 1,
  CommonActionSignalUserShareLive_unknown_CommonActionSignalUserShareLive_unknown_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  CommonActionSignalUserShareLive_unknown_CommonActionSignalUserShareLive_unknown_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool CommonActionSignalUserShareLive_unknown_IsValid(int value);
constexpr CommonActionSignalUserShareLive_unknown CommonActionSignalUserShareLive_unknown_unknown_MIN = CommonActionSignalUserShareLive_unknown_e;
constexpr CommonActionSignalUserShareLive_unknown CommonActionSignalUserShareLive_unknown_unknown_MAX = CommonActionSignalUserShareLive_unknown_f;
constexpr int CommonActionSignalUserShareLive_unknown_unknown_ARRAYSIZE = CommonActionSignalUserShareLive_unknown_unknown_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommonActionSignalUserShareLive_unknown_descriptor();
template<typename T>
inline const std::string& CommonActionSignalUserShareLive_unknown_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CommonActionSignalUserShareLive_unknown>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CommonActionSignalUserShareLive_unknown_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CommonActionSignalUserShareLive_unknown_descriptor(), enum_t_value);
}
inline bool CommonActionSignalUserShareLive_unknown_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CommonActionSignalUserShareLive_unknown* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CommonActionSignalUserShareLive_unknown>(
    CommonActionSignalUserShareLive_unknown_descriptor(), name, value);
}
// ===================================================================

class CommonActionSignalUserShareLive final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonActionSignalUserShareLive) */ {
 public:
  inline CommonActionSignalUserShareLive() : CommonActionSignalUserShareLive(nullptr) {}
  ~CommonActionSignalUserShareLive() override;
  explicit PROTOBUF_CONSTEXPR CommonActionSignalUserShareLive(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonActionSignalUserShareLive(const CommonActionSignalUserShareLive& from);
  CommonActionSignalUserShareLive(CommonActionSignalUserShareLive&& from) noexcept
    : CommonActionSignalUserShareLive() {
    *this = ::std::move(from);
  }

  inline CommonActionSignalUserShareLive& operator=(const CommonActionSignalUserShareLive& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonActionSignalUserShareLive& operator=(CommonActionSignalUserShareLive&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()
  #ifdef PROTOBUF_FORCE_COPY_IN_MOVE
        && GetOwningArena() != nullptr
  #endif  // !PROTOBUF_FORCE_COPY_IN_MOVE
    ) {
      InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return default_instance().GetMetadata().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return default_instance().GetMetadata().reflection;
  }
  static const CommonActionSignalUserShareLive& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonActionSignalUserShareLive* internal_default_instance() {
    return reinterpret_cast<const CommonActionSignalUserShareLive*>(
               &_CommonActionSignalUserShareLive_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonActionSignalUserShareLive& a, CommonActionSignalUserShareLive& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonActionSignalUserShareLive* other) {
    if (other == this) return;
  #ifdef PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() != nullptr &&
        GetOwningArena() == other->GetOwningArena()) {
   #else  // PROTOBUF_FORCE_COPY_IN_SWAP
    if (GetOwningArena() == other->GetOwningArena()) {
  #endif  // !PROTOBUF_FORCE_COPY_IN_SWAP
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommonActionSignalUserShareLive* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommonActionSignalUserShareLive* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommonActionSignalUserShareLive>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommonActionSignalUserShareLive& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommonActionSignalUserShareLive& from) {
    CommonActionSignalUserShareLive::MergeImpl(*this, from);
  }
  private:
  static void MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg);
  public:
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  uint8_t* _InternalSerialize(
      uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _impl_._cached_size_.Get(); }

  private:
  void SharedCtor(::PROTOBUF_NAMESPACE_ID::Arena* arena, bool is_message_owned);
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommonActionSignalUserShareLive* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonActionSignalUserShareLive";
  }
  protected:
  explicit CommonActionSignalUserShareLive(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef CommonActionSignalUserShareLive_unknown unknown;
  static constexpr unknown e =
    CommonActionSignalUserShareLive_unknown_e;
  static constexpr unknown f =
    CommonActionSignalUserShareLive_unknown_f;
  static inline bool unknown_IsValid(int value) {
    return CommonActionSignalUserShareLive_unknown_IsValid(value);
  }
  static constexpr unknown unknown_MIN =
    CommonActionSignalUserShareLive_unknown_unknown_MIN;
  static constexpr unknown unknown_MAX =
    CommonActionSignalUserShareLive_unknown_unknown_MAX;
  static constexpr int unknown_ARRAYSIZE =
    CommonActionSignalUserShareLive_unknown_unknown_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  unknown_descriptor() {
    return CommonActionSignalUserShareLive_unknown_descriptor();
  }
  template<typename T>
  static inline const std::string& unknown_Name(T enum_t_value) {
    static_assert(::std::is_same<T, unknown>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function unknown_Name.");
    return CommonActionSignalUserShareLive_unknown_Name(enum_t_value);
  }
  static inline bool unknown_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      unknown* value) {
    return CommonActionSignalUserShareLive_unknown_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kSharePlatformIconFieldNumber = 3,
    kUserInfoFieldNumber = 1,
    kSendTimeMsFieldNumber = 4,
    kSharePlatformIdFieldNumber = 2,
  };
  // string sharePlatformIcon = 3;
  void clear_shareplatformicon();
  const std::string& shareplatformicon() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_shareplatformicon(ArgT0&& arg0, ArgT... args);
  std::string* mutable_shareplatformicon();
  PROTOBUF_NODISCARD std::string* release_shareplatformicon();
  void set_allocated_shareplatformicon(std::string* shareplatformicon);
  private:
  const std::string& _internal_shareplatformicon() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_shareplatformicon(const std::string& value);
  std::string* _internal_mutable_shareplatformicon();
  public:

  // .AcFunDanmu.ZtLiveUserInfo userInfo = 1;
  bool has_userinfo() const;
  private:
  bool _internal_has_userinfo() const;
  public:
  void clear_userinfo();
  const ::AcFunDanmu::ZtLiveUserInfo& userinfo() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::ZtLiveUserInfo* release_userinfo();
  ::AcFunDanmu::ZtLiveUserInfo* mutable_userinfo();
  void set_allocated_userinfo(::AcFunDanmu::ZtLiveUserInfo* userinfo);
  private:
  const ::AcFunDanmu::ZtLiveUserInfo& _internal_userinfo() const;
  ::AcFunDanmu::ZtLiveUserInfo* _internal_mutable_userinfo();
  public:
  void unsafe_arena_set_allocated_userinfo(
      ::AcFunDanmu::ZtLiveUserInfo* userinfo);
  ::AcFunDanmu::ZtLiveUserInfo* unsafe_arena_release_userinfo();

  // int64 sendTimeMs = 4;
  void clear_sendtimems();
  int64_t sendtimems() const;
  void set_sendtimems(int64_t value);
  private:
  int64_t _internal_sendtimems() const;
  void _internal_set_sendtimems(int64_t value);
  public:

  // int32 sharePlatformId = 2;
  void clear_shareplatformid();
  int32_t shareplatformid() const;
  void set_shareplatformid(int32_t value);
  private:
  int32_t _internal_shareplatformid() const;
  void _internal_set_shareplatformid(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonActionSignalUserShareLive)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr shareplatformicon_;
    ::AcFunDanmu::ZtLiveUserInfo* userinfo_;
    int64_t sendtimems_;
    int32_t shareplatformid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CommonActionSignalUserShareLive_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonActionSignalUserShareLive

// .AcFunDanmu.ZtLiveUserInfo userInfo = 1;
inline bool CommonActionSignalUserShareLive::_internal_has_userinfo() const {
  return this != internal_default_instance() && _impl_.userinfo_ != nullptr;
}
inline bool CommonActionSignalUserShareLive::has_userinfo() const {
  return _internal_has_userinfo();
}
inline const ::AcFunDanmu::ZtLiveUserInfo& CommonActionSignalUserShareLive::_internal_userinfo() const {
  const ::AcFunDanmu::ZtLiveUserInfo* p = _impl_.userinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::ZtLiveUserInfo&>(
      ::AcFunDanmu::_ZtLiveUserInfo_default_instance_);
}
inline const ::AcFunDanmu::ZtLiveUserInfo& CommonActionSignalUserShareLive::userinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalUserShareLive.userInfo)
  return _internal_userinfo();
}
inline void CommonActionSignalUserShareLive::unsafe_arena_set_allocated_userinfo(
    ::AcFunDanmu::ZtLiveUserInfo* userinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.userinfo_);
  }
  _impl_.userinfo_ = userinfo;
  if (userinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.CommonActionSignalUserShareLive.userInfo)
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalUserShareLive::release_userinfo() {
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = _impl_.userinfo_;
  _impl_.userinfo_ = nullptr;
#ifdef PROTOBUF_FORCE_COPY_IN_RELEASE
  auto* old =  reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(temp);
  temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  if (GetArenaForAllocation() == nullptr) { delete old; }
#else  // PROTOBUF_FORCE_COPY_IN_RELEASE
  if (GetArenaForAllocation() != nullptr) {
    temp = ::PROTOBUF_NAMESPACE_ID::internal::DuplicateIfNonNull(temp);
  }
#endif  // !PROTOBUF_FORCE_COPY_IN_RELEASE
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalUserShareLive::unsafe_arena_release_userinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonActionSignalUserShareLive.userInfo)
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = _impl_.userinfo_;
  _impl_.userinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalUserShareLive::_internal_mutable_userinfo() {
  
  if (_impl_.userinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::ZtLiveUserInfo>(GetArenaForAllocation());
    _impl_.userinfo_ = p;
  }
  return _impl_.userinfo_;
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalUserShareLive::mutable_userinfo() {
  ::AcFunDanmu::ZtLiveUserInfo* _msg = _internal_mutable_userinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonActionSignalUserShareLive.userInfo)
  return _msg;
}
inline void CommonActionSignalUserShareLive::set_allocated_userinfo(::AcFunDanmu::ZtLiveUserInfo* userinfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.userinfo_);
  }
  if (userinfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(userinfo));
    if (message_arena != submessage_arena) {
      userinfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, userinfo, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.userinfo_ = userinfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonActionSignalUserShareLive.userInfo)
}

// int32 sharePlatformId = 2;
inline void CommonActionSignalUserShareLive::clear_shareplatformid() {
  _impl_.shareplatformid_ = 0;
}
inline int32_t CommonActionSignalUserShareLive::_internal_shareplatformid() const {
  return _impl_.shareplatformid_;
}
inline int32_t CommonActionSignalUserShareLive::shareplatformid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalUserShareLive.sharePlatformId)
  return _internal_shareplatformid();
}
inline void CommonActionSignalUserShareLive::_internal_set_shareplatformid(int32_t value) {
  
  _impl_.shareplatformid_ = value;
}
inline void CommonActionSignalUserShareLive::set_shareplatformid(int32_t value) {
  _internal_set_shareplatformid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonActionSignalUserShareLive.sharePlatformId)
}

// string sharePlatformIcon = 3;
inline void CommonActionSignalUserShareLive::clear_shareplatformicon() {
  _impl_.shareplatformicon_.ClearToEmpty();
}
inline const std::string& CommonActionSignalUserShareLive::shareplatformicon() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalUserShareLive.sharePlatformIcon)
  return _internal_shareplatformicon();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonActionSignalUserShareLive::set_shareplatformicon(ArgT0&& arg0, ArgT... args) {
 
 _impl_.shareplatformicon_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonActionSignalUserShareLive.sharePlatformIcon)
}
inline std::string* CommonActionSignalUserShareLive::mutable_shareplatformicon() {
  std::string* _s = _internal_mutable_shareplatformicon();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonActionSignalUserShareLive.sharePlatformIcon)
  return _s;
}
inline const std::string& CommonActionSignalUserShareLive::_internal_shareplatformicon() const {
  return _impl_.shareplatformicon_.Get();
}
inline void CommonActionSignalUserShareLive::_internal_set_shareplatformicon(const std::string& value) {
  
  _impl_.shareplatformicon_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonActionSignalUserShareLive::_internal_mutable_shareplatformicon() {
  
  return _impl_.shareplatformicon_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonActionSignalUserShareLive::release_shareplatformicon() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonActionSignalUserShareLive.sharePlatformIcon)
  return _impl_.shareplatformicon_.Release();
}
inline void CommonActionSignalUserShareLive::set_allocated_shareplatformicon(std::string* shareplatformicon) {
  if (shareplatformicon != nullptr) {
    
  } else {
    
  }
  _impl_.shareplatformicon_.SetAllocated(shareplatformicon, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.shareplatformicon_.IsDefault()) {
    _impl_.shareplatformicon_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonActionSignalUserShareLive.sharePlatformIcon)
}

// int64 sendTimeMs = 4;
inline void CommonActionSignalUserShareLive::clear_sendtimems() {
  _impl_.sendtimems_ = int64_t{0};
}
inline int64_t CommonActionSignalUserShareLive::_internal_sendtimems() const {
  return _impl_.sendtimems_;
}
inline int64_t CommonActionSignalUserShareLive::sendtimems() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalUserShareLive.sendTimeMs)
  return _internal_sendtimems();
}
inline void CommonActionSignalUserShareLive::_internal_set_sendtimems(int64_t value) {
  
  _impl_.sendtimems_ = value;
}
inline void CommonActionSignalUserShareLive::set_sendtimems(int64_t value) {
  _internal_set_sendtimems(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonActionSignalUserShareLive.sendTimeMs)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::CommonActionSignalUserShareLive_unknown> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::CommonActionSignalUserShareLive_unknown>() {
  return ::AcFunDanmu::CommonActionSignalUserShareLive_unknown_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalUserShareLive_2eproto
