// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionCreateResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionCreateResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionCreateResponse_2eproto

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
#include "ChatSession.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionCreateResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionCreateResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionCreateResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class SessionCreateResponse;
struct SessionCreateResponseDefaultTypeInternal;
extern SessionCreateResponseDefaultTypeInternal _SessionCreateResponse_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::SessionCreateResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::SessionCreateResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class SessionCreateResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.SessionCreateResponse) */ {
 public:
  inline SessionCreateResponse() : SessionCreateResponse(nullptr) {}
  ~SessionCreateResponse() override;
  explicit PROTOBUF_CONSTEXPR SessionCreateResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionCreateResponse(const SessionCreateResponse& from);
  SessionCreateResponse(SessionCreateResponse&& from) noexcept
    : SessionCreateResponse() {
    *this = ::std::move(from);
  }

  inline SessionCreateResponse& operator=(const SessionCreateResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionCreateResponse& operator=(SessionCreateResponse&& from) noexcept {
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
  static const SessionCreateResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionCreateResponse* internal_default_instance() {
    return reinterpret_cast<const SessionCreateResponse*>(
               &_SessionCreateResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionCreateResponse& a, SessionCreateResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionCreateResponse* other) {
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
  void UnsafeArenaSwap(SessionCreateResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionCreateResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionCreateResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionCreateResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionCreateResponse& from) {
    SessionCreateResponse::MergeImpl(*this, from);
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
  void InternalSwap(SessionCreateResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.SessionCreateResponse";
  }
  protected:
  explicit SessionCreateResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSessionFieldNumber = 1,
  };
  // .AcFunDanmu.Im.Message.ChatSession session = 1;
  bool has_session() const;
  private:
  bool _internal_has_session() const;
  public:
  void clear_session();
  const ::AcFunDanmu::Im::Message::ChatSession& session() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Message::ChatSession* release_session();
  ::AcFunDanmu::Im::Message::ChatSession* mutable_session();
  void set_allocated_session(::AcFunDanmu::Im::Message::ChatSession* session);
  private:
  const ::AcFunDanmu::Im::Message::ChatSession& _internal_session() const;
  ::AcFunDanmu::Im::Message::ChatSession* _internal_mutable_session();
  public:
  void unsafe_arena_set_allocated_session(
      ::AcFunDanmu::Im::Message::ChatSession* session);
  ::AcFunDanmu::Im::Message::ChatSession* unsafe_arena_release_session();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.SessionCreateResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Message::ChatSession* session_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionCreateResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionCreateResponse

// .AcFunDanmu.Im.Message.ChatSession session = 1;
inline bool SessionCreateResponse::_internal_has_session() const {
  return this != internal_default_instance() && _impl_.session_ != nullptr;
}
inline bool SessionCreateResponse::has_session() const {
  return _internal_has_session();
}
inline const ::AcFunDanmu::Im::Message::ChatSession& SessionCreateResponse::_internal_session() const {
  const ::AcFunDanmu::Im::Message::ChatSession* p = _impl_.session_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Message::ChatSession&>(
      ::AcFunDanmu::Im::Message::_ChatSession_default_instance_);
}
inline const ::AcFunDanmu::Im::Message::ChatSession& SessionCreateResponse::session() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SessionCreateResponse.session)
  return _internal_session();
}
inline void SessionCreateResponse::unsafe_arena_set_allocated_session(
    ::AcFunDanmu::Im::Message::ChatSession* session) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.session_);
  }
  _impl_.session_ = session;
  if (session) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Message.SessionCreateResponse.session)
}
inline ::AcFunDanmu::Im::Message::ChatSession* SessionCreateResponse::release_session() {
  
  ::AcFunDanmu::Im::Message::ChatSession* temp = _impl_.session_;
  _impl_.session_ = nullptr;
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
inline ::AcFunDanmu::Im::Message::ChatSession* SessionCreateResponse::unsafe_arena_release_session() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.SessionCreateResponse.session)
  
  ::AcFunDanmu::Im::Message::ChatSession* temp = _impl_.session_;
  _impl_.session_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Message::ChatSession* SessionCreateResponse::_internal_mutable_session() {
  
  if (_impl_.session_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Message::ChatSession>(GetArenaForAllocation());
    _impl_.session_ = p;
  }
  return _impl_.session_;
}
inline ::AcFunDanmu::Im::Message::ChatSession* SessionCreateResponse::mutable_session() {
  ::AcFunDanmu::Im::Message::ChatSession* _msg = _internal_mutable_session();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.SessionCreateResponse.session)
  return _msg;
}
inline void SessionCreateResponse::set_allocated_session(::AcFunDanmu::Im::Message::ChatSession* session) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.session_);
  }
  if (session) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(session));
    if (message_arena != submessage_arena) {
      session = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, session, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.session_ = session;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.SessionCreateResponse.session)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionCreateResponse_2eproto
