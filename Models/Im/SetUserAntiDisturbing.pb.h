// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SetUserAntiDisturbing.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SetUserAntiDisturbing_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SetUserAntiDisturbing_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_SetUserAntiDisturbing_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SetUserAntiDisturbing_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SetUserAntiDisturbing_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class SetUserAntiDisturbing;
struct SetUserAntiDisturbingDefaultTypeInternal;
extern SetUserAntiDisturbingDefaultTypeInternal _SetUserAntiDisturbing_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::SetUserAntiDisturbing* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::SetUserAntiDisturbing>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class SetUserAntiDisturbing final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.SetUserAntiDisturbing) */ {
 public:
  inline SetUserAntiDisturbing() : SetUserAntiDisturbing(nullptr) {}
  ~SetUserAntiDisturbing() override;
  explicit PROTOBUF_CONSTEXPR SetUserAntiDisturbing(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SetUserAntiDisturbing(const SetUserAntiDisturbing& from);
  SetUserAntiDisturbing(SetUserAntiDisturbing&& from) noexcept
    : SetUserAntiDisturbing() {
    *this = ::std::move(from);
  }

  inline SetUserAntiDisturbing& operator=(const SetUserAntiDisturbing& from) {
    CopyFrom(from);
    return *this;
  }
  inline SetUserAntiDisturbing& operator=(SetUserAntiDisturbing&& from) noexcept {
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
  static const SetUserAntiDisturbing& default_instance() {
    return *internal_default_instance();
  }
  static inline const SetUserAntiDisturbing* internal_default_instance() {
    return reinterpret_cast<const SetUserAntiDisturbing*>(
               &_SetUserAntiDisturbing_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SetUserAntiDisturbing& a, SetUserAntiDisturbing& b) {
    a.Swap(&b);
  }
  inline void Swap(SetUserAntiDisturbing* other) {
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
  void UnsafeArenaSwap(SetUserAntiDisturbing* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SetUserAntiDisturbing* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SetUserAntiDisturbing>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SetUserAntiDisturbing& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SetUserAntiDisturbing& from) {
    SetUserAntiDisturbing::MergeImpl(*this, from);
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
  void InternalSwap(SetUserAntiDisturbing* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.SetUserAntiDisturbing";
  }
  protected:
  explicit SetUserAntiDisturbing(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kAntiDisturbingFieldNumber = 1,
  };
  // bool antiDisturbing = 1;
  void clear_antidisturbing();
  bool antidisturbing() const;
  void set_antidisturbing(bool value);
  private:
  bool _internal_antidisturbing() const;
  void _internal_set_antidisturbing(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.SetUserAntiDisturbing)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    bool antidisturbing_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SetUserAntiDisturbing_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SetUserAntiDisturbing

// bool antiDisturbing = 1;
inline void SetUserAntiDisturbing::clear_antidisturbing() {
  _impl_.antidisturbing_ = false;
}
inline bool SetUserAntiDisturbing::_internal_antidisturbing() const {
  return _impl_.antidisturbing_;
}
inline bool SetUserAntiDisturbing::antidisturbing() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.SetUserAntiDisturbing.antiDisturbing)
  return _internal_antidisturbing();
}
inline void SetUserAntiDisturbing::_internal_set_antidisturbing(bool value) {
  
  _impl_.antidisturbing_ = value;
}
inline void SetUserAntiDisturbing::set_antidisturbing(bool value) {
  _internal_set_antidisturbing(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.SetUserAntiDisturbing.antiDisturbing)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SetUserAntiDisturbing_2eproto
