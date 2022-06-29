// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageReceiptDetailGetRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MessageReceiptDetailGetRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MessageReceiptDetailGetRequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MessageReceiptDetailGetRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MessageReceiptDetailGetRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageReceiptDetailGetRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class MessageReceiptDetailGetRequest;
struct MessageReceiptDetailGetRequestDefaultTypeInternal;
extern MessageReceiptDetailGetRequestDefaultTypeInternal _MessageReceiptDetailGetRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::MessageReceiptDetailGetRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::MessageReceiptDetailGetRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageReceiptDetailGetRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest) */ {
 public:
  inline MessageReceiptDetailGetRequest() : MessageReceiptDetailGetRequest(nullptr) {}
  ~MessageReceiptDetailGetRequest() override;
  explicit PROTOBUF_CONSTEXPR MessageReceiptDetailGetRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MessageReceiptDetailGetRequest(const MessageReceiptDetailGetRequest& from);
  MessageReceiptDetailGetRequest(MessageReceiptDetailGetRequest&& from) noexcept
    : MessageReceiptDetailGetRequest() {
    *this = ::std::move(from);
  }

  inline MessageReceiptDetailGetRequest& operator=(const MessageReceiptDetailGetRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageReceiptDetailGetRequest& operator=(MessageReceiptDetailGetRequest&& from) noexcept {
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
  static const MessageReceiptDetailGetRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const MessageReceiptDetailGetRequest* internal_default_instance() {
    return reinterpret_cast<const MessageReceiptDetailGetRequest*>(
               &_MessageReceiptDetailGetRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MessageReceiptDetailGetRequest& a, MessageReceiptDetailGetRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageReceiptDetailGetRequest* other) {
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
  void UnsafeArenaSwap(MessageReceiptDetailGetRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MessageReceiptDetailGetRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MessageReceiptDetailGetRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MessageReceiptDetailGetRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MessageReceiptDetailGetRequest& from) {
    MessageReceiptDetailGetRequest::MergeImpl(*this, from);
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
  void InternalSwap(MessageReceiptDetailGetRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest";
  }
  protected:
  explicit MessageReceiptDetailGetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChatTargetFieldNumber = 2,
    kSeqIdFieldNumber = 1,
  };
  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 2;
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

  // int64 seqId = 1;
  void clear_seqid();
  int64_t seqid() const;
  void set_seqid(int64_t value);
  private:
  int64_t _internal_seqid() const;
  void _internal_set_seqid(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Message::ChatTarget* chattarget_;
    int64_t seqid_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MessageReceiptDetailGetRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MessageReceiptDetailGetRequest

// int64 seqId = 1;
inline void MessageReceiptDetailGetRequest::clear_seqid() {
  _impl_.seqid_ = int64_t{0};
}
inline int64_t MessageReceiptDetailGetRequest::_internal_seqid() const {
  return _impl_.seqid_;
}
inline int64_t MessageReceiptDetailGetRequest::seqid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest.seqId)
  return _internal_seqid();
}
inline void MessageReceiptDetailGetRequest::_internal_set_seqid(int64_t value) {
  
  _impl_.seqid_ = value;
}
inline void MessageReceiptDetailGetRequest::set_seqid(int64_t value) {
  _internal_set_seqid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest.seqId)
}

// .AcFunDanmu.Im.Message.ChatTarget chatTarget = 2;
inline bool MessageReceiptDetailGetRequest::_internal_has_chattarget() const {
  return this != internal_default_instance() && _impl_.chattarget_ != nullptr;
}
inline bool MessageReceiptDetailGetRequest::has_chattarget() const {
  return _internal_has_chattarget();
}
inline const ::AcFunDanmu::Im::Message::ChatTarget& MessageReceiptDetailGetRequest::_internal_chattarget() const {
  const ::AcFunDanmu::Im::Message::ChatTarget* p = _impl_.chattarget_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Message::ChatTarget&>(
      ::AcFunDanmu::Im::Message::_ChatTarget_default_instance_);
}
inline const ::AcFunDanmu::Im::Message::ChatTarget& MessageReceiptDetailGetRequest::chattarget() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest.chatTarget)
  return _internal_chattarget();
}
inline void MessageReceiptDetailGetRequest::unsafe_arena_set_allocated_chattarget(
    ::AcFunDanmu::Im::Message::ChatTarget* chattarget) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.chattarget_);
  }
  _impl_.chattarget_ = chattarget;
  if (chattarget) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest.chatTarget)
}
inline ::AcFunDanmu::Im::Message::ChatTarget* MessageReceiptDetailGetRequest::release_chattarget() {
  
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
inline ::AcFunDanmu::Im::Message::ChatTarget* MessageReceiptDetailGetRequest::unsafe_arena_release_chattarget() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest.chatTarget)
  
  ::AcFunDanmu::Im::Message::ChatTarget* temp = _impl_.chattarget_;
  _impl_.chattarget_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Message::ChatTarget* MessageReceiptDetailGetRequest::_internal_mutable_chattarget() {
  
  if (_impl_.chattarget_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Message::ChatTarget>(GetArenaForAllocation());
    _impl_.chattarget_ = p;
  }
  return _impl_.chattarget_;
}
inline ::AcFunDanmu::Im::Message::ChatTarget* MessageReceiptDetailGetRequest::mutable_chattarget() {
  ::AcFunDanmu::Im::Message::ChatTarget* _msg = _internal_mutable_chattarget();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest.chatTarget)
  return _msg;
}
inline void MessageReceiptDetailGetRequest::set_allocated_chattarget(::AcFunDanmu::Im::Message::ChatTarget* chattarget) {
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
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.MessageReceiptDetailGetRequest.chatTarget)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MessageReceiptDetailGetRequest_2eproto
