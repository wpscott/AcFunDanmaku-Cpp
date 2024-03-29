// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SendMessageResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SendMessageResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SendMessageResponse_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SendMessageResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SendMessageResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SendMessageResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class SendMessageResponse;
struct SendMessageResponseDefaultTypeInternal;
extern SendMessageResponseDefaultTypeInternal _SendMessageResponse_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::SendMessageResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::SendMessageResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class SendMessageResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.SendMessageResponse) */ {
 public:
  inline SendMessageResponse() : SendMessageResponse(nullptr) {}
  ~SendMessageResponse() override;
  explicit PROTOBUF_CONSTEXPR SendMessageResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SendMessageResponse(const SendMessageResponse& from);
  SendMessageResponse(SendMessageResponse&& from) noexcept
    : SendMessageResponse() {
    *this = ::std::move(from);
  }

  inline SendMessageResponse& operator=(const SendMessageResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SendMessageResponse& operator=(SendMessageResponse&& from) noexcept {
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
  static const SendMessageResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SendMessageResponse* internal_default_instance() {
    return reinterpret_cast<const SendMessageResponse*>(
               &_SendMessageResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SendMessageResponse& a, SendMessageResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SendMessageResponse* other) {
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
  void UnsafeArenaSwap(SendMessageResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SendMessageResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SendMessageResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SendMessageResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SendMessageResponse& from) {
    SendMessageResponse::MergeImpl(*this, from);
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
  void InternalSwap(SendMessageResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.SendMessageResponse";
  }
  protected:
  explicit SendMessageResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 7,
    kClientSeqIdFieldNumber = 1,
    kMessageTimestampFieldNumber = 2,
    kSeqIdFieldNumber = 3,
    kSessionAccountTypeFieldNumber = 4,
    kSessionPriorityFieldNumber = 5,
    kSessionCategoryIdFieldNumber = 6,
  };
  // bytes content = 7;
  void clear_content();
  const std::string& content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content();
  PROTOBUF_NODISCARD std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // int64 clientSeqId = 1;
  void clear_clientseqid();
  int64_t clientseqid() const;
  void set_clientseqid(int64_t value);
  private:
  int64_t _internal_clientseqid() const;
  void _internal_set_clientseqid(int64_t value);
  public:

  // int64 messageTimestamp = 2;
  void clear_messagetimestamp();
  int64_t messagetimestamp() const;
  void set_messagetimestamp(int64_t value);
  private:
  int64_t _internal_messagetimestamp() const;
  void _internal_set_messagetimestamp(int64_t value);
  public:

  // int64 seqId = 3;
  void clear_seqid();
  int64_t seqid() const;
  void set_seqid(int64_t value);
  private:
  int64_t _internal_seqid() const;
  void _internal_set_seqid(int64_t value);
  public:

  // int32 sessionAccountType = 4;
  void clear_sessionaccounttype();
  int32_t sessionaccounttype() const;
  void set_sessionaccounttype(int32_t value);
  private:
  int32_t _internal_sessionaccounttype() const;
  void _internal_set_sessionaccounttype(int32_t value);
  public:

  // int32 sessionPriority = 5;
  void clear_sessionpriority();
  int32_t sessionpriority() const;
  void set_sessionpriority(int32_t value);
  private:
  int32_t _internal_sessionpriority() const;
  void _internal_set_sessionpriority(int32_t value);
  public:

  // int32 sessionCategoryId = 6;
  void clear_sessioncategoryid();
  int32_t sessioncategoryid() const;
  void set_sessioncategoryid(int32_t value);
  private:
  int32_t _internal_sessioncategoryid() const;
  void _internal_set_sessioncategoryid(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.SendMessageResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
    int64_t clientseqid_;
    int64_t messagetimestamp_;
    int64_t seqid_;
    int32_t sessionaccounttype_;
    int32_t sessionpriority_;
    int32_t sessioncategoryid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SendMessageResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SendMessageResponse

// int64 clientSeqId = 1;
inline void SendMessageResponse::clear_clientseqid() {
  _impl_.clientseqid_ = int64_t{0};
}
inline int64_t SendMessageResponse::_internal_clientseqid() const {
  return _impl_.clientseqid_;
}
inline int64_t SendMessageResponse::clientseqid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SendMessageResponse.clientSeqId)
  return _internal_clientseqid();
}
inline void SendMessageResponse::_internal_set_clientseqid(int64_t value) {
  
  _impl_.clientseqid_ = value;
}
inline void SendMessageResponse::set_clientseqid(int64_t value) {
  _internal_set_clientseqid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SendMessageResponse.clientSeqId)
}

// int64 messageTimestamp = 2;
inline void SendMessageResponse::clear_messagetimestamp() {
  _impl_.messagetimestamp_ = int64_t{0};
}
inline int64_t SendMessageResponse::_internal_messagetimestamp() const {
  return _impl_.messagetimestamp_;
}
inline int64_t SendMessageResponse::messagetimestamp() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SendMessageResponse.messageTimestamp)
  return _internal_messagetimestamp();
}
inline void SendMessageResponse::_internal_set_messagetimestamp(int64_t value) {
  
  _impl_.messagetimestamp_ = value;
}
inline void SendMessageResponse::set_messagetimestamp(int64_t value) {
  _internal_set_messagetimestamp(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SendMessageResponse.messageTimestamp)
}

// int64 seqId = 3;
inline void SendMessageResponse::clear_seqid() {
  _impl_.seqid_ = int64_t{0};
}
inline int64_t SendMessageResponse::_internal_seqid() const {
  return _impl_.seqid_;
}
inline int64_t SendMessageResponse::seqid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SendMessageResponse.seqId)
  return _internal_seqid();
}
inline void SendMessageResponse::_internal_set_seqid(int64_t value) {
  
  _impl_.seqid_ = value;
}
inline void SendMessageResponse::set_seqid(int64_t value) {
  _internal_set_seqid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SendMessageResponse.seqId)
}

// int32 sessionAccountType = 4;
inline void SendMessageResponse::clear_sessionaccounttype() {
  _impl_.sessionaccounttype_ = 0;
}
inline int32_t SendMessageResponse::_internal_sessionaccounttype() const {
  return _impl_.sessionaccounttype_;
}
inline int32_t SendMessageResponse::sessionaccounttype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SendMessageResponse.sessionAccountType)
  return _internal_sessionaccounttype();
}
inline void SendMessageResponse::_internal_set_sessionaccounttype(int32_t value) {
  
  _impl_.sessionaccounttype_ = value;
}
inline void SendMessageResponse::set_sessionaccounttype(int32_t value) {
  _internal_set_sessionaccounttype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SendMessageResponse.sessionAccountType)
}

// int32 sessionPriority = 5;
inline void SendMessageResponse::clear_sessionpriority() {
  _impl_.sessionpriority_ = 0;
}
inline int32_t SendMessageResponse::_internal_sessionpriority() const {
  return _impl_.sessionpriority_;
}
inline int32_t SendMessageResponse::sessionpriority() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SendMessageResponse.sessionPriority)
  return _internal_sessionpriority();
}
inline void SendMessageResponse::_internal_set_sessionpriority(int32_t value) {
  
  _impl_.sessionpriority_ = value;
}
inline void SendMessageResponse::set_sessionpriority(int32_t value) {
  _internal_set_sessionpriority(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SendMessageResponse.sessionPriority)
}

// int32 sessionCategoryId = 6;
inline void SendMessageResponse::clear_sessioncategoryid() {
  _impl_.sessioncategoryid_ = 0;
}
inline int32_t SendMessageResponse::_internal_sessioncategoryid() const {
  return _impl_.sessioncategoryid_;
}
inline int32_t SendMessageResponse::sessioncategoryid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SendMessageResponse.sessionCategoryId)
  return _internal_sessioncategoryid();
}
inline void SendMessageResponse::_internal_set_sessioncategoryid(int32_t value) {
  
  _impl_.sessioncategoryid_ = value;
}
inline void SendMessageResponse::set_sessioncategoryid(int32_t value) {
  _internal_set_sessioncategoryid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SendMessageResponse.sessionCategoryId)
}

// bytes content = 7;
inline void SendMessageResponse::clear_content() {
  _impl_.content_.ClearToEmpty();
}
inline const std::string& SendMessageResponse::content() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.SendMessageResponse.content)
  return _internal_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void SendMessageResponse::set_content(ArgT0&& arg0, ArgT... args) {
 
 _impl_.content_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.SendMessageResponse.content)
}
inline std::string* SendMessageResponse::mutable_content() {
  std::string* _s = _internal_mutable_content();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.SendMessageResponse.content)
  return _s;
}
inline const std::string& SendMessageResponse::_internal_content() const {
  return _impl_.content_.Get();
}
inline void SendMessageResponse::_internal_set_content(const std::string& value) {
  
  _impl_.content_.Set(value, GetArenaForAllocation());
}
inline std::string* SendMessageResponse::_internal_mutable_content() {
  
  return _impl_.content_.Mutable(GetArenaForAllocation());
}
inline std::string* SendMessageResponse::release_content() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.SendMessageResponse.content)
  return _impl_.content_.Release();
}
inline void SendMessageResponse::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  _impl_.content_.SetAllocated(content, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_.IsDefault()) {
    _impl_.content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.SendMessageResponse.content)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SendMessageResponse_2eproto
