// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: WidgetDisplayStyle.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_WidgetDisplayStyle_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_WidgetDisplayStyle_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_WidgetDisplayStyle_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_WidgetDisplayStyle_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_WidgetDisplayStyle_2eproto;
namespace AcFunDanmu {
class WidgetDisplayStyle;
struct WidgetDisplayStyleDefaultTypeInternal;
extern WidgetDisplayStyleDefaultTypeInternal _WidgetDisplayStyle_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::WidgetDisplayStyle* Arena::CreateMaybeMessage<::AcFunDanmu::WidgetDisplayStyle>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class WidgetDisplayStyle final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.WidgetDisplayStyle) */ {
 public:
  inline WidgetDisplayStyle() : WidgetDisplayStyle(nullptr) {}
  ~WidgetDisplayStyle() override;
  explicit PROTOBUF_CONSTEXPR WidgetDisplayStyle(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  WidgetDisplayStyle(const WidgetDisplayStyle& from);
  WidgetDisplayStyle(WidgetDisplayStyle&& from) noexcept
    : WidgetDisplayStyle() {
    *this = ::std::move(from);
  }

  inline WidgetDisplayStyle& operator=(const WidgetDisplayStyle& from) {
    CopyFrom(from);
    return *this;
  }
  inline WidgetDisplayStyle& operator=(WidgetDisplayStyle&& from) noexcept {
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
  static const WidgetDisplayStyle& default_instance() {
    return *internal_default_instance();
  }
  static inline const WidgetDisplayStyle* internal_default_instance() {
    return reinterpret_cast<const WidgetDisplayStyle*>(
               &_WidgetDisplayStyle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(WidgetDisplayStyle& a, WidgetDisplayStyle& b) {
    a.Swap(&b);
  }
  inline void Swap(WidgetDisplayStyle* other) {
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
  void UnsafeArenaSwap(WidgetDisplayStyle* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  WidgetDisplayStyle* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<WidgetDisplayStyle>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const WidgetDisplayStyle& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const WidgetDisplayStyle& from) {
    WidgetDisplayStyle::MergeImpl(*this, from);
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
  void InternalSwap(WidgetDisplayStyle* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.WidgetDisplayStyle";
  }
  protected:
  explicit WidgetDisplayStyle(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kBFieldNumber = 2,
  };
  // bool a = 1;
  void clear_a();
  bool a() const;
  void set_a(bool value);
  private:
  bool _internal_a() const;
  void _internal_set_a(bool value);
  public:

  // bool b = 2;
  void clear_b();
  bool b() const;
  void set_b(bool value);
  private:
  bool _internal_b() const;
  void _internal_set_b(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.WidgetDisplayStyle)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    bool a_;
    bool b_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_WidgetDisplayStyle_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// WidgetDisplayStyle

// bool a = 1;
inline void WidgetDisplayStyle::clear_a() {
  _impl_.a_ = false;
}
inline bool WidgetDisplayStyle::_internal_a() const {
  return _impl_.a_;
}
inline bool WidgetDisplayStyle::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.WidgetDisplayStyle.a)
  return _internal_a();
}
inline void WidgetDisplayStyle::_internal_set_a(bool value) {
  
  _impl_.a_ = value;
}
inline void WidgetDisplayStyle::set_a(bool value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.WidgetDisplayStyle.a)
}

// bool b = 2;
inline void WidgetDisplayStyle::clear_b() {
  _impl_.b_ = false;
}
inline bool WidgetDisplayStyle::_internal_b() const {
  return _impl_.b_;
}
inline bool WidgetDisplayStyle::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.WidgetDisplayStyle.b)
  return _internal_b();
}
inline void WidgetDisplayStyle::_internal_set_b(bool value) {
  
  _impl_.b_ = value;
}
inline void WidgetDisplayStyle::set_b(bool value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.WidgetDisplayStyle.b)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_WidgetDisplayStyle_2eproto
