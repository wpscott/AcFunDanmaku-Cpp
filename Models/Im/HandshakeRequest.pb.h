// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: HandshakeRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_HandshakeRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_HandshakeRequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_HandshakeRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_HandshakeRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_HandshakeRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Basic {
class HandshakeRequest;
struct HandshakeRequestDefaultTypeInternal;
extern HandshakeRequestDefaultTypeInternal _HandshakeRequest_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Basic::HandshakeRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Basic::HandshakeRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Basic {

// ===================================================================

class HandshakeRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Basic.HandshakeRequest) */ {
 public:
  inline HandshakeRequest() : HandshakeRequest(nullptr) {}
  ~HandshakeRequest() override;
  explicit PROTOBUF_CONSTEXPR HandshakeRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  HandshakeRequest(const HandshakeRequest& from);
  HandshakeRequest(HandshakeRequest&& from) noexcept
    : HandshakeRequest() {
    *this = ::std::move(from);
  }

  inline HandshakeRequest& operator=(const HandshakeRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline HandshakeRequest& operator=(HandshakeRequest&& from) noexcept {
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
  static const HandshakeRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const HandshakeRequest* internal_default_instance() {
    return reinterpret_cast<const HandshakeRequest*>(
               &_HandshakeRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(HandshakeRequest& a, HandshakeRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(HandshakeRequest* other) {
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
  void UnsafeArenaSwap(HandshakeRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  HandshakeRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<HandshakeRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const HandshakeRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const HandshakeRequest& from) {
    HandshakeRequest::MergeImpl(*this, from);
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
  void InternalSwap(HandshakeRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Basic.HandshakeRequest";
  }
  protected:
  explicit HandshakeRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUnknown1FieldNumber = 1,
    kUnknown2FieldNumber = 2,
  };
  // int32 unknown1 = 1;
  void clear_unknown1();
  int32_t unknown1() const;
  void set_unknown1(int32_t value);
  private:
  int32_t _internal_unknown1() const;
  void _internal_set_unknown1(int32_t value);
  public:

  // int32 unknown2 = 2;
  void clear_unknown2();
  int32_t unknown2() const;
  void set_unknown2(int32_t value);
  private:
  int32_t _internal_unknown2() const;
  void _internal_set_unknown2(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Basic.HandshakeRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    int32_t unknown1_;
    int32_t unknown2_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_HandshakeRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// HandshakeRequest

// int32 unknown1 = 1;
inline void HandshakeRequest::clear_unknown1() {
  _impl_.unknown1_ = 0;
}
inline int32_t HandshakeRequest::_internal_unknown1() const {
  return _impl_.unknown1_;
}
inline int32_t HandshakeRequest::unknown1() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.HandshakeRequest.unknown1)
  return _internal_unknown1();
}
inline void HandshakeRequest::_internal_set_unknown1(int32_t value) {
  
  _impl_.unknown1_ = value;
}
inline void HandshakeRequest::set_unknown1(int32_t value) {
  _internal_set_unknown1(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.HandshakeRequest.unknown1)
}

// int32 unknown2 = 2;
inline void HandshakeRequest::clear_unknown2() {
  _impl_.unknown2_ = 0;
}
inline int32_t HandshakeRequest::_internal_unknown2() const {
  return _impl_.unknown2_;
}
inline int32_t HandshakeRequest::unknown2() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.HandshakeRequest.unknown2)
  return _internal_unknown2();
}
inline void HandshakeRequest::_internal_set_unknown2(int32_t value) {
  
  _impl_.unknown2_ = value;
}
inline void HandshakeRequest::set_unknown2(int32_t value) {
  _internal_set_unknown2(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.HandshakeRequest.unknown2)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_HandshakeRequest_2eproto
