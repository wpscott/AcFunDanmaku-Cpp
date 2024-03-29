// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MessageRangeIndex.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MessageRangeIndex_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MessageRangeIndex_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_MessageRangeIndex_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MessageRangeIndex_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MessageRangeIndex_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class MessageRangeIndex;
struct MessageRangeIndexDefaultTypeInternal;
extern MessageRangeIndexDefaultTypeInternal _MessageRangeIndex_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::MessageRangeIndex* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::MessageRangeIndex>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class MessageRangeIndex final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.MessageRangeIndex) */ {
 public:
  inline MessageRangeIndex() : MessageRangeIndex(nullptr) {}
  ~MessageRangeIndex() override;
  explicit PROTOBUF_CONSTEXPR MessageRangeIndex(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MessageRangeIndex(const MessageRangeIndex& from);
  MessageRangeIndex(MessageRangeIndex&& from) noexcept
    : MessageRangeIndex() {
    *this = ::std::move(from);
  }

  inline MessageRangeIndex& operator=(const MessageRangeIndex& from) {
    CopyFrom(from);
    return *this;
  }
  inline MessageRangeIndex& operator=(MessageRangeIndex&& from) noexcept {
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
  static const MessageRangeIndex& default_instance() {
    return *internal_default_instance();
  }
  static inline const MessageRangeIndex* internal_default_instance() {
    return reinterpret_cast<const MessageRangeIndex*>(
               &_MessageRangeIndex_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MessageRangeIndex& a, MessageRangeIndex& b) {
    a.Swap(&b);
  }
  inline void Swap(MessageRangeIndex* other) {
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
  void UnsafeArenaSwap(MessageRangeIndex* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MessageRangeIndex* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MessageRangeIndex>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MessageRangeIndex& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MessageRangeIndex& from) {
    MessageRangeIndex::MergeImpl(*this, from);
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
  void InternalSwap(MessageRangeIndex* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.MessageRangeIndex";
  }
  protected:
  explicit MessageRangeIndex(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kDayTimeFieldNumber = 1,
    kSeqIdMinFieldNumber = 2,
    kSeqIdMaxFieldNumber = 3,
  };
  // int64 dayTime = 1;
  void clear_daytime();
  int64_t daytime() const;
  void set_daytime(int64_t value);
  private:
  int64_t _internal_daytime() const;
  void _internal_set_daytime(int64_t value);
  public:

  // int64 seqIdMin = 2;
  void clear_seqidmin();
  int64_t seqidmin() const;
  void set_seqidmin(int64_t value);
  private:
  int64_t _internal_seqidmin() const;
  void _internal_set_seqidmin(int64_t value);
  public:

  // int64 seqIdMax = 3;
  void clear_seqidmax();
  int64_t seqidmax() const;
  void set_seqidmax(int64_t value);
  private:
  int64_t _internal_seqidmax() const;
  void _internal_set_seqidmax(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.MessageRangeIndex)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t daytime_;
    int64_t seqidmin_;
    int64_t seqidmax_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MessageRangeIndex_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MessageRangeIndex

// int64 dayTime = 1;
inline void MessageRangeIndex::clear_daytime() {
  _impl_.daytime_ = int64_t{0};
}
inline int64_t MessageRangeIndex::_internal_daytime() const {
  return _impl_.daytime_;
}
inline int64_t MessageRangeIndex::daytime() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageRangeIndex.dayTime)
  return _internal_daytime();
}
inline void MessageRangeIndex::_internal_set_daytime(int64_t value) {
  
  _impl_.daytime_ = value;
}
inline void MessageRangeIndex::set_daytime(int64_t value) {
  _internal_set_daytime(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.MessageRangeIndex.dayTime)
}

// int64 seqIdMin = 2;
inline void MessageRangeIndex::clear_seqidmin() {
  _impl_.seqidmin_ = int64_t{0};
}
inline int64_t MessageRangeIndex::_internal_seqidmin() const {
  return _impl_.seqidmin_;
}
inline int64_t MessageRangeIndex::seqidmin() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageRangeIndex.seqIdMin)
  return _internal_seqidmin();
}
inline void MessageRangeIndex::_internal_set_seqidmin(int64_t value) {
  
  _impl_.seqidmin_ = value;
}
inline void MessageRangeIndex::set_seqidmin(int64_t value) {
  _internal_set_seqidmin(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.MessageRangeIndex.seqIdMin)
}

// int64 seqIdMax = 3;
inline void MessageRangeIndex::clear_seqidmax() {
  _impl_.seqidmax_ = int64_t{0};
}
inline int64_t MessageRangeIndex::_internal_seqidmax() const {
  return _impl_.seqidmax_;
}
inline int64_t MessageRangeIndex::seqidmax() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.MessageRangeIndex.seqIdMax)
  return _internal_seqidmax();
}
inline void MessageRangeIndex::_internal_set_seqidmax(int64_t value) {
  
  _impl_.seqidmax_ = value;
}
inline void MessageRangeIndex::set_seqidmax(int64_t value) {
  _internal_set_seqidmax(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.MessageRangeIndex.seqIdMax)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MessageRangeIndex_2eproto
