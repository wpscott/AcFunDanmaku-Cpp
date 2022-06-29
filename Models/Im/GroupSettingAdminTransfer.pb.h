// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupSettingAdminTransfer.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_GroupSettingAdminTransfer_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_GroupSettingAdminTransfer_2eproto

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
#include "User.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_GroupSettingAdminTransfer_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_GroupSettingAdminTransfer_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_GroupSettingAdminTransfer_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class GroupSettingAdminTransfer;
struct GroupSettingAdminTransferDefaultTypeInternal;
extern GroupSettingAdminTransferDefaultTypeInternal _GroupSettingAdminTransfer_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::GroupSettingAdminTransfer* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::GroupSettingAdminTransfer>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupSettingAdminTransfer final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.GroupSettingAdminTransfer) */ {
 public:
  inline GroupSettingAdminTransfer() : GroupSettingAdminTransfer(nullptr) {}
  ~GroupSettingAdminTransfer() override;
  explicit PROTOBUF_CONSTEXPR GroupSettingAdminTransfer(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  GroupSettingAdminTransfer(const GroupSettingAdminTransfer& from);
  GroupSettingAdminTransfer(GroupSettingAdminTransfer&& from) noexcept
    : GroupSettingAdminTransfer() {
    *this = ::std::move(from);
  }

  inline GroupSettingAdminTransfer& operator=(const GroupSettingAdminTransfer& from) {
    CopyFrom(from);
    return *this;
  }
  inline GroupSettingAdminTransfer& operator=(GroupSettingAdminTransfer&& from) noexcept {
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
  static const GroupSettingAdminTransfer& default_instance() {
    return *internal_default_instance();
  }
  static inline const GroupSettingAdminTransfer* internal_default_instance() {
    return reinterpret_cast<const GroupSettingAdminTransfer*>(
               &_GroupSettingAdminTransfer_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(GroupSettingAdminTransfer& a, GroupSettingAdminTransfer& b) {
    a.Swap(&b);
  }
  inline void Swap(GroupSettingAdminTransfer* other) {
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
  void UnsafeArenaSwap(GroupSettingAdminTransfer* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  GroupSettingAdminTransfer* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<GroupSettingAdminTransfer>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const GroupSettingAdminTransfer& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const GroupSettingAdminTransfer& from) {
    GroupSettingAdminTransfer::MergeImpl(*this, from);
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
  void InternalSwap(GroupSettingAdminTransfer* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.GroupSettingAdminTransfer";
  }
  protected:
  explicit GroupSettingAdminTransfer(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kNewAdminFieldNumber = 1,
  };
  // .AcFunDanmu.Im.Basic.User newAdmin = 1;
  bool has_newadmin() const;
  private:
  bool _internal_has_newadmin() const;
  public:
  void clear_newadmin();
  const ::AcFunDanmu::Im::Basic::User& newadmin() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::User* release_newadmin();
  ::AcFunDanmu::Im::Basic::User* mutable_newadmin();
  void set_allocated_newadmin(::AcFunDanmu::Im::Basic::User* newadmin);
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_newadmin() const;
  ::AcFunDanmu::Im::Basic::User* _internal_mutable_newadmin();
  public:
  void unsafe_arena_set_allocated_newadmin(
      ::AcFunDanmu::Im::Basic::User* newadmin);
  ::AcFunDanmu::Im::Basic::User* unsafe_arena_release_newadmin();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.GroupSettingAdminTransfer)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Basic::User* newadmin_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_GroupSettingAdminTransfer_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// GroupSettingAdminTransfer

// .AcFunDanmu.Im.Basic.User newAdmin = 1;
inline bool GroupSettingAdminTransfer::_internal_has_newadmin() const {
  return this != internal_default_instance() && _impl_.newadmin_ != nullptr;
}
inline bool GroupSettingAdminTransfer::has_newadmin() const {
  return _internal_has_newadmin();
}
inline const ::AcFunDanmu::Im::Basic::User& GroupSettingAdminTransfer::_internal_newadmin() const {
  const ::AcFunDanmu::Im::Basic::User* p = _impl_.newadmin_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::User&>(
      ::AcFunDanmu::Im::Basic::_User_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::User& GroupSettingAdminTransfer::newadmin() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.GroupSettingAdminTransfer.newAdmin)
  return _internal_newadmin();
}
inline void GroupSettingAdminTransfer::unsafe_arena_set_allocated_newadmin(
    ::AcFunDanmu::Im::Basic::User* newadmin) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.newadmin_);
  }
  _impl_.newadmin_ = newadmin;
  if (newadmin) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupSettingAdminTransfer.newAdmin)
}
inline ::AcFunDanmu::Im::Basic::User* GroupSettingAdminTransfer::release_newadmin() {
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.newadmin_;
  _impl_.newadmin_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::User* GroupSettingAdminTransfer::unsafe_arena_release_newadmin() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.GroupSettingAdminTransfer.newAdmin)
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.newadmin_;
  _impl_.newadmin_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::User* GroupSettingAdminTransfer::_internal_mutable_newadmin() {
  
  if (_impl_.newadmin_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::User>(GetArenaForAllocation());
    _impl_.newadmin_ = p;
  }
  return _impl_.newadmin_;
}
inline ::AcFunDanmu::Im::Basic::User* GroupSettingAdminTransfer::mutable_newadmin() {
  ::AcFunDanmu::Im::Basic::User* _msg = _internal_mutable_newadmin();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.GroupSettingAdminTransfer.newAdmin)
  return _msg;
}
inline void GroupSettingAdminTransfer::set_allocated_newadmin(::AcFunDanmu::Im::Basic::User* newadmin) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.newadmin_);
  }
  if (newadmin) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(newadmin));
    if (message_arena != submessage_arena) {
      newadmin = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, newadmin, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.newadmin_ = newadmin;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupSettingAdminTransfer.newAdmin)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_GroupSettingAdminTransfer_2eproto
