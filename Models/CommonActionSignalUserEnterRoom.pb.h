// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonActionSignalUserEnterRoom.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalUserEnterRoom_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalUserEnterRoom_2eproto

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
#include "ZtLiveUserInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonActionSignalUserEnterRoom_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonActionSignalUserEnterRoom_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonActionSignalUserEnterRoom_2eproto;
namespace AcFunDanmu {
class CommonActionSignalUserEnterRoom;
struct CommonActionSignalUserEnterRoomDefaultTypeInternal;
extern CommonActionSignalUserEnterRoomDefaultTypeInternal _CommonActionSignalUserEnterRoom_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonActionSignalUserEnterRoom* Arena::CreateMaybeMessage<::AcFunDanmu::CommonActionSignalUserEnterRoom>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonActionSignalUserEnterRoom final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonActionSignalUserEnterRoom) */ {
 public:
  inline CommonActionSignalUserEnterRoom() : CommonActionSignalUserEnterRoom(nullptr) {}
  ~CommonActionSignalUserEnterRoom() override;
  explicit PROTOBUF_CONSTEXPR CommonActionSignalUserEnterRoom(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonActionSignalUserEnterRoom(const CommonActionSignalUserEnterRoom& from);
  CommonActionSignalUserEnterRoom(CommonActionSignalUserEnterRoom&& from) noexcept
    : CommonActionSignalUserEnterRoom() {
    *this = ::std::move(from);
  }

  inline CommonActionSignalUserEnterRoom& operator=(const CommonActionSignalUserEnterRoom& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonActionSignalUserEnterRoom& operator=(CommonActionSignalUserEnterRoom&& from) noexcept {
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
  static const CommonActionSignalUserEnterRoom& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonActionSignalUserEnterRoom* internal_default_instance() {
    return reinterpret_cast<const CommonActionSignalUserEnterRoom*>(
               &_CommonActionSignalUserEnterRoom_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonActionSignalUserEnterRoom& a, CommonActionSignalUserEnterRoom& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonActionSignalUserEnterRoom* other) {
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
  void UnsafeArenaSwap(CommonActionSignalUserEnterRoom* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommonActionSignalUserEnterRoom* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommonActionSignalUserEnterRoom>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommonActionSignalUserEnterRoom& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommonActionSignalUserEnterRoom& from) {
    CommonActionSignalUserEnterRoom::MergeImpl(*this, from);
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
  void InternalSwap(CommonActionSignalUserEnterRoom* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonActionSignalUserEnterRoom";
  }
  protected:
  explicit CommonActionSignalUserEnterRoom(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserInfoFieldNumber = 1,
    kSendTimeMsFieldNumber = 2,
  };
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

  // int64 sendTimeMs = 2;
  void clear_sendtimems();
  int64_t sendtimems() const;
  void set_sendtimems(int64_t value);
  private:
  int64_t _internal_sendtimems() const;
  void _internal_set_sendtimems(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonActionSignalUserEnterRoom)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::ZtLiveUserInfo* userinfo_;
    int64_t sendtimems_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CommonActionSignalUserEnterRoom_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonActionSignalUserEnterRoom

// .AcFunDanmu.ZtLiveUserInfo userInfo = 1;
inline bool CommonActionSignalUserEnterRoom::_internal_has_userinfo() const {
  return this != internal_default_instance() && _impl_.userinfo_ != nullptr;
}
inline bool CommonActionSignalUserEnterRoom::has_userinfo() const {
  return _internal_has_userinfo();
}
inline const ::AcFunDanmu::ZtLiveUserInfo& CommonActionSignalUserEnterRoom::_internal_userinfo() const {
  const ::AcFunDanmu::ZtLiveUserInfo* p = _impl_.userinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::ZtLiveUserInfo&>(
      ::AcFunDanmu::_ZtLiveUserInfo_default_instance_);
}
inline const ::AcFunDanmu::ZtLiveUserInfo& CommonActionSignalUserEnterRoom::userinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalUserEnterRoom.userInfo)
  return _internal_userinfo();
}
inline void CommonActionSignalUserEnterRoom::unsafe_arena_set_allocated_userinfo(
    ::AcFunDanmu::ZtLiveUserInfo* userinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.userinfo_);
  }
  _impl_.userinfo_ = userinfo;
  if (userinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.CommonActionSignalUserEnterRoom.userInfo)
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalUserEnterRoom::release_userinfo() {
  
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
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalUserEnterRoom::unsafe_arena_release_userinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonActionSignalUserEnterRoom.userInfo)
  
  ::AcFunDanmu::ZtLiveUserInfo* temp = _impl_.userinfo_;
  _impl_.userinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalUserEnterRoom::_internal_mutable_userinfo() {
  
  if (_impl_.userinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::ZtLiveUserInfo>(GetArenaForAllocation());
    _impl_.userinfo_ = p;
  }
  return _impl_.userinfo_;
}
inline ::AcFunDanmu::ZtLiveUserInfo* CommonActionSignalUserEnterRoom::mutable_userinfo() {
  ::AcFunDanmu::ZtLiveUserInfo* _msg = _internal_mutable_userinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonActionSignalUserEnterRoom.userInfo)
  return _msg;
}
inline void CommonActionSignalUserEnterRoom::set_allocated_userinfo(::AcFunDanmu::ZtLiveUserInfo* userinfo) {
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
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonActionSignalUserEnterRoom.userInfo)
}

// int64 sendTimeMs = 2;
inline void CommonActionSignalUserEnterRoom::clear_sendtimems() {
  _impl_.sendtimems_ = int64_t{0};
}
inline int64_t CommonActionSignalUserEnterRoom::_internal_sendtimems() const {
  return _impl_.sendtimems_;
}
inline int64_t CommonActionSignalUserEnterRoom::sendtimems() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonActionSignalUserEnterRoom.sendTimeMs)
  return _internal_sendtimems();
}
inline void CommonActionSignalUserEnterRoom::_internal_set_sendtimems(int64_t value) {
  
  _impl_.sendtimems_ = value;
}
inline void CommonActionSignalUserEnterRoom::set_sendtimems(int64_t value) {
  _internal_set_sendtimems(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonActionSignalUserEnterRoom.sendTimeMs)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonActionSignalUserEnterRoom_2eproto
