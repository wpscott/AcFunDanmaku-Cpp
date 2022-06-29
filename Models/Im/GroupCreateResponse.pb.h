// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupCreateResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupCreateResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupCreateResponse_2eproto

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
#include "GroupInfo.pb.h"
#include "GroupMember.pb.h"
#include "SyncCookie.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupCreateResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupCreateResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupCreateResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupCreateResponse;
struct GroupCreateResponseDefaultTypeInternal;
extern GroupCreateResponseDefaultTypeInternal _GroupCreateResponse_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupCreateResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse) */ {
 public:
  inline GroupCreateResponse() : GroupCreateResponse(nullptr) {}
  ~GroupCreateResponse() override;
  explicit PROTOBUF_CONSTEXPR GroupCreateResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupCreateResponse(const GroupCreateResponse& from);
  GroupCreateResponse(GroupCreateResponse&& from) noexcept
    : GroupCreateResponse() {
    *this = ::std::move(from);
  }

  inline GroupCreateResponse& operator=(const GroupCreateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupCreateResponse& operator=(GroupCreateResponse&& from) noexcept {
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
  static const GroupCreateResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupCreateResponse* internal_default_instance() {
    return reinterpret_cast<const GroupCreateResponse*>(
               &_GroupCreateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupCreateResponse& a, GroupCreateResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupCreateResponse* other) {
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
  void UnsafeArenaSwap(GroupCreateResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupCreateResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupCreateResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupCreateResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupCreateResponse& from) {
    GroupCreateResponse::MergeImpl(*this, from);
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
  void InternalSwap(GroupCreateResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupCreateResponse";
  }
  protected:
  explicit GroupCreateResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMembersFieldNumber = 3,
    kGroupIdFieldNumber = 1,
    kGroupInfoFieldNumber = 2,
    kSyncCookieFieldNumber = 4,
  };
  // repeated .AcFunDanmu.Im.Cloud.Message.GroupMember members = 3;
  int members_size() const;
  private:
  int _internal_members_size() const;
  public:
  void clear_members();
  ::AcFunDanmu::Im::Cloud::Message::GroupMember* mutable_members(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMember >*
      mutable_members();
  private:
  const ::AcFunDanmu::Im::Cloud::Message::GroupMember& _internal_members(int index) const;
  ::AcFunDanmu::Im::Cloud::Message::GroupMember* _internal_add_members();
  public:
  const ::AcFunDanmu::Im::Cloud::Message::GroupMember& members(int index) const;
  ::AcFunDanmu::Im::Cloud::Message::GroupMember* add_members();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMember >&
      members() const;

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

  // .AcFunDanmu.Im.Cloud.Message.GroupInfo groupInfo = 2;
  bool has_groupinfo() const;
  private:
  bool _internal_has_groupinfo() const;
  public:
  void clear_groupinfo();
  const ::AcFunDanmu::Im::Cloud::Message::GroupInfo& groupinfo() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Cloud::Message::GroupInfo* release_groupinfo();
  ::AcFunDanmu::Im::Cloud::Message::GroupInfo* mutable_groupinfo();
  void set_allocated_groupinfo(::AcFunDanmu::Im::Cloud::Message::GroupInfo* groupinfo);
  private:
  const ::AcFunDanmu::Im::Cloud::Message::GroupInfo& _internal_groupinfo() const;
  ::AcFunDanmu::Im::Cloud::Message::GroupInfo* _internal_mutable_groupinfo();
  public:
  void unsafe_arena_set_allocated_groupinfo(
      ::AcFunDanmu::Im::Cloud::Message::GroupInfo* groupinfo);
  ::AcFunDanmu::Im::Cloud::Message::GroupInfo* unsafe_arena_release_groupinfo();

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 4;
  bool has_synccookie() const;
  private:
  bool _internal_has_synccookie() const;
  public:
  void clear_synccookie();
  const ::AcFunDanmu::Im::Basic::SyncCookie& synccookie() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::SyncCookie* release_synccookie();
  ::AcFunDanmu::Im::Basic::SyncCookie* mutable_synccookie();
  void set_allocated_synccookie(::AcFunDanmu::Im::Basic::SyncCookie* synccookie);
  private:
  const ::AcFunDanmu::Im::Basic::SyncCookie& _internal_synccookie() const;
  ::AcFunDanmu::Im::Basic::SyncCookie* _internal_mutable_synccookie();
  public:
  void unsafe_arena_set_allocated_synccookie(
      ::AcFunDanmu::Im::Basic::SyncCookie* synccookie);
  ::AcFunDanmu::Im::Basic::SyncCookie* unsafe_arena_release_synccookie();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMember > members_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr groupid_;
    ::AcFunDanmu::Im::Cloud::Message::GroupInfo* groupinfo_;
    ::AcFunDanmu::Im::Basic::SyncCookie* synccookie_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupCreateResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupCreateResponse

// string groupId = 1;
inline void GroupCreateResponse::clear_groupid() {
  _impl_.groupid_.ClearToEmpty();
}
inline const std::string& GroupCreateResponse::groupid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupId)
  return _internal_groupid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupCreateResponse::set_groupid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.groupid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupId)
}
inline std::string* GroupCreateResponse::mutable_groupid() {
  std::string* _s = _internal_mutable_groupid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupId)
  return _s;
}
inline const std::string& GroupCreateResponse::_internal_groupid() const {
  return _impl_.groupid_.Get();
}
inline void GroupCreateResponse::_internal_set_groupid(const std::string& value) {
  
  _impl_.groupid_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupCreateResponse::_internal_mutable_groupid() {
  
  return _impl_.groupid_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupCreateResponse::release_groupid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupId)
  return _impl_.groupid_.Release();
}
inline void GroupCreateResponse::set_allocated_groupid(std::string* groupid) {
  if (groupid != nullptr) {
    
  } else {
    
  }
  _impl_.groupid_.SetAllocated(groupid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.groupid_.IsDefault()) {
    _impl_.groupid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupId)
}

// .AcFunDanmu.Im.Cloud.Message.GroupInfo groupInfo = 2;
inline bool GroupCreateResponse::_internal_has_groupinfo() const {
  return this != internal_default_instance() && _impl_.groupinfo_ != nullptr;
}
inline bool GroupCreateResponse::has_groupinfo() const {
  return _internal_has_groupinfo();
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupInfo& GroupCreateResponse::_internal_groupinfo() const {
  const ::AcFunDanmu::Im::Cloud::Message::GroupInfo* p = _impl_.groupinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Cloud::Message::GroupInfo&>(
      ::AcFunDanmu::Im::Cloud::Message::_GroupInfo_default_instance_);
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupInfo& GroupCreateResponse::groupinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupInfo)
  return _internal_groupinfo();
}
inline void GroupCreateResponse::unsafe_arena_set_allocated_groupinfo(
    ::AcFunDanmu::Im::Cloud::Message::GroupInfo* groupinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.groupinfo_);
  }
  _impl_.groupinfo_ = groupinfo;
  if (groupinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupInfo)
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupInfo* GroupCreateResponse::release_groupinfo() {
  
  ::AcFunDanmu::Im::Cloud::Message::GroupInfo* temp = _impl_.groupinfo_;
  _impl_.groupinfo_ = nullptr;
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
inline ::AcFunDanmu::Im::Cloud::Message::GroupInfo* GroupCreateResponse::unsafe_arena_release_groupinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupInfo)
  
  ::AcFunDanmu::Im::Cloud::Message::GroupInfo* temp = _impl_.groupinfo_;
  _impl_.groupinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupInfo* GroupCreateResponse::_internal_mutable_groupinfo() {
  
  if (_impl_.groupinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupInfo>(GetArenaForAllocation());
    _impl_.groupinfo_ = p;
  }
  return _impl_.groupinfo_;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupInfo* GroupCreateResponse::mutable_groupinfo() {
  ::AcFunDanmu::Im::Cloud::Message::GroupInfo* _msg = _internal_mutable_groupinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupInfo)
  return _msg;
}
inline void GroupCreateResponse::set_allocated_groupinfo(::AcFunDanmu::Im::Cloud::Message::GroupInfo* groupinfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.groupinfo_);
  }
  if (groupinfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(groupinfo));
    if (message_arena != submessage_arena) {
      groupinfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, groupinfo, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.groupinfo_ = groupinfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupInfo)
}

// repeated .AcFunDanmu.Im.Cloud.Message.GroupMember members = 3;
inline int GroupCreateResponse::_internal_members_size() const {
  return _impl_.members_.size();
}
inline int GroupCreateResponse::members_size() const {
  return _internal_members_size();
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMember* GroupCreateResponse::mutable_members(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.members)
  return _impl_.members_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMember >*
GroupCreateResponse::mutable_members() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.members)
  return &_impl_.members_;
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupMember& GroupCreateResponse::_internal_members(int index) const {
  return _impl_.members_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupMember& GroupCreateResponse::members(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.members)
  return _internal_members(index);
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMember* GroupCreateResponse::_internal_add_members() {
  return _impl_.members_.Add();
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMember* GroupCreateResponse::add_members() {
  ::AcFunDanmu::Im::Cloud::Message::GroupMember* _add = _internal_add_members();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.members)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::GroupMember >&
GroupCreateResponse::members() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.members)
  return _impl_.members_;
}

// .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 4;
inline bool GroupCreateResponse::_internal_has_synccookie() const {
  return this != internal_default_instance() && _impl_.synccookie_ != nullptr;
}
inline bool GroupCreateResponse::has_synccookie() const {
  return _internal_has_synccookie();
}
inline const ::AcFunDanmu::Im::Basic::SyncCookie& GroupCreateResponse::_internal_synccookie() const {
  const ::AcFunDanmu::Im::Basic::SyncCookie* p = _impl_.synccookie_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::SyncCookie&>(
      ::AcFunDanmu::Im::Basic::_SyncCookie_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::SyncCookie& GroupCreateResponse::synccookie() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.syncCookie)
  return _internal_synccookie();
}
inline void GroupCreateResponse::unsafe_arena_set_allocated_synccookie(
    ::AcFunDanmu::Im::Basic::SyncCookie* synccookie) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.synccookie_);
  }
  _impl_.synccookie_ = synccookie;
  if (synccookie) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.syncCookie)
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* GroupCreateResponse::release_synccookie() {
  
  ::AcFunDanmu::Im::Basic::SyncCookie* temp = _impl_.synccookie_;
  _impl_.synccookie_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::SyncCookie* GroupCreateResponse::unsafe_arena_release_synccookie() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.syncCookie)
  
  ::AcFunDanmu::Im::Basic::SyncCookie* temp = _impl_.synccookie_;
  _impl_.synccookie_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* GroupCreateResponse::_internal_mutable_synccookie() {
  
  if (_impl_.synccookie_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::SyncCookie>(GetArenaForAllocation());
    _impl_.synccookie_ = p;
  }
  return _impl_.synccookie_;
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* GroupCreateResponse::mutable_synccookie() {
  ::AcFunDanmu::Im::Basic::SyncCookie* _msg = _internal_mutable_synccookie();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.syncCookie)
  return _msg;
}
inline void GroupCreateResponse::set_allocated_synccookie(::AcFunDanmu::Im::Basic::SyncCookie* synccookie) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.synccookie_);
  }
  if (synccookie) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(synccookie));
    if (message_arena != submessage_arena) {
      synccookie = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, synccookie, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.synccookie_ = synccookie;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.syncCookie)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupCreateResponse_2eproto