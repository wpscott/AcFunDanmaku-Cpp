// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClickStatus.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ClickStatus_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ClickStatus_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ClickStatus_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ClickStatus_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ClickStatus_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class ClickStatus;
struct ClickStatusDefaultTypeInternal;
extern ClickStatusDefaultTypeInternal _ClickStatus_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::ClickStatus* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::ClickStatus>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class ClickStatus final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.ClickStatus) */ {
 public:
  inline ClickStatus() : ClickStatus(nullptr) {}
  ~ClickStatus() override;
  explicit PROTOBUF_CONSTEXPR ClickStatus(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ClickStatus(const ClickStatus& from);
  ClickStatus(ClickStatus&& from) noexcept
    : ClickStatus() {
    *this = ::std::move(from);
  }

  inline ClickStatus& operator=(const ClickStatus& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClickStatus& operator=(ClickStatus&& from) noexcept {
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
  static const ClickStatus& default_instance() {
    return *internal_default_instance();
  }
  static inline const ClickStatus* internal_default_instance() {
    return reinterpret_cast<const ClickStatus*>(
               &_ClickStatus_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ClickStatus& a, ClickStatus& b) {
    a.Swap(&b);
  }
  inline void Swap(ClickStatus* other) {
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
  void UnsafeArenaSwap(ClickStatus* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ClickStatus* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ClickStatus>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ClickStatus& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ClickStatus& from) {
    ClickStatus::MergeImpl(*this, from);
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
  void InternalSwap(ClickStatus* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.ClickStatus";
  }
  protected:
  explicit ClickStatus(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSeqIdFieldNumber = 1,
    kClickedFieldNumber = 2,
  };
  // int64 seqId = 1;
  void clear_seqid();
  int64_t seqid() const;
  void set_seqid(int64_t value);
  private:
  int64_t _internal_seqid() const;
  void _internal_set_seqid(int64_t value);
  public:

  // bool clicked = 2;
  void clear_clicked();
  bool clicked() const;
  void set_clicked(bool value);
  private:
  bool _internal_clicked() const;
  void _internal_set_clicked(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.ClickStatus)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int64_t seqid_;
    bool clicked_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ClickStatus_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClickStatus

// int64 seqId = 1;
inline void ClickStatus::clear_seqid() {
  _impl_.seqid_ = int64_t{0};
}
inline int64_t ClickStatus::_internal_seqid() const {
  return _impl_.seqid_;
}
inline int64_t ClickStatus::seqid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.ClickStatus.seqId)
  return _internal_seqid();
}
inline void ClickStatus::_internal_set_seqid(int64_t value) {
  
  _impl_.seqid_ = value;
}
inline void ClickStatus::set_seqid(int64_t value) {
  _internal_set_seqid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.ClickStatus.seqId)
}

// bool clicked = 2;
inline void ClickStatus::clear_clicked() {
  _impl_.clicked_ = false;
}
inline bool ClickStatus::_internal_clicked() const {
  return _impl_.clicked_;
}
inline bool ClickStatus::clicked() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.ClickStatus.clicked)
  return _internal_clicked();
}
inline void ClickStatus::_internal_set_clicked(bool value) {
  
  _impl_.clicked_ = value;
}
inline void ClickStatus::set_clicked(bool value) {
  _internal_set_clicked(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.ClickStatus.clicked)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ClickStatus_2eproto
