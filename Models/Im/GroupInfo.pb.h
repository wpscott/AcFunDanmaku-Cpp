// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupInfo.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupInfo_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupInfo_2eproto

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
#include "GroupBasicInfo.pb.h"
#include "GroupMembersBriefInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupInfo_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupInfo_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupInfo_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupInfo;
struct GroupInfoDefaultTypeInternal;
extern GroupInfoDefaultTypeInternal _GroupInfo_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupInfo* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupInfo>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupInfo final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupInfo) */ {
 public:
  inline GroupInfo() : GroupInfo(nullptr) {}
  ~GroupInfo() override;
  explicit PROTOBUF_CONSTEXPR GroupInfo(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupInfo(const GroupInfo& from);
  GroupInfo(GroupInfo&& from) noexcept
    : GroupInfo() {
    *this = ::std::move(from);
  }

  inline GroupInfo& operator=(const GroupInfo& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupInfo& operator=(GroupInfo&& from) noexcept {
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
  static const GroupInfo& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupInfo* internal_default_instance() {
    return reinterpret_cast<const GroupInfo*>(
               &_GroupInfo_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupInfo& a, GroupInfo& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupInfo* other) {
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
  void UnsafeArenaSwap(GroupInfo* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupInfo* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupInfo>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupInfo& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupInfo& from) {
    GroupInfo::MergeImpl(*this, from);
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
  void InternalSwap(GroupInfo* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupInfo";
  }
  protected:
  explicit GroupInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kBasicInfoFieldNumber = 1,
    kGroupMembersBriefInfoFieldNumber = 2,
  };
  // .AcFunDanmu.Im.Cloud.Message.GroupBasicInfo basicInfo = 1;
  bool has_basicinfo() const;
  private:
  bool _internal_has_basicinfo() const;
  public:
  void clear_basicinfo();
  const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& basicinfo() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* release_basicinfo();
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* mutable_basicinfo();
  void set_allocated_basicinfo(::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* basicinfo);
  private:
  const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& _internal_basicinfo() const;
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* _internal_mutable_basicinfo();
  public:
  void unsafe_arena_set_allocated_basicinfo(
      ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* basicinfo);
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* unsafe_arena_release_basicinfo();

  // .AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo groupMembersBriefInfo = 2;
  bool has_groupmembersbriefinfo() const;
  private:
  bool _internal_has_groupmembersbriefinfo() const;
  public:
  void clear_groupmembersbriefinfo();
  const ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo& groupmembersbriefinfo() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* release_groupmembersbriefinfo();
  ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* mutable_groupmembersbriefinfo();
  void set_allocated_groupmembersbriefinfo(::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* groupmembersbriefinfo);
  private:
  const ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo& _internal_groupmembersbriefinfo() const;
  ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* _internal_mutable_groupmembersbriefinfo();
  public:
  void unsafe_arena_set_allocated_groupmembersbriefinfo(
      ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* groupmembersbriefinfo);
  ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* unsafe_arena_release_groupmembersbriefinfo();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupInfo)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* basicinfo_;
    ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* groupmembersbriefinfo_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupInfo_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupInfo

// .AcFunDanmu.Im.Cloud.Message.GroupBasicInfo basicInfo = 1;
inline bool GroupInfo::_internal_has_basicinfo() const {
  return this != internal_default_instance() && _impl_.basicinfo_ != nullptr;
}
inline bool GroupInfo::has_basicinfo() const {
  return _internal_has_basicinfo();
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& GroupInfo::_internal_basicinfo() const {
  const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* p = _impl_.basicinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo&>(
      ::AcFunDanmu::Im::Cloud::Message::_GroupBasicInfo_default_instance_);
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& GroupInfo::basicinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupInfo.basicInfo)
  return _internal_basicinfo();
}
inline void GroupInfo::unsafe_arena_set_allocated_basicinfo(
    ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* basicinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.basicinfo_);
  }
  _impl_.basicinfo_ = basicinfo;
  if (basicinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupInfo.basicInfo)
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* GroupInfo::release_basicinfo() {
  
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* temp = _impl_.basicinfo_;
  _impl_.basicinfo_ = nullptr;
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
inline ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* GroupInfo::unsafe_arena_release_basicinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupInfo.basicInfo)
  
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* temp = _impl_.basicinfo_;
  _impl_.basicinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* GroupInfo::_internal_mutable_basicinfo() {
  
  if (_impl_.basicinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo>(GetArenaForAllocation());
    _impl_.basicinfo_ = p;
  }
  return _impl_.basicinfo_;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* GroupInfo::mutable_basicinfo() {
  ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* _msg = _internal_mutable_basicinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupInfo.basicInfo)
  return _msg;
}
inline void GroupInfo::set_allocated_basicinfo(::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo* basicinfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.basicinfo_);
  }
  if (basicinfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(basicinfo));
    if (message_arena != submessage_arena) {
      basicinfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, basicinfo, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.basicinfo_ = basicinfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupInfo.basicInfo)
}

// .AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo groupMembersBriefInfo = 2;
inline bool GroupInfo::_internal_has_groupmembersbriefinfo() const {
  return this != internal_default_instance() && _impl_.groupmembersbriefinfo_ != nullptr;
}
inline bool GroupInfo::has_groupmembersbriefinfo() const {
  return _internal_has_groupmembersbriefinfo();
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo& GroupInfo::_internal_groupmembersbriefinfo() const {
  const ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* p = _impl_.groupmembersbriefinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo&>(
      ::AcFunDanmu::Im::Cloud::Message::_GroupMembersBriefInfo_default_instance_);
}
inline const ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo& GroupInfo::groupmembersbriefinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupInfo.groupMembersBriefInfo)
  return _internal_groupmembersbriefinfo();
}
inline void GroupInfo::unsafe_arena_set_allocated_groupmembersbriefinfo(
    ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* groupmembersbriefinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.groupmembersbriefinfo_);
  }
  _impl_.groupmembersbriefinfo_ = groupmembersbriefinfo;
  if (groupmembersbriefinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupInfo.groupMembersBriefInfo)
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* GroupInfo::release_groupmembersbriefinfo() {
  
  ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* temp = _impl_.groupmembersbriefinfo_;
  _impl_.groupmembersbriefinfo_ = nullptr;
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
inline ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* GroupInfo::unsafe_arena_release_groupmembersbriefinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupInfo.groupMembersBriefInfo)
  
  ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* temp = _impl_.groupmembersbriefinfo_;
  _impl_.groupmembersbriefinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* GroupInfo::_internal_mutable_groupmembersbriefinfo() {
  
  if (_impl_.groupmembersbriefinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo>(GetArenaForAllocation());
    _impl_.groupmembersbriefinfo_ = p;
  }
  return _impl_.groupmembersbriefinfo_;
}
inline ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* GroupInfo::mutable_groupmembersbriefinfo() {
  ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* _msg = _internal_mutable_groupmembersbriefinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupInfo.groupMembersBriefInfo)
  return _msg;
}
inline void GroupInfo::set_allocated_groupmembersbriefinfo(::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo* groupmembersbriefinfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.groupmembersbriefinfo_);
  }
  if (groupmembersbriefinfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(groupmembersbriefinfo));
    if (message_arena != submessage_arena) {
      groupmembersbriefinfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, groupmembersbriefinfo, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.groupmembersbriefinfo_ = groupmembersbriefinfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupInfo.groupMembersBriefInfo)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupInfo_2eproto
