// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveScStatusChanged.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtLiveScStatusChanged_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtLiveScStatusChanged_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ZtLiveScStatusChanged_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtLiveScStatusChanged_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveScStatusChanged_2eproto;
namespace AcFunDanmu {
class ZtLiveScStatusChanged;
struct ZtLiveScStatusChangedDefaultTypeInternal;
extern ZtLiveScStatusChangedDefaultTypeInternal _ZtLiveScStatusChanged_default_instance_;
class ZtLiveScStatusChanged_BannedInfo;
struct ZtLiveScStatusChanged_BannedInfoDefaultTypeInternal;
extern ZtLiveScStatusChanged_BannedInfoDefaultTypeInternal _ZtLiveScStatusChanged_BannedInfo_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtLiveScStatusChanged* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveScStatusChanged>(Arena*);
template<> ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum ZtLiveScStatusChanged_Type : int {
  ZtLiveScStatusChanged_Type_UNKNOWN = 0,
  ZtLiveScStatusChanged_Type_LIVE_CLOSED = 1,
  ZtLiveScStatusChanged_Type_NEW_LIVE_OPENED = 2,
  ZtLiveScStatusChanged_Type_LIVE_URL_CHANGED = 3,
  ZtLiveScStatusChanged_Type_LIVE_BANNED = 4,
  ZtLiveScStatusChanged_Type_ZtLiveScStatusChanged_Type_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  ZtLiveScStatusChanged_Type_ZtLiveScStatusChanged_Type_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool ZtLiveScStatusChanged_Type_IsValid(int value);
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged_Type_Type_MIN = ZtLiveScStatusChanged_Type_UNKNOWN;
constexpr ZtLiveScStatusChanged_Type ZtLiveScStatusChanged_Type_Type_MAX = ZtLiveScStatusChanged_Type_LIVE_BANNED;
constexpr int ZtLiveScStatusChanged_Type_Type_ARRAYSIZE = ZtLiveScStatusChanged_Type_Type_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ZtLiveScStatusChanged_Type_descriptor();
template<typename T>
inline const std::string& ZtLiveScStatusChanged_Type_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ZtLiveScStatusChanged_Type>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ZtLiveScStatusChanged_Type_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ZtLiveScStatusChanged_Type_descriptor(), enum_t_value);
}
inline bool ZtLiveScStatusChanged_Type_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, ZtLiveScStatusChanged_Type* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ZtLiveScStatusChanged_Type>(
    ZtLiveScStatusChanged_Type_descriptor(), name, value);
}
// ===================================================================

class ZtLiveScStatusChanged_BannedInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo) */ {
 public:
  inline ZtLiveScStatusChanged_BannedInfo() : ZtLiveScStatusChanged_BannedInfo(nullptr) {}
  ~ZtLiveScStatusChanged_BannedInfo() override;
  explicit PROTOBUF_CONSTEXPR ZtLiveScStatusChanged_BannedInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtLiveScStatusChanged_BannedInfo(const ZtLiveScStatusChanged_BannedInfo& from);
  ZtLiveScStatusChanged_BannedInfo(ZtLiveScStatusChanged_BannedInfo&& from) noexcept
    : ZtLiveScStatusChanged_BannedInfo() {
    *this = ::std::move(from);
  }

  inline ZtLiveScStatusChanged_BannedInfo& operator=(const ZtLiveScStatusChanged_BannedInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveScStatusChanged_BannedInfo& operator=(ZtLiveScStatusChanged_BannedInfo&& from) noexcept {
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
  static const ZtLiveScStatusChanged_BannedInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtLiveScStatusChanged_BannedInfo* internal_default_instance() {
    return reinterpret_cast<const ZtLiveScStatusChanged_BannedInfo*>(
               &_ZtLiveScStatusChanged_BannedInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtLiveScStatusChanged_BannedInfo& a, ZtLiveScStatusChanged_BannedInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveScStatusChanged_BannedInfo* other) {
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
  void UnsafeArenaSwap(ZtLiveScStatusChanged_BannedInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZtLiveScStatusChanged_BannedInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZtLiveScStatusChanged_BannedInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZtLiveScStatusChanged_BannedInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ZtLiveScStatusChanged_BannedInfo& from) {
    ZtLiveScStatusChanged_BannedInfo::MergeImpl(*this, from);
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
  void InternalSwap(ZtLiveScStatusChanged_BannedInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveScStatusChanged.BannedInfo";
  }
  protected:
  explicit ZtLiveScStatusChanged_BannedInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBanReasonFieldNumber = 1,
    kBFieldNumber = 2,
  };
  // string banReason = 1;
  void clear_banreason();
  const std::string& banreason() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_banreason(ArgT0&& arg0, ArgT... args);
  std::string* mutable_banreason();
  PROTOBUF_NODISCARD std::string* release_banreason();
  void set_allocated_banreason(std::string* banreason);
  private:
  const std::string& _internal_banreason() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_banreason(const std::string& value);
  std::string* _internal_mutable_banreason();
  public:

  // string b = 2;
  void clear_b();
  const std::string& b() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_b(ArgT0&& arg0, ArgT... args);
  std::string* mutable_b();
  PROTOBUF_NODISCARD std::string* release_b();
  void set_allocated_b(std::string* b);
  private:
  const std::string& _internal_b() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_b(const std::string& value);
  std::string* _internal_mutable_b();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr banreason_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr b_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ZtLiveScStatusChanged_2eproto;
};
// -------------------------------------------------------------------

class ZtLiveScStatusChanged final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveScStatusChanged) */ {
 public:
  inline ZtLiveScStatusChanged() : ZtLiveScStatusChanged(nullptr) {}
  ~ZtLiveScStatusChanged() override;
  explicit PROTOBUF_CONSTEXPR ZtLiveScStatusChanged(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtLiveScStatusChanged(const ZtLiveScStatusChanged& from);
  ZtLiveScStatusChanged(ZtLiveScStatusChanged&& from) noexcept
    : ZtLiveScStatusChanged() {
    *this = ::std::move(from);
  }

  inline ZtLiveScStatusChanged& operator=(const ZtLiveScStatusChanged& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveScStatusChanged& operator=(ZtLiveScStatusChanged&& from) noexcept {
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
  static const ZtLiveScStatusChanged& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtLiveScStatusChanged* internal_default_instance() {
    return reinterpret_cast<const ZtLiveScStatusChanged*>(
               &_ZtLiveScStatusChanged_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(ZtLiveScStatusChanged& a, ZtLiveScStatusChanged& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveScStatusChanged* other) {
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
  void UnsafeArenaSwap(ZtLiveScStatusChanged* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZtLiveScStatusChanged* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZtLiveScStatusChanged>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZtLiveScStatusChanged& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ZtLiveScStatusChanged& from) {
    ZtLiveScStatusChanged::MergeImpl(*this, from);
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
  void InternalSwap(ZtLiveScStatusChanged* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveScStatusChanged";
  }
  protected:
  explicit ZtLiveScStatusChanged(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef ZtLiveScStatusChanged_BannedInfo BannedInfo;

  typedef ZtLiveScStatusChanged_Type Type;
  static constexpr Type UNKNOWN =
    ZtLiveScStatusChanged_Type_UNKNOWN;
  static constexpr Type LIVE_CLOSED =
    ZtLiveScStatusChanged_Type_LIVE_CLOSED;
  static constexpr Type NEW_LIVE_OPENED =
    ZtLiveScStatusChanged_Type_NEW_LIVE_OPENED;
  static constexpr Type LIVE_URL_CHANGED =
    ZtLiveScStatusChanged_Type_LIVE_URL_CHANGED;
  static constexpr Type LIVE_BANNED =
    ZtLiveScStatusChanged_Type_LIVE_BANNED;
  static inline bool Type_IsValid(int value) {
    return ZtLiveScStatusChanged_Type_IsValid(value);
  }
  static constexpr Type Type_MIN =
    ZtLiveScStatusChanged_Type_Type_MIN;
  static constexpr Type Type_MAX =
    ZtLiveScStatusChanged_Type_Type_MAX;
  static constexpr int Type_ARRAYSIZE =
    ZtLiveScStatusChanged_Type_Type_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Type_descriptor() {
    return ZtLiveScStatusChanged_Type_descriptor();
  }
  template<typename T>
  static inline const std::string& Type_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Type>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Type_Name.");
    return ZtLiveScStatusChanged_Type_Name(enum_t_value);
  }
  static inline bool Type_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Type* value) {
    return ZtLiveScStatusChanged_Type_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kBannedInfoFieldNumber = 3,
    kMaxRandomDelayMsFieldNumber = 2,
    kTypeFieldNumber = 1,
  };
  // .AcFunDanmu.ZtLiveScStatusChanged.BannedInfo bannedInfo = 3;
  bool has_bannedinfo() const;
  private:
  bool _internal_has_bannedinfo() const;
  public:
  void clear_bannedinfo();
  const ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo& bannedinfo() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* release_bannedinfo();
  ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* mutable_bannedinfo();
  void set_allocated_bannedinfo(::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* bannedinfo);
  private:
  const ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo& _internal_bannedinfo() const;
  ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* _internal_mutable_bannedinfo();
  public:
  void unsafe_arena_set_allocated_bannedinfo(
      ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* bannedinfo);
  ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* unsafe_arena_release_bannedinfo();

  // int64 maxRandomDelayMs = 2;
  void clear_maxrandomdelayms();
  int64_t maxrandomdelayms() const;
  void set_maxrandomdelayms(int64_t value);
  private:
  int64_t _internal_maxrandomdelayms() const;
  void _internal_set_maxrandomdelayms(int64_t value);
  public:

  // .AcFunDanmu.ZtLiveScStatusChanged.Type type = 1;
  void clear_type();
  ::AcFunDanmu::ZtLiveScStatusChanged_Type type() const;
  void set_type(::AcFunDanmu::ZtLiveScStatusChanged_Type value);
  private:
  ::AcFunDanmu::ZtLiveScStatusChanged_Type _internal_type() const;
  void _internal_set_type(::AcFunDanmu::ZtLiveScStatusChanged_Type value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveScStatusChanged)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* bannedinfo_;
    int64_t maxrandomdelayms_;
    int type_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ZtLiveScStatusChanged_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtLiveScStatusChanged_BannedInfo

// string banReason = 1;
inline void ZtLiveScStatusChanged_BannedInfo::clear_banreason() {
  _impl_.banreason_.ClearToEmpty();
}
inline const std::string& ZtLiveScStatusChanged_BannedInfo::banreason() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.banReason)
  return _internal_banreason();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ZtLiveScStatusChanged_BannedInfo::set_banreason(ArgT0&& arg0, ArgT... args) {
 
 _impl_.banreason_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.banReason)
}
inline std::string* ZtLiveScStatusChanged_BannedInfo::mutable_banreason() {
  std::string* _s = _internal_mutable_banreason();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.banReason)
  return _s;
}
inline const std::string& ZtLiveScStatusChanged_BannedInfo::_internal_banreason() const {
  return _impl_.banreason_.Get();
}
inline void ZtLiveScStatusChanged_BannedInfo::_internal_set_banreason(const std::string& value) {
  
  _impl_.banreason_.Set(value, GetArenaForAllocation());
}
inline std::string* ZtLiveScStatusChanged_BannedInfo::_internal_mutable_banreason() {
  
  return _impl_.banreason_.Mutable(GetArenaForAllocation());
}
inline std::string* ZtLiveScStatusChanged_BannedInfo::release_banreason() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.banReason)
  return _impl_.banreason_.Release();
}
inline void ZtLiveScStatusChanged_BannedInfo::set_allocated_banreason(std::string* banreason) {
  if (banreason != nullptr) {
    
  } else {
    
  }
  _impl_.banreason_.SetAllocated(banreason, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.banreason_.IsDefault()) {
    _impl_.banreason_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.banReason)
}

// string b = 2;
inline void ZtLiveScStatusChanged_BannedInfo::clear_b() {
  _impl_.b_.ClearToEmpty();
}
inline const std::string& ZtLiveScStatusChanged_BannedInfo::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.b)
  return _internal_b();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ZtLiveScStatusChanged_BannedInfo::set_b(ArgT0&& arg0, ArgT... args) {
 
 _impl_.b_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.b)
}
inline std::string* ZtLiveScStatusChanged_BannedInfo::mutable_b() {
  std::string* _s = _internal_mutable_b();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.b)
  return _s;
}
inline const std::string& ZtLiveScStatusChanged_BannedInfo::_internal_b() const {
  return _impl_.b_.Get();
}
inline void ZtLiveScStatusChanged_BannedInfo::_internal_set_b(const std::string& value) {
  
  _impl_.b_.Set(value, GetArenaForAllocation());
}
inline std::string* ZtLiveScStatusChanged_BannedInfo::_internal_mutable_b() {
  
  return _impl_.b_.Mutable(GetArenaForAllocation());
}
inline std::string* ZtLiveScStatusChanged_BannedInfo::release_b() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.b)
  return _impl_.b_.Release();
}
inline void ZtLiveScStatusChanged_BannedInfo::set_allocated_b(std::string* b) {
  if (b != nullptr) {
    
  } else {
    
  }
  _impl_.b_.SetAllocated(b, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.b_.IsDefault()) {
    _impl_.b_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveScStatusChanged.BannedInfo.b)
}

// -------------------------------------------------------------------

// ZtLiveScStatusChanged

// .AcFunDanmu.ZtLiveScStatusChanged.Type type = 1;
inline void ZtLiveScStatusChanged::clear_type() {
  _impl_.type_ = 0;
}
inline ::AcFunDanmu::ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::_internal_type() const {
  return static_cast< ::AcFunDanmu::ZtLiveScStatusChanged_Type >(_impl_.type_);
}
inline ::AcFunDanmu::ZtLiveScStatusChanged_Type ZtLiveScStatusChanged::type() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScStatusChanged.type)
  return _internal_type();
}
inline void ZtLiveScStatusChanged::_internal_set_type(::AcFunDanmu::ZtLiveScStatusChanged_Type value) {
  
  _impl_.type_ = value;
}
inline void ZtLiveScStatusChanged::set_type(::AcFunDanmu::ZtLiveScStatusChanged_Type value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScStatusChanged.type)
}

// int64 maxRandomDelayMs = 2;
inline void ZtLiveScStatusChanged::clear_maxrandomdelayms() {
  _impl_.maxrandomdelayms_ = int64_t{0};
}
inline int64_t ZtLiveScStatusChanged::_internal_maxrandomdelayms() const {
  return _impl_.maxrandomdelayms_;
}
inline int64_t ZtLiveScStatusChanged::maxrandomdelayms() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScStatusChanged.maxRandomDelayMs)
  return _internal_maxrandomdelayms();
}
inline void ZtLiveScStatusChanged::_internal_set_maxrandomdelayms(int64_t value) {
  
  _impl_.maxrandomdelayms_ = value;
}
inline void ZtLiveScStatusChanged::set_maxrandomdelayms(int64_t value) {
  _internal_set_maxrandomdelayms(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveScStatusChanged.maxRandomDelayMs)
}

// .AcFunDanmu.ZtLiveScStatusChanged.BannedInfo bannedInfo = 3;
inline bool ZtLiveScStatusChanged::_internal_has_bannedinfo() const {
  return this != internal_default_instance() && _impl_.bannedinfo_ != nullptr;
}
inline bool ZtLiveScStatusChanged::has_bannedinfo() const {
  return _internal_has_bannedinfo();
}
inline void ZtLiveScStatusChanged::clear_bannedinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.bannedinfo_ != nullptr) {
    delete _impl_.bannedinfo_;
  }
  _impl_.bannedinfo_ = nullptr;
}
inline const ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo& ZtLiveScStatusChanged::_internal_bannedinfo() const {
  const ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* p = _impl_.bannedinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo&>(
      ::AcFunDanmu::_ZtLiveScStatusChanged_BannedInfo_default_instance_);
}
inline const ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo& ZtLiveScStatusChanged::bannedinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveScStatusChanged.bannedInfo)
  return _internal_bannedinfo();
}
inline void ZtLiveScStatusChanged::unsafe_arena_set_allocated_bannedinfo(
    ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* bannedinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.bannedinfo_);
  }
  _impl_.bannedinfo_ = bannedinfo;
  if (bannedinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.ZtLiveScStatusChanged.bannedInfo)
}
inline ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* ZtLiveScStatusChanged::release_bannedinfo() {
  
  ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* temp = _impl_.bannedinfo_;
  _impl_.bannedinfo_ = nullptr;
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
inline ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* ZtLiveScStatusChanged::unsafe_arena_release_bannedinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveScStatusChanged.bannedInfo)
  
  ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* temp = _impl_.bannedinfo_;
  _impl_.bannedinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* ZtLiveScStatusChanged::_internal_mutable_bannedinfo() {
  
  if (_impl_.bannedinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo>(GetArenaForAllocation());
    _impl_.bannedinfo_ = p;
  }
  return _impl_.bannedinfo_;
}
inline ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* ZtLiveScStatusChanged::mutable_bannedinfo() {
  ::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* _msg = _internal_mutable_bannedinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveScStatusChanged.bannedInfo)
  return _msg;
}
inline void ZtLiveScStatusChanged::set_allocated_bannedinfo(::AcFunDanmu::ZtLiveScStatusChanged_BannedInfo* bannedinfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete _impl_.bannedinfo_;
  }
  if (bannedinfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(bannedinfo);
    if (message_arena != submessage_arena) {
      bannedinfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, bannedinfo, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.bannedinfo_ = bannedinfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveScStatusChanged.bannedInfo)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::ZtLiveScStatusChanged_Type> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::ZtLiveScStatusChanged_Type>() {
  return ::AcFunDanmu::ZtLiveScStatusChanged_Type_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtLiveScStatusChanged_2eproto
