// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: TopBannerNotice.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_TopBannerNotice_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_TopBannerNotice_2eproto

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
#include "BackgroundStyle.pb.h"
#include "Button.pb.h"
#include "ImageCdnNode.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_TopBannerNotice_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_TopBannerNotice_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_TopBannerNotice_2eproto;
namespace AcFunDanmu {
class TopBannerNotice;
struct TopBannerNoticeDefaultTypeInternal;
extern TopBannerNoticeDefaultTypeInternal _TopBannerNotice_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::TopBannerNotice* Arena::CreateMaybeMessage<::AcFunDanmu::TopBannerNotice>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class TopBannerNotice final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.TopBannerNotice) */ {
 public:
  inline TopBannerNotice() : TopBannerNotice(nullptr) {}
  ~TopBannerNotice() override;
  explicit PROTOBUF_CONSTEXPR TopBannerNotice(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  TopBannerNotice(const TopBannerNotice& from);
  TopBannerNotice(TopBannerNotice&& from) noexcept
    : TopBannerNotice() {
    *this = ::std::move(from);
  }

  inline TopBannerNotice& operator=(const TopBannerNotice& from) {
    CopyFrom(from);
    return *this;
  }
  inline TopBannerNotice& operator=(TopBannerNotice&& from) noexcept {
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
  static const TopBannerNotice& default_instance() {
    return *internal_default_instance();
  }
  static inline const TopBannerNotice* internal_default_instance() {
    return reinterpret_cast<const TopBannerNotice*>(
               &_TopBannerNotice_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(TopBannerNotice& a, TopBannerNotice& b) {
    a.Swap(&b);
  }
  inline void Swap(TopBannerNotice* other) {
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
  void UnsafeArenaSwap(TopBannerNotice* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  TopBannerNotice* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<TopBannerNotice>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const TopBannerNotice& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const TopBannerNotice& from) {
    TopBannerNotice::MergeImpl(*this, from);
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
  void InternalSwap(TopBannerNotice* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.TopBannerNotice";
  }
  protected:
  explicit TopBannerNotice(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kGFieldNumber = 7,
    kAFieldNumber = 1,
    kBFieldNumber = 2,
    kCFieldNumber = 3,
    kDFieldNumber = 4,
    kFFieldNumber = 6,
    kHFieldNumber = 8,
    kEFieldNumber = 5,
  };
  // repeated .AcFunDanmu.ImageCdnNode g = 7;
  int g_size() const;
  private:
  int _internal_g_size() const;
  public:
  void clear_g();
  ::AcFunDanmu::ImageCdnNode* mutable_g(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >*
      mutable_g();
  private:
  const ::AcFunDanmu::ImageCdnNode& _internal_g(int index) const;
  ::AcFunDanmu::ImageCdnNode* _internal_add_g();
  public:
  const ::AcFunDanmu::ImageCdnNode& g(int index) const;
  ::AcFunDanmu::ImageCdnNode* add_g();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >&
      g() const;

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

  // .AcFunDanmu.BackgroundStyle d = 4;
  bool has_d() const;
  private:
  bool _internal_has_d() const;
  public:
  void clear_d();
  const ::AcFunDanmu::BackgroundStyle& d() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::BackgroundStyle* release_d();
  ::AcFunDanmu::BackgroundStyle* mutable_d();
  void set_allocated_d(::AcFunDanmu::BackgroundStyle* d);
  private:
  const ::AcFunDanmu::BackgroundStyle& _internal_d() const;
  ::AcFunDanmu::BackgroundStyle* _internal_mutable_d();
  public:
  void unsafe_arena_set_allocated_d(
      ::AcFunDanmu::BackgroundStyle* d);
  ::AcFunDanmu::BackgroundStyle* unsafe_arena_release_d();

  // .AcFunDanmu.Button f = 6;
  bool has_f() const;
  private:
  bool _internal_has_f() const;
  public:
  void clear_f();
  const ::AcFunDanmu::Button& f() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Button* release_f();
  ::AcFunDanmu::Button* mutable_f();
  void set_allocated_f(::AcFunDanmu::Button* f);
  private:
  const ::AcFunDanmu::Button& _internal_f() const;
  ::AcFunDanmu::Button* _internal_mutable_f();
  public:
  void unsafe_arena_set_allocated_f(
      ::AcFunDanmu::Button* f);
  ::AcFunDanmu::Button* unsafe_arena_release_f();

  // int64 h = 8;
  void clear_h();
  int64_t h() const;
  void set_h(int64_t value);
  private:
  int64_t _internal_h() const;
  void _internal_set_h(int64_t value);
  public:

  // int32 e = 5;
  void clear_e();
  int32_t e() const;
  void set_e(int32_t value);
  private:
  int32_t _internal_e() const;
  void _internal_set_e(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.TopBannerNotice)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode > g_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr a_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr b_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr c_;
    ::AcFunDanmu::BackgroundStyle* d_;
    ::AcFunDanmu::Button* f_;
    int64_t h_;
    int32_t e_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_TopBannerNotice_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// TopBannerNotice

// string a = 1;
inline void TopBannerNotice::clear_a() {
  _impl_.a_.ClearToEmpty();
}
inline const std::string& TopBannerNotice::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TopBannerNotice.a)
  return _internal_a();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TopBannerNotice::set_a(ArgT0&& arg0, ArgT... args) {
 
 _impl_.a_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.TopBannerNotice.a)
}
inline std::string* TopBannerNotice::mutable_a() {
  std::string* _s = _internal_mutable_a();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.TopBannerNotice.a)
  return _s;
}
inline const std::string& TopBannerNotice::_internal_a() const {
  return _impl_.a_.Get();
}
inline void TopBannerNotice::_internal_set_a(const std::string& value) {
  
  _impl_.a_.Set(value, GetArenaForAllocation());
}
inline std::string* TopBannerNotice::_internal_mutable_a() {
  
  return _impl_.a_.Mutable(GetArenaForAllocation());
}
inline std::string* TopBannerNotice::release_a() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.TopBannerNotice.a)
  return _impl_.a_.Release();
}
inline void TopBannerNotice::set_allocated_a(std::string* a) {
  if (a != nullptr) {
    
  } else {
    
  }
  _impl_.a_.SetAllocated(a, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.a_.IsDefault()) {
    _impl_.a_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.TopBannerNotice.a)
}

// string b = 2;
inline void TopBannerNotice::clear_b() {
  _impl_.b_.ClearToEmpty();
}
inline const std::string& TopBannerNotice::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TopBannerNotice.b)
  return _internal_b();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TopBannerNotice::set_b(ArgT0&& arg0, ArgT... args) {
 
 _impl_.b_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.TopBannerNotice.b)
}
inline std::string* TopBannerNotice::mutable_b() {
  std::string* _s = _internal_mutable_b();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.TopBannerNotice.b)
  return _s;
}
inline const std::string& TopBannerNotice::_internal_b() const {
  return _impl_.b_.Get();
}
inline void TopBannerNotice::_internal_set_b(const std::string& value) {
  
  _impl_.b_.Set(value, GetArenaForAllocation());
}
inline std::string* TopBannerNotice::_internal_mutable_b() {
  
  return _impl_.b_.Mutable(GetArenaForAllocation());
}
inline std::string* TopBannerNotice::release_b() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.TopBannerNotice.b)
  return _impl_.b_.Release();
}
inline void TopBannerNotice::set_allocated_b(std::string* b) {
  if (b != nullptr) {
    
  } else {
    
  }
  _impl_.b_.SetAllocated(b, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.b_.IsDefault()) {
    _impl_.b_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.TopBannerNotice.b)
}

// string c = 3;
inline void TopBannerNotice::clear_c() {
  _impl_.c_.ClearToEmpty();
}
inline const std::string& TopBannerNotice::c() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TopBannerNotice.c)
  return _internal_c();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void TopBannerNotice::set_c(ArgT0&& arg0, ArgT... args) {
 
 _impl_.c_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.TopBannerNotice.c)
}
inline std::string* TopBannerNotice::mutable_c() {
  std::string* _s = _internal_mutable_c();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.TopBannerNotice.c)
  return _s;
}
inline const std::string& TopBannerNotice::_internal_c() const {
  return _impl_.c_.Get();
}
inline void TopBannerNotice::_internal_set_c(const std::string& value) {
  
  _impl_.c_.Set(value, GetArenaForAllocation());
}
inline std::string* TopBannerNotice::_internal_mutable_c() {
  
  return _impl_.c_.Mutable(GetArenaForAllocation());
}
inline std::string* TopBannerNotice::release_c() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.TopBannerNotice.c)
  return _impl_.c_.Release();
}
inline void TopBannerNotice::set_allocated_c(std::string* c) {
  if (c != nullptr) {
    
  } else {
    
  }
  _impl_.c_.SetAllocated(c, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.c_.IsDefault()) {
    _impl_.c_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.TopBannerNotice.c)
}

// .AcFunDanmu.BackgroundStyle d = 4;
inline bool TopBannerNotice::_internal_has_d() const {
  return this != internal_default_instance() && _impl_.d_ != nullptr;
}
inline bool TopBannerNotice::has_d() const {
  return _internal_has_d();
}
inline const ::AcFunDanmu::BackgroundStyle& TopBannerNotice::_internal_d() const {
  const ::AcFunDanmu::BackgroundStyle* p = _impl_.d_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::BackgroundStyle&>(
      ::AcFunDanmu::_BackgroundStyle_default_instance_);
}
inline const ::AcFunDanmu::BackgroundStyle& TopBannerNotice::d() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TopBannerNotice.d)
  return _internal_d();
}
inline void TopBannerNotice::unsafe_arena_set_allocated_d(
    ::AcFunDanmu::BackgroundStyle* d) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.d_);
  }
  _impl_.d_ = d;
  if (d) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.TopBannerNotice.d)
}
inline ::AcFunDanmu::BackgroundStyle* TopBannerNotice::release_d() {
  
  ::AcFunDanmu::BackgroundStyle* temp = _impl_.d_;
  _impl_.d_ = nullptr;
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
inline ::AcFunDanmu::BackgroundStyle* TopBannerNotice::unsafe_arena_release_d() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.TopBannerNotice.d)
  
  ::AcFunDanmu::BackgroundStyle* temp = _impl_.d_;
  _impl_.d_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::BackgroundStyle* TopBannerNotice::_internal_mutable_d() {
  
  if (_impl_.d_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::BackgroundStyle>(GetArenaForAllocation());
    _impl_.d_ = p;
  }
  return _impl_.d_;
}
inline ::AcFunDanmu::BackgroundStyle* TopBannerNotice::mutable_d() {
  ::AcFunDanmu::BackgroundStyle* _msg = _internal_mutable_d();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.TopBannerNotice.d)
  return _msg;
}
inline void TopBannerNotice::set_allocated_d(::AcFunDanmu::BackgroundStyle* d) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.d_);
  }
  if (d) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(d));
    if (message_arena != submessage_arena) {
      d = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, d, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.d_ = d;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.TopBannerNotice.d)
}

// int32 e = 5;
inline void TopBannerNotice::clear_e() {
  _impl_.e_ = 0;
}
inline int32_t TopBannerNotice::_internal_e() const {
  return _impl_.e_;
}
inline int32_t TopBannerNotice::e() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TopBannerNotice.e)
  return _internal_e();
}
inline void TopBannerNotice::_internal_set_e(int32_t value) {
  
  _impl_.e_ = value;
}
inline void TopBannerNotice::set_e(int32_t value) {
  _internal_set_e(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.TopBannerNotice.e)
}

// .AcFunDanmu.Button f = 6;
inline bool TopBannerNotice::_internal_has_f() const {
  return this != internal_default_instance() && _impl_.f_ != nullptr;
}
inline bool TopBannerNotice::has_f() const {
  return _internal_has_f();
}
inline const ::AcFunDanmu::Button& TopBannerNotice::_internal_f() const {
  const ::AcFunDanmu::Button* p = _impl_.f_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Button&>(
      ::AcFunDanmu::_Button_default_instance_);
}
inline const ::AcFunDanmu::Button& TopBannerNotice::f() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TopBannerNotice.f)
  return _internal_f();
}
inline void TopBannerNotice::unsafe_arena_set_allocated_f(
    ::AcFunDanmu::Button* f) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.f_);
  }
  _impl_.f_ = f;
  if (f) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.TopBannerNotice.f)
}
inline ::AcFunDanmu::Button* TopBannerNotice::release_f() {
  
  ::AcFunDanmu::Button* temp = _impl_.f_;
  _impl_.f_ = nullptr;
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
inline ::AcFunDanmu::Button* TopBannerNotice::unsafe_arena_release_f() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.TopBannerNotice.f)
  
  ::AcFunDanmu::Button* temp = _impl_.f_;
  _impl_.f_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Button* TopBannerNotice::_internal_mutable_f() {
  
  if (_impl_.f_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Button>(GetArenaForAllocation());
    _impl_.f_ = p;
  }
  return _impl_.f_;
}
inline ::AcFunDanmu::Button* TopBannerNotice::mutable_f() {
  ::AcFunDanmu::Button* _msg = _internal_mutable_f();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.TopBannerNotice.f)
  return _msg;
}
inline void TopBannerNotice::set_allocated_f(::AcFunDanmu::Button* f) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.f_);
  }
  if (f) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(f));
    if (message_arena != submessage_arena) {
      f = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, f, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.f_ = f;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.TopBannerNotice.f)
}

// repeated .AcFunDanmu.ImageCdnNode g = 7;
inline int TopBannerNotice::_internal_g_size() const {
  return _impl_.g_.size();
}
inline int TopBannerNotice::g_size() const {
  return _internal_g_size();
}
inline ::AcFunDanmu::ImageCdnNode* TopBannerNotice::mutable_g(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.TopBannerNotice.g)
  return _impl_.g_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >*
TopBannerNotice::mutable_g() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.TopBannerNotice.g)
  return &_impl_.g_;
}
inline const ::AcFunDanmu::ImageCdnNode& TopBannerNotice::_internal_g(int index) const {
  return _impl_.g_.Get(index);
}
inline const ::AcFunDanmu::ImageCdnNode& TopBannerNotice::g(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TopBannerNotice.g)
  return _internal_g(index);
}
inline ::AcFunDanmu::ImageCdnNode* TopBannerNotice::_internal_add_g() {
  return _impl_.g_.Add();
}
inline ::AcFunDanmu::ImageCdnNode* TopBannerNotice::add_g() {
  ::AcFunDanmu::ImageCdnNode* _add = _internal_add_g();
  // @@protoc_insertion_point(field_add:AcFunDanmu.TopBannerNotice.g)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::ImageCdnNode >&
TopBannerNotice::g() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.TopBannerNotice.g)
  return _impl_.g_;
}

// int64 h = 8;
inline void TopBannerNotice::clear_h() {
  _impl_.h_ = int64_t{0};
}
inline int64_t TopBannerNotice::_internal_h() const {
  return _impl_.h_;
}
inline int64_t TopBannerNotice::h() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.TopBannerNotice.h)
  return _internal_h();
}
inline void TopBannerNotice::_internal_set_h(int64_t value) {
  
  _impl_.h_ = value;
}
inline void TopBannerNotice::set_h(int64_t value) {
  _internal_set_h(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.TopBannerNotice.h)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_TopBannerNotice_2eproto
