// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupInviteAcceptRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupInviteAcceptRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupInviteAcceptRequest_2eproto

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
#include "GroupJoinStatus.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupInviteAcceptRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupInviteAcceptRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupInviteAcceptRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupInviteAcceptRequest;
struct GroupInviteAcceptRequestDefaultTypeInternal;
extern GroupInviteAcceptRequestDefaultTypeInternal _GroupInviteAcceptRequest_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupInviteAcceptRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest) */ {
 public:
  inline GroupInviteAcceptRequest() : GroupInviteAcceptRequest(nullptr) {}
  ~GroupInviteAcceptRequest() override;
  explicit PROTOBUF_CONSTEXPR GroupInviteAcceptRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupInviteAcceptRequest(const GroupInviteAcceptRequest& from);
  GroupInviteAcceptRequest(GroupInviteAcceptRequest&& from) noexcept
    : GroupInviteAcceptRequest() {
    *this = ::std::move(from);
  }

  inline GroupInviteAcceptRequest& operator=(const GroupInviteAcceptRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupInviteAcceptRequest& operator=(GroupInviteAcceptRequest&& from) noexcept {
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
  static const GroupInviteAcceptRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupInviteAcceptRequest* internal_default_instance() {
    return reinterpret_cast<const GroupInviteAcceptRequest*>(
               &_GroupInviteAcceptRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupInviteAcceptRequest& a, GroupInviteAcceptRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupInviteAcceptRequest* other) {
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
  void UnsafeArenaSwap(GroupInviteAcceptRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupInviteAcceptRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupInviteAcceptRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupInviteAcceptRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupInviteAcceptRequest& from) {
    GroupInviteAcceptRequest::MergeImpl(*this, from);
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
  void InternalSwap(GroupInviteAcceptRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest";
  }
  protected:
  explicit GroupInviteAcceptRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGroupIdFieldNumber = 2,
    kInviteIdFieldNumber = 1,
    kInviteStatusFieldNumber = 3,
  };
  // string groupId = 2;
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

  // int64 inviteId = 1;
  void clear_inviteid();
  int64_t inviteid() const;
  void set_inviteid(int64_t value);
  private:
  int64_t _internal_inviteid() const;
  void _internal_set_inviteid(int64_t value);
  public:

  // .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus inviteStatus = 3;
  void clear_invitestatus();
  ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus invitestatus() const;
  void set_invitestatus(::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus value);
  private:
  ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus _internal_invitestatus() const;
  void _internal_set_invitestatus(::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr groupid_;
    int64_t inviteid_;
    int invitestatus_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupInviteAcceptRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupInviteAcceptRequest

// int64 inviteId = 1;
inline void GroupInviteAcceptRequest::clear_inviteid() {
  _impl_.inviteid_ = int64_t{0};
}
inline int64_t GroupInviteAcceptRequest::_internal_inviteid() const {
  return _impl_.inviteid_;
}
inline int64_t GroupInviteAcceptRequest::inviteid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.inviteId)
  return _internal_inviteid();
}
inline void GroupInviteAcceptRequest::_internal_set_inviteid(int64_t value) {
  
  _impl_.inviteid_ = value;
}
inline void GroupInviteAcceptRequest::set_inviteid(int64_t value) {
  _internal_set_inviteid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.inviteId)
}

// string groupId = 2;
inline void GroupInviteAcceptRequest::clear_groupid() {
  _impl_.groupid_.ClearToEmpty();
}
inline const std::string& GroupInviteAcceptRequest::groupid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.groupId)
  return _internal_groupid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void GroupInviteAcceptRequest::set_groupid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.groupid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.groupId)
}
inline std::string* GroupInviteAcceptRequest::mutable_groupid() {
  std::string* _s = _internal_mutable_groupid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.groupId)
  return _s;
}
inline const std::string& GroupInviteAcceptRequest::_internal_groupid() const {
  return _impl_.groupid_.Get();
}
inline void GroupInviteAcceptRequest::_internal_set_groupid(const std::string& value) {
  
  _impl_.groupid_.Set(value, GetArenaForAllocation());
}
inline std::string* GroupInviteAcceptRequest::_internal_mutable_groupid() {
  
  return _impl_.groupid_.Mutable(GetArenaForAllocation());
}
inline std::string* GroupInviteAcceptRequest::release_groupid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.groupId)
  return _impl_.groupid_.Release();
}
inline void GroupInviteAcceptRequest::set_allocated_groupid(std::string* groupid) {
  if (groupid != nullptr) {
    
  } else {
    
  }
  _impl_.groupid_.SetAllocated(groupid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.groupid_.IsDefault()) {
    _impl_.groupid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.groupId)
}

// .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus inviteStatus = 3;
inline void GroupInviteAcceptRequest::clear_invitestatus() {
  _impl_.invitestatus_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus GroupInviteAcceptRequest::_internal_invitestatus() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus >(_impl_.invitestatus_);
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus GroupInviteAcceptRequest::invitestatus() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.inviteStatus)
  return _internal_invitestatus();
}
inline void GroupInviteAcceptRequest::_internal_set_invitestatus(::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus value) {
  
  _impl_.invitestatus_ = value;
}
inline void GroupInviteAcceptRequest::set_invitestatus(::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus value) {
  _internal_set_invitestatus(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.inviteStatus)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupInviteAcceptRequest_2eproto
