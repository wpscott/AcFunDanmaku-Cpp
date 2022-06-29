// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AccessPoint.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AccessPoint_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AccessPoint_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_AccessPoint_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AccessPoint_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AccessPoint_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Basic {
class AccessPoint;
struct AccessPointDefaultTypeInternal;
extern AccessPointDefaultTypeInternal _AccessPoint_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Basic::AccessPoint* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Basic::AccessPoint>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Basic {

enum AccessPoint_AddressType : int {
  AccessPoint_AddressType_kIPV4 = 0,
  AccessPoint_AddressType_kIPV6 = 1,
  AccessPoint_AddressType_kDomain = 2,
  AccessPoint_AddressType_kQuic = 3,
  AccessPoint_AddressType_kQuicV6 = 4,
  AccessPoint_AddressType_AccessPoint_AddressType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  AccessPoint_AddressType_AccessPoint_AddressType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool AccessPoint_AddressType_IsValid(int value);
constexpr AccessPoint_AddressType AccessPoint_AddressType_AddressType_MIN = AccessPoint_AddressType_kIPV4;
constexpr AccessPoint_AddressType AccessPoint_AddressType_AddressType_MAX = AccessPoint_AddressType_kQuicV6;
constexpr int AccessPoint_AddressType_AddressType_ARRAYSIZE = AccessPoint_AddressType_AddressType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* AccessPoint_AddressType_descriptor();
template<typename T>
inline const std::string& AccessPoint_AddressType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, AccessPoint_AddressType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function AccessPoint_AddressType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    AccessPoint_AddressType_descriptor(), enum_t_value);
}
inline bool AccessPoint_AddressType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, AccessPoint_AddressType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<AccessPoint_AddressType>(
    AccessPoint_AddressType_descriptor(), name, value);
}
// ===================================================================

class AccessPoint final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Basic.AccessPoint) */ {
 public:
  inline AccessPoint() : AccessPoint(nullptr) {}
  ~AccessPoint() override;
  explicit PROTOBUF_CONSTEXPR AccessPoint(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AccessPoint(const AccessPoint& from);
  AccessPoint(AccessPoint&& from) noexcept
    : AccessPoint() {
    *this = ::std::move(from);
  }

  inline AccessPoint& operator=(const AccessPoint& from) {
    CopyFrom(from);
    return *this;
  }
  inline AccessPoint& operator=(AccessPoint&& from) noexcept {
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
  static const AccessPoint& default_instance() {
    return *internal_default_instance();
  }
  static inline const AccessPoint* internal_default_instance() {
    return reinterpret_cast<const AccessPoint*>(
               &_AccessPoint_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AccessPoint& a, AccessPoint& b) {
    a.Swap(&b);
  }
  inline void Swap(AccessPoint* other) {
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
  void UnsafeArenaSwap(AccessPoint* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AccessPoint* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AccessPoint>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AccessPoint& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AccessPoint& from) {
    AccessPoint::MergeImpl(*this, from);
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
  void InternalSwap(AccessPoint* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Basic.AccessPoint";
  }
  protected:
  explicit AccessPoint(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef AccessPoint_AddressType AddressType;
  static constexpr AddressType kIPV4 =
    AccessPoint_AddressType_kIPV4;
  static constexpr AddressType kIPV6 =
    AccessPoint_AddressType_kIPV6;
  static constexpr AddressType kDomain =
    AccessPoint_AddressType_kDomain;
  static constexpr AddressType kQuic =
    AccessPoint_AddressType_kQuic;
  static constexpr AddressType kQuicV6 =
    AccessPoint_AddressType_kQuicV6;
  static inline bool AddressType_IsValid(int value) {
    return AccessPoint_AddressType_IsValid(value);
  }
  static constexpr AddressType AddressType_MIN =
    AccessPoint_AddressType_AddressType_MIN;
  static constexpr AddressType AddressType_MAX =
    AccessPoint_AddressType_AddressType_MAX;
  static constexpr int AddressType_ARRAYSIZE =
    AccessPoint_AddressType_AddressType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  AddressType_descriptor() {
    return AccessPoint_AddressType_descriptor();
  }
  template<typename T>
  static inline const std::string& AddressType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, AddressType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function AddressType_Name.");
    return AccessPoint_AddressType_Name(enum_t_value);
  }
  static inline bool AddressType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      AddressType* value) {
    return AccessPoint_AddressType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kIpV6FieldNumber = 4,
    kDomainFieldNumber = 5,
    kQuicV6FieldNumber = 7,
    kAddressTypeFieldNumber = 1,
    kPortFieldNumber = 2,
    kIpV4FieldNumber = 3,
    kQuicFieldNumber = 6,
  };
  // bytes ipV6 = 4;
  void clear_ipv6();
  const std::string& ipv6() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_ipv6(ArgT0&& arg0, ArgT... args);
  std::string* mutable_ipv6();
  PROTOBUF_NODISCARD std::string* release_ipv6();
  void set_allocated_ipv6(std::string* ipv6);
  private:
  const std::string& _internal_ipv6() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ipv6(const std::string& value);
  std::string* _internal_mutable_ipv6();
  public:

  // string domain = 5;
  void clear_domain();
  const std::string& domain() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_domain(ArgT0&& arg0, ArgT... args);
  std::string* mutable_domain();
  PROTOBUF_NODISCARD std::string* release_domain();
  void set_allocated_domain(std::string* domain);
  private:
  const std::string& _internal_domain() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_domain(const std::string& value);
  std::string* _internal_mutable_domain();
  public:

  // bytes quicV6 = 7;
  void clear_quicv6();
  const std::string& quicv6() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_quicv6(ArgT0&& arg0, ArgT... args);
  std::string* mutable_quicv6();
  PROTOBUF_NODISCARD std::string* release_quicv6();
  void set_allocated_quicv6(std::string* quicv6);
  private:
  const std::string& _internal_quicv6() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_quicv6(const std::string& value);
  std::string* _internal_mutable_quicv6();
  public:

  // .AcFunDanmu.Im.Basic.AccessPoint.AddressType addressType = 1;
  void clear_addresstype();
  ::AcFunDanmu::Im::Basic::AccessPoint_AddressType addresstype() const;
  void set_addresstype(::AcFunDanmu::Im::Basic::AccessPoint_AddressType value);
  private:
  ::AcFunDanmu::Im::Basic::AccessPoint_AddressType _internal_addresstype() const;
  void _internal_set_addresstype(::AcFunDanmu::Im::Basic::AccessPoint_AddressType value);
  public:

  // uint32 port = 2;
  void clear_port();
  uint32_t port() const;
  void set_port(uint32_t value);
  private:
  uint32_t _internal_port() const;
  void _internal_set_port(uint32_t value);
  public:

  // fixed32 ipV4 = 3;
  void clear_ipv4();
  uint32_t ipv4() const;
  void set_ipv4(uint32_t value);
  private:
  uint32_t _internal_ipv4() const;
  void _internal_set_ipv4(uint32_t value);
  public:

  // fixed32 quic = 6;
  void clear_quic();
  uint32_t quic() const;
  void set_quic(uint32_t value);
  private:
  uint32_t _internal_quic() const;
  void _internal_set_quic(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Basic.AccessPoint)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ipv6_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr domain_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr quicv6_;
    int addresstype_;
    uint32_t port_;
    uint32_t ipv4_;
    uint32_t quic_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_AccessPoint_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AccessPoint

// .AcFunDanmu.Im.Basic.AccessPoint.AddressType addressType = 1;
inline void AccessPoint::clear_addresstype() {
  _impl_.addresstype_ = 0;
}
inline ::AcFunDanmu::Im::Basic::AccessPoint_AddressType AccessPoint::_internal_addresstype() const {
  return static_cast< ::AcFunDanmu::Im::Basic::AccessPoint_AddressType >(_impl_.addresstype_);
}
inline ::AcFunDanmu::Im::Basic::AccessPoint_AddressType AccessPoint::addresstype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.AccessPoint.addressType)
  return _internal_addresstype();
}
inline void AccessPoint::_internal_set_addresstype(::AcFunDanmu::Im::Basic::AccessPoint_AddressType value) {
  
  _impl_.addresstype_ = value;
}
inline void AccessPoint::set_addresstype(::AcFunDanmu::Im::Basic::AccessPoint_AddressType value) {
  _internal_set_addresstype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.AccessPoint.addressType)
}

// uint32 port = 2;
inline void AccessPoint::clear_port() {
  _impl_.port_ = 0u;
}
inline uint32_t AccessPoint::_internal_port() const {
  return _impl_.port_;
}
inline uint32_t AccessPoint::port() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.AccessPoint.port)
  return _internal_port();
}
inline void AccessPoint::_internal_set_port(uint32_t value) {
  
  _impl_.port_ = value;
}
inline void AccessPoint::set_port(uint32_t value) {
  _internal_set_port(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.AccessPoint.port)
}

// fixed32 ipV4 = 3;
inline void AccessPoint::clear_ipv4() {
  _impl_.ipv4_ = 0u;
}
inline uint32_t AccessPoint::_internal_ipv4() const {
  return _impl_.ipv4_;
}
inline uint32_t AccessPoint::ipv4() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.AccessPoint.ipV4)
  return _internal_ipv4();
}
inline void AccessPoint::_internal_set_ipv4(uint32_t value) {
  
  _impl_.ipv4_ = value;
}
inline void AccessPoint::set_ipv4(uint32_t value) {
  _internal_set_ipv4(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.AccessPoint.ipV4)
}

// bytes ipV6 = 4;
inline void AccessPoint::clear_ipv6() {
  _impl_.ipv6_.ClearToEmpty();
}
inline const std::string& AccessPoint::ipv6() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.AccessPoint.ipV6)
  return _internal_ipv6();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AccessPoint::set_ipv6(ArgT0&& arg0, ArgT... args) {
 
 _impl_.ipv6_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.AccessPoint.ipV6)
}
inline std::string* AccessPoint::mutable_ipv6() {
  std::string* _s = _internal_mutable_ipv6();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.AccessPoint.ipV6)
  return _s;
}
inline const std::string& AccessPoint::_internal_ipv6() const {
  return _impl_.ipv6_.Get();
}
inline void AccessPoint::_internal_set_ipv6(const std::string& value) {
  
  _impl_.ipv6_.Set(value, GetArenaForAllocation());
}
inline std::string* AccessPoint::_internal_mutable_ipv6() {
  
  return _impl_.ipv6_.Mutable(GetArenaForAllocation());
}
inline std::string* AccessPoint::release_ipv6() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Basic.AccessPoint.ipV6)
  return _impl_.ipv6_.Release();
}
inline void AccessPoint::set_allocated_ipv6(std::string* ipv6) {
  if (ipv6 != nullptr) {
    
  } else {
    
  }
  _impl_.ipv6_.SetAllocated(ipv6, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.ipv6_.IsDefault()) {
    _impl_.ipv6_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Basic.AccessPoint.ipV6)
}

// string domain = 5;
inline void AccessPoint::clear_domain() {
  _impl_.domain_.ClearToEmpty();
}
inline const std::string& AccessPoint::domain() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.AccessPoint.domain)
  return _internal_domain();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AccessPoint::set_domain(ArgT0&& arg0, ArgT... args) {
 
 _impl_.domain_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.AccessPoint.domain)
}
inline std::string* AccessPoint::mutable_domain() {
  std::string* _s = _internal_mutable_domain();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.AccessPoint.domain)
  return _s;
}
inline const std::string& AccessPoint::_internal_domain() const {
  return _impl_.domain_.Get();
}
inline void AccessPoint::_internal_set_domain(const std::string& value) {
  
  _impl_.domain_.Set(value, GetArenaForAllocation());
}
inline std::string* AccessPoint::_internal_mutable_domain() {
  
  return _impl_.domain_.Mutable(GetArenaForAllocation());
}
inline std::string* AccessPoint::release_domain() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Basic.AccessPoint.domain)
  return _impl_.domain_.Release();
}
inline void AccessPoint::set_allocated_domain(std::string* domain) {
  if (domain != nullptr) {
    
  } else {
    
  }
  _impl_.domain_.SetAllocated(domain, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.domain_.IsDefault()) {
    _impl_.domain_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Basic.AccessPoint.domain)
}

// fixed32 quic = 6;
inline void AccessPoint::clear_quic() {
  _impl_.quic_ = 0u;
}
inline uint32_t AccessPoint::_internal_quic() const {
  return _impl_.quic_;
}
inline uint32_t AccessPoint::quic() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.AccessPoint.quic)
  return _internal_quic();
}
inline void AccessPoint::_internal_set_quic(uint32_t value) {
  
  _impl_.quic_ = value;
}
inline void AccessPoint::set_quic(uint32_t value) {
  _internal_set_quic(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.AccessPoint.quic)
}

// bytes quicV6 = 7;
inline void AccessPoint::clear_quicv6() {
  _impl_.quicv6_.ClearToEmpty();
}
inline const std::string& AccessPoint::quicv6() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.AccessPoint.quicV6)
  return _internal_quicv6();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AccessPoint::set_quicv6(ArgT0&& arg0, ArgT... args) {
 
 _impl_.quicv6_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.AccessPoint.quicV6)
}
inline std::string* AccessPoint::mutable_quicv6() {
  std::string* _s = _internal_mutable_quicv6();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.AccessPoint.quicV6)
  return _s;
}
inline const std::string& AccessPoint::_internal_quicv6() const {
  return _impl_.quicv6_.Get();
}
inline void AccessPoint::_internal_set_quicv6(const std::string& value) {
  
  _impl_.quicv6_.Set(value, GetArenaForAllocation());
}
inline std::string* AccessPoint::_internal_mutable_quicv6() {
  
  return _impl_.quicv6_.Mutable(GetArenaForAllocation());
}
inline std::string* AccessPoint::release_quicv6() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Basic.AccessPoint.quicV6)
  return _impl_.quicv6_.Release();
}
inline void AccessPoint::set_allocated_quicv6(std::string* quicv6) {
  if (quicv6 != nullptr) {
    
  } else {
    
  }
  _impl_.quicv6_.SetAllocated(quicv6, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.quicv6_.IsDefault()) {
    _impl_.quicv6_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Basic.AccessPoint.quicV6)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Basic::AccessPoint_AddressType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Basic::AccessPoint_AddressType>() {
  return ::AcFunDanmu::Im::Basic::AccessPoint_AddressType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AccessPoint_2eproto