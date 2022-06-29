// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ImcReplaceMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ImcReplaceMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ImcReplaceMessage_2eproto

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
#include "Message.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ImcReplaceMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ImcReplaceMessage_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ImcReplaceMessage_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class ImcReplaceMessage;
struct ImcReplaceMessageDefaultTypeInternal;
extern ImcReplaceMessageDefaultTypeInternal _ImcReplaceMessage_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::ImcReplaceMessage* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::ImcReplaceMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class ImcReplaceMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage) */ {
 public:
  inline ImcReplaceMessage() : ImcReplaceMessage(nullptr) {}
  ~ImcReplaceMessage() override;
  explicit PROTOBUF_CONSTEXPR ImcReplaceMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ImcReplaceMessage(const ImcReplaceMessage& from);
  ImcReplaceMessage(ImcReplaceMessage&& from) noexcept
    : ImcReplaceMessage() {
    *this = ::std::move(from);
  }

  inline ImcReplaceMessage& operator=(const ImcReplaceMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline ImcReplaceMessage& operator=(ImcReplaceMessage&& from) noexcept {
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
  static const ImcReplaceMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const ImcReplaceMessage* internal_default_instance() {
    return reinterpret_cast<const ImcReplaceMessage*>(
               &_ImcReplaceMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ImcReplaceMessage& a, ImcReplaceMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(ImcReplaceMessage* other) {
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
  void UnsafeArenaSwap(ImcReplaceMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ImcReplaceMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ImcReplaceMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ImcReplaceMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ImcReplaceMessage& from) {
    ImcReplaceMessage::MergeImpl(*this, from);
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
  void InternalSwap(ImcReplaceMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage";
  }
  protected:
  explicit ImcReplaceMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kReplaceMsgFieldNumber = 1,
    kOriginMsgNotCountUnreadFieldNumber = 2,
  };
  // .AcFunDanmu.Im.Message.Message replaceMsg = 1;
  bool has_replacemsg() const;
  private:
  bool _internal_has_replacemsg() const;
  public:
  void clear_replacemsg();
  const ::AcFunDanmu::Im::Message::Message& replacemsg() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Message::Message* release_replacemsg();
  ::AcFunDanmu::Im::Message::Message* mutable_replacemsg();
  void set_allocated_replacemsg(::AcFunDanmu::Im::Message::Message* replacemsg);
  private:
  const ::AcFunDanmu::Im::Message::Message& _internal_replacemsg() const;
  ::AcFunDanmu::Im::Message::Message* _internal_mutable_replacemsg();
  public:
  void unsafe_arena_set_allocated_replacemsg(
      ::AcFunDanmu::Im::Message::Message* replacemsg);
  ::AcFunDanmu::Im::Message::Message* unsafe_arena_release_replacemsg();

  // bool originMsgNotCountUnread = 2;
  void clear_originmsgnotcountunread();
  bool originmsgnotcountunread() const;
  void set_originmsgnotcountunread(bool value);
  private:
  bool _internal_originmsgnotcountunread() const;
  void _internal_set_originmsgnotcountunread(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Message::Message* replacemsg_;
    bool originmsgnotcountunread_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ImcReplaceMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ImcReplaceMessage

// .AcFunDanmu.Im.Message.Message replaceMsg = 1;
inline bool ImcReplaceMessage::_internal_has_replacemsg() const {
  return this != internal_default_instance() && _impl_.replacemsg_ != nullptr;
}
inline bool ImcReplaceMessage::has_replacemsg() const {
  return _internal_has_replacemsg();
}
inline const ::AcFunDanmu::Im::Message::Message& ImcReplaceMessage::_internal_replacemsg() const {
  const ::AcFunDanmu::Im::Message::Message* p = _impl_.replacemsg_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Message::Message&>(
      ::AcFunDanmu::Im::Message::_Message_default_instance_);
}
inline const ::AcFunDanmu::Im::Message::Message& ImcReplaceMessage::replacemsg() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage.replaceMsg)
  return _internal_replacemsg();
}
inline void ImcReplaceMessage::unsafe_arena_set_allocated_replacemsg(
    ::AcFunDanmu::Im::Message::Message* replacemsg) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.replacemsg_);
  }
  _impl_.replacemsg_ = replacemsg;
  if (replacemsg) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage.replaceMsg)
}
inline ::AcFunDanmu::Im::Message::Message* ImcReplaceMessage::release_replacemsg() {
  
  ::AcFunDanmu::Im::Message::Message* temp = _impl_.replacemsg_;
  _impl_.replacemsg_ = nullptr;
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
inline ::AcFunDanmu::Im::Message::Message* ImcReplaceMessage::unsafe_arena_release_replacemsg() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage.replaceMsg)
  
  ::AcFunDanmu::Im::Message::Message* temp = _impl_.replacemsg_;
  _impl_.replacemsg_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Message::Message* ImcReplaceMessage::_internal_mutable_replacemsg() {
  
  if (_impl_.replacemsg_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Message::Message>(GetArenaForAllocation());
    _impl_.replacemsg_ = p;
  }
  return _impl_.replacemsg_;
}
inline ::AcFunDanmu::Im::Message::Message* ImcReplaceMessage::mutable_replacemsg() {
  ::AcFunDanmu::Im::Message::Message* _msg = _internal_mutable_replacemsg();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage.replaceMsg)
  return _msg;
}
inline void ImcReplaceMessage::set_allocated_replacemsg(::AcFunDanmu::Im::Message::Message* replacemsg) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.replacemsg_);
  }
  if (replacemsg) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(replacemsg));
    if (message_arena != submessage_arena) {
      replacemsg = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, replacemsg, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.replacemsg_ = replacemsg;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage.replaceMsg)
}

// bool originMsgNotCountUnread = 2;
inline void ImcReplaceMessage::clear_originmsgnotcountunread() {
  _impl_.originmsgnotcountunread_ = false;
}
inline bool ImcReplaceMessage::_internal_originmsgnotcountunread() const {
  return _impl_.originmsgnotcountunread_;
}
inline bool ImcReplaceMessage::originmsgnotcountunread() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage.originMsgNotCountUnread)
  return _internal_originmsgnotcountunread();
}
inline void ImcReplaceMessage::_internal_set_originmsgnotcountunread(bool value) {
  
  _impl_.originmsgnotcountunread_ = value;
}
inline void ImcReplaceMessage::set_originmsgnotcountunread(bool value) {
  _internal_set_originmsgnotcountunread(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.ImcReplaceMessage.originMsgNotCountUnread)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ImcReplaceMessage_2eproto