// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalPkEnd.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalPkEnd_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalPkEnd_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
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
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalPkEnd_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalPkEnd_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalPkEnd_2eproto;
namespace AcFunDanmu {
class CommonStateSignalPkEnd;
class CommonStateSignalPkEndDefaultTypeInternal;
extern CommonStateSignalPkEndDefaultTypeInternal _CommonStateSignalPkEnd_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalPkEnd* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalPkEnd>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum CommonStateSignalPkEnd_unknown : int {
  CommonStateSignalPkEnd_unknown_d = 0,
  CommonStateSignalPkEnd_unknown_e = 1,
  CommonStateSignalPkEnd_unknown_f = 2,
  CommonStateSignalPkEnd_unknown_g = 3,
  CommonStateSignalPkEnd_unknown_h = 4,
  CommonStateSignalPkEnd_unknown_i = 5,
  CommonStateSignalPkEnd_unknown_j = 6,
  CommonStateSignalPkEnd_unknown_k = 7,
  CommonStateSignalPkEnd_unknown_l = 8,
  CommonStateSignalPkEnd_unknown_m = 9,
  CommonStateSignalPkEnd_unknown_n = 10,
  CommonStateSignalPkEnd_unknown_o = 11,
  CommonStateSignalPkEnd_unknown_CommonStateSignalPkEnd_unknown_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  CommonStateSignalPkEnd_unknown_CommonStateSignalPkEnd_unknown_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool CommonStateSignalPkEnd_unknown_IsValid(int value);
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd_unknown_unknown_MIN = CommonStateSignalPkEnd_unknown_d;
constexpr CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd_unknown_unknown_MAX = CommonStateSignalPkEnd_unknown_o;
constexpr int CommonStateSignalPkEnd_unknown_unknown_ARRAYSIZE = CommonStateSignalPkEnd_unknown_unknown_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* CommonStateSignalPkEnd_unknown_descriptor();
template<typename T>
inline const std::string& CommonStateSignalPkEnd_unknown_Name(T enum_t_value) {
  static_assert(::std::is_same<T, CommonStateSignalPkEnd_unknown>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function CommonStateSignalPkEnd_unknown_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    CommonStateSignalPkEnd_unknown_descriptor(), enum_t_value);
}
inline bool CommonStateSignalPkEnd_unknown_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, CommonStateSignalPkEnd_unknown* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<CommonStateSignalPkEnd_unknown>(
    CommonStateSignalPkEnd_unknown_descriptor(), name, value);
}
// ===================================================================

class CommonStateSignalPkEnd PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalPkEnd) */ {
 public:
  inline CommonStateSignalPkEnd() : CommonStateSignalPkEnd(nullptr) {}
  virtual ~CommonStateSignalPkEnd();

  CommonStateSignalPkEnd(const CommonStateSignalPkEnd& from);
  CommonStateSignalPkEnd(CommonStateSignalPkEnd&& from) noexcept
    : CommonStateSignalPkEnd() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalPkEnd& operator=(const CommonStateSignalPkEnd& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalPkEnd& operator=(CommonStateSignalPkEnd&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const CommonStateSignalPkEnd& default_instance();

  static inline const CommonStateSignalPkEnd* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalPkEnd*>(
               &_CommonStateSignalPkEnd_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalPkEnd& a, CommonStateSignalPkEnd& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalPkEnd* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommonStateSignalPkEnd* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonStateSignalPkEnd* New() const final {
    return CreateMaybeMessage<CommonStateSignalPkEnd>(nullptr);
  }

  CommonStateSignalPkEnd* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonStateSignalPkEnd>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonStateSignalPkEnd& from);
  void MergeFrom(const CommonStateSignalPkEnd& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(CommonStateSignalPkEnd* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalPkEnd";
  }
  protected:
  explicit CommonStateSignalPkEnd(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommonStateSignalPkEnd_2eproto);
    return ::descriptor_table_CommonStateSignalPkEnd_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef CommonStateSignalPkEnd_unknown unknown;
  static constexpr unknown d =
    CommonStateSignalPkEnd_unknown_d;
  static constexpr unknown e =
    CommonStateSignalPkEnd_unknown_e;
  static constexpr unknown f =
    CommonStateSignalPkEnd_unknown_f;
  static constexpr unknown g =
    CommonStateSignalPkEnd_unknown_g;
  static constexpr unknown h =
    CommonStateSignalPkEnd_unknown_h;
  static constexpr unknown i =
    CommonStateSignalPkEnd_unknown_i;
  static constexpr unknown j =
    CommonStateSignalPkEnd_unknown_j;
  static constexpr unknown k =
    CommonStateSignalPkEnd_unknown_k;
  static constexpr unknown l =
    CommonStateSignalPkEnd_unknown_l;
  static constexpr unknown m =
    CommonStateSignalPkEnd_unknown_m;
  static constexpr unknown n =
    CommonStateSignalPkEnd_unknown_n;
  static constexpr unknown o =
    CommonStateSignalPkEnd_unknown_o;
  static inline bool unknown_IsValid(int value) {
    return CommonStateSignalPkEnd_unknown_IsValid(value);
  }
  static constexpr unknown unknown_MIN =
    CommonStateSignalPkEnd_unknown_unknown_MIN;
  static constexpr unknown unknown_MAX =
    CommonStateSignalPkEnd_unknown_unknown_MAX;
  static constexpr int unknown_ARRAYSIZE =
    CommonStateSignalPkEnd_unknown_unknown_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  unknown_descriptor() {
    return CommonStateSignalPkEnd_unknown_descriptor();
  }
  template<typename T>
  static inline const std::string& unknown_Name(T enum_t_value) {
    static_assert(::std::is_same<T, unknown>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function unknown_Name.");
    return CommonStateSignalPkEnd_unknown_Name(enum_t_value);
  }
  static inline bool unknown_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      unknown* value) {
    return CommonStateSignalPkEnd_unknown_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kAFieldNumber = 1,
    kCFieldNumber = 3,
    kBFieldNumber = 2,
  };
  // string a = 1;
  void clear_a();
  const std::string& a() const;
  void set_a(const std::string& value);
  void set_a(std::string&& value);
  void set_a(const char* value);
  void set_a(const char* value, size_t size);
  std::string* mutable_a();
  std::string* release_a();
  void set_allocated_a(std::string* a);
  private:
  const std::string& _internal_a() const;
  void _internal_set_a(const std::string& value);
  std::string* _internal_mutable_a();
  public:

  // string c = 3;
  void clear_c();
  const std::string& c() const;
  void set_c(const std::string& value);
  void set_c(std::string&& value);
  void set_c(const char* value);
  void set_c(const char* value, size_t size);
  std::string* mutable_c();
  std::string* release_c();
  void set_allocated_c(std::string* c);
  private:
  const std::string& _internal_c() const;
  void _internal_set_c(const std::string& value);
  std::string* _internal_mutable_c();
  public:

  // .AcFunDanmu.CommonStateSignalPkEnd.unknown b = 2;
  void clear_b();
  ::AcFunDanmu::CommonStateSignalPkEnd_unknown b() const;
  void set_b(::AcFunDanmu::CommonStateSignalPkEnd_unknown value);
  private:
  ::AcFunDanmu::CommonStateSignalPkEnd_unknown _internal_b() const;
  void _internal_set_b(::AcFunDanmu::CommonStateSignalPkEnd_unknown value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalPkEnd)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr a_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr c_;
  int b_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonStateSignalPkEnd_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalPkEnd

// string a = 1;
inline void CommonStateSignalPkEnd::clear_a() {
  a_.ClearToEmpty();
}
inline const std::string& CommonStateSignalPkEnd::a() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalPkEnd.a)
  return _internal_a();
}
inline void CommonStateSignalPkEnd::set_a(const std::string& value) {
  _internal_set_a(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalPkEnd.a)
}
inline std::string* CommonStateSignalPkEnd::mutable_a() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalPkEnd.a)
  return _internal_mutable_a();
}
inline const std::string& CommonStateSignalPkEnd::_internal_a() const {
  return a_.Get();
}
inline void CommonStateSignalPkEnd::_internal_set_a(const std::string& value) {
  
  a_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void CommonStateSignalPkEnd::set_a(std::string&& value) {
  
  a_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.CommonStateSignalPkEnd.a)
}
inline void CommonStateSignalPkEnd::set_a(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  a_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.CommonStateSignalPkEnd.a)
}
inline void CommonStateSignalPkEnd::set_a(const char* value,
    size_t size) {
  
  a_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.CommonStateSignalPkEnd.a)
}
inline std::string* CommonStateSignalPkEnd::_internal_mutable_a() {
  
  return a_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* CommonStateSignalPkEnd::release_a() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalPkEnd.a)
  return a_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommonStateSignalPkEnd::set_allocated_a(std::string* a) {
  if (a != nullptr) {
    
  } else {
    
  }
  a_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), a,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalPkEnd.a)
}

// .AcFunDanmu.CommonStateSignalPkEnd.unknown b = 2;
inline void CommonStateSignalPkEnd::clear_b() {
  b_ = 0;
}
inline ::AcFunDanmu::CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::_internal_b() const {
  return static_cast< ::AcFunDanmu::CommonStateSignalPkEnd_unknown >(b_);
}
inline ::AcFunDanmu::CommonStateSignalPkEnd_unknown CommonStateSignalPkEnd::b() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalPkEnd.b)
  return _internal_b();
}
inline void CommonStateSignalPkEnd::_internal_set_b(::AcFunDanmu::CommonStateSignalPkEnd_unknown value) {
  
  b_ = value;
}
inline void CommonStateSignalPkEnd::set_b(::AcFunDanmu::CommonStateSignalPkEnd_unknown value) {
  _internal_set_b(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalPkEnd.b)
}

// string c = 3;
inline void CommonStateSignalPkEnd::clear_c() {
  c_.ClearToEmpty();
}
inline const std::string& CommonStateSignalPkEnd::c() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalPkEnd.c)
  return _internal_c();
}
inline void CommonStateSignalPkEnd::set_c(const std::string& value) {
  _internal_set_c(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.CommonStateSignalPkEnd.c)
}
inline std::string* CommonStateSignalPkEnd::mutable_c() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalPkEnd.c)
  return _internal_mutable_c();
}
inline const std::string& CommonStateSignalPkEnd::_internal_c() const {
  return c_.Get();
}
inline void CommonStateSignalPkEnd::_internal_set_c(const std::string& value) {
  
  c_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void CommonStateSignalPkEnd::set_c(std::string&& value) {
  
  c_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.CommonStateSignalPkEnd.c)
}
inline void CommonStateSignalPkEnd::set_c(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  c_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.CommonStateSignalPkEnd.c)
}
inline void CommonStateSignalPkEnd::set_c(const char* value,
    size_t size) {
  
  c_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.CommonStateSignalPkEnd.c)
}
inline std::string* CommonStateSignalPkEnd::_internal_mutable_c() {
  
  return c_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* CommonStateSignalPkEnd::release_c() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.CommonStateSignalPkEnd.c)
  return c_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void CommonStateSignalPkEnd::set_allocated_c(std::string* c) {
  if (c != nullptr) {
    
  } else {
    
  }
  c_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), c,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.CommonStateSignalPkEnd.c)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::CommonStateSignalPkEnd_unknown> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::CommonStateSignalPkEnd_unknown>() {
  return ::AcFunDanmu::CommonStateSignalPkEnd_unknown_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalPkEnd_2eproto
