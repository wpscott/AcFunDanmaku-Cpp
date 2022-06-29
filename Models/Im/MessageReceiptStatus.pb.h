// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageReceiptStatus.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MessageReceiptStatus_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MessageReceiptStatus_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MessageReceiptStatus_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MessageReceiptStatus_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageReceiptStatus_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class MessageReceiptStatus;
struct MessageReceiptStatusDefaultTypeInternal;
extern MessageReceiptStatusDefaultTypeInternal _MessageReceiptStatus_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::MessageReceiptStatus* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::MessageReceiptStatus>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageReceiptStatus final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.MessageReceiptStatus) */ {
 public:
  inline MessageReceiptStatus() : MessageReceiptStatus(nullptr) {}
  ~MessageReceiptStatus() override;
  explicit PROTOBUF_CONSTEXPR MessageReceiptStatus(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MessageReceiptStatus(const MessageReceiptStatus& from);
  MessageReceiptStatus(MessageReceiptStatus&& from) noexcept
    : MessageReceiptStatus() {
    *this = ::std::move(from);
  }

  inline MessageReceiptStatus& operator=(const MessageReceiptStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageReceiptStatus& operator=(MessageReceiptStatus&& from) noexcept {
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
  static const MessageReceiptStatus& default_instance() {
    return *internal_default_instance();
  }
  static inline const MessageReceiptStatus* internal_default_instance() {
    return reinterpret_cast<const MessageReceiptStatus*>(
               &_MessageReceiptStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MessageReceiptStatus& a, MessageReceiptStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageReceiptStatus* other) {
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
  void UnsafeArenaSwap(MessageReceiptStatus* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MessageReceiptStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MessageReceiptStatus>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MessageReceiptStatus& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MessageReceiptStatus& from) {
    MessageReceiptStatus::MergeImpl(*this, from);
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
  void InternalSwap(MessageReceiptStatus* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.MessageReceiptStatus";
  }
  protected:
  explicit MessageReceiptStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReadCountFieldNumber = 1,
    kUnreadCountFieldNumber = 2,
    kSeqIdFieldNumber = 3,
    kServerTimeFieldNumber = 4,
  };
  // int32 readCount = 1;
  void clear_readcount();
  int32_t readcount() const;
  void set_readcount(int32_t value);
  private:
  int32_t _internal_readcount() const;
  void _internal_set_readcount(int32_t value);
  public:

  // int32 unreadCount = 2;
  void clear_unreadcount();
  int32_t unreadcount() const;
  void set_unreadcount(int32_t value);
  private:
  int32_t _internal_unreadcount() const;
  void _internal_set_unreadcount(int32_t value);
  public:

  // int64 seqId = 3;
  void clear_seqid();
  int64_t seqid() const;
  void set_seqid(int64_t value);
  private:
  int64_t _internal_seqid() const;
  void _internal_set_seqid(int64_t value);
  public:

  // int64 serverTime = 4;
  void clear_servertime();
  int64_t servertime() const;
  void set_servertime(int64_t value);
  private:
  int64_t _internal_servertime() const;
  void _internal_set_servertime(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.MessageReceiptStatus)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t readcount_;
    int32_t unreadcount_;
    int64_t seqid_;
    int64_t servertime_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MessageReceiptStatus_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MessageReceiptStatus

// int32 readCount = 1;
inline void MessageReceiptStatus::clear_readcount() {
  _impl_.readcount_ = 0;
}
inline int32_t MessageReceiptStatus::_internal_readcount() const {
  return _impl_.readcount_;
}
inline int32_t MessageReceiptStatus::readcount() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageReceiptStatus.readCount)
  return _internal_readcount();
}
inline void MessageReceiptStatus::_internal_set_readcount(int32_t value) {
  
  _impl_.readcount_ = value;
}
inline void MessageReceiptStatus::set_readcount(int32_t value) {
  _internal_set_readcount(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.MessageReceiptStatus.readCount)
}

// int32 unreadCount = 2;
inline void MessageReceiptStatus::clear_unreadcount() {
  _impl_.unreadcount_ = 0;
}
inline int32_t MessageReceiptStatus::_internal_unreadcount() const {
  return _impl_.unreadcount_;
}
inline int32_t MessageReceiptStatus::unreadcount() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageReceiptStatus.unreadCount)
  return _internal_unreadcount();
}
inline void MessageReceiptStatus::_internal_set_unreadcount(int32_t value) {
  
  _impl_.unreadcount_ = value;
}
inline void MessageReceiptStatus::set_unreadcount(int32_t value) {
  _internal_set_unreadcount(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.MessageReceiptStatus.unreadCount)
}

// int64 seqId = 3;
inline void MessageReceiptStatus::clear_seqid() {
  _impl_.seqid_ = int64_t{0};
}
inline int64_t MessageReceiptStatus::_internal_seqid() const {
  return _impl_.seqid_;
}
inline int64_t MessageReceiptStatus::seqid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageReceiptStatus.seqId)
  return _internal_seqid();
}
inline void MessageReceiptStatus::_internal_set_seqid(int64_t value) {
  
  _impl_.seqid_ = value;
}
inline void MessageReceiptStatus::set_seqid(int64_t value) {
  _internal_set_seqid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.MessageReceiptStatus.seqId)
}

// int64 serverTime = 4;
inline void MessageReceiptStatus::clear_servertime() {
  _impl_.servertime_ = int64_t{0};
}
inline int64_t MessageReceiptStatus::_internal_servertime() const {
  return _impl_.servertime_;
}
inline int64_t MessageReceiptStatus::servertime() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageReceiptStatus.serverTime)
  return _internal_servertime();
}
inline void MessageReceiptStatus::_internal_set_servertime(int64_t value) {
  
  _impl_.servertime_ = value;
}
inline void MessageReceiptStatus::set_servertime(int64_t value) {
  _internal_set_servertime(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.MessageReceiptStatus.serverTime)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MessageReceiptStatus_2eproto