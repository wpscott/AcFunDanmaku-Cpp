// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalChatCall.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatCall_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatCall_2eproto

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
#include "ChatMediaType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalChatCall_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalChatCall_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalChatCall_2eproto;
namespace AcFunDanmu {
class CommonStateSignalChatCall;
struct CommonStateSignalChatCallDefaultTypeInternal;
extern CommonStateSignalChatCallDefaultTypeInternal _CommonStateSignalChatCall_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalChatCall* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalChatCall>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalChatCall final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalChatCall) */ {
 public:
  inline CommonStateSignalChatCall() : CommonStateSignalChatCall(nullptr) {}
  ~CommonStateSignalChatCall() override;
  explicit PROTOBUF_CONSTEXPR CommonStateSignalChatCall(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonStateSignalChatCall(const CommonStateSignalChatCall& from);
  CommonStateSignalChatCall(CommonStateSignalChatCall&& from) noexcept
    : CommonStateSignalChatCall() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalChatCall& operator=(const CommonStateSignalChatCall& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalChatCall& operator=(CommonStateSignalChatCall&& from) noexcept {
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
  static const CommonStateSignalChatCall& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonStateSignalChatCall* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalChatCall*>(
               &_CommonStateSignalChatCall_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalChatCall& a, CommonStateSignalChatCall& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalChatCall* other) {
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
  void UnsafeArenaSwap(CommonStateSignalChatCall* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommonStateSignalChatCall* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommonStateSignalChatCall>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommonStateSignalChatCall& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommonStateSignalChatCall& from) {
    CommonStateSignalChatCall::MergeImpl(*this, from);
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
  void InternalSwap(CommonStateSignalChatCall* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalChatCall";
  }
  protected:
  explicit CommonStateSignalChatCall(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChatIdFieldNumber = 1,
    kLiveIdFieldNumber = 2,
    kCallTimestampMsFieldNumber = 3,
    kMediaTypeFieldNumber = 4,
  };
  // string chatId = 1;
  void clear_chatid();
  const std::string& chatid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_chatid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_chatid();
  PROTOBUF_NODISCARD std::string* release_chatid();
  void set_allocated_chatid(std::string* chatid);
  private:
  const std::string& _internal_chatid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_chatid(const std::string& value);
  std::string* _internal_mutable_chatid();
  public:

  // string liveId = 2;
  void clear_liveid();
  const std::string& liveid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_liveid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_liveid();
  PROTOBUF_NODISCARD std::string* release_liveid();
  void set_allocated_liveid(std::string* liveid);
  private:
  const std::string& _internal_liveid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_liveid(const std::string& value);
  std::string* _internal_mutable_liveid();
  public:

  // int64 callTimestampMs = 3;
  void clear_calltimestampms();
  int64_t calltimestampms() const;
  void set_calltimestampms(int64_t value);
  private:
  int64_t _internal_calltimestampms() const;
  void _internal_set_calltimestampms(int64_t value);
  public:

  // .AcFunDanmu.ChatMediaType mediaType = 4;
  void clear_mediatype();
  ::AcFunDanmu::ChatMediaType mediatype() const;
  void set_mediatype(::AcFunDanmu::ChatMediaType value);
  private:
  ::AcFunDanmu::ChatMediaType _internal_mediatype() const;
  void _internal_set_mediatype(::AcFunDanmu::ChatMediaType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalChatCall)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr chatid_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr liveid_;
    int64_t calltimestampms_;
    int mediatype_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CommonStateSignalChatCall_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalChatCall

// string chatId = 1;
inline void CommonStateSignalChatCall::clear_chatid() {
  _impl_.chatid_.ClearToEmpty();
}
inline const std::string& CommonStateSignalChatCall::chatid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatCall.chatId)
  return _internal_chatid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalChatCall::set_chatid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.chatid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatCall.chatId)
}
inline std::string* CommonStateSignalChatCall::mutable_chatid() {
  std::string* _s = _internal_mutable_chatid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalChatCall.chatId)
  return _s;
}
inline const std::string& CommonStateSignalChatCall::_internal_chatid() const {
  return _impl_.chatid_.Get();
}
inline void CommonStateSignalChatCall::_internal_set_chatid(const std::string& value) {
  
  _impl_.chatid_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalChatCall::_internal_mutable_chatid() {
  
  return _impl_.chatid_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalChatCall::release_chatid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalChatCall.chatId)
  return _impl_.chatid_.Release();
}
inline void CommonStateSignalChatCall::set_allocated_chatid(std::string* chatid) {
  if (chatid != nullptr) {
    
  } else {
    
  }
  _impl_.chatid_.SetAllocated(chatid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.chatid_.IsDefault()) {
    _impl_.chatid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalChatCall.chatId)
}

// string liveId = 2;
inline void CommonStateSignalChatCall::clear_liveid() {
  _impl_.liveid_.ClearToEmpty();
}
inline const std::string& CommonStateSignalChatCall::liveid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatCall.liveId)
  return _internal_liveid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalChatCall::set_liveid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.liveid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatCall.liveId)
}
inline std::string* CommonStateSignalChatCall::mutable_liveid() {
  std::string* _s = _internal_mutable_liveid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalChatCall.liveId)
  return _s;
}
inline const std::string& CommonStateSignalChatCall::_internal_liveid() const {
  return _impl_.liveid_.Get();
}
inline void CommonStateSignalChatCall::_internal_set_liveid(const std::string& value) {
  
  _impl_.liveid_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalChatCall::_internal_mutable_liveid() {
  
  return _impl_.liveid_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalChatCall::release_liveid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalChatCall.liveId)
  return _impl_.liveid_.Release();
}
inline void CommonStateSignalChatCall::set_allocated_liveid(std::string* liveid) {
  if (liveid != nullptr) {
    
  } else {
    
  }
  _impl_.liveid_.SetAllocated(liveid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.liveid_.IsDefault()) {
    _impl_.liveid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalChatCall.liveId)
}

// int64 callTimestampMs = 3;
inline void CommonStateSignalChatCall::clear_calltimestampms() {
  _impl_.calltimestampms_ = int64_t{0};
}
inline int64_t CommonStateSignalChatCall::_internal_calltimestampms() const {
  return _impl_.calltimestampms_;
}
inline int64_t CommonStateSignalChatCall::calltimestampms() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatCall.callTimestampMs)
  return _internal_calltimestampms();
}
inline void CommonStateSignalChatCall::_internal_set_calltimestampms(int64_t value) {
  
  _impl_.calltimestampms_ = value;
}
inline void CommonStateSignalChatCall::set_calltimestampms(int64_t value) {
  _internal_set_calltimestampms(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatCall.callTimestampMs)
}

// .AcFunDanmu.ChatMediaType mediaType = 4;
inline void CommonStateSignalChatCall::clear_mediatype() {
  _impl_.mediatype_ = 0;
}
inline ::AcFunDanmu::ChatMediaType CommonStateSignalChatCall::_internal_mediatype() const {
  return static_cast< ::AcFunDanmu::ChatMediaType >(_impl_.mediatype_);
}
inline ::AcFunDanmu::ChatMediaType CommonStateSignalChatCall::mediatype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalChatCall.mediaType)
  return _internal_mediatype();
}
inline void CommonStateSignalChatCall::_internal_set_mediatype(::AcFunDanmu::ChatMediaType value) {
  
  _impl_.mediatype_ = value;
}
inline void CommonStateSignalChatCall::set_mediatype(::AcFunDanmu::ChatMediaType value) {
  _internal_set_mediatype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalChatCall.mediaType)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalChatCall_2eproto
