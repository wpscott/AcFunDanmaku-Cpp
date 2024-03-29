// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ZtLiveUserInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ZtLiveUserInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ZtLiveUserInfo_2eproto

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
#include <google/protobuf/unknown_field_set.h>
#include "ImageCdnNode.pb.h"
#include "ZtLiveUserIdentity.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ZtLiveUserInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ZtLiveUserInfo_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ZtLiveUserInfo_2eproto;
namespace AcFunDanmu {
class ZtLiveUserInfo;
struct ZtLiveUserInfoDefaultTypeInternal;
extern ZtLiveUserInfoDefaultTypeInternal _ZtLiveUserInfo_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::ZtLiveUserInfo* Arena::CreateMaybeMessage<::AcFunDanmu::ZtLiveUserInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class ZtLiveUserInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.ZtLiveUserInfo) */ {
 public:
  inline ZtLiveUserInfo() : ZtLiveUserInfo(nullptr) {}
  ~ZtLiveUserInfo() override;
  explicit PROTOBUF_CONSTEXPR ZtLiveUserInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ZtLiveUserInfo(const ZtLiveUserInfo& from);
  ZtLiveUserInfo(ZtLiveUserInfo&& from) noexcept
    : ZtLiveUserInfo() {
    *this = ::std::move(from);
  }

  inline ZtLiveUserInfo& operator=(const ZtLiveUserInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline ZtLiveUserInfo& operator=(ZtLiveUserInfo&& from) noexcept {
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
  static const ZtLiveUserInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const ZtLiveUserInfo* internal_default_instance() {
    return reinterpret_cast<const ZtLiveUserInfo*>(
               &_ZtLiveUserInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ZtLiveUserInfo& a, ZtLiveUserInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(ZtLiveUserInfo* other) {
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
  void UnsafeArenaSwap(ZtLiveUserInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ZtLiveUserInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ZtLiveUserInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ZtLiveUserInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ZtLiveUserInfo& from) {
    ZtLiveUserInfo::MergeImpl(*this, from);
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
  void InternalSwap(ZtLiveUserInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.ZtLiveUserInfo";
  }
  protected:
  explicit ZtLiveUserInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAvatarFieldNumber = 3,
    kNicknameFieldNumber = 2,
    kBadgeFieldNumber = 4,
    kGFieldNumber = 7,
    kUserIdentityFieldNumber = 5,
    kUserIdFieldNumber = 1,
    kFFieldNumber = 6,
  };
  // repeated .AcFunDanmu.ImageCdnNode avatar = 3;
  int avatar_size() const;
  private:
  int _internal_avatar_size() const;
  public:
  void clear_avatar();
  ::AcFunDanmu::ImageCdnNode* mutable_avatar(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >*
      mutable_avatar();
  private:
  const ::AcFunDanmu::ImageCdnNode& _internal_avatar(int index) const;
  ::AcFunDanmu::ImageCdnNode* _internal_add_avatar();
  public:
  const ::AcFunDanmu::ImageCdnNode& avatar(int index) const;
  ::AcFunDanmu::ImageCdnNode* add_avatar();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >&
      avatar() const;

  // string nickname = 2;
  void clear_nickname();
  const std::string& nickname() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_nickname(ArgT0&& arg0, ArgT... args);
  std::string* mutable_nickname();
  PROTOBUF_NODISCARD std::string* release_nickname();
  void set_allocated_nickname(std::string* nickname);
  private:
  const std::string& _internal_nickname() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_nickname(const std::string& value);
  std::string* _internal_mutable_nickname();
  public:

  // string badge = 4;
  void clear_badge();
  const std::string& badge() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_badge(ArgT0&& arg0, ArgT... args);
  std::string* mutable_badge();
  PROTOBUF_NODISCARD std::string* release_badge();
  void set_allocated_badge(std::string* badge);
  private:
  const std::string& _internal_badge() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_badge(const std::string& value);
  std::string* _internal_mutable_badge();
  public:

  // string g = 7;
  void clear_g();
  const std::string& g() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_g(ArgT0&& arg0, ArgT... args);
  std::string* mutable_g();
  PROTOBUF_NODISCARD std::string* release_g();
  void set_allocated_g(std::string* g);
  private:
  const std::string& _internal_g() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_g(const std::string& value);
  std::string* _internal_mutable_g();
  public:

  // .AcFunDanmu.ZtLiveUserIdentity userIdentity = 5;
  bool has_useridentity() const;
  private:
  bool _internal_has_useridentity() const;
  public:
  void clear_useridentity();
  const ::AcFunDanmu::ZtLiveUserIdentity& useridentity() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::ZtLiveUserIdentity* release_useridentity();
  ::AcFunDanmu::ZtLiveUserIdentity* mutable_useridentity();
  void set_allocated_useridentity(::AcFunDanmu::ZtLiveUserIdentity* useridentity);
  private:
  const ::AcFunDanmu::ZtLiveUserIdentity& _internal_useridentity() const;
  ::AcFunDanmu::ZtLiveUserIdentity* _internal_mutable_useridentity();
  public:
  void unsafe_arena_set_allocated_useridentity(
      ::AcFunDanmu::ZtLiveUserIdentity* useridentity);
  ::AcFunDanmu::ZtLiveUserIdentity* unsafe_arena_release_useridentity();

  // int64 userId = 1;
  void clear_userid();
  int64_t userid() const;
  void set_userid(int64_t value);
  private:
  int64_t _internal_userid() const;
  void _internal_set_userid(int64_t value);
  public:

  // bool f = 6;
  void clear_f();
  bool f() const;
  void set_f(bool value);
  private:
  bool _internal_f() const;
  void _internal_set_f(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.ZtLiveUserInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode > avatar_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr nickname_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr badge_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr g_;
    ::AcFunDanmu::ZtLiveUserIdentity* useridentity_;
    int64_t userid_;
    bool f_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ZtLiveUserInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ZtLiveUserInfo

// int64 userId = 1;
inline void ZtLiveUserInfo::clear_userid() {
  _impl_.userid_ = int64_t{0};
}
inline int64_t ZtLiveUserInfo::_internal_userid() const {
  return _impl_.userid_;
}
inline int64_t ZtLiveUserInfo::userid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveUserInfo.userId)
  return _internal_userid();
}
inline void ZtLiveUserInfo::_internal_set_userid(int64_t value) {
  
  _impl_.userid_ = value;
}
inline void ZtLiveUserInfo::set_userid(int64_t value) {
  _internal_set_userid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveUserInfo.userId)
}

// string nickname = 2;
inline void ZtLiveUserInfo::clear_nickname() {
  _impl_.nickname_.ClearToEmpty();
}
inline const std::string& ZtLiveUserInfo::nickname() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveUserInfo.nickname)
  return _internal_nickname();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ZtLiveUserInfo::set_nickname(ArgT0&& arg0, ArgT... args) {
 
 _impl_.nickname_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveUserInfo.nickname)
}
inline std::string* ZtLiveUserInfo::mutable_nickname() {
  std::string* _s = _internal_mutable_nickname();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveUserInfo.nickname)
  return _s;
}
inline const std::string& ZtLiveUserInfo::_internal_nickname() const {
  return _impl_.nickname_.Get();
}
inline void ZtLiveUserInfo::_internal_set_nickname(const std::string& value) {
  
  _impl_.nickname_.Set(value, GetArenaForAllocation());
}
inline std::string* ZtLiveUserInfo::_internal_mutable_nickname() {
  
  return _impl_.nickname_.Mutable(GetArenaForAllocation());
}
inline std::string* ZtLiveUserInfo::release_nickname() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveUserInfo.nickname)
  return _impl_.nickname_.Release();
}
inline void ZtLiveUserInfo::set_allocated_nickname(std::string* nickname) {
  if (nickname != nullptr) {
    
  } else {
    
  }
  _impl_.nickname_.SetAllocated(nickname, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.nickname_.IsDefault()) {
    _impl_.nickname_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveUserInfo.nickname)
}

// repeated .AcFunDanmu.ImageCdnNode avatar = 3;
inline int ZtLiveUserInfo::_internal_avatar_size() const {
  return _impl_.avatar_.size();
}
inline int ZtLiveUserInfo::avatar_size() const {
  return _internal_avatar_size();
}
inline ::AcFunDanmu::ImageCdnNode* ZtLiveUserInfo::mutable_avatar(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveUserInfo.avatar)
  return _impl_.avatar_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >*
ZtLiveUserInfo::mutable_avatar() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.ZtLiveUserInfo.avatar)
  return &_impl_.avatar_;
}
inline const ::AcFunDanmu::ImageCdnNode& ZtLiveUserInfo::_internal_avatar(int index) const {
  return _impl_.avatar_.Get(index);
}
inline const ::AcFunDanmu::ImageCdnNode& ZtLiveUserInfo::avatar(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveUserInfo.avatar)
  return _internal_avatar(index);
}
inline ::AcFunDanmu::ImageCdnNode* ZtLiveUserInfo::_internal_add_avatar() {
  return _impl_.avatar_.Add();
}
inline ::AcFunDanmu::ImageCdnNode* ZtLiveUserInfo::add_avatar() {
  ::AcFunDanmu::ImageCdnNode* _add = _internal_add_avatar();
  // @@protoc_insertion_point(field_add:AcFunDanmu.ZtLiveUserInfo.avatar)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >&
ZtLiveUserInfo::avatar() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.ZtLiveUserInfo.avatar)
  return _impl_.avatar_;
}

// string badge = 4;
inline void ZtLiveUserInfo::clear_badge() {
  _impl_.badge_.ClearToEmpty();
}
inline const std::string& ZtLiveUserInfo::badge() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveUserInfo.badge)
  return _internal_badge();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ZtLiveUserInfo::set_badge(ArgT0&& arg0, ArgT... args) {
 
 _impl_.badge_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveUserInfo.badge)
}
inline std::string* ZtLiveUserInfo::mutable_badge() {
  std::string* _s = _internal_mutable_badge();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveUserInfo.badge)
  return _s;
}
inline const std::string& ZtLiveUserInfo::_internal_badge() const {
  return _impl_.badge_.Get();
}
inline void ZtLiveUserInfo::_internal_set_badge(const std::string& value) {
  
  _impl_.badge_.Set(value, GetArenaForAllocation());
}
inline std::string* ZtLiveUserInfo::_internal_mutable_badge() {
  
  return _impl_.badge_.Mutable(GetArenaForAllocation());
}
inline std::string* ZtLiveUserInfo::release_badge() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveUserInfo.badge)
  return _impl_.badge_.Release();
}
inline void ZtLiveUserInfo::set_allocated_badge(std::string* badge) {
  if (badge != nullptr) {
    
  } else {
    
  }
  _impl_.badge_.SetAllocated(badge, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.badge_.IsDefault()) {
    _impl_.badge_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveUserInfo.badge)
}

// .AcFunDanmu.ZtLiveUserIdentity userIdentity = 5;
inline bool ZtLiveUserInfo::_internal_has_useridentity() const {
  return this != internal_default_instance() && _impl_.useridentity_ != nullptr;
}
inline bool ZtLiveUserInfo::has_useridentity() const {
  return _internal_has_useridentity();
}
inline const ::AcFunDanmu::ZtLiveUserIdentity& ZtLiveUserInfo::_internal_useridentity() const {
  const ::AcFunDanmu::ZtLiveUserIdentity* p = _impl_.useridentity_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::ZtLiveUserIdentity&>(
      ::AcFunDanmu::_ZtLiveUserIdentity_default_instance_);
}
inline const ::AcFunDanmu::ZtLiveUserIdentity& ZtLiveUserInfo::useridentity() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveUserInfo.userIdentity)
  return _internal_useridentity();
}
inline void ZtLiveUserInfo::unsafe_arena_set_allocated_useridentity(
    ::AcFunDanmu::ZtLiveUserIdentity* useridentity) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.useridentity_);
  }
  _impl_.useridentity_ = useridentity;
  if (useridentity) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.ZtLiveUserInfo.userIdentity)
}
inline ::AcFunDanmu::ZtLiveUserIdentity* ZtLiveUserInfo::release_useridentity() {
  
  ::AcFunDanmu::ZtLiveUserIdentity* temp = _impl_.useridentity_;
  _impl_.useridentity_ = nullptr;
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
inline ::AcFunDanmu::ZtLiveUserIdentity* ZtLiveUserInfo::unsafe_arena_release_useridentity() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveUserInfo.userIdentity)
  
  ::AcFunDanmu::ZtLiveUserIdentity* temp = _impl_.useridentity_;
  _impl_.useridentity_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserIdentity* ZtLiveUserInfo::_internal_mutable_useridentity() {
  
  if (_impl_.useridentity_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::ZtLiveUserIdentity>(GetArenaForAllocation());
    _impl_.useridentity_ = p;
  }
  return _impl_.useridentity_;
}
inline ::AcFunDanmu::ZtLiveUserIdentity* ZtLiveUserInfo::mutable_useridentity() {
  ::AcFunDanmu::ZtLiveUserIdentity* _msg = _internal_mutable_useridentity();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveUserInfo.userIdentity)
  return _msg;
}
inline void ZtLiveUserInfo::set_allocated_useridentity(::AcFunDanmu::ZtLiveUserIdentity* useridentity) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.useridentity_);
  }
  if (useridentity) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(useridentity));
    if (message_arena != submessage_arena) {
      useridentity = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, useridentity, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.useridentity_ = useridentity;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveUserInfo.userIdentity)
}

// bool f = 6;
inline void ZtLiveUserInfo::clear_f() {
  _impl_.f_ = false;
}
inline bool ZtLiveUserInfo::_internal_f() const {
  return _impl_.f_;
}
inline bool ZtLiveUserInfo::f() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveUserInfo.f)
  return _internal_f();
}
inline void ZtLiveUserInfo::_internal_set_f(bool value) {
  
  _impl_.f_ = value;
}
inline void ZtLiveUserInfo::set_f(bool value) {
  _internal_set_f(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveUserInfo.f)
}

// string g = 7;
inline void ZtLiveUserInfo::clear_g() {
  _impl_.g_.ClearToEmpty();
}
inline const std::string& ZtLiveUserInfo::g() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.ZtLiveUserInfo.g)
  return _internal_g();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void ZtLiveUserInfo::set_g(ArgT0&& arg0, ArgT... args) {
 
 _impl_.g_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.ZtLiveUserInfo.g)
}
inline std::string* ZtLiveUserInfo::mutable_g() {
  std::string* _s = _internal_mutable_g();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.ZtLiveUserInfo.g)
  return _s;
}
inline const std::string& ZtLiveUserInfo::_internal_g() const {
  return _impl_.g_.Get();
}
inline void ZtLiveUserInfo::_internal_set_g(const std::string& value) {
  
  _impl_.g_.Set(value, GetArenaForAllocation());
}
inline std::string* ZtLiveUserInfo::_internal_mutable_g() {
  
  return _impl_.g_.Mutable(GetArenaForAllocation());
}
inline std::string* ZtLiveUserInfo::release_g() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.ZtLiveUserInfo.g)
  return _impl_.g_.Release();
}
inline void ZtLiveUserInfo::set_allocated_g(std::string* g) {
  if (g != nullptr) {
    
  } else {
    
  }
  _impl_.g_.SetAllocated(g, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.g_.IsDefault()) {
    _impl_.g_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.ZtLiveUserInfo.g)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ZtLiveUserInfo_2eproto
