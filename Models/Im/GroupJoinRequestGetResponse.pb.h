// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupJoinRequestGetResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupJoinRequestGetResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupJoinRequestGetResponse_2eproto

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
#include "GroupMember.pb.h"
#include "JoinRequestStatus.pb.h"
#include "User.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupJoinRequestGetResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupJoinRequestGetResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupJoinRequestGetResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupJoinRequestGetResponse;
struct GroupJoinRequestGetResponseDefaultTypeInternal;
extern GroupJoinRequestGetResponseDefaultTypeInternal _GroupJoinRequestGetResponse_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestGetResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestGetResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupJoinRequestGetResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse) */ {
 public:
  inline GroupJoinRequestGetResponse() : GroupJoinRequestGetResponse(nullptr) {}
  ~GroupJoinRequestGetResponse() override;
  explicit PROTOBUF_CONSTEXPR GroupJoinRequestGetResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupJoinRequestGetResponse(const GroupJoinRequestGetResponse& from);
  GroupJoinRequestGetResponse(GroupJoinRequestGetResponse&& from) noexcept
    : GroupJoinRequestGetResponse() {
    *this = ::std::move(from);
  }

  inline GroupJoinRequestGetResponse& operator=(const GroupJoinRequestGetResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupJoinRequestGetResponse& operator=(GroupJoinRequestGetResponse&& from) noexcept {
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
  static const GroupJoinRequestGetResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupJoinRequestGetResponse* internal_default_instance() {
    return reinterpret_cast<const GroupJoinRequestGetResponse*>(
               &_GroupJoinRequestGetResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupJoinRequestGetResponse& a, GroupJoinRequestGetResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupJoinRequestGetResponse* other) {
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
  void UnsafeArenaSwap(GroupJoinRequestGetResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupJoinRequestGetResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupJoinRequestGetResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupJoinRequestGetResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupJoinRequestGetResponse& from) {
    GroupJoinRequestGetResponse::MergeImpl(*this, from);
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
  void InternalSwap(GroupJoinRequestGetResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse";
  }
  protected:
  explicit GroupJoinRequestGetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kInviteesFieldNumber = 3,
    kGroupIdFieldNumber = 1,
    kDescContentFieldNumber = 5,
    kInviterFieldNumber = 2,
    kFindWayFieldNumber = 4,
    kStatusFieldNumber = 6,
    kInviteeMembersRoleFieldNumber = 7,
  };
  // repeated .AcFunDanmu.Im.Basic.User invitees = 3;
  int invitees_size() const;
  private:
  int _internal_invitees_size() const;
  public:
  void clear_invitees();
  ::AcFunDanmu::Im::Basic::User* mutable_invitees(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Basic::User >*
      mutable_invitees();
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_invitees(int index) const;
  ::AcFunDanmu::Im::Basic::User* _internal_add_invitees();
  public:
  const ::AcFunDanmu::Im::Basic::User& invitees(int index) const;
  ::AcFunDanmu::Im::Basic::User* add_invitees();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Basic::User >&
      invitees() const;

  // string groupId = 1;
  void clear_groupid();
  const std::string& groupid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_groupid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_groupid();
  PROTOBUF_NODISCARD std::string* release_groupid();
  void set_allocated_groupid(std::string* groupid);
  private:
  const std::string& _internal_groupid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_groupid(const std::string& value);
  std::string* _internal_mutable_groupid();
  public:

  // string descContent = 5;
  void clear_desccontent();
  const std::string& desccontent() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_desccontent(ArgT0&& arg0, ArgT... args);
  std::string* mutable_desccontent();
  PROTOBUF_NODISCARD std::string* release_desccontent();
  void set_allocated_desccontent(std::string* desccontent);
  private:
  const std::string& _internal_desccontent() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_desccontent(const std::string& value);
  std::string* _internal_mutable_desccontent();
  public:

  // .AcFunDanmu.Im.Basic.User inviter = 2;
  bool has_inviter() const;
  private:
  bool _internal_has_inviter() const;
  public:
  void clear_inviter();
  const ::AcFunDanmu::Im::Basic::User& inviter() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::User* release_inviter();
  ::AcFunDanmu::Im::Basic::User* mutable_inviter();
  void set_allocated_inviter(::AcFunDanmu::Im::Basic::User* inviter);
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_inviter() const;
  ::AcFunDanmu::Im::Basic::User* _internal_mutable_inviter();
  public:
  void unsafe_arena_set_allocated_inviter(
      ::AcFunDanmu::Im::Basic::User* inviter);
  ::AcFunDanmu::Im::Basic::User* unsafe_arena_release_inviter();

  // int32 findWay = 4;
  void clear_findway();
  int32_t findway() const;
  void set_findway(int32_t value);
  private:
  int32_t _internal_findway() const;
  void _internal_set_findway(int32_t value);
  public:

  // .AcFunDanmu.Im.Cloud.Message.JoinRequestStatus status = 6;
  void clear_status();
  ::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus status() const;
  void set_status(::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus value);
  private:
  ::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus _internal_status() const;
  void _internal_set_status(::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus value);
  public:

  // .AcFunDanmu.Im.Cloud.Message.GroupMember.GroupMemberRole inviteeMembersRole = 7;
  void clear_inviteemembersrole();
  ::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole inviteemembersrole() const;
  void set_inviteemembersrole(::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole value);
  private:
  ::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole _internal_inviteemembersrole() const;
  void _internal_set_inviteemembersrole(::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Basic::User > invitees_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr groupid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr desccontent_;
    ::AcFunDanmu::Im::Basic::User* inviter_;
    int32_t findway_;
    int status_;
    int inviteemembersrole_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupJoinRequestGetResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupJoinRequestGetResponse

// string groupId = 1;
inline void GroupJoinRequestGetResponse::clear_groupid() {
  _impl_.groupid_.ClearToEmpty();
}
inline const std::string& GroupJoinRequestGetResponse::groupid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.groupId)
  return _internal_groupid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupJoinRequestGetResponse::set_groupid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.groupid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.groupId)
}
inline std::string* GroupJoinRequestGetResponse::mutable_groupid() {
  std::string* _s = _internal_mutable_groupid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.groupId)
  return _s;
}
inline const std::string& GroupJoinRequestGetResponse::_internal_groupid() const {
  return _impl_.groupid_.Get();
}
inline void GroupJoinRequestGetResponse::_internal_set_groupid(const std::string& value) {
  
  _impl_.groupid_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupJoinRequestGetResponse::_internal_mutable_groupid() {
  
  return _impl_.groupid_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupJoinRequestGetResponse::release_groupid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.groupId)
  return _impl_.groupid_.Release();
}
inline void GroupJoinRequestGetResponse::set_allocated_groupid(std::string* groupid) {
  if (groupid != nullptr) {
    
  } else {
    
  }
  _impl_.groupid_.SetAllocated(groupid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.groupid_.IsDefault()) {
    _impl_.groupid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.groupId)
}

// .AcFunDanmu.Im.Basic.User inviter = 2;
inline bool GroupJoinRequestGetResponse::_internal_has_inviter() const {
  return this != internal_default_instance() && _impl_.inviter_ != nullptr;
}
inline bool GroupJoinRequestGetResponse::has_inviter() const {
  return _internal_has_inviter();
}
inline const ::AcFunDanmu::Im::Basic::User& GroupJoinRequestGetResponse::_internal_inviter() const {
  const ::AcFunDanmu::Im::Basic::User* p = _impl_.inviter_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::User&>(
      ::AcFunDanmu::Im::Basic::_User_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::User& GroupJoinRequestGetResponse::inviter() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.inviter)
  return _internal_inviter();
}
inline void GroupJoinRequestGetResponse::unsafe_arena_set_allocated_inviter(
    ::AcFunDanmu::Im::Basic::User* inviter) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.inviter_);
  }
  _impl_.inviter_ = inviter;
  if (inviter) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.inviter)
}
inline ::AcFunDanmu::Im::Basic::User* GroupJoinRequestGetResponse::release_inviter() {
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.inviter_;
  _impl_.inviter_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::User* GroupJoinRequestGetResponse::unsafe_arena_release_inviter() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.inviter)
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.inviter_;
  _impl_.inviter_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::User* GroupJoinRequestGetResponse::_internal_mutable_inviter() {
  
  if (_impl_.inviter_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::User>(GetArenaForAllocation());
    _impl_.inviter_ = p;
  }
  return _impl_.inviter_;
}
inline ::AcFunDanmu::Im::Basic::User* GroupJoinRequestGetResponse::mutable_inviter() {
  ::AcFunDanmu::Im::Basic::User* _msg = _internal_mutable_inviter();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.inviter)
  return _msg;
}
inline void GroupJoinRequestGetResponse::set_allocated_inviter(::AcFunDanmu::Im::Basic::User* inviter) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.inviter_);
  }
  if (inviter) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(inviter));
    if (message_arena != submessage_arena) {
      inviter = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, inviter, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.inviter_ = inviter;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.inviter)
}

// repeated .AcFunDanmu.Im.Basic.User invitees = 3;
inline int GroupJoinRequestGetResponse::_internal_invitees_size() const {
  return _impl_.invitees_.size();
}
inline int GroupJoinRequestGetResponse::invitees_size() const {
  return _internal_invitees_size();
}
inline ::AcFunDanmu::Im::Basic::User* GroupJoinRequestGetResponse::mutable_invitees(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.invitees)
  return _impl_.invitees_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Basic::User >*
GroupJoinRequestGetResponse::mutable_invitees() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.invitees)
  return &_impl_.invitees_;
}
inline const ::AcFunDanmu::Im::Basic::User& GroupJoinRequestGetResponse::_internal_invitees(int index) const {
  return _impl_.invitees_.Get(index);
}
inline const ::AcFunDanmu::Im::Basic::User& GroupJoinRequestGetResponse::invitees(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.invitees)
  return _internal_invitees(index);
}
inline ::AcFunDanmu::Im::Basic::User* GroupJoinRequestGetResponse::_internal_add_invitees() {
  return _impl_.invitees_.Add();
}
inline ::AcFunDanmu::Im::Basic::User* GroupJoinRequestGetResponse::add_invitees() {
  ::AcFunDanmu::Im::Basic::User* _add = _internal_add_invitees();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.invitees)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Basic::User >&
GroupJoinRequestGetResponse::invitees() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.invitees)
  return _impl_.invitees_;
}

// int32 findWay = 4;
inline void GroupJoinRequestGetResponse::clear_findway() {
  _impl_.findway_ = 0;
}
inline int32_t GroupJoinRequestGetResponse::_internal_findway() const {
  return _impl_.findway_;
}
inline int32_t GroupJoinRequestGetResponse::findway() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.findWay)
  return _internal_findway();
}
inline void GroupJoinRequestGetResponse::_internal_set_findway(int32_t value) {
  
  _impl_.findway_ = value;
}
inline void GroupJoinRequestGetResponse::set_findway(int32_t value) {
  _internal_set_findway(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.findWay)
}

// string descContent = 5;
inline void GroupJoinRequestGetResponse::clear_desccontent() {
  _impl_.desccontent_.ClearToEmpty();
}
inline const std::string& GroupJoinRequestGetResponse::desccontent() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.descContent)
  return _internal_desccontent();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupJoinRequestGetResponse::set_desccontent(ArgT0&& arg0, ArgT... args) {
 
 _impl_.desccontent_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.descContent)
}
inline std::string* GroupJoinRequestGetResponse::mutable_desccontent() {
  std::string* _s = _internal_mutable_desccontent();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.descContent)
  return _s;
}
inline const std::string& GroupJoinRequestGetResponse::_internal_desccontent() const {
  return _impl_.desccontent_.Get();
}
inline void GroupJoinRequestGetResponse::_internal_set_desccontent(const std::string& value) {
  
  _impl_.desccontent_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupJoinRequestGetResponse::_internal_mutable_desccontent() {
  
  return _impl_.desccontent_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupJoinRequestGetResponse::release_desccontent() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.descContent)
  return _impl_.desccontent_.Release();
}
inline void GroupJoinRequestGetResponse::set_allocated_desccontent(std::string* desccontent) {
  if (desccontent != nullptr) {
    
  } else {
    
  }
  _impl_.desccontent_.SetAllocated(desccontent, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.desccontent_.IsDefault()) {
    _impl_.desccontent_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.descContent)
}

// .AcFunDanmu.Im.Cloud.Message.JoinRequestStatus status = 6;
inline void GroupJoinRequestGetResponse::clear_status() {
  _impl_.status_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus GroupJoinRequestGetResponse::_internal_status() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus >(_impl_.status_);
}
inline ::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus GroupJoinRequestGetResponse::status() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.status)
  return _internal_status();
}
inline void GroupJoinRequestGetResponse::_internal_set_status(::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus value) {
  
  _impl_.status_ = value;
}
inline void GroupJoinRequestGetResponse::set_status(::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus value) {
  _internal_set_status(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.status)
}

// .AcFunDanmu.Im.Cloud.Message.GroupMember.GroupMemberRole inviteeMembersRole = 7;
inline void GroupJoinRequestGetResponse::clear_inviteemembersrole() {
  _impl_.inviteemembersrole_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole GroupJoinRequestGetResponse::_internal_inviteemembersrole() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole >(_impl_.inviteemembersrole_);
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole GroupJoinRequestGetResponse::inviteemembersrole() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.inviteeMembersRole)
  return _internal_inviteemembersrole();
}
inline void GroupJoinRequestGetResponse::_internal_set_inviteemembersrole(::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole value) {
  
  _impl_.inviteemembersrole_ = value;
}
inline void GroupJoinRequestGetResponse::set_inviteemembersrole(::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole value) {
  _internal_set_inviteemembersrole(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestGetResponse.inviteeMembersRole)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupJoinRequestGetResponse_2eproto
