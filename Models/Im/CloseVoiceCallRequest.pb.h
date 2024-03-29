// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CloseVoiceCallRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CloseVoiceCallRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CloseVoiceCallRequest_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "User.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CloseVoiceCallRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CloseVoiceCallRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CloseVoiceCallRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {
class CloseVoiceCallRequest;
struct CloseVoiceCallRequestDefaultTypeInternal;
extern CloseVoiceCallRequestDefaultTypeInternal _CloseVoiceCallRequest_default_instance_;
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {

enum CloseVoiceCallRequest_CloseReason : int {
  CloseVoiceCallRequest_CloseReason_CR_UNKNOWN = 0,
  CloseVoiceCallRequest_CloseReason_NORMAL = 1,
  CloseVoiceCallRequest_CloseReason_CANCELLED = 2,
  CloseVoiceCallRequest_CloseReason_TIMEOUT = 3,
  CloseVoiceCallRequest_CloseReason_FINISHED = 4,
  CloseVoiceCallRequest_CloseReason_CloseVoiceCallRequest_CloseReason_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  CloseVoiceCallRequest_CloseReason_CloseVoiceCallRequest_CloseReason_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool CloseVoiceCallRequest_CloseReason_IsValid(int value);
constexpr CloseVoiceCallRequest_CloseReason CloseVoiceCallRequest_CloseReason_CloseReason_MIN = CloseVoiceCallRequest_CloseReason_CR_UNKNOWN;
constexpr CloseVoiceCallRequest_CloseReason CloseVoiceCallRequest_CloseReason_CloseReason_MAX = CloseVoiceCallRequest_CloseReason_FINISHED;
constexpr int CloseVoiceCallRequest_CloseReason_CloseReason_ARRAYSIZE = CloseVoiceCallRequest_CloseReason_CloseReason_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CloseVoiceCallRequest_CloseReason_descriptor();
template<typename T>
inline const std::string& CloseVoiceCallRequest_CloseReason_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CloseVoiceCallRequest_CloseReason>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CloseVoiceCallRequest_CloseReason_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CloseVoiceCallRequest_CloseReason_descriptor(), enum_t_value);
}
inline bool CloseVoiceCallRequest_CloseReason_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CloseVoiceCallRequest_CloseReason* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CloseVoiceCallRequest_CloseReason>(
    CloseVoiceCallRequest_CloseReason_descriptor(), name, value);
}
// ===================================================================

class CloseVoiceCallRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest) */ {
 public:
  inline CloseVoiceCallRequest() : CloseVoiceCallRequest(nullptr) {}
  ~CloseVoiceCallRequest() override;
  explicit PROTOBUF_CONSTEXPR CloseVoiceCallRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CloseVoiceCallRequest(const CloseVoiceCallRequest& from);
  CloseVoiceCallRequest(CloseVoiceCallRequest&& from) noexcept
    : CloseVoiceCallRequest() {
    *this = ::std::move(from);
  }

  inline CloseVoiceCallRequest& operator=(const CloseVoiceCallRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline CloseVoiceCallRequest& operator=(CloseVoiceCallRequest&& from) noexcept {
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
  static const CloseVoiceCallRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const CloseVoiceCallRequest* internal_default_instance() {
    return reinterpret_cast<const CloseVoiceCallRequest*>(
               &_CloseVoiceCallRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CloseVoiceCallRequest& a, CloseVoiceCallRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(CloseVoiceCallRequest* other) {
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
  void UnsafeArenaSwap(CloseVoiceCallRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CloseVoiceCallRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CloseVoiceCallRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CloseVoiceCallRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CloseVoiceCallRequest& from) {
    CloseVoiceCallRequest::MergeImpl(*this, from);
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
  void InternalSwap(CloseVoiceCallRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest";
  }
  protected:
  explicit CloseVoiceCallRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef CloseVoiceCallRequest_CloseReason CloseReason;
  static constexpr CloseReason CR_UNKNOWN =
    CloseVoiceCallRequest_CloseReason_CR_UNKNOWN;
  static constexpr CloseReason NORMAL =
    CloseVoiceCallRequest_CloseReason_NORMAL;
  static constexpr CloseReason CANCELLED =
    CloseVoiceCallRequest_CloseReason_CANCELLED;
  static constexpr CloseReason TIMEOUT =
    CloseVoiceCallRequest_CloseReason_TIMEOUT;
  static constexpr CloseReason FINISHED =
    CloseVoiceCallRequest_CloseReason_FINISHED;
  static inline bool CloseReason_IsValid(int value) {
    return CloseVoiceCallRequest_CloseReason_IsValid(value);
  }
  static constexpr CloseReason CloseReason_MIN =
    CloseVoiceCallRequest_CloseReason_CloseReason_MIN;
  static constexpr CloseReason CloseReason_MAX =
    CloseVoiceCallRequest_CloseReason_CloseReason_MAX;
  static constexpr int CloseReason_ARRAYSIZE =
    CloseVoiceCallRequest_CloseReason_CloseReason_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  CloseReason_descriptor() {
    return CloseVoiceCallRequest_CloseReason_descriptor();
  }
  template<typename T>
  static inline const std::string& CloseReason_Name(T enum_t_value) {
    static_assert(::std::is_same<T, CloseReason>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function CloseReason_Name.");
    return CloseVoiceCallRequest_CloseReason_Name(enum_t_value);
  }
  static inline bool CloseReason_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      CloseReason* value) {
    return CloseVoiceCallRequest_CloseReason_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kRoomIdFieldNumber = 1,
    kNextHostFieldNumber = 3,
    kReasonFieldNumber = 2,
  };
  // string roomId = 1;
  void clear_roomid();
  const std::string& roomid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_roomid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_roomid();
  PROTOBUF_NODISCARD std::string* release_roomid();
  void set_allocated_roomid(std::string* roomid);
  private:
  const std::string& _internal_roomid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_roomid(const std::string& value);
  std::string* _internal_mutable_roomid();
  public:

  // .AcFunDanmu.Im.Basic.User nextHost = 3;
  bool has_nexthost() const;
  private:
  bool _internal_has_nexthost() const;
  public:
  void clear_nexthost();
  const ::AcFunDanmu::Im::Basic::User& nexthost() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::User* release_nexthost();
  ::AcFunDanmu::Im::Basic::User* mutable_nexthost();
  void set_allocated_nexthost(::AcFunDanmu::Im::Basic::User* nexthost);
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_nexthost() const;
  ::AcFunDanmu::Im::Basic::User* _internal_mutable_nexthost();
  public:
  void unsafe_arena_set_allocated_nexthost(
      ::AcFunDanmu::Im::Basic::User* nexthost);
  ::AcFunDanmu::Im::Basic::User* unsafe_arena_release_nexthost();

  // .AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.CloseReason reason = 2;
  void clear_reason();
  ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason reason() const;
  void set_reason(::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason value);
  private:
  ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason _internal_reason() const;
  void _internal_set_reason(::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr roomid_;
    ::AcFunDanmu::Im::Basic::User* nexthost_;
    int reason_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CloseVoiceCallRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CloseVoiceCallRequest

// string roomId = 1;
inline void CloseVoiceCallRequest::clear_roomid() {
  _impl_.roomid_.ClearToEmpty();
}
inline const std::string& CloseVoiceCallRequest::roomid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.roomId)
  return _internal_roomid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CloseVoiceCallRequest::set_roomid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.roomid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.roomId)
}
inline std::string* CloseVoiceCallRequest::mutable_roomid() {
  std::string* _s = _internal_mutable_roomid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.roomId)
  return _s;
}
inline const std::string& CloseVoiceCallRequest::_internal_roomid() const {
  return _impl_.roomid_.Get();
}
inline void CloseVoiceCallRequest::_internal_set_roomid(const std::string& value) {
  
  _impl_.roomid_.Set(value, GetArenaForAllocation());
}
inline std::string* CloseVoiceCallRequest::_internal_mutable_roomid() {
  
  return _impl_.roomid_.Mutable(GetArenaForAllocation());
}
inline std::string* CloseVoiceCallRequest::release_roomid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.roomId)
  return _impl_.roomid_.Release();
}
inline void CloseVoiceCallRequest::set_allocated_roomid(std::string* roomid) {
  if (roomid != nullptr) {
    
  } else {
    
  }
  _impl_.roomid_.SetAllocated(roomid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.roomid_.IsDefault()) {
    _impl_.roomid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.roomId)
}

// .AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.CloseReason reason = 2;
inline void CloseVoiceCallRequest::clear_reason() {
  _impl_.reason_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason CloseVoiceCallRequest::_internal_reason() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason >(_impl_.reason_);
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason CloseVoiceCallRequest::reason() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.reason)
  return _internal_reason();
}
inline void CloseVoiceCallRequest::_internal_set_reason(::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason value) {
  
  _impl_.reason_ = value;
}
inline void CloseVoiceCallRequest::set_reason(::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason value) {
  _internal_set_reason(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.reason)
}

// .AcFunDanmu.Im.Basic.User nextHost = 3;
inline bool CloseVoiceCallRequest::_internal_has_nexthost() const {
  return this != internal_default_instance() && _impl_.nexthost_ != nullptr;
}
inline bool CloseVoiceCallRequest::has_nexthost() const {
  return _internal_has_nexthost();
}
inline const ::AcFunDanmu::Im::Basic::User& CloseVoiceCallRequest::_internal_nexthost() const {
  const ::AcFunDanmu::Im::Basic::User* p = _impl_.nexthost_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::User&>(
      ::AcFunDanmu::Im::Basic::_User_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::User& CloseVoiceCallRequest::nexthost() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.nextHost)
  return _internal_nexthost();
}
inline void CloseVoiceCallRequest::unsafe_arena_set_allocated_nexthost(
    ::AcFunDanmu::Im::Basic::User* nexthost) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.nexthost_);
  }
  _impl_.nexthost_ = nexthost;
  if (nexthost) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.nextHost)
}
inline ::AcFunDanmu::Im::Basic::User* CloseVoiceCallRequest::release_nexthost() {
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.nexthost_;
  _impl_.nexthost_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::User* CloseVoiceCallRequest::unsafe_arena_release_nexthost() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.nextHost)
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.nexthost_;
  _impl_.nexthost_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::User* CloseVoiceCallRequest::_internal_mutable_nexthost() {
  
  if (_impl_.nexthost_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::User>(GetArenaForAllocation());
    _impl_.nexthost_ = p;
  }
  return _impl_.nexthost_;
}
inline ::AcFunDanmu::Im::Basic::User* CloseVoiceCallRequest::mutable_nexthost() {
  ::AcFunDanmu::Im::Basic::User* _msg = _internal_mutable_nexthost();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.nextHost)
  return _msg;
}
inline void CloseVoiceCallRequest::set_allocated_nexthost(::AcFunDanmu::Im::Basic::User* nexthost) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.nexthost_);
  }
  if (nexthost) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(nexthost));
    if (message_arena != submessage_arena) {
      nexthost = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, nexthost, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.nexthost_ = nexthost;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.CloseVoiceCallRequest.nextHost)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason>() {
  return ::AcFunDanmu::Im::Cloud::Voice::Call::CloseVoiceCallRequest_CloseReason_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CloseVoiceCallRequest_2eproto
