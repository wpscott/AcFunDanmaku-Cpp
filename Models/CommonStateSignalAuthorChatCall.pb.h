// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalAuthorChatCall.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatCall_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatCall_2eproto

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
#include "AuthorChatPlayerInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalAuthorChatCall_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalAuthorChatCall_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalAuthorChatCall_2eproto;
namespace AcFunDanmu {
class CommonStateSignalAuthorChatCall;
struct CommonStateSignalAuthorChatCallDefaultTypeInternal;
extern CommonStateSignalAuthorChatCallDefaultTypeInternal _CommonStateSignalAuthorChatCall_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalAuthorChatCall* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalAuthorChatCall>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalAuthorChatCall final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalAuthorChatCall) */ {
 public:
  inline CommonStateSignalAuthorChatCall() : CommonStateSignalAuthorChatCall(nullptr) {}
  ~CommonStateSignalAuthorChatCall() override;
  explicit PROTOBUF_CONSTEXPR CommonStateSignalAuthorChatCall(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonStateSignalAuthorChatCall(const CommonStateSignalAuthorChatCall& from);
  CommonStateSignalAuthorChatCall(CommonStateSignalAuthorChatCall&& from) noexcept
    : CommonStateSignalAuthorChatCall() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalAuthorChatCall& operator=(const CommonStateSignalAuthorChatCall& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalAuthorChatCall& operator=(CommonStateSignalAuthorChatCall&& from) noexcept {
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
  static const CommonStateSignalAuthorChatCall& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonStateSignalAuthorChatCall* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalAuthorChatCall*>(
               &_CommonStateSignalAuthorChatCall_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalAuthorChatCall& a, CommonStateSignalAuthorChatCall& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalAuthorChatCall* other) {
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
  void UnsafeArenaSwap(CommonStateSignalAuthorChatCall* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommonStateSignalAuthorChatCall* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommonStateSignalAuthorChatCall>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommonStateSignalAuthorChatCall& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommonStateSignalAuthorChatCall& from) {
    CommonStateSignalAuthorChatCall::MergeImpl(*this, from);
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
  void InternalSwap(CommonStateSignalAuthorChatCall* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalAuthorChatCall";
  }
  protected:
  explicit CommonStateSignalAuthorChatCall(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAuthorChatIdFieldNumber = 1,
    kInviterUserInfoFieldNumber = 2,
    kCallTimestampMsFieldNumber = 3,
  };
  // string authorChatId = 1;
  void clear_authorchatid();
  const std::string& authorchatid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_authorchatid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_authorchatid();
  PROTOBUF_NODISCARD std::string* release_authorchatid();
  void set_allocated_authorchatid(std::string* authorchatid);
  private:
  const std::string& _internal_authorchatid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_authorchatid(const std::string& value);
  std::string* _internal_mutable_authorchatid();
  public:

  // .AcFunDanmu.AuthorChatPlayerInfo inviterUserInfo = 2;
  bool has_inviteruserinfo() const;
  private:
  bool _internal_has_inviteruserinfo() const;
  public:
  void clear_inviteruserinfo();
  const ::AcFunDanmu::AuthorChatPlayerInfo& inviteruserinfo() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::AuthorChatPlayerInfo* release_inviteruserinfo();
  ::AcFunDanmu::AuthorChatPlayerInfo* mutable_inviteruserinfo();
  void set_allocated_inviteruserinfo(::AcFunDanmu::AuthorChatPlayerInfo* inviteruserinfo);
  private:
  const ::AcFunDanmu::AuthorChatPlayerInfo& _internal_inviteruserinfo() const;
  ::AcFunDanmu::AuthorChatPlayerInfo* _internal_mutable_inviteruserinfo();
  public:
  void unsafe_arena_set_allocated_inviteruserinfo(
      ::AcFunDanmu::AuthorChatPlayerInfo* inviteruserinfo);
  ::AcFunDanmu::AuthorChatPlayerInfo* unsafe_arena_release_inviteruserinfo();

  // int64 callTimestampMs = 3;
  void clear_calltimestampms();
  int64_t calltimestampms() const;
  void set_calltimestampms(int64_t value);
  private:
  int64_t _internal_calltimestampms() const;
  void _internal_set_calltimestampms(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalAuthorChatCall)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr authorchatid_;
    ::AcFunDanmu::AuthorChatPlayerInfo* inviteruserinfo_;
    int64_t calltimestampms_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CommonStateSignalAuthorChatCall_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalAuthorChatCall

// string authorChatId = 1;
inline void CommonStateSignalAuthorChatCall::clear_authorchatid() {
  _impl_.authorchatid_.ClearToEmpty();
}
inline const std::string& CommonStateSignalAuthorChatCall::authorchatid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatCall.authorChatId)
  return _internal_authorchatid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalAuthorChatCall::set_authorchatid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.authorchatid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalAuthorChatCall.authorChatId)
}
inline std::string* CommonStateSignalAuthorChatCall::mutable_authorchatid() {
  std::string* _s = _internal_mutable_authorchatid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalAuthorChatCall.authorChatId)
  return _s;
}
inline const std::string& CommonStateSignalAuthorChatCall::_internal_authorchatid() const {
  return _impl_.authorchatid_.Get();
}
inline void CommonStateSignalAuthorChatCall::_internal_set_authorchatid(const std::string& value) {
  
  _impl_.authorchatid_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalAuthorChatCall::_internal_mutable_authorchatid() {
  
  return _impl_.authorchatid_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalAuthorChatCall::release_authorchatid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalAuthorChatCall.authorChatId)
  return _impl_.authorchatid_.Release();
}
inline void CommonStateSignalAuthorChatCall::set_allocated_authorchatid(std::string* authorchatid) {
  if (authorchatid != nullptr) {
    
  } else {
    
  }
  _impl_.authorchatid_.SetAllocated(authorchatid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.authorchatid_.IsDefault()) {
    _impl_.authorchatid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatCall.authorChatId)
}

// .AcFunDanmu.AuthorChatPlayerInfo inviterUserInfo = 2;
inline bool CommonStateSignalAuthorChatCall::_internal_has_inviteruserinfo() const {
  return this != internal_default_instance() && _impl_.inviteruserinfo_ != nullptr;
}
inline bool CommonStateSignalAuthorChatCall::has_inviteruserinfo() const {
  return _internal_has_inviteruserinfo();
}
inline const ::AcFunDanmu::AuthorChatPlayerInfo& CommonStateSignalAuthorChatCall::_internal_inviteruserinfo() const {
  const ::AcFunDanmu::AuthorChatPlayerInfo* p = _impl_.inviteruserinfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::AuthorChatPlayerInfo&>(
      ::AcFunDanmu::_AuthorChatPlayerInfo_default_instance_);
}
inline const ::AcFunDanmu::AuthorChatPlayerInfo& CommonStateSignalAuthorChatCall::inviteruserinfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatCall.inviterUserInfo)
  return _internal_inviteruserinfo();
}
inline void CommonStateSignalAuthorChatCall::unsafe_arena_set_allocated_inviteruserinfo(
    ::AcFunDanmu::AuthorChatPlayerInfo* inviteruserinfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.inviteruserinfo_);
  }
  _impl_.inviteruserinfo_ = inviteruserinfo;
  if (inviteruserinfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatCall.inviterUserInfo)
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatCall::release_inviteruserinfo() {
  
  ::AcFunDanmu::AuthorChatPlayerInfo* temp = _impl_.inviteruserinfo_;
  _impl_.inviteruserinfo_ = nullptr;
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
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatCall::unsafe_arena_release_inviteruserinfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalAuthorChatCall.inviterUserInfo)
  
  ::AcFunDanmu::AuthorChatPlayerInfo* temp = _impl_.inviteruserinfo_;
  _impl_.inviteruserinfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatCall::_internal_mutable_inviteruserinfo() {
  
  if (_impl_.inviteruserinfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::AuthorChatPlayerInfo>(GetArenaForAllocation());
    _impl_.inviteruserinfo_ = p;
  }
  return _impl_.inviteruserinfo_;
}
inline ::AcFunDanmu::AuthorChatPlayerInfo* CommonStateSignalAuthorChatCall::mutable_inviteruserinfo() {
  ::AcFunDanmu::AuthorChatPlayerInfo* _msg = _internal_mutable_inviteruserinfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalAuthorChatCall.inviterUserInfo)
  return _msg;
}
inline void CommonStateSignalAuthorChatCall::set_allocated_inviteruserinfo(::AcFunDanmu::AuthorChatPlayerInfo* inviteruserinfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.inviteruserinfo_);
  }
  if (inviteruserinfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(inviteruserinfo));
    if (message_arena != submessage_arena) {
      inviteruserinfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, inviteruserinfo, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.inviteruserinfo_ = inviteruserinfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalAuthorChatCall.inviterUserInfo)
}

// int64 callTimestampMs = 3;
inline void CommonStateSignalAuthorChatCall::clear_calltimestampms() {
  _impl_.calltimestampms_ = int64_t{0};
}
inline int64_t CommonStateSignalAuthorChatCall::_internal_calltimestampms() const {
  return _impl_.calltimestampms_;
}
inline int64_t CommonStateSignalAuthorChatCall::calltimestampms() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalAuthorChatCall.callTimestampMs)
  return _internal_calltimestampms();
}
inline void CommonStateSignalAuthorChatCall::_internal_set_calltimestampms(int64_t value) {
  
  _impl_.calltimestampms_ = value;
}
inline void CommonStateSignalAuthorChatCall::set_calltimestampms(int64_t value) {
  _internal_set_calltimestampms(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalAuthorChatCall.callTimestampMs)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalAuthorChatCall_2eproto
