// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: LeaveSession.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_LeaveSession_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_LeaveSession_2eproto

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
#include "ChatTarget.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_LeaveSession_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_LeaveSession_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_LeaveSession_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class LeaveSession;
struct LeaveSessionDefaultTypeInternal;
extern LeaveSessionDefaultTypeInternal _LeaveSession_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::LeaveSession* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::LeaveSession>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class LeaveSession final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.LeaveSession) */ {
 public:
  inline LeaveSession() : LeaveSession(nullptr) {}
  ~LeaveSession() override;
  explicit PROTOBUF_CONSTEXPR LeaveSession(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  LeaveSession(const LeaveSession& from);
  LeaveSession(LeaveSession&& from) noexcept
    : LeaveSession() {
    *this = ::std::move(from);
  }

  inline LeaveSession& operator=(const LeaveSession& from) {
    CopyFrom(from);
    return *this;
  }
  inline LeaveSession& operator=(LeaveSession&& from) noexcept {
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
  static const LeaveSession& default_instance() {
    return *internal_default_instance();
  }
  static inline const LeaveSession* internal_default_instance() {
    return reinterpret_cast<const LeaveSession*>(
               &_LeaveSession_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(LeaveSession& a, LeaveSession& b) {
    a.Swap(&b);
  }
  inline void Swap(LeaveSession* other) {
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
  void UnsafeArenaSwap(LeaveSession* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  LeaveSession* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<LeaveSession>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const LeaveSession& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const LeaveSession& from) {
    LeaveSession::MergeImpl(*this, from);
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
  void InternalSwap(LeaveSession* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.LeaveSession";
  }
  protected:
  explicit LeaveSession(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kExtraInfoFieldNumber = 2,
    kActionTypeFieldNumber = 3,
    kChatTargetFieldNumber = 1,
  };
  // string extraInfo = 2;
  void clear_extrainfo();
  const std::string& extrainfo() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_extrainfo(ArgT0&& arg0, ArgT... args);
  std::string* mutable_extrainfo();
  PROTOBUF_NODISCARD std::string* release_extrainfo();
  void set_allocated_extrainfo(std::string* extrainfo);
  private:
  const std::string& _internal_extrainfo() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_extrainfo(const std::string& value);
  std::string* _internal_mutable_extrainfo();
  public:

  // string actionType = 3;
  void clear_actiontype();
  const std::string& actiontype() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_actiontype(ArgT0&& arg0, ArgT... args);
  std::string* mutable_actiontype();
  PROTOBUF_NODISCARD std::string* release_actiontype();
  void set_allocated_actiontype(std::string* actiontype);
  private:
  const std::string& _internal_actiontype() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_actiontype(const std::string& value);
  std::string* _internal_mutable_actiontype();
  public:

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  bool has_chattarget() const;
  private:
  bool _internal_has_chattarget() const;
  public:
  void clear_chattarget();
  const ::AcFunDanmu::Im::Message::ChatTarget& chattarget() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Message::ChatTarget* release_chattarget();
  ::AcFunDanmu::Im::Message::ChatTarget* mutable_chattarget();
  void set_allocated_chattarget(::AcFunDanmu::Im::Message::ChatTarget* chattarget);
  private:
  const ::AcFunDanmu::Im::Message::ChatTarget& _internal_chattarget() const;
  ::AcFunDanmu::Im::Message::ChatTarget* _internal_mutable_chattarget();
  public:
  void unsafe_arena_set_allocated_chattarget(
      ::AcFunDanmu::Im::Message::ChatTarget* chattarget);
  ::AcFunDanmu::Im::Message::ChatTarget* unsafe_arena_release_chattarget();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.LeaveSession)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr extrainfo_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr actiontype_;
    ::AcFunDanmu::Im::Message::ChatTarget* chattarget_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_LeaveSession_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// LeaveSession

// .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
inline bool LeaveSession::_internal_has_chattarget() const {
  return this != internal_default_instance() && _impl_.chattarget_ != nullptr;
}
inline bool LeaveSession::has_chattarget() const {
  return _internal_has_chattarget();
}
inline const ::AcFunDanmu::Im::Message::ChatTarget& LeaveSession::_internal_chattarget() const {
  const ::AcFunDanmu::Im::Message::ChatTarget* p = _impl_.chattarget_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Message::ChatTarget&>(
      ::AcFunDanmu::Im::Message::_ChatTarget_default_instance_);
}
inline const ::AcFunDanmu::Im::Message::ChatTarget& LeaveSession::chattarget() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.LeaveSession.chatTarget)
  return _internal_chattarget();
}
inline void LeaveSession::unsafe_arena_set_allocated_chattarget(
    ::AcFunDanmu::Im::Message::ChatTarget* chattarget) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.chattarget_);
  }
  _impl_.chattarget_ = chattarget;
  if (chattarget) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Message.LeaveSession.chatTarget)
}
inline ::AcFunDanmu::Im::Message::ChatTarget* LeaveSession::release_chattarget() {
  
  ::AcFunDanmu::Im::Message::ChatTarget* temp = _impl_.chattarget_;
  _impl_.chattarget_ = nullptr;
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
inline ::AcFunDanmu::Im::Message::ChatTarget* LeaveSession::unsafe_arena_release_chattarget() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.LeaveSession.chatTarget)
  
  ::AcFunDanmu::Im::Message::ChatTarget* temp = _impl_.chattarget_;
  _impl_.chattarget_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Message::ChatTarget* LeaveSession::_internal_mutable_chattarget() {
  
  if (_impl_.chattarget_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Message::ChatTarget>(GetArenaForAllocation());
    _impl_.chattarget_ = p;
  }
  return _impl_.chattarget_;
}
inline ::AcFunDanmu::Im::Message::ChatTarget* LeaveSession::mutable_chattarget() {
  ::AcFunDanmu::Im::Message::ChatTarget* _msg = _internal_mutable_chattarget();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.LeaveSession.chatTarget)
  return _msg;
}
inline void LeaveSession::set_allocated_chattarget(::AcFunDanmu::Im::Message::ChatTarget* chattarget) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.chattarget_);
  }
  if (chattarget) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(chattarget));
    if (message_arena != submessage_arena) {
      chattarget = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, chattarget, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.chattarget_ = chattarget;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.LeaveSession.chatTarget)
}

// string extraInfo = 2;
inline void LeaveSession::clear_extrainfo() {
  _impl_.extrainfo_.ClearToEmpty();
}
inline const std::string& LeaveSession::extrainfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.LeaveSession.extraInfo)
  return _internal_extrainfo();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void LeaveSession::set_extrainfo(ArgT0&& arg0, ArgT... args) {
 
 _impl_.extrainfo_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.LeaveSession.extraInfo)
}
inline std::string* LeaveSession::mutable_extrainfo() {
  std::string* _s = _internal_mutable_extrainfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.LeaveSession.extraInfo)
  return _s;
}
inline const std::string& LeaveSession::_internal_extrainfo() const {
  return _impl_.extrainfo_.Get();
}
inline void LeaveSession::_internal_set_extrainfo(const std::string& value) {
  
  _impl_.extrainfo_.Set(value, GetArenaForAllocation());
}
inline std::string* LeaveSession::_internal_mutable_extrainfo() {
  
  return _impl_.extrainfo_.Mutable(GetArenaForAllocation());
}
inline std::string* LeaveSession::release_extrainfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.LeaveSession.extraInfo)
  return _impl_.extrainfo_.Release();
}
inline void LeaveSession::set_allocated_extrainfo(std::string* extrainfo) {
  if (extrainfo != nullptr) {
    
  } else {
    
  }
  _impl_.extrainfo_.SetAllocated(extrainfo, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.extrainfo_.IsDefault()) {
    _impl_.extrainfo_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.LeaveSession.extraInfo)
}

// string actionType = 3;
inline void LeaveSession::clear_actiontype() {
  _impl_.actiontype_.ClearToEmpty();
}
inline const std::string& LeaveSession::actiontype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.LeaveSession.actionType)
  return _internal_actiontype();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void LeaveSession::set_actiontype(ArgT0&& arg0, ArgT... args) {
 
 _impl_.actiontype_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.LeaveSession.actionType)
}
inline std::string* LeaveSession::mutable_actiontype() {
  std::string* _s = _internal_mutable_actiontype();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.LeaveSession.actionType)
  return _s;
}
inline const std::string& LeaveSession::_internal_actiontype() const {
  return _impl_.actiontype_.Get();
}
inline void LeaveSession::_internal_set_actiontype(const std::string& value) {
  
  _impl_.actiontype_.Set(value, GetArenaForAllocation());
}
inline std::string* LeaveSession::_internal_mutable_actiontype() {
  
  return _impl_.actiontype_.Mutable(GetArenaForAllocation());
}
inline std::string* LeaveSession::release_actiontype() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.LeaveSession.actionType)
  return _impl_.actiontype_.Release();
}
inline void LeaveSession::set_allocated_actiontype(std::string* actiontype) {
  if (actiontype != nullptr) {
    
  } else {
    
  }
  _impl_.actiontype_.SetAllocated(actiontype, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.actiontype_.IsDefault()) {
    _impl_.actiontype_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.LeaveSession.actionType)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_LeaveSession_2eproto
