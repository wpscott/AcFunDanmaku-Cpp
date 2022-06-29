// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: BackgroundStyle.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_BackgroundStyle_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_BackgroundStyle_2eproto

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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "ImageCdnNode.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_BackgroundStyle_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_BackgroundStyle_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_BackgroundStyle_2eproto;
namespace AcFunDanmu {
class BackgroundStyle;
struct BackgroundStyleDefaultTypeInternal;
extern BackgroundStyleDefaultTypeInternal _BackgroundStyle_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::BackgroundStyle* Arena::CreateMaybeMessage<::AcFunDanmu::BackgroundStyle>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum BackgroundStyle_unknown : int {
  BackgroundStyle_unknown_c = 0,
  BackgroundStyle_unknown_d = 1,
  BackgroundStyle_unknown_e = 2,
  BackgroundStyle_unknown_BackgroundStyle_unknown_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  BackgroundStyle_unknown_BackgroundStyle_unknown_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool BackgroundStyle_unknown_IsValid(int value);
constexpr BackgroundStyle_unknown BackgroundStyle_unknown_unknown_MIN = BackgroundStyle_unknown_c;
constexpr BackgroundStyle_unknown BackgroundStyle_unknown_unknown_MAX = BackgroundStyle_unknown_e;
constexpr int BackgroundStyle_unknown_unknown_ARRAYSIZE = BackgroundStyle_unknown_unknown_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* BackgroundStyle_unknown_descriptor();
template<typename T>
inline const std::string& BackgroundStyle_unknown_Name(T enum_t_value) {
  static_assert(::std::is_same<T, BackgroundStyle_unknown>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function BackgroundStyle_unknown_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    BackgroundStyle_unknown_descriptor(), enum_t_value);
}
inline bool BackgroundStyle_unknown_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, BackgroundStyle_unknown* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<BackgroundStyle_unknown>(
    BackgroundStyle_unknown_descriptor(), name, value);
}
// ===================================================================

class BackgroundStyle final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.BackgroundStyle) */ {
 public:
  inline BackgroundStyle() : BackgroundStyle(nullptr) {}
  ~BackgroundStyle() override;
  explicit PROTOBUF_CONSTEXPR BackgroundStyle(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  BackgroundStyle(const BackgroundStyle& from);
  BackgroundStyle(BackgroundStyle&& from) noexcept
    : BackgroundStyle() {
    *this = ::std::move(from);
  }

  inline BackgroundStyle& operator=(const BackgroundStyle& from) {
    CopyFrom(from);
    return *this;
  }
  inline BackgroundStyle& operator=(BackgroundStyle&& from) noexcept {
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
  static const BackgroundStyle& default_instance() {
    return *internal_default_instance();
  }
  static inline const BackgroundStyle* internal_default_instance() {
    return reinterpret_cast<const BackgroundStyle*>(
               &_BackgroundStyle_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(BackgroundStyle& a, BackgroundStyle& b) {
    a.Swap(&b);
  }
  inline void Swap(BackgroundStyle* other) {
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
  void UnsafeArenaSwap(BackgroundStyle* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  BackgroundStyle* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<BackgroundStyle>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const BackgroundStyle& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const BackgroundStyle& from) {
    BackgroundStyle::MergeImpl(*this, from);
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
  void InternalSwap(BackgroundStyle* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.BackgroundStyle";
  }
  protected:
  explicit BackgroundStyle(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef BackgroundStyle_unknown unknown;
  static constexpr unknown c =
    BackgroundStyle_unknown_c;
  static constexpr unknown d =
    BackgroundStyle_unknown_d;
  static constexpr unknown e =
    BackgroundStyle_unknown_e;
  static inline bool unknown_IsValid(int value) {
    return BackgroundStyle_unknown_IsValid(value);
  }
  static constexpr unknown unknown_MIN =
    BackgroundStyle_unknown_unknown_MIN;
  static constexpr unknown unknown_MAX =
    BackgroundStyle_unknown_unknown_MAX;
  static constexpr int unknown_ARRAYSIZE =
    BackgroundStyle_unknown_unknown_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  unknown_descriptor() {
    return BackgroundStyle_unknown_descriptor();
  }
  template<typename T>
  static inline const std::string& unknown_Name(T enum_t_value) {
    static_assert(::std::is_same<T, unknown>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function unknown_Name.");
    return BackgroundStyle_unknown_Name(enum_t_value);
  }
  static inline bool unknown_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      unknown* value) {
    return BackgroundStyle_unknown_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kBFieldNumber = 2,
    kAFieldNumber = 1,
  };
  // repeated .AcFunDanmu.ImageCdnNode b = 2;
  int b_size() const;
  private:
  int _internal_b_size() const;
  public:
  void clear_b();
  ::AcFunDanmu::ImageCdnNode* mutable_b(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >*
      mutable_b();
  private:
  const ::AcFunDanmu::ImageCdnNode& _internal_b(int index) const;
  ::AcFunDanmu::ImageCdnNode* _internal_add_b();
  public:
  const ::AcFunDanmu::ImageCdnNode& b(int index) const;
  ::AcFunDanmu::ImageCdnNode* add_b();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >&
      b() const;

  // string a = 1;
  void clear_a();
  const std::string& a() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_a(ArgT0&& arg0, ArgT... args);
  std::string* mutable_a();
  PROTOBUF_NODISCARD std::string* release_a();
  void set_allocated_a(std::string* a);
  private:
  const std::string& _internal_a() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_a(const std::string& value);
  std::string* _internal_mutable_a();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.BackgroundStyle)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode > b_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr a_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_BackgroundStyle_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// BackgroundStyle

// string a = 1;
inline void BackgroundStyle::clear_a() {
  _impl_.a_.ClearToEmpty();
}
inline const std::string& BackgroundStyle::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.BackgroundStyle.a)
  return _internal_a();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void BackgroundStyle::set_a(ArgT0&& arg0, ArgT... args) {
 
 _impl_.a_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.BackgroundStyle.a)
}
inline std::string* BackgroundStyle::mutable_a() {
  std::string* _s = _internal_mutable_a();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.BackgroundStyle.a)
  return _s;
}
inline const std::string& BackgroundStyle::_internal_a() const {
  return _impl_.a_.Get();
}
inline void BackgroundStyle::_internal_set_a(const std::string& value) {
  
  _impl_.a_.Set(value, GetArenaForAllocation());
}
inline std::string* BackgroundStyle::_internal_mutable_a() {
  
  return _impl_.a_.Mutable(GetArenaForAllocation());
}
inline std::string* BackgroundStyle::release_a() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.BackgroundStyle.a)
  return _impl_.a_.Release();
}
inline void BackgroundStyle::set_allocated_a(std::string* a) {
  if (a != nullptr) {
    
  } else {
    
  }
  _impl_.a_.SetAllocated(a, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.a_.IsDefault()) {
    _impl_.a_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.BackgroundStyle.a)
}

// repeated .AcFunDanmu.ImageCdnNode b = 2;
inline int BackgroundStyle::_internal_b_size() const {
  return _impl_.b_.size();
}
inline int BackgroundStyle::b_size() const {
  return _internal_b_size();
}
inline ::AcFunDanmu::ImageCdnNode* BackgroundStyle::mutable_b(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.BackgroundStyle.b)
  return _impl_.b_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >*
BackgroundStyle::mutable_b() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.BackgroundStyle.b)
  return &_impl_.b_;
}
inline const ::AcFunDanmu::ImageCdnNode& BackgroundStyle::_internal_b(int index) const {
  return _impl_.b_.Get(index);
}
inline const ::AcFunDanmu::ImageCdnNode& BackgroundStyle::b(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.BackgroundStyle.b)
  return _internal_b(index);
}
inline ::AcFunDanmu::ImageCdnNode* BackgroundStyle::_internal_add_b() {
  return _impl_.b_.Add();
}
inline ::AcFunDanmu::ImageCdnNode* BackgroundStyle::add_b() {
  ::AcFunDanmu::ImageCdnNode* _add = _internal_add_b();
  // @@protoc_insertion_point(field_add:AcFunDanmu.BackgroundStyle.b)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >&
BackgroundStyle::b() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.BackgroundStyle.b)
  return _impl_.b_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::BackgroundStyle_unknown> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::BackgroundStyle_unknown>() {
  return ::AcFunDanmu::BackgroundStyle_unknown_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_BackgroundStyle_2eproto