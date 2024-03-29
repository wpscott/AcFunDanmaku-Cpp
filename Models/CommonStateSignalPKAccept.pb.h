// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalPKAccept.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalPKAccept_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalPKAccept_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalPKAccept_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalPKAccept_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalPKAccept_2eproto;
namespace AcFunDanmu {
class CommonStateSignalPKAccept;
struct CommonStateSignalPKAcceptDefaultTypeInternal;
extern CommonStateSignalPKAcceptDefaultTypeInternal _CommonStateSignalPKAccept_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalPKAccept* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalPKAccept>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalPKAccept final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalPKAccept) */ {
 public:
  inline CommonStateSignalPKAccept() : CommonStateSignalPKAccept(nullptr) {}
  ~CommonStateSignalPKAccept() override;
  explicit PROTOBUF_CONSTEXPR CommonStateSignalPKAccept(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  CommonStateSignalPKAccept(const CommonStateSignalPKAccept& from);
  CommonStateSignalPKAccept(CommonStateSignalPKAccept&& from) noexcept
    : CommonStateSignalPKAccept() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalPKAccept& operator=(const CommonStateSignalPKAccept& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalPKAccept& operator=(CommonStateSignalPKAccept&& from) noexcept {
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
  static const CommonStateSignalPKAccept& default_instance() {
    return *internal_default_instance();
  }
  static inline const CommonStateSignalPKAccept* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalPKAccept*>(
               &_CommonStateSignalPKAccept_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalPKAccept& a, CommonStateSignalPKAccept& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalPKAccept* other) {
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
  void UnsafeArenaSwap(CommonStateSignalPKAccept* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  CommonStateSignalPKAccept* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<CommonStateSignalPKAccept>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const CommonStateSignalPKAccept& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const CommonStateSignalPKAccept& from) {
    CommonStateSignalPKAccept::MergeImpl(*this, from);
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
  void InternalSwap(CommonStateSignalPKAccept* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalPKAccept";
  }
  protected:
  explicit CommonStateSignalPKAccept(::PROTOBUF_NAMESPACE_ID::Arena* arena,
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

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalPKAccept)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr a_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr b_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_CommonStateSignalPKAccept_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalPKAccept

// string a = 1;
inline void CommonStateSignalPKAccept::clear_a() {
  _impl_.a_.ClearToEmpty();
}
inline const std::string& CommonStateSignalPKAccept::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalPKAccept.a)
  return _internal_a();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalPKAccept::set_a(ArgT0&& arg0, ArgT... args) {
 
 _impl_.a_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalPKAccept.a)
}
inline std::string* CommonStateSignalPKAccept::mutable_a() {
  std::string* _s = _internal_mutable_a();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalPKAccept.a)
  return _s;
}
inline const std::string& CommonStateSignalPKAccept::_internal_a() const {
  return _impl_.a_.Get();
}
inline void CommonStateSignalPKAccept::_internal_set_a(const std::string& value) {
  
  _impl_.a_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalPKAccept::_internal_mutable_a() {
  
  return _impl_.a_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalPKAccept::release_a() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalPKAccept.a)
  return _impl_.a_.Release();
}
inline void CommonStateSignalPKAccept::set_allocated_a(std::string* a) {
  if (a != nullptr) {
    
  } else {
    
  }
  _impl_.a_.SetAllocated(a, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.a_.IsDefault()) {
    _impl_.a_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalPKAccept.a)
}

// string b = 2;
inline void CommonStateSignalPKAccept::clear_b() {
  _impl_.b_.ClearToEmpty();
}
inline const std::string& CommonStateSignalPKAccept::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalPKAccept.b)
  return _internal_b();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void CommonStateSignalPKAccept::set_b(ArgT0&& arg0, ArgT... args) {
 
 _impl_.b_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalPKAccept.b)
}
inline std::string* CommonStateSignalPKAccept::mutable_b() {
  std::string* _s = _internal_mutable_b();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalPKAccept.b)
  return _s;
}
inline const std::string& CommonStateSignalPKAccept::_internal_b() const {
  return _impl_.b_.Get();
}
inline void CommonStateSignalPKAccept::_internal_set_b(const std::string& value) {
  
  _impl_.b_.Set(value, GetArenaForAllocation());
}
inline std::string* CommonStateSignalPKAccept::_internal_mutable_b() {
  
  return _impl_.b_.Mutable(GetArenaForAllocation());
}
inline std::string* CommonStateSignalPKAccept::release_b() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalPKAccept.b)
  return _impl_.b_.Release();
}
inline void CommonStateSignalPKAccept::set_allocated_b(std::string* b) {
  if (b != nullptr) {
    
  } else {
    
  }
  _impl_.b_.SetAllocated(b, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.b_.IsDefault()) {
    _impl_.b_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalPKAccept.b)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalPKAccept_2eproto
