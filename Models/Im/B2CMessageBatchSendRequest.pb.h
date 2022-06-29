// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CMessageBatchSendRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_B2CMessageBatchSendRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_B2CMessageBatchSendRequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_B2CMessageBatchSendRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_B2CMessageBatchSendRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_B2CMessageBatchSendRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class B2CMessageBatchSendRequest;
struct B2CMessageBatchSendRequestDefaultTypeInternal;
extern B2CMessageBatchSendRequestDefaultTypeInternal _B2CMessageBatchSendRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::B2CMessageBatchSendRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::B2CMessageBatchSendRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CMessageBatchSendRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.B2CMessageBatchSendRequest) */ {
 public:
  inline B2CMessageBatchSendRequest() : B2CMessageBatchSendRequest(nullptr) {}
  ~B2CMessageBatchSendRequest() override;
  explicit PROTOBUF_CONSTEXPR B2CMessageBatchSendRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  B2CMessageBatchSendRequest(const B2CMessageBatchSendRequest& from);
  B2CMessageBatchSendRequest(B2CMessageBatchSendRequest&& from) noexcept
    : B2CMessageBatchSendRequest() {
    *this = ::std::move(from);
  }

  inline B2CMessageBatchSendRequest& operator=(const B2CMessageBatchSendRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline B2CMessageBatchSendRequest& operator=(B2CMessageBatchSendRequest&& from) noexcept {
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
  static const B2CMessageBatchSendRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const B2CMessageBatchSendRequest* internal_default_instance() {
    return reinterpret_cast<const B2CMessageBatchSendRequest*>(
               &_B2CMessageBatchSendRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(B2CMessageBatchSendRequest& a, B2CMessageBatchSendRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(B2CMessageBatchSendRequest* other) {
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
  void UnsafeArenaSwap(B2CMessageBatchSendRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  B2CMessageBatchSendRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<B2CMessageBatchSendRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const B2CMessageBatchSendRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const B2CMessageBatchSendRequest& from) {
    B2CMessageBatchSendRequest::MergeImpl(*this, from);
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
  void InternalSwap(B2CMessageBatchSendRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.B2CMessageBatchSendRequest";
  }
  protected:
  explicit B2CMessageBatchSendRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMessageFieldNumber = 1,
  };
  // repeated .AcFunDanmu.Im.Message.Message message = 1;
  int message_size() const;
  private:
  int _internal_message_size() const;
  public:
  void clear_message();
  ::AcFunDanmu::Im::Message::Message* mutable_message(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message >*
      mutable_message();
  private:
  const ::AcFunDanmu::Im::Message::Message& _internal_message(int index) const;
  ::AcFunDanmu::Im::Message::Message* _internal_add_message();
  public:
  const ::AcFunDanmu::Im::Message::Message& message(int index) const;
  ::AcFunDanmu::Im::Message::Message* add_message();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message >&
      message() const;

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.B2CMessageBatchSendRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message > message_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_B2CMessageBatchSendRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// B2CMessageBatchSendRequest

// repeated .AcFunDanmu.Im.Message.Message message = 1;
inline int B2CMessageBatchSendRequest::_internal_message_size() const {
  return _impl_.message_.size();
}
inline int B2CMessageBatchSendRequest::message_size() const {
  return _internal_message_size();
}
inline ::AcFunDanmu::Im::Message::Message* B2CMessageBatchSendRequest::mutable_message(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.B2CMessageBatchSendRequest.message)
  return _impl_.message_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message >*
B2CMessageBatchSendRequest::mutable_message() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Message.B2CMessageBatchSendRequest.message)
  return &_impl_.message_;
}
inline const ::AcFunDanmu::Im::Message::Message& B2CMessageBatchSendRequest::_internal_message(int index) const {
  return _impl_.message_.Get(index);
}
inline const ::AcFunDanmu::Im::Message::Message& B2CMessageBatchSendRequest::message(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CMessageBatchSendRequest.message)
  return _internal_message(index);
}
inline ::AcFunDanmu::Im::Message::Message* B2CMessageBatchSendRequest::_internal_add_message() {
  return _impl_.message_.Add();
}
inline ::AcFunDanmu::Im::Message::Message* B2CMessageBatchSendRequest::add_message() {
  ::AcFunDanmu::Im::Message::Message* _add = _internal_add_message();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Message.B2CMessageBatchSendRequest.message)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::Message >&
B2CMessageBatchSendRequest::message() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Message.B2CMessageBatchSendRequest.message)
  return _impl_.message_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_B2CMessageBatchSendRequest_2eproto
