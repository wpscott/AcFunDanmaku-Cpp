// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionRemoveRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionRemoveRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionRemoveRequest_2eproto

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
#include "ChatTargetType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionRemoveRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionRemoveRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionRemoveRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class SessionRemoveRequest;
struct SessionRemoveRequestDefaultTypeInternal;
extern SessionRemoveRequestDefaultTypeInternal _SessionRemoveRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::SessionRemoveRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::SessionRemoveRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class SessionRemoveRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.SessionRemoveRequest) */ {
 public:
  inline SessionRemoveRequest() : SessionRemoveRequest(nullptr) {}
  ~SessionRemoveRequest() override;
  explicit PROTOBUF_CONSTEXPR SessionRemoveRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionRemoveRequest(const SessionRemoveRequest& from);
  SessionRemoveRequest(SessionRemoveRequest&& from) noexcept
    : SessionRemoveRequest() {
    *this = ::std::move(from);
  }

  inline SessionRemoveRequest& operator=(const SessionRemoveRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionRemoveRequest& operator=(SessionRemoveRequest&& from) noexcept {
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
  static const SessionRemoveRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionRemoveRequest* internal_default_instance() {
    return reinterpret_cast<const SessionRemoveRequest*>(
               &_SessionRemoveRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionRemoveRequest& a, SessionRemoveRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionRemoveRequest* other) {
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
  void UnsafeArenaSwap(SessionRemoveRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionRemoveRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionRemoveRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionRemoveRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionRemoveRequest& from) {
    SessionRemoveRequest::MergeImpl(*this, from);
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
  void InternalSwap(SessionRemoveRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.SessionRemoveRequest";
  }
  protected:
  explicit SessionRemoveRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStrTargetIdFieldNumber = 4,
    kTargetIdFieldNumber = 1,
    kChatTargetTypeFieldNumber = 2,
    kCategoryIdFieldNumber = 3,
    kNotCleanAllMessagesFieldNumber = 5,
  };
  // string strTargetId = 4;
  void clear_strtargetid();
  const std::string& strtargetid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_strtargetid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_strtargetid();
  PROTOBUF_NODISCARD std::string* release_strtargetid();
  void set_allocated_strtargetid(std::string* strtargetid);
  private:
  const std::string& _internal_strtargetid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_strtargetid(const std::string& value);
  std::string* _internal_mutable_strtargetid();
  public:

  // int64 targetId = 1;
  void clear_targetid();
  int64_t targetid() const;
  void set_targetid(int64_t value);
  private:
  int64_t _internal_targetid() const;
  void _internal_set_targetid(int64_t value);
  public:

  // .AcFunDanmu.Im.Message.ChatTargetType chatTargetType = 2;
  void clear_chattargettype();
  ::AcFunDanmu::Im::Message::ChatTargetType chattargettype() const;
  void set_chattargettype(::AcFunDanmu::Im::Message::ChatTargetType value);
  private:
  ::AcFunDanmu::Im::Message::ChatTargetType _internal_chattargettype() const;
  void _internal_set_chattargettype(::AcFunDanmu::Im::Message::ChatTargetType value);
  public:

  // int32 categoryId = 3;
  void clear_categoryid();
  int32_t categoryid() const;
  void set_categoryid(int32_t value);
  private:
  int32_t _internal_categoryid() const;
  void _internal_set_categoryid(int32_t value);
  public:

  // bool notCleanAllMessages = 5;
  void clear_notcleanallmessages();
  bool notcleanallmessages() const;
  void set_notcleanallmessages(bool value);
  private:
  bool _internal_notcleanallmessages() const;
  void _internal_set_notcleanallmessages(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.SessionRemoveRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr strtargetid_;
    int64_t targetid_;
    int chattargettype_;
    int32_t categoryid_;
    bool notcleanallmessages_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionRemoveRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionRemoveRequest

// int64 targetId = 1;
inline void SessionRemoveRequest::clear_targetid() {
  _impl_.targetid_ = int64_t{0};
}
inline int64_t SessionRemoveRequest::_internal_targetid() const {
  return _impl_.targetid_;
}
inline int64_t SessionRemoveRequest::targetid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SessionRemoveRequest.targetId)
  return _internal_targetid();
}
inline void SessionRemoveRequest::_internal_set_targetid(int64_t value) {
  
  _impl_.targetid_ = value;
}
inline void SessionRemoveRequest::set_targetid(int64_t value) {
  _internal_set_targetid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SessionRemoveRequest.targetId)
}

// .AcFunDanmu.Im.Message.ChatTargetType chatTargetType = 2;
inline void SessionRemoveRequest::clear_chattargettype() {
  _impl_.chattargettype_ = 0;
}
inline ::AcFunDanmu::Im::Message::ChatTargetType SessionRemoveRequest::_internal_chattargettype() const {
  return static_cast< ::AcFunDanmu::Im::Message::ChatTargetType >(_impl_.chattargettype_);
}
inline ::AcFunDanmu::Im::Message::ChatTargetType SessionRemoveRequest::chattargettype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SessionRemoveRequest.chatTargetType)
  return _internal_chattargettype();
}
inline void SessionRemoveRequest::_internal_set_chattargettype(::AcFunDanmu::Im::Message::ChatTargetType value) {
  
  _impl_.chattargettype_ = value;
}
inline void SessionRemoveRequest::set_chattargettype(::AcFunDanmu::Im::Message::ChatTargetType value) {
  _internal_set_chattargettype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SessionRemoveRequest.chatTargetType)
}

// int32 categoryId = 3;
inline void SessionRemoveRequest::clear_categoryid() {
  _impl_.categoryid_ = 0;
}
inline int32_t SessionRemoveRequest::_internal_categoryid() const {
  return _impl_.categoryid_;
}
inline int32_t SessionRemoveRequest::categoryid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SessionRemoveRequest.categoryId)
  return _internal_categoryid();
}
inline void SessionRemoveRequest::_internal_set_categoryid(int32_t value) {
  
  _impl_.categoryid_ = value;
}
inline void SessionRemoveRequest::set_categoryid(int32_t value) {
  _internal_set_categoryid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SessionRemoveRequest.categoryId)
}

// string strTargetId = 4;
inline void SessionRemoveRequest::clear_strtargetid() {
  _impl_.strtargetid_.ClearToEmpty();
}
inline const std::string& SessionRemoveRequest::strtargetid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SessionRemoveRequest.strTargetId)
  return _internal_strtargetid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SessionRemoveRequest::set_strtargetid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.strtargetid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SessionRemoveRequest.strTargetId)
}
inline std::string* SessionRemoveRequest::mutable_strtargetid() {
  std::string* _s = _internal_mutable_strtargetid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.SessionRemoveRequest.strTargetId)
  return _s;
}
inline const std::string& SessionRemoveRequest::_internal_strtargetid() const {
  return _impl_.strtargetid_.Get();
}
inline void SessionRemoveRequest::_internal_set_strtargetid(const std::string& value) {
  
  _impl_.strtargetid_.Set(value, GetArenaForAllocation());
}
inline std::string* SessionRemoveRequest::_internal_mutable_strtargetid() {
  
  return _impl_.strtargetid_.Mutable(GetArenaForAllocation());
}
inline std::string* SessionRemoveRequest::release_strtargetid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.SessionRemoveRequest.strTargetId)
  return _impl_.strtargetid_.Release();
}
inline void SessionRemoveRequest::set_allocated_strtargetid(std::string* strtargetid) {
  if (strtargetid != nullptr) {
    
  } else {
    
  }
  _impl_.strtargetid_.SetAllocated(strtargetid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.strtargetid_.IsDefault()) {
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.SessionRemoveRequest.strTargetId)
}

// bool notCleanAllMessages = 5;
inline void SessionRemoveRequest::clear_notcleanallmessages() {
  _impl_.notcleanallmessages_ = false;
}
inline bool SessionRemoveRequest::_internal_notcleanallmessages() const {
  return _impl_.notcleanallmessages_;
}
inline bool SessionRemoveRequest::notcleanallmessages() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SessionRemoveRequest.notCleanAllMessages)
  return _internal_notcleanallmessages();
}
inline void SessionRemoveRequest::_internal_set_notcleanallmessages(bool value) {
  
  _impl_.notcleanallmessages_ = value;
}
inline void SessionRemoveRequest::set_notcleanallmessages(bool value) {
  _internal_set_notcleanallmessages(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SessionRemoveRequest.notCleanAllMessages)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionRemoveRequest_2eproto
