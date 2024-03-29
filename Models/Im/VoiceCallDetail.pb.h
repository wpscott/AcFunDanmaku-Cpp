// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VoiceCallDetail.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_VoiceCallDetail_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_VoiceCallDetail_2eproto

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
#include "CallStatus.pb.h"
#include "CallType.pb.h"
#include "ChatMode.pb.h"
#include "ChatTarget.pb.h"
#include "User.pb.h"
#include "VoiceCallUserStatus.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_VoiceCallDetail_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_VoiceCallDetail_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_VoiceCallDetail_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {
class VoiceCallDetail;
struct VoiceCallDetailDefaultTypeInternal;
extern VoiceCallDetailDefaultTypeInternal _VoiceCallDetail_default_instance_;
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {

// ===================================================================

class VoiceCallDetail final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail) */ {
 public:
  inline VoiceCallDetail() : VoiceCallDetail(nullptr) {}
  ~VoiceCallDetail() override;
  explicit PROTOBUF_CONSTEXPR VoiceCallDetail(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VoiceCallDetail(const VoiceCallDetail& from);
  VoiceCallDetail(VoiceCallDetail&& from) noexcept
    : VoiceCallDetail() {
    *this = ::std::move(from);
  }

  inline VoiceCallDetail& operator=(const VoiceCallDetail& from) {
    CopyFrom(from);
    return *this;
  }
  inline VoiceCallDetail& operator=(VoiceCallDetail&& from) noexcept {
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
  static const VoiceCallDetail& default_instance() {
    return *internal_default_instance();
  }
  static inline const VoiceCallDetail* internal_default_instance() {
    return reinterpret_cast<const VoiceCallDetail*>(
               &_VoiceCallDetail_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VoiceCallDetail& a, VoiceCallDetail& b) {
    a.Swap(&b);
  }
  inline void Swap(VoiceCallDetail* other) {
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
  void UnsafeArenaSwap(VoiceCallDetail* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  VoiceCallDetail* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<VoiceCallDetail>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const VoiceCallDetail& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const VoiceCallDetail& from) {
    VoiceCallDetail::MergeImpl(*this, from);
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
  void InternalSwap(VoiceCallDetail* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail";
  }
  protected:
  explicit VoiceCallDetail(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUserStatusFieldNumber = 5,
    kTitleFieldNumber = 1,
    kExtraFieldNumber = 12,
    kHostFieldNumber = 2,
    kFromUserFieldNumber = 3,
    kChatTargetFieldNumber = 4,
    kCallTypeFieldNumber = 6,
    kCallStatusFieldNumber = 7,
    kStartTimeMsFieldNumber = 9,
    kChatModeFieldNumber = 8,
    kMaxCountFieldNumber = 11,
    kEndTimeMsFieldNumber = 10,
  };
  // repeated .AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallUserStatus userStatus = 5;
  int userstatus_size() const;
  private:
  int _internal_userstatus_size() const;
  public:
  void clear_userstatus();
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus* mutable_userstatus(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus >*
      mutable_userstatus();
  private:
  const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus& _internal_userstatus(int index) const;
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus* _internal_add_userstatus();
  public:
  const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus& userstatus(int index) const;
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus* add_userstatus();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus >&
      userstatus() const;

  // string title = 1;
  void clear_title();
  const std::string& title() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_title(ArgT0&& arg0, ArgT... args);
  std::string* mutable_title();
  PROTOBUF_NODISCARD std::string* release_title();
  void set_allocated_title(std::string* title);
  private:
  const std::string& _internal_title() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_title(const std::string& value);
  std::string* _internal_mutable_title();
  public:

  // bytes extra = 12;
  void clear_extra();
  const std::string& extra() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_extra(ArgT0&& arg0, ArgT... args);
  std::string* mutable_extra();
  PROTOBUF_NODISCARD std::string* release_extra();
  void set_allocated_extra(std::string* extra);
  private:
  const std::string& _internal_extra() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_extra(const std::string& value);
  std::string* _internal_mutable_extra();
  public:

  // .AcFunDanmu.Im.Basic.User host = 2;
  bool has_host() const;
  private:
  bool _internal_has_host() const;
  public:
  void clear_host();
  const ::AcFunDanmu::Im::Basic::User& host() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::User* release_host();
  ::AcFunDanmu::Im::Basic::User* mutable_host();
  void set_allocated_host(::AcFunDanmu::Im::Basic::User* host);
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_host() const;
  ::AcFunDanmu::Im::Basic::User* _internal_mutable_host();
  public:
  void unsafe_arena_set_allocated_host(
      ::AcFunDanmu::Im::Basic::User* host);
  ::AcFunDanmu::Im::Basic::User* unsafe_arena_release_host();

  // .AcFunDanmu.Im.Basic.User fromUser = 3;
  bool has_fromuser() const;
  private:
  bool _internal_has_fromuser() const;
  public:
  void clear_fromuser();
  const ::AcFunDanmu::Im::Basic::User& fromuser() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::User* release_fromuser();
  ::AcFunDanmu::Im::Basic::User* mutable_fromuser();
  void set_allocated_fromuser(::AcFunDanmu::Im::Basic::User* fromuser);
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_fromuser() const;
  ::AcFunDanmu::Im::Basic::User* _internal_mutable_fromuser();
  public:
  void unsafe_arena_set_allocated_fromuser(
      ::AcFunDanmu::Im::Basic::User* fromuser);
  ::AcFunDanmu::Im::Basic::User* unsafe_arena_release_fromuser();

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 4;
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

  // .AcFunDanmu.Im.Cloud.Voice.Call.CallType callType = 6;
  void clear_calltype();
  ::AcFunDanmu::Im::Cloud::Voice::Call::CallType calltype() const;
  void set_calltype(::AcFunDanmu::Im::Cloud::Voice::Call::CallType value);
  private:
  ::AcFunDanmu::Im::Cloud::Voice::Call::CallType _internal_calltype() const;
  void _internal_set_calltype(::AcFunDanmu::Im::Cloud::Voice::Call::CallType value);
  public:

  // .AcFunDanmu.Im.Cloud.Voice.Call.CallStatus callStatus = 7;
  void clear_callstatus();
  ::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus callstatus() const;
  void set_callstatus(::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus value);
  private:
  ::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus _internal_callstatus() const;
  void _internal_set_callstatus(::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus value);
  public:

  // int64 startTimeMs = 9;
  void clear_starttimems();
  int64_t starttimems() const;
  void set_starttimems(int64_t value);
  private:
  int64_t _internal_starttimems() const;
  void _internal_set_starttimems(int64_t value);
  public:

  // .AcFunDanmu.Im.Cloud.Voice.Call.ChatMode chatMode = 8;
  void clear_chatmode();
  ::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode chatmode() const;
  void set_chatmode(::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode value);
  private:
  ::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode _internal_chatmode() const;
  void _internal_set_chatmode(::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode value);
  public:

  // int32 maxCount = 11;
  void clear_maxcount();
  int32_t maxcount() const;
  void set_maxcount(int32_t value);
  private:
  int32_t _internal_maxcount() const;
  void _internal_set_maxcount(int32_t value);
  public:

  // int64 endTimeMs = 10;
  void clear_endtimems();
  int64_t endtimems() const;
  void set_endtimems(int64_t value);
  private:
  int64_t _internal_endtimems() const;
  void _internal_set_endtimems(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus > userstatus_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr title_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr extra_;
    ::AcFunDanmu::Im::Basic::User* host_;
    ::AcFunDanmu::Im::Basic::User* fromuser_;
    ::AcFunDanmu::Im::Message::ChatTarget* chattarget_;
    int calltype_;
    int callstatus_;
    int64_t starttimems_;
    int chatmode_;
    int32_t maxcount_;
    int64_t endtimems_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_VoiceCallDetail_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VoiceCallDetail

// string title = 1;
inline void VoiceCallDetail::clear_title() {
  _impl_.title_.ClearToEmpty();
}
inline const std::string& VoiceCallDetail::title() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.title)
  return _internal_title();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void VoiceCallDetail::set_title(ArgT0&& arg0, ArgT... args) {
 
 _impl_.title_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.title)
}
inline std::string* VoiceCallDetail::mutable_title() {
  std::string* _s = _internal_mutable_title();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.title)
  return _s;
}
inline const std::string& VoiceCallDetail::_internal_title() const {
  return _impl_.title_.Get();
}
inline void VoiceCallDetail::_internal_set_title(const std::string& value) {
  
  _impl_.title_.Set(value, GetArenaForAllocation());
}
inline std::string* VoiceCallDetail::_internal_mutable_title() {
  
  return _impl_.title_.Mutable(GetArenaForAllocation());
}
inline std::string* VoiceCallDetail::release_title() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.title)
  return _impl_.title_.Release();
}
inline void VoiceCallDetail::set_allocated_title(std::string* title) {
  if (title != nullptr) {
    
  } else {
    
  }
  _impl_.title_.SetAllocated(title, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.title_.IsDefault()) {
    _impl_.title_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.title)
}

// .AcFunDanmu.Im.Basic.User host = 2;
inline bool VoiceCallDetail::_internal_has_host() const {
  return this != internal_default_instance() && _impl_.host_ != nullptr;
}
inline bool VoiceCallDetail::has_host() const {
  return _internal_has_host();
}
inline const ::AcFunDanmu::Im::Basic::User& VoiceCallDetail::_internal_host() const {
  const ::AcFunDanmu::Im::Basic::User* p = _impl_.host_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::User&>(
      ::AcFunDanmu::Im::Basic::_User_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::User& VoiceCallDetail::host() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.host)
  return _internal_host();
}
inline void VoiceCallDetail::unsafe_arena_set_allocated_host(
    ::AcFunDanmu::Im::Basic::User* host) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.host_);
  }
  _impl_.host_ = host;
  if (host) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.host)
}
inline ::AcFunDanmu::Im::Basic::User* VoiceCallDetail::release_host() {
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.host_;
  _impl_.host_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::User* VoiceCallDetail::unsafe_arena_release_host() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.host)
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.host_;
  _impl_.host_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::User* VoiceCallDetail::_internal_mutable_host() {
  
  if (_impl_.host_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::User>(GetArenaForAllocation());
    _impl_.host_ = p;
  }
  return _impl_.host_;
}
inline ::AcFunDanmu::Im::Basic::User* VoiceCallDetail::mutable_host() {
  ::AcFunDanmu::Im::Basic::User* _msg = _internal_mutable_host();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.host)
  return _msg;
}
inline void VoiceCallDetail::set_allocated_host(::AcFunDanmu::Im::Basic::User* host) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.host_);
  }
  if (host) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(host));
    if (message_arena != submessage_arena) {
      host = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, host, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.host_ = host;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.host)
}

// .AcFunDanmu.Im.Basic.User fromUser = 3;
inline bool VoiceCallDetail::_internal_has_fromuser() const {
  return this != internal_default_instance() && _impl_.fromuser_ != nullptr;
}
inline bool VoiceCallDetail::has_fromuser() const {
  return _internal_has_fromuser();
}
inline const ::AcFunDanmu::Im::Basic::User& VoiceCallDetail::_internal_fromuser() const {
  const ::AcFunDanmu::Im::Basic::User* p = _impl_.fromuser_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::User&>(
      ::AcFunDanmu::Im::Basic::_User_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::User& VoiceCallDetail::fromuser() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.fromUser)
  return _internal_fromuser();
}
inline void VoiceCallDetail::unsafe_arena_set_allocated_fromuser(
    ::AcFunDanmu::Im::Basic::User* fromuser) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.fromuser_);
  }
  _impl_.fromuser_ = fromuser;
  if (fromuser) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.fromUser)
}
inline ::AcFunDanmu::Im::Basic::User* VoiceCallDetail::release_fromuser() {
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.fromuser_;
  _impl_.fromuser_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::User* VoiceCallDetail::unsafe_arena_release_fromuser() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.fromUser)
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.fromuser_;
  _impl_.fromuser_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::User* VoiceCallDetail::_internal_mutable_fromuser() {
  
  if (_impl_.fromuser_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::User>(GetArenaForAllocation());
    _impl_.fromuser_ = p;
  }
  return _impl_.fromuser_;
}
inline ::AcFunDanmu::Im::Basic::User* VoiceCallDetail::mutable_fromuser() {
  ::AcFunDanmu::Im::Basic::User* _msg = _internal_mutable_fromuser();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.fromUser)
  return _msg;
}
inline void VoiceCallDetail::set_allocated_fromuser(::AcFunDanmu::Im::Basic::User* fromuser) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.fromuser_);
  }
  if (fromuser) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(fromuser));
    if (message_arena != submessage_arena) {
      fromuser = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, fromuser, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.fromuser_ = fromuser;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.fromUser)
}

// .AcFunDanmu.Im.Message.ChatTarget chatTarget = 4;
inline bool VoiceCallDetail::_internal_has_chattarget() const {
  return this != internal_default_instance() && _impl_.chattarget_ != nullptr;
}
inline bool VoiceCallDetail::has_chattarget() const {
  return _internal_has_chattarget();
}
inline const ::AcFunDanmu::Im::Message::ChatTarget& VoiceCallDetail::_internal_chattarget() const {
  const ::AcFunDanmu::Im::Message::ChatTarget* p = _impl_.chattarget_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Message::ChatTarget&>(
      ::AcFunDanmu::Im::Message::_ChatTarget_default_instance_);
}
inline const ::AcFunDanmu::Im::Message::ChatTarget& VoiceCallDetail::chattarget() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.chatTarget)
  return _internal_chattarget();
}
inline void VoiceCallDetail::unsafe_arena_set_allocated_chattarget(
    ::AcFunDanmu::Im::Message::ChatTarget* chattarget) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.chattarget_);
  }
  _impl_.chattarget_ = chattarget;
  if (chattarget) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.chatTarget)
}
inline ::AcFunDanmu::Im::Message::ChatTarget* VoiceCallDetail::release_chattarget() {
  
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
inline ::AcFunDanmu::Im::Message::ChatTarget* VoiceCallDetail::unsafe_arena_release_chattarget() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.chatTarget)
  
  ::AcFunDanmu::Im::Message::ChatTarget* temp = _impl_.chattarget_;
  _impl_.chattarget_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Message::ChatTarget* VoiceCallDetail::_internal_mutable_chattarget() {
  
  if (_impl_.chattarget_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Message::ChatTarget>(GetArenaForAllocation());
    _impl_.chattarget_ = p;
  }
  return _impl_.chattarget_;
}
inline ::AcFunDanmu::Im::Message::ChatTarget* VoiceCallDetail::mutable_chattarget() {
  ::AcFunDanmu::Im::Message::ChatTarget* _msg = _internal_mutable_chattarget();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.chatTarget)
  return _msg;
}
inline void VoiceCallDetail::set_allocated_chattarget(::AcFunDanmu::Im::Message::ChatTarget* chattarget) {
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
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.chatTarget)
}

// repeated .AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallUserStatus userStatus = 5;
inline int VoiceCallDetail::_internal_userstatus_size() const {
  return _impl_.userstatus_.size();
}
inline int VoiceCallDetail::userstatus_size() const {
  return _internal_userstatus_size();
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus* VoiceCallDetail::mutable_userstatus(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.userStatus)
  return _impl_.userstatus_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus >*
VoiceCallDetail::mutable_userstatus() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.userStatus)
  return &_impl_.userstatus_;
}
inline const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus& VoiceCallDetail::_internal_userstatus(int index) const {
  return _impl_.userstatus_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus& VoiceCallDetail::userstatus(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.userStatus)
  return _internal_userstatus(index);
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus* VoiceCallDetail::_internal_add_userstatus() {
  return _impl_.userstatus_.Add();
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus* VoiceCallDetail::add_userstatus() {
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus* _add = _internal_add_userstatus();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.userStatus)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallUserStatus >&
VoiceCallDetail::userstatus() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.userStatus)
  return _impl_.userstatus_;
}

// .AcFunDanmu.Im.Cloud.Voice.Call.CallType callType = 6;
inline void VoiceCallDetail::clear_calltype() {
  _impl_.calltype_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::CallType VoiceCallDetail::_internal_calltype() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Voice::Call::CallType >(_impl_.calltype_);
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::CallType VoiceCallDetail::calltype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.callType)
  return _internal_calltype();
}
inline void VoiceCallDetail::_internal_set_calltype(::AcFunDanmu::Im::Cloud::Voice::Call::CallType value) {
  
  _impl_.calltype_ = value;
}
inline void VoiceCallDetail::set_calltype(::AcFunDanmu::Im::Cloud::Voice::Call::CallType value) {
  _internal_set_calltype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.callType)
}

// .AcFunDanmu.Im.Cloud.Voice.Call.CallStatus callStatus = 7;
inline void VoiceCallDetail::clear_callstatus() {
  _impl_.callstatus_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus VoiceCallDetail::_internal_callstatus() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus >(_impl_.callstatus_);
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus VoiceCallDetail::callstatus() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.callStatus)
  return _internal_callstatus();
}
inline void VoiceCallDetail::_internal_set_callstatus(::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus value) {
  
  _impl_.callstatus_ = value;
}
inline void VoiceCallDetail::set_callstatus(::AcFunDanmu::Im::Cloud::Voice::Call::CallStatus value) {
  _internal_set_callstatus(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.callStatus)
}

// .AcFunDanmu.Im.Cloud.Voice.Call.ChatMode chatMode = 8;
inline void VoiceCallDetail::clear_chatmode() {
  _impl_.chatmode_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode VoiceCallDetail::_internal_chatmode() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode >(_impl_.chatmode_);
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode VoiceCallDetail::chatmode() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.chatMode)
  return _internal_chatmode();
}
inline void VoiceCallDetail::_internal_set_chatmode(::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode value) {
  
  _impl_.chatmode_ = value;
}
inline void VoiceCallDetail::set_chatmode(::AcFunDanmu::Im::Cloud::Voice::Call::ChatMode value) {
  _internal_set_chatmode(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.chatMode)
}

// int64 startTimeMs = 9;
inline void VoiceCallDetail::clear_starttimems() {
  _impl_.starttimems_ = int64_t{0};
}
inline int64_t VoiceCallDetail::_internal_starttimems() const {
  return _impl_.starttimems_;
}
inline int64_t VoiceCallDetail::starttimems() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.startTimeMs)
  return _internal_starttimems();
}
inline void VoiceCallDetail::_internal_set_starttimems(int64_t value) {
  
  _impl_.starttimems_ = value;
}
inline void VoiceCallDetail::set_starttimems(int64_t value) {
  _internal_set_starttimems(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.startTimeMs)
}

// int64 endTimeMs = 10;
inline void VoiceCallDetail::clear_endtimems() {
  _impl_.endtimems_ = int64_t{0};
}
inline int64_t VoiceCallDetail::_internal_endtimems() const {
  return _impl_.endtimems_;
}
inline int64_t VoiceCallDetail::endtimems() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.endTimeMs)
  return _internal_endtimems();
}
inline void VoiceCallDetail::_internal_set_endtimems(int64_t value) {
  
  _impl_.endtimems_ = value;
}
inline void VoiceCallDetail::set_endtimems(int64_t value) {
  _internal_set_endtimems(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.endTimeMs)
}

// int32 maxCount = 11;
inline void VoiceCallDetail::clear_maxcount() {
  _impl_.maxcount_ = 0;
}
inline int32_t VoiceCallDetail::_internal_maxcount() const {
  return _impl_.maxcount_;
}
inline int32_t VoiceCallDetail::maxcount() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.maxCount)
  return _internal_maxcount();
}
inline void VoiceCallDetail::_internal_set_maxcount(int32_t value) {
  
  _impl_.maxcount_ = value;
}
inline void VoiceCallDetail::set_maxcount(int32_t value) {
  _internal_set_maxcount(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.maxCount)
}

// bytes extra = 12;
inline void VoiceCallDetail::clear_extra() {
  _impl_.extra_.ClearToEmpty();
}
inline const std::string& VoiceCallDetail::extra() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.extra)
  return _internal_extra();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void VoiceCallDetail::set_extra(ArgT0&& arg0, ArgT... args) {
 
 _impl_.extra_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.extra)
}
inline std::string* VoiceCallDetail::mutable_extra() {
  std::string* _s = _internal_mutable_extra();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.extra)
  return _s;
}
inline const std::string& VoiceCallDetail::_internal_extra() const {
  return _impl_.extra_.Get();
}
inline void VoiceCallDetail::_internal_set_extra(const std::string& value) {
  
  _impl_.extra_.Set(value, GetArenaForAllocation());
}
inline std::string* VoiceCallDetail::_internal_mutable_extra() {
  
  return _impl_.extra_.Mutable(GetArenaForAllocation());
}
inline std::string* VoiceCallDetail::release_extra() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.extra)
  return _impl_.extra_.Release();
}
inline void VoiceCallDetail::set_allocated_extra(std::string* extra) {
  if (extra != nullptr) {
    
  } else {
    
  }
  _impl_.extra_.SetAllocated(extra, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.extra_.IsDefault()) {
    _impl_.extra_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail.extra)
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

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_VoiceCallDetail_2eproto
