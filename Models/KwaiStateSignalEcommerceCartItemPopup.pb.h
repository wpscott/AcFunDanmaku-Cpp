// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KwaiStateSignalEcommerceCartItemPopup.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_KwaiStateSignalEcommerceCartItemPopup_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_KwaiStateSignalEcommerceCartItemPopup_2eproto

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
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_KwaiStateSignalEcommerceCartItemPopup_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_KwaiStateSignalEcommerceCartItemPopup_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_KwaiStateSignalEcommerceCartItemPopup_2eproto;
namespace AcFunDanmu {
class KwaiStateSignalEcommerceCartItemPopup;
struct KwaiStateSignalEcommerceCartItemPopupDefaultTypeInternal;
extern KwaiStateSignalEcommerceCartItemPopupDefaultTypeInternal _KwaiStateSignalEcommerceCartItemPopup_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup* Arena::CreateMaybeMessage<::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum KwaiStateSignalEcommerceCartItemPopup_unknown : int {
  KwaiStateSignalEcommerceCartItemPopup_unknown_f = 0,
  KwaiStateSignalEcommerceCartItemPopup_unknown_g = 1,
  KwaiStateSignalEcommerceCartItemPopup_unknown_KwaiStateSignalEcommerceCartItemPopup_unknown_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  KwaiStateSignalEcommerceCartItemPopup_unknown_KwaiStateSignalEcommerceCartItemPopup_unknown_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool KwaiStateSignalEcommerceCartItemPopup_unknown_IsValid(int value);
constexpr KwaiStateSignalEcommerceCartItemPopup_unknown KwaiStateSignalEcommerceCartItemPopup_unknown_unknown_MIN = KwaiStateSignalEcommerceCartItemPopup_unknown_f;
constexpr KwaiStateSignalEcommerceCartItemPopup_unknown KwaiStateSignalEcommerceCartItemPopup_unknown_unknown_MAX = KwaiStateSignalEcommerceCartItemPopup_unknown_g;
constexpr int KwaiStateSignalEcommerceCartItemPopup_unknown_unknown_ARRAYSIZE = KwaiStateSignalEcommerceCartItemPopup_unknown_unknown_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* KwaiStateSignalEcommerceCartItemPopup_unknown_descriptor();
template<typename T>
inline const std::string& KwaiStateSignalEcommerceCartItemPopup_unknown_Name(T enum_t_value) {
  static_assert(::std::is_same<T, KwaiStateSignalEcommerceCartItemPopup_unknown>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function KwaiStateSignalEcommerceCartItemPopup_unknown_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    KwaiStateSignalEcommerceCartItemPopup_unknown_descriptor(), enum_t_value);
}
inline bool KwaiStateSignalEcommerceCartItemPopup_unknown_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, KwaiStateSignalEcommerceCartItemPopup_unknown* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<KwaiStateSignalEcommerceCartItemPopup_unknown>(
    KwaiStateSignalEcommerceCartItemPopup_unknown_descriptor(), name, value);
}
// ===================================================================

class KwaiStateSignalEcommerceCartItemPopup final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup) */ {
 public:
  inline KwaiStateSignalEcommerceCartItemPopup() : KwaiStateSignalEcommerceCartItemPopup(nullptr) {}
  ~KwaiStateSignalEcommerceCartItemPopup() override;
  explicit PROTOBUF_CONSTEXPR KwaiStateSignalEcommerceCartItemPopup(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  KwaiStateSignalEcommerceCartItemPopup(const KwaiStateSignalEcommerceCartItemPopup& from);
  KwaiStateSignalEcommerceCartItemPopup(KwaiStateSignalEcommerceCartItemPopup&& from) noexcept
    : KwaiStateSignalEcommerceCartItemPopup() {
    *this = ::std::move(from);
  }

  inline KwaiStateSignalEcommerceCartItemPopup& operator=(const KwaiStateSignalEcommerceCartItemPopup& from) {
    CopyFrom(from);
    return *this;
  }
  inline KwaiStateSignalEcommerceCartItemPopup& operator=(KwaiStateSignalEcommerceCartItemPopup&& from) noexcept {
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
  static const KwaiStateSignalEcommerceCartItemPopup& default_instance() {
    return *internal_default_instance();
  }
  static inline const KwaiStateSignalEcommerceCartItemPopup* internal_default_instance() {
    return reinterpret_cast<const KwaiStateSignalEcommerceCartItemPopup*>(
               &_KwaiStateSignalEcommerceCartItemPopup_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KwaiStateSignalEcommerceCartItemPopup& a, KwaiStateSignalEcommerceCartItemPopup& b) {
    a.Swap(&b);
  }
  inline void Swap(KwaiStateSignalEcommerceCartItemPopup* other) {
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
  void UnsafeArenaSwap(KwaiStateSignalEcommerceCartItemPopup* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  KwaiStateSignalEcommerceCartItemPopup* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<KwaiStateSignalEcommerceCartItemPopup>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const KwaiStateSignalEcommerceCartItemPopup& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const KwaiStateSignalEcommerceCartItemPopup& from) {
    KwaiStateSignalEcommerceCartItemPopup::MergeImpl(*this, from);
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
  void InternalSwap(KwaiStateSignalEcommerceCartItemPopup* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup";
  }
  protected:
  explicit KwaiStateSignalEcommerceCartItemPopup(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef KwaiStateSignalEcommerceCartItemPopup_unknown unknown;
  static constexpr unknown f =
    KwaiStateSignalEcommerceCartItemPopup_unknown_f;
  static constexpr unknown g =
    KwaiStateSignalEcommerceCartItemPopup_unknown_g;
  static inline bool unknown_IsValid(int value) {
    return KwaiStateSignalEcommerceCartItemPopup_unknown_IsValid(value);
  }
  static constexpr unknown unknown_MIN =
    KwaiStateSignalEcommerceCartItemPopup_unknown_unknown_MIN;
  static constexpr unknown unknown_MAX =
    KwaiStateSignalEcommerceCartItemPopup_unknown_unknown_MAX;
  static constexpr int unknown_ARRAYSIZE =
    KwaiStateSignalEcommerceCartItemPopup_unknown_unknown_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  unknown_descriptor() {
    return KwaiStateSignalEcommerceCartItemPopup_unknown_descriptor();
  }
  template<typename T>
  static inline const std::string& unknown_Name(T enum_t_value) {
    static_assert(::std::is_same<T, unknown>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function unknown_Name.");
    return KwaiStateSignalEcommerceCartItemPopup_unknown_Name(enum_t_value);
  }
  static inline bool unknown_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      unknown* value) {
    return KwaiStateSignalEcommerceCartItemPopup_unknown_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kBFieldNumber = 2,
    kCFieldNumber = 3,
    kDFieldNumber = 4,
    kEFieldNumber = 5,
    kAFieldNumber = 1,
  };
  // string b = 2;
  void clear_b();
  const std::string& b() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_b(ArgT0&& arg0, ArgT... args);
  std::string* mutable_b();
  PROTOBUF_NODISCARD std::string* release_b();
  void set_allocated_b(std::string* b);
  private:
  const std::string& _internal_b() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_b(const std::string& value);
  std::string* _internal_mutable_b();
  public:

  // string c = 3;
  void clear_c();
  const std::string& c() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_c(ArgT0&& arg0, ArgT... args);
  std::string* mutable_c();
  PROTOBUF_NODISCARD std::string* release_c();
  void set_allocated_c(std::string* c);
  private:
  const std::string& _internal_c() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_c(const std::string& value);
  std::string* _internal_mutable_c();
  public:

  // string d = 4;
  void clear_d();
  const std::string& d() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_d(ArgT0&& arg0, ArgT... args);
  std::string* mutable_d();
  PROTOBUF_NODISCARD std::string* release_d();
  void set_allocated_d(std::string* d);
  private:
  const std::string& _internal_d() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_d(const std::string& value);
  std::string* _internal_mutable_d();
  public:

  // string e = 5;
  void clear_e();
  const std::string& e() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_e(ArgT0&& arg0, ArgT... args);
  std::string* mutable_e();
  PROTOBUF_NODISCARD std::string* release_e();
  void set_allocated_e(std::string* e);
  private:
  const std::string& _internal_e() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_e(const std::string& value);
  std::string* _internal_mutable_e();
  public:

  // .AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.unknown a = 1;
  void clear_a();
  ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown a() const;
  void set_a(::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown value);
  private:
  ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown _internal_a() const;
  void _internal_set_a(::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr b_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr c_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr d_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr e_;
    int a_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_KwaiStateSignalEcommerceCartItemPopup_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KwaiStateSignalEcommerceCartItemPopup

// .AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.unknown a = 1;
inline void KwaiStateSignalEcommerceCartItemPopup::clear_a() {
  _impl_.a_ = 0;
}
inline ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown KwaiStateSignalEcommerceCartItemPopup::_internal_a() const {
  return static_cast< ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown >(_impl_.a_);
}
inline ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown KwaiStateSignalEcommerceCartItemPopup::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.a)
  return _internal_a();
}
inline void KwaiStateSignalEcommerceCartItemPopup::_internal_set_a(::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown value) {
  
  _impl_.a_ = value;
}
inline void KwaiStateSignalEcommerceCartItemPopup::set_a(::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.a)
}

// string b = 2;
inline void KwaiStateSignalEcommerceCartItemPopup::clear_b() {
  _impl_.b_.ClearToEmpty();
}
inline const std::string& KwaiStateSignalEcommerceCartItemPopup::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.b)
  return _internal_b();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void KwaiStateSignalEcommerceCartItemPopup::set_b(ArgT0&& arg0, ArgT... args) {
 
 _impl_.b_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.b)
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::mutable_b() {
  std::string* _s = _internal_mutable_b();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.b)
  return _s;
}
inline const std::string& KwaiStateSignalEcommerceCartItemPopup::_internal_b() const {
  return _impl_.b_.Get();
}
inline void KwaiStateSignalEcommerceCartItemPopup::_internal_set_b(const std::string& value) {
  
  _impl_.b_.Set(value, GetArenaForAllocation());
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::_internal_mutable_b() {
  
  return _impl_.b_.Mutable(GetArenaForAllocation());
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::release_b() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.b)
  return _impl_.b_.Release();
}
inline void KwaiStateSignalEcommerceCartItemPopup::set_allocated_b(std::string* b) {
  if (b != nullptr) {
    
  } else {
    
  }
  _impl_.b_.SetAllocated(b, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.b_.IsDefault()) {
    _impl_.b_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.b)
}

// string c = 3;
inline void KwaiStateSignalEcommerceCartItemPopup::clear_c() {
  _impl_.c_.ClearToEmpty();
}
inline const std::string& KwaiStateSignalEcommerceCartItemPopup::c() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.c)
  return _internal_c();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void KwaiStateSignalEcommerceCartItemPopup::set_c(ArgT0&& arg0, ArgT... args) {
 
 _impl_.c_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.c)
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::mutable_c() {
  std::string* _s = _internal_mutable_c();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.c)
  return _s;
}
inline const std::string& KwaiStateSignalEcommerceCartItemPopup::_internal_c() const {
  return _impl_.c_.Get();
}
inline void KwaiStateSignalEcommerceCartItemPopup::_internal_set_c(const std::string& value) {
  
  _impl_.c_.Set(value, GetArenaForAllocation());
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::_internal_mutable_c() {
  
  return _impl_.c_.Mutable(GetArenaForAllocation());
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::release_c() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.c)
  return _impl_.c_.Release();
}
inline void KwaiStateSignalEcommerceCartItemPopup::set_allocated_c(std::string* c) {
  if (c != nullptr) {
    
  } else {
    
  }
  _impl_.c_.SetAllocated(c, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.c_.IsDefault()) {
    _impl_.c_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.c)
}

// string d = 4;
inline void KwaiStateSignalEcommerceCartItemPopup::clear_d() {
  _impl_.d_.ClearToEmpty();
}
inline const std::string& KwaiStateSignalEcommerceCartItemPopup::d() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.d)
  return _internal_d();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void KwaiStateSignalEcommerceCartItemPopup::set_d(ArgT0&& arg0, ArgT... args) {
 
 _impl_.d_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.d)
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::mutable_d() {
  std::string* _s = _internal_mutable_d();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.d)
  return _s;
}
inline const std::string& KwaiStateSignalEcommerceCartItemPopup::_internal_d() const {
  return _impl_.d_.Get();
}
inline void KwaiStateSignalEcommerceCartItemPopup::_internal_set_d(const std::string& value) {
  
  _impl_.d_.Set(value, GetArenaForAllocation());
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::_internal_mutable_d() {
  
  return _impl_.d_.Mutable(GetArenaForAllocation());
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::release_d() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.d)
  return _impl_.d_.Release();
}
inline void KwaiStateSignalEcommerceCartItemPopup::set_allocated_d(std::string* d) {
  if (d != nullptr) {
    
  } else {
    
  }
  _impl_.d_.SetAllocated(d, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.d_.IsDefault()) {
    _impl_.d_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.d)
}

// string e = 5;
inline void KwaiStateSignalEcommerceCartItemPopup::clear_e() {
  _impl_.e_.ClearToEmpty();
}
inline const std::string& KwaiStateSignalEcommerceCartItemPopup::e() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.e)
  return _internal_e();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void KwaiStateSignalEcommerceCartItemPopup::set_e(ArgT0&& arg0, ArgT... args) {
 
 _impl_.e_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.e)
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::mutable_e() {
  std::string* _s = _internal_mutable_e();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.e)
  return _s;
}
inline const std::string& KwaiStateSignalEcommerceCartItemPopup::_internal_e() const {
  return _impl_.e_.Get();
}
inline void KwaiStateSignalEcommerceCartItemPopup::_internal_set_e(const std::string& value) {
  
  _impl_.e_.Set(value, GetArenaForAllocation());
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::_internal_mutable_e() {
  
  return _impl_.e_.Mutable(GetArenaForAllocation());
}
inline std::string* KwaiStateSignalEcommerceCartItemPopup::release_e() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.e)
  return _impl_.e_.Release();
}
inline void KwaiStateSignalEcommerceCartItemPopup::set_allocated_e(std::string* e) {
  if (e != nullptr) {
    
  } else {
    
  }
  _impl_.e_.SetAllocated(e, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.e_.IsDefault()) {
    _impl_.e_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.KwaiStateSignalEcommerceCartItemPopup.e)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown>() {
  return ::AcFunDanmu::KwaiStateSignalEcommerceCartItemPopup_unknown_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_KwaiStateSignalEcommerceCartItemPopup_2eproto
