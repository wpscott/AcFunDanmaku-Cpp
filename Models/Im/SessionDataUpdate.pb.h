// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionDataUpdate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionDataUpdate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionDataUpdate_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_SessionDataUpdate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionDataUpdate_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionDataUpdate_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {
class SessionDataUpdate;
struct SessionDataUpdateDefaultTypeInternal;
extern SessionDataUpdateDefaultTypeInternal _SessionDataUpdate_default_instance_;
}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Data::Update::SessionDataUpdate* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Data::Update::SessionDataUpdate>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {

// ===================================================================

class SessionDataUpdate final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Data.Update.SessionDataUpdate) */ {
 public:
  inline SessionDataUpdate() : SessionDataUpdate(nullptr) {}
  ~SessionDataUpdate() override;
  explicit PROTOBUF_CONSTEXPR SessionDataUpdate(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionDataUpdate(const SessionDataUpdate& from);
  SessionDataUpdate(SessionDataUpdate&& from) noexcept
    : SessionDataUpdate() {
    *this = ::std::move(from);
  }

  inline SessionDataUpdate& operator=(const SessionDataUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionDataUpdate& operator=(SessionDataUpdate&& from) noexcept {
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
  static const SessionDataUpdate& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionDataUpdate* internal_default_instance() {
    return reinterpret_cast<const SessionDataUpdate*>(
               &_SessionDataUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionDataUpdate& a, SessionDataUpdate& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionDataUpdate* other) {
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
  void UnsafeArenaSwap(SessionDataUpdate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionDataUpdate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionDataUpdate>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionDataUpdate& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionDataUpdate& from) {
    SessionDataUpdate::MergeImpl(*this, from);
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
  void InternalSwap(SessionDataUpdate* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Data.Update.SessionDataUpdate";
  }
  protected:
  explicit SessionDataUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChatSessionFieldNumber = 1,
  };
  // .AcFunDanmu.Im.Message.ChatSession chatSession = 1;
  bool has_chatsession() const;
  private:
  bool _internal_has_chatsession() const;
  public:
  void clear_chatsession();
  const ::AcFunDanmu::Im::Message::ChatSession& chatsession() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Message::ChatSession* release_chatsession();
  ::AcFunDanmu::Im::Message::ChatSession* mutable_chatsession();
  void set_allocated_chatsession(::AcFunDanmu::Im::Message::ChatSession* chatsession);
  private:
  const ::AcFunDanmu::Im::Message::ChatSession& _internal_chatsession() const;
  ::AcFunDanmu::Im::Message::ChatSession* _internal_mutable_chatsession();
  public:
  void unsafe_arena_set_allocated_chatsession(
      ::AcFunDanmu::Im::Message::ChatSession* chatsession);
  ::AcFunDanmu::Im::Message::ChatSession* unsafe_arena_release_chatsession();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Data.Update.SessionDataUpdate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Message::ChatSession* chatsession_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionDataUpdate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionDataUpdate

// .AcFunDanmu.Im.Message.ChatSession chatSession = 1;
inline bool SessionDataUpdate::_internal_has_chatsession() const {
  return this != internal_default_instance() && _impl_.chatsession_ != nullptr;
}
inline bool SessionDataUpdate::has_chatsession() const {
  return _internal_has_chatsession();
}
inline const ::AcFunDanmu::Im::Message::ChatSession& SessionDataUpdate::_internal_chatsession() const {
  const ::AcFunDanmu::Im::Message::ChatSession* p = _impl_.chatsession_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Message::ChatSession&>(
      ::AcFunDanmu::Im::Message::_ChatSession_default_instance_);
}
inline const ::AcFunDanmu::Im::Message::ChatSession& SessionDataUpdate::chatsession() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.SessionDataUpdate.chatSession)
  return _internal_chatsession();
}
inline void SessionDataUpdate::unsafe_arena_set_allocated_chatsession(
    ::AcFunDanmu::Im::Message::ChatSession* chatsession) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.chatsession_);
  }
  _impl_.chatsession_ = chatsession;
  if (chatsession) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.SessionDataUpdate.chatSession)
}
inline ::AcFunDanmu::Im::Message::ChatSession* SessionDataUpdate::release_chatsession() {
  
  ::AcFunDanmu::Im::Message::ChatSession* temp = _impl_.chatsession_;
  _impl_.chatsession_ = nullptr;
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
inline ::AcFunDanmu::Im::Message::ChatSession* SessionDataUpdate::unsafe_arena_release_chatsession() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Data.Update.SessionDataUpdate.chatSession)
  
  ::AcFunDanmu::Im::Message::ChatSession* temp = _impl_.chatsession_;
  _impl_.chatsession_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Message::ChatSession* SessionDataUpdate::_internal_mutable_chatsession() {
  
  if (_impl_.chatsession_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Message::ChatSession>(GetArenaForAllocation());
    _impl_.chatsession_ = p;
  }
  return _impl_.chatsession_;
}
inline ::AcFunDanmu::Im::Message::ChatSession* SessionDataUpdate::mutable_chatsession() {
  ::AcFunDanmu::Im::Message::ChatSession* _msg = _internal_mutable_chatsession();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.SessionDataUpdate.chatSession)
  return _msg;
}
inline void SessionDataUpdate::set_allocated_chatsession(::AcFunDanmu::Im::Message::ChatSession* chatsession) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.chatsession_);
  }
  if (chatsession) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(chatsession));
    if (message_arena != submessage_arena) {
      chatsession = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, chatsession, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.chatsession_ = chatsession;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.SessionDataUpdate.chatSession)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionDataUpdate_2eproto