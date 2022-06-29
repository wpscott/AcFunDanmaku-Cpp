// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserOnlineStatus.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_UserOnlineStatus_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_UserOnlineStatus_2eproto

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
#include "User.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_UserOnlineStatus_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_UserOnlineStatus_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_UserOnlineStatus_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Profile {
class UserOnlineStatus;
struct UserOnlineStatusDefaultTypeInternal;
extern UserOnlineStatusDefaultTypeInternal _UserOnlineStatus_default_instance_;
}  // namespace Profile
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Profile {

enum UserOnlineStatus_Status : int {
  UserOnlineStatus_Status_UNKNOWN = 0,
  UserOnlineStatus_Status_ONLINE = 1,
  UserOnlineStatus_Status_OFFLINE = 2,
  UserOnlineStatus_Status_UserOnlineStatus_Status_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  UserOnlineStatus_Status_UserOnlineStatus_Status_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool UserOnlineStatus_Status_IsValid(int value);
constexpr UserOnlineStatus_Status UserOnlineStatus_Status_Status_MIN = UserOnlineStatus_Status_UNKNOWN;
constexpr UserOnlineStatus_Status UserOnlineStatus_Status_Status_MAX = UserOnlineStatus_Status_OFFLINE;
constexpr int UserOnlineStatus_Status_Status_ARRAYSIZE = UserOnlineStatus_Status_Status_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* UserOnlineStatus_Status_descriptor();
template<typename T>
inline const std::string& UserOnlineStatus_Status_Name(T enum_t_value) {
  static_assert(::std::is_same<T, UserOnlineStatus_Status>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function UserOnlineStatus_Status_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    UserOnlineStatus_Status_descriptor(), enum_t_value);
}
inline bool UserOnlineStatus_Status_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, UserOnlineStatus_Status* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<UserOnlineStatus_Status>(
    UserOnlineStatus_Status_descriptor(), name, value);
}
// ===================================================================

class UserOnlineStatus final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus) */ {
 public:
  inline UserOnlineStatus() : UserOnlineStatus(nullptr) {}
  ~UserOnlineStatus() override;
  explicit PROTOBUF_CONSTEXPR UserOnlineStatus(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  UserOnlineStatus(const UserOnlineStatus& from);
  UserOnlineStatus(UserOnlineStatus&& from) noexcept
    : UserOnlineStatus() {
    *this = ::std::move(from);
  }

  inline UserOnlineStatus& operator=(const UserOnlineStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline UserOnlineStatus& operator=(UserOnlineStatus&& from) noexcept {
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
  static const UserOnlineStatus& default_instance() {
    return *internal_default_instance();
  }
  static inline const UserOnlineStatus* internal_default_instance() {
    return reinterpret_cast<const UserOnlineStatus*>(
               &_UserOnlineStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(UserOnlineStatus& a, UserOnlineStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(UserOnlineStatus* other) {
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
  void UnsafeArenaSwap(UserOnlineStatus* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  UserOnlineStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<UserOnlineStatus>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const UserOnlineStatus& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const UserOnlineStatus& from) {
    UserOnlineStatus::MergeImpl(*this, from);
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
  void InternalSwap(UserOnlineStatus* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus";
  }
  protected:
  explicit UserOnlineStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef UserOnlineStatus_Status Status;
  static constexpr Status UNKNOWN =
    UserOnlineStatus_Status_UNKNOWN;
  static constexpr Status ONLINE =
    UserOnlineStatus_Status_ONLINE;
  static constexpr Status OFFLINE =
    UserOnlineStatus_Status_OFFLINE;
  static inline bool Status_IsValid(int value) {
    return UserOnlineStatus_Status_IsValid(value);
  }
  static constexpr Status Status_MIN =
    UserOnlineStatus_Status_Status_MIN;
  static constexpr Status Status_MAX =
    UserOnlineStatus_Status_Status_MAX;
  static constexpr int Status_ARRAYSIZE =
    UserOnlineStatus_Status_Status_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Status_descriptor() {
    return UserOnlineStatus_Status_descriptor();
  }
  template<typename T>
  static inline const std::string& Status_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Status>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Status_Name.");
    return UserOnlineStatus_Status_Name(enum_t_value);
  }
  static inline bool Status_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Status* value) {
    return UserOnlineStatus_Status_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kUserFieldNumber = 1,
    kLastOfflineTimeFieldNumber = 2,
    kStatusFieldNumber = 3,
  };
  // .AcFunDanmu.Im.Basic.User user = 1;
  bool has_user() const;
  private:
  bool _internal_has_user() const;
  public:
  void clear_user();
  const ::AcFunDanmu::Im::Basic::User& user() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::User* release_user();
  ::AcFunDanmu::Im::Basic::User* mutable_user();
  void set_allocated_user(::AcFunDanmu::Im::Basic::User* user);
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_user() const;
  ::AcFunDanmu::Im::Basic::User* _internal_mutable_user();
  public:
  void unsafe_arena_set_allocated_user(
      ::AcFunDanmu::Im::Basic::User* user);
  ::AcFunDanmu::Im::Basic::User* unsafe_arena_release_user();

  // int64 lastOfflineTime = 2;
  void clear_lastofflinetime();
  int64_t lastofflinetime() const;
  void set_lastofflinetime(int64_t value);
  private:
  int64_t _internal_lastofflinetime() const;
  void _internal_set_lastofflinetime(int64_t value);
  public:

  // .AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.Status status = 3;
  void clear_status();
  ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status status() const;
  void set_status(::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status value);
  private:
  ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status _internal_status() const;
  void _internal_set_status(::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Basic::User* user_;
    int64_t lastofflinetime_;
    int status_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_UserOnlineStatus_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// UserOnlineStatus

// .AcFunDanmu.Im.Basic.User user = 1;
inline bool UserOnlineStatus::_internal_has_user() const {
  return this != internal_default_instance() && _impl_.user_ != nullptr;
}
inline bool UserOnlineStatus::has_user() const {
  return _internal_has_user();
}
inline const ::AcFunDanmu::Im::Basic::User& UserOnlineStatus::_internal_user() const {
  const ::AcFunDanmu::Im::Basic::User* p = _impl_.user_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::User&>(
      ::AcFunDanmu::Im::Basic::_User_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::User& UserOnlineStatus::user() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.user)
  return _internal_user();
}
inline void UserOnlineStatus::unsafe_arena_set_allocated_user(
    ::AcFunDanmu::Im::Basic::User* user) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.user_);
  }
  _impl_.user_ = user;
  if (user) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.user)
}
inline ::AcFunDanmu::Im::Basic::User* UserOnlineStatus::release_user() {
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.user_;
  _impl_.user_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::User* UserOnlineStatus::unsafe_arena_release_user() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.user)
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.user_;
  _impl_.user_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::User* UserOnlineStatus::_internal_mutable_user() {
  
  if (_impl_.user_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::User>(GetArenaForAllocation());
    _impl_.user_ = p;
  }
  return _impl_.user_;
}
inline ::AcFunDanmu::Im::Basic::User* UserOnlineStatus::mutable_user() {
  ::AcFunDanmu::Im::Basic::User* _msg = _internal_mutable_user();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.user)
  return _msg;
}
inline void UserOnlineStatus::set_allocated_user(::AcFunDanmu::Im::Basic::User* user) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.user_);
  }
  if (user) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(user));
    if (message_arena != submessage_arena) {
      user = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, user, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.user_ = user;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.user)
}

// int64 lastOfflineTime = 2;
inline void UserOnlineStatus::clear_lastofflinetime() {
  _impl_.lastofflinetime_ = int64_t{0};
}
inline int64_t UserOnlineStatus::_internal_lastofflinetime() const {
  return _impl_.lastofflinetime_;
}
inline int64_t UserOnlineStatus::lastofflinetime() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.lastOfflineTime)
  return _internal_lastofflinetime();
}
inline void UserOnlineStatus::_internal_set_lastofflinetime(int64_t value) {
  
  _impl_.lastofflinetime_ = value;
}
inline void UserOnlineStatus::set_lastofflinetime(int64_t value) {
  _internal_set_lastofflinetime(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.lastOfflineTime)
}

// .AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.Status status = 3;
inline void UserOnlineStatus::clear_status() {
  _impl_.status_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status UserOnlineStatus::_internal_status() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status >(_impl_.status_);
}
inline ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status UserOnlineStatus::status() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.status)
  return _internal_status();
}
inline void UserOnlineStatus::_internal_set_status(::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status value) {
  
  _impl_.status_ = value;
}
inline void UserOnlineStatus::set_status(::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Profile.UserOnlineStatus.status)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Profile
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status>() {
  return ::AcFunDanmu::Im::Cloud::Profile::UserOnlineStatus_Status_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_UserOnlineStatus_2eproto
