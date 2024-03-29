// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageReceipt.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MessageReceipt_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MessageReceipt_2eproto

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
#include "MessageReceiptStatus.pb.h"
#include "User.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MessageReceipt_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MessageReceipt_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageReceipt_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {
class MessageReceipt;
struct MessageReceiptDefaultTypeInternal;
extern MessageReceiptDefaultTypeInternal _MessageReceipt_default_instance_;
}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Data::Update::MessageReceipt* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Data::Update::MessageReceipt>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {

// ===================================================================

class MessageReceipt final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt) */ {
 public:
  inline MessageReceipt() : MessageReceipt(nullptr) {}
  ~MessageReceipt() override;
  explicit PROTOBUF_CONSTEXPR MessageReceipt(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MessageReceipt(const MessageReceipt& from);
  MessageReceipt(MessageReceipt&& from) noexcept
    : MessageReceipt() {
    *this = ::std::move(from);
  }

  inline MessageReceipt& operator=(const MessageReceipt& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageReceipt& operator=(MessageReceipt&& from) noexcept {
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
  static const MessageReceipt& default_instance() {
    return *internal_default_instance();
  }
  static inline const MessageReceipt* internal_default_instance() {
    return reinterpret_cast<const MessageReceipt*>(
               &_MessageReceipt_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MessageReceipt& a, MessageReceipt& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageReceipt* other) {
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
  void UnsafeArenaSwap(MessageReceipt* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MessageReceipt* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MessageReceipt>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MessageReceipt& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MessageReceipt& from) {
    MessageReceipt::MergeImpl(*this, from);
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
  void InternalSwap(MessageReceipt* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt";
  }
  protected:
  explicit MessageReceipt(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kChatTargetFieldNumber = 1,
    kReceiptStatusFieldNumber = 2,
    kReaderFieldNumber = 3,
  };
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

  // .AcFunDanmu.Im.Message.MessageReceiptStatus receiptStatus = 2;
  bool has_receiptstatus() const;
  private:
  bool _internal_has_receiptstatus() const;
  public:
  void clear_receiptstatus();
  const ::AcFunDanmu::Im::Message::MessageReceiptStatus& receiptstatus() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Message::MessageReceiptStatus* release_receiptstatus();
  ::AcFunDanmu::Im::Message::MessageReceiptStatus* mutable_receiptstatus();
  void set_allocated_receiptstatus(::AcFunDanmu::Im::Message::MessageReceiptStatus* receiptstatus);
  private:
  const ::AcFunDanmu::Im::Message::MessageReceiptStatus& _internal_receiptstatus() const;
  ::AcFunDanmu::Im::Message::MessageReceiptStatus* _internal_mutable_receiptstatus();
  public:
  void unsafe_arena_set_allocated_receiptstatus(
      ::AcFunDanmu::Im::Message::MessageReceiptStatus* receiptstatus);
  ::AcFunDanmu::Im::Message::MessageReceiptStatus* unsafe_arena_release_receiptstatus();

  // .AcFunDanmu.Im.Basic.User reader = 3;
  bool has_reader() const;
  private:
  bool _internal_has_reader() const;
  public:
  void clear_reader();
  const ::AcFunDanmu::Im::Basic::User& reader() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::User* release_reader();
  ::AcFunDanmu::Im::Basic::User* mutable_reader();
  void set_allocated_reader(::AcFunDanmu::Im::Basic::User* reader);
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_reader() const;
  ::AcFunDanmu::Im::Basic::User* _internal_mutable_reader();
  public:
  void unsafe_arena_set_allocated_reader(
      ::AcFunDanmu::Im::Basic::User* reader);
  ::AcFunDanmu::Im::Basic::User* unsafe_arena_release_reader();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Message::ChatTarget* chattarget_;
    ::AcFunDanmu::Im::Message::MessageReceiptStatus* receiptstatus_;
    ::AcFunDanmu::Im::Basic::User* reader_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MessageReceipt_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MessageReceipt

// .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
inline bool MessageReceipt::_internal_has_chattarget() const {
  return this != internal_default_instance() && _impl_.chattarget_ != nullptr;
}
inline bool MessageReceipt::has_chattarget() const {
  return _internal_has_chattarget();
}
inline const ::AcFunDanmu::Im::Message::ChatTarget& MessageReceipt::_internal_chattarget() const {
  const ::AcFunDanmu::Im::Message::ChatTarget* p = _impl_.chattarget_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Message::ChatTarget&>(
      ::AcFunDanmu::Im::Message::_ChatTarget_default_instance_);
}
inline const ::AcFunDanmu::Im::Message::ChatTarget& MessageReceipt::chattarget() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.chatTarget)
  return _internal_chattarget();
}
inline void MessageReceipt::unsafe_arena_set_allocated_chattarget(
    ::AcFunDanmu::Im::Message::ChatTarget* chattarget) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.chattarget_);
  }
  _impl_.chattarget_ = chattarget;
  if (chattarget) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.chatTarget)
}
inline ::AcFunDanmu::Im::Message::ChatTarget* MessageReceipt::release_chattarget() {
  
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
inline ::AcFunDanmu::Im::Message::ChatTarget* MessageReceipt::unsafe_arena_release_chattarget() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.chatTarget)
  
  ::AcFunDanmu::Im::Message::ChatTarget* temp = _impl_.chattarget_;
  _impl_.chattarget_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Message::ChatTarget* MessageReceipt::_internal_mutable_chattarget() {
  
  if (_impl_.chattarget_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Message::ChatTarget>(GetArenaForAllocation());
    _impl_.chattarget_ = p;
  }
  return _impl_.chattarget_;
}
inline ::AcFunDanmu::Im::Message::ChatTarget* MessageReceipt::mutable_chattarget() {
  ::AcFunDanmu::Im::Message::ChatTarget* _msg = _internal_mutable_chattarget();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.chatTarget)
  return _msg;
}
inline void MessageReceipt::set_allocated_chattarget(::AcFunDanmu::Im::Message::ChatTarget* chattarget) {
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
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.chatTarget)
}

// .AcFunDanmu.Im.Message.MessageReceiptStatus receiptStatus = 2;
inline bool MessageReceipt::_internal_has_receiptstatus() const {
  return this != internal_default_instance() && _impl_.receiptstatus_ != nullptr;
}
inline bool MessageReceipt::has_receiptstatus() const {
  return _internal_has_receiptstatus();
}
inline const ::AcFunDanmu::Im::Message::MessageReceiptStatus& MessageReceipt::_internal_receiptstatus() const {
  const ::AcFunDanmu::Im::Message::MessageReceiptStatus* p = _impl_.receiptstatus_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Message::MessageReceiptStatus&>(
      ::AcFunDanmu::Im::Message::_MessageReceiptStatus_default_instance_);
}
inline const ::AcFunDanmu::Im::Message::MessageReceiptStatus& MessageReceipt::receiptstatus() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.receiptStatus)
  return _internal_receiptstatus();
}
inline void MessageReceipt::unsafe_arena_set_allocated_receiptstatus(
    ::AcFunDanmu::Im::Message::MessageReceiptStatus* receiptstatus) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.receiptstatus_);
  }
  _impl_.receiptstatus_ = receiptstatus;
  if (receiptstatus) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.receiptStatus)
}
inline ::AcFunDanmu::Im::Message::MessageReceiptStatus* MessageReceipt::release_receiptstatus() {
  
  ::AcFunDanmu::Im::Message::MessageReceiptStatus* temp = _impl_.receiptstatus_;
  _impl_.receiptstatus_ = nullptr;
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
inline ::AcFunDanmu::Im::Message::MessageReceiptStatus* MessageReceipt::unsafe_arena_release_receiptstatus() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.receiptStatus)
  
  ::AcFunDanmu::Im::Message::MessageReceiptStatus* temp = _impl_.receiptstatus_;
  _impl_.receiptstatus_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Message::MessageReceiptStatus* MessageReceipt::_internal_mutable_receiptstatus() {
  
  if (_impl_.receiptstatus_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Message::MessageReceiptStatus>(GetArenaForAllocation());
    _impl_.receiptstatus_ = p;
  }
  return _impl_.receiptstatus_;
}
inline ::AcFunDanmu::Im::Message::MessageReceiptStatus* MessageReceipt::mutable_receiptstatus() {
  ::AcFunDanmu::Im::Message::MessageReceiptStatus* _msg = _internal_mutable_receiptstatus();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.receiptStatus)
  return _msg;
}
inline void MessageReceipt::set_allocated_receiptstatus(::AcFunDanmu::Im::Message::MessageReceiptStatus* receiptstatus) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.receiptstatus_);
  }
  if (receiptstatus) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(receiptstatus));
    if (message_arena != submessage_arena) {
      receiptstatus = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, receiptstatus, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.receiptstatus_ = receiptstatus;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.receiptStatus)
}

// .AcFunDanmu.Im.Basic.User reader = 3;
inline bool MessageReceipt::_internal_has_reader() const {
  return this != internal_default_instance() && _impl_.reader_ != nullptr;
}
inline bool MessageReceipt::has_reader() const {
  return _internal_has_reader();
}
inline const ::AcFunDanmu::Im::Basic::User& MessageReceipt::_internal_reader() const {
  const ::AcFunDanmu::Im::Basic::User* p = _impl_.reader_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::User&>(
      ::AcFunDanmu::Im::Basic::_User_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::User& MessageReceipt::reader() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.reader)
  return _internal_reader();
}
inline void MessageReceipt::unsafe_arena_set_allocated_reader(
    ::AcFunDanmu::Im::Basic::User* reader) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.reader_);
  }
  _impl_.reader_ = reader;
  if (reader) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.reader)
}
inline ::AcFunDanmu::Im::Basic::User* MessageReceipt::release_reader() {
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.reader_;
  _impl_.reader_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::User* MessageReceipt::unsafe_arena_release_reader() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.reader)
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.reader_;
  _impl_.reader_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::User* MessageReceipt::_internal_mutable_reader() {
  
  if (_impl_.reader_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::User>(GetArenaForAllocation());
    _impl_.reader_ = p;
  }
  return _impl_.reader_;
}
inline ::AcFunDanmu::Im::Basic::User* MessageReceipt::mutable_reader() {
  ::AcFunDanmu::Im::Basic::User* _msg = _internal_mutable_reader();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.reader)
  return _msg;
}
inline void MessageReceipt::set_allocated_reader(::AcFunDanmu::Im::Basic::User* reader) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.reader_);
  }
  if (reader) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(reader));
    if (message_arena != submessage_arena) {
      reader = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, reader, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.reader_ = reader;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.MessageReceipt.reader)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MessageReceipt_2eproto
