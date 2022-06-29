// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PushServiceToken.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PushServiceToken_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PushServiceToken_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_PushServiceToken_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PushServiceToken_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PushServiceToken_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Basic {
class PushServiceToken;
struct PushServiceTokenDefaultTypeInternal;
extern PushServiceTokenDefaultTypeInternal _PushServiceToken_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Basic::PushServiceToken* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Basic::PushServiceToken>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Basic {

enum PushServiceToken_PushType : int {
  PushServiceToken_PushType_kPushTypeInvalid = 0,
  PushServiceToken_PushType_kPushTypeAPNS = 1,
  PushServiceToken_PushType_kPushTypeXmPush = 2,
  PushServiceToken_PushType_kPushTypeJgPush = 3,
  PushServiceToken_PushType_kPushTypeGtPush = 4,
  PushServiceToken_PushType_kPushTypeOpPush = 5,
  PushServiceToken_PushType_kPushTypeVvPush = 6,
  PushServiceToken_PushType_kPushTypeHwPush = 7,
  PushServiceToken_PushType_kPushTypeFcm = 8,
  PushServiceToken_PushType_PushServiceToken_PushType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  PushServiceToken_PushType_PushServiceToken_PushType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool PushServiceToken_PushType_IsValid(int value);
constexpr PushServiceToken_PushType PushServiceToken_PushType_PushType_MIN = PushServiceToken_PushType_kPushTypeInvalid;
constexpr PushServiceToken_PushType PushServiceToken_PushType_PushType_MAX = PushServiceToken_PushType_kPushTypeFcm;
constexpr int PushServiceToken_PushType_PushType_ARRAYSIZE = PushServiceToken_PushType_PushType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PushServiceToken_PushType_descriptor();
template<typename T>
inline const std::string& PushServiceToken_PushType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PushServiceToken_PushType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PushServiceToken_PushType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PushServiceToken_PushType_descriptor(), enum_t_value);
}
inline bool PushServiceToken_PushType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PushServiceToken_PushType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PushServiceToken_PushType>(
    PushServiceToken_PushType_descriptor(), name, value);
}
// ===================================================================

class PushServiceToken final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Basic.PushServiceToken) */ {
 public:
  inline PushServiceToken() : PushServiceToken(nullptr) {}
  ~PushServiceToken() override;
  explicit PROTOBUF_CONSTEXPR PushServiceToken(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PushServiceToken(const PushServiceToken& from);
  PushServiceToken(PushServiceToken&& from) noexcept
    : PushServiceToken() {
    *this = ::std::move(from);
  }

  inline PushServiceToken& operator=(const PushServiceToken& from) {
    CopyFrom(from);
    return *this;
  }
  inline PushServiceToken& operator=(PushServiceToken&& from) noexcept {
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
  static const PushServiceToken& default_instance() {
    return *internal_default_instance();
  }
  static inline const PushServiceToken* internal_default_instance() {
    return reinterpret_cast<const PushServiceToken*>(
               &_PushServiceToken_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PushServiceToken& a, PushServiceToken& b) {
    a.Swap(&b);
  }
  inline void Swap(PushServiceToken* other) {
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
  void UnsafeArenaSwap(PushServiceToken* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PushServiceToken* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PushServiceToken>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PushServiceToken& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PushServiceToken& from) {
    PushServiceToken::MergeImpl(*this, from);
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
  void InternalSwap(PushServiceToken* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Basic.PushServiceToken";
  }
  protected:
  explicit PushServiceToken(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef PushServiceToken_PushType PushType;
  static constexpr PushType kPushTypeInvalid =
    PushServiceToken_PushType_kPushTypeInvalid;
  static constexpr PushType kPushTypeAPNS =
    PushServiceToken_PushType_kPushTypeAPNS;
  static constexpr PushType kPushTypeXmPush =
    PushServiceToken_PushType_kPushTypeXmPush;
  static constexpr PushType kPushTypeJgPush =
    PushServiceToken_PushType_kPushTypeJgPush;
  static constexpr PushType kPushTypeGtPush =
    PushServiceToken_PushType_kPushTypeGtPush;
  static constexpr PushType kPushTypeOpPush =
    PushServiceToken_PushType_kPushTypeOpPush;
  static constexpr PushType kPushTypeVvPush =
    PushServiceToken_PushType_kPushTypeVvPush;
  static constexpr PushType kPushTypeHwPush =
    PushServiceToken_PushType_kPushTypeHwPush;
  static constexpr PushType kPushTypeFcm =
    PushServiceToken_PushType_kPushTypeFcm;
  static inline bool PushType_IsValid(int value) {
    return PushServiceToken_PushType_IsValid(value);
  }
  static constexpr PushType PushType_MIN =
    PushServiceToken_PushType_PushType_MIN;
  static constexpr PushType PushType_MAX =
    PushServiceToken_PushType_PushType_MAX;
  static constexpr int PushType_ARRAYSIZE =
    PushServiceToken_PushType_PushType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PushType_descriptor() {
    return PushServiceToken_PushType_descriptor();
  }
  template<typename T>
  static inline const std::string& PushType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PushType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PushType_Name.");
    return PushServiceToken_PushType_Name(enum_t_value);
  }
  static inline bool PushType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PushType* value) {
    return PushServiceToken_PushType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kTokenFieldNumber = 2,
    kPushTypeFieldNumber = 1,
    kIsPassThroughFieldNumber = 3,
  };
  // bytes token = 2;
  void clear_token();
  const std::string& token() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_token(ArgT0&& arg0, ArgT... args);
  std::string* mutable_token();
  PROTOBUF_NODISCARD std::string* release_token();
  void set_allocated_token(std::string* token);
  private:
  const std::string& _internal_token() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_token(const std::string& value);
  std::string* _internal_mutable_token();
  public:

  // .AcFunDanmu.Im.Basic.PushServiceToken.PushType pushType = 1;
  void clear_pushtype();
  ::AcFunDanmu::Im::Basic::PushServiceToken_PushType pushtype() const;
  void set_pushtype(::AcFunDanmu::Im::Basic::PushServiceToken_PushType value);
  private:
  ::AcFunDanmu::Im::Basic::PushServiceToken_PushType _internal_pushtype() const;
  void _internal_set_pushtype(::AcFunDanmu::Im::Basic::PushServiceToken_PushType value);
  public:

  // bool isPassThrough = 3;
  void clear_ispassthrough();
  bool ispassthrough() const;
  void set_ispassthrough(bool value);
  private:
  bool _internal_ispassthrough() const;
  void _internal_set_ispassthrough(bool value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Basic.PushServiceToken)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr token_;
    int pushtype_;
    bool ispassthrough_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_PushServiceToken_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PushServiceToken

// .AcFunDanmu.Im.Basic.PushServiceToken.PushType pushType = 1;
inline void PushServiceToken::clear_pushtype() {
  _impl_.pushtype_ = 0;
}
inline ::AcFunDanmu::Im::Basic::PushServiceToken_PushType PushServiceToken::_internal_pushtype() const {
  return static_cast< ::AcFunDanmu::Im::Basic::PushServiceToken_PushType >(_impl_.pushtype_);
}
inline ::AcFunDanmu::Im::Basic::PushServiceToken_PushType PushServiceToken::pushtype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PushServiceToken.pushType)
  return _internal_pushtype();
}
inline void PushServiceToken::_internal_set_pushtype(::AcFunDanmu::Im::Basic::PushServiceToken_PushType value) {
  
  _impl_.pushtype_ = value;
}
inline void PushServiceToken::set_pushtype(::AcFunDanmu::Im::Basic::PushServiceToken_PushType value) {
  _internal_set_pushtype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PushServiceToken.pushType)
}

// bytes token = 2;
inline void PushServiceToken::clear_token() {
  _impl_.token_.ClearToEmpty();
}
inline const std::string& PushServiceToken::token() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PushServiceToken.token)
  return _internal_token();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PushServiceToken::set_token(ArgT0&& arg0, ArgT... args) {
 
 _impl_.token_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PushServiceToken.token)
}
inline std::string* PushServiceToken::mutable_token() {
  std::string* _s = _internal_mutable_token();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.PushServiceToken.token)
  return _s;
}
inline const std::string& PushServiceToken::_internal_token() const {
  return _impl_.token_.Get();
}
inline void PushServiceToken::_internal_set_token(const std::string& value) {
  
  _impl_.token_.Set(value, GetArenaForAllocation());
}
inline std::string* PushServiceToken::_internal_mutable_token() {
  
  return _impl_.token_.Mutable(GetArenaForAllocation());
}
inline std::string* PushServiceToken::release_token() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Basic.PushServiceToken.token)
  return _impl_.token_.Release();
}
inline void PushServiceToken::set_allocated_token(std::string* token) {
  if (token != nullptr) {
    
  } else {
    
  }
  _impl_.token_.SetAllocated(token, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.token_.IsDefault()) {
    _impl_.token_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Basic.PushServiceToken.token)
}

// bool isPassThrough = 3;
inline void PushServiceToken::clear_ispassthrough() {
  _impl_.ispassthrough_ = false;
}
inline bool PushServiceToken::_internal_ispassthrough() const {
  return _impl_.ispassthrough_;
}
inline bool PushServiceToken::ispassthrough() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PushServiceToken.isPassThrough)
  return _internal_ispassthrough();
}
inline void PushServiceToken::_internal_set_ispassthrough(bool value) {
  
  _impl_.ispassthrough_ = value;
}
inline void PushServiceToken::set_ispassthrough(bool value) {
  _internal_set_ispassthrough(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PushServiceToken.isPassThrough)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Basic::PushServiceToken_PushType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Basic::PushServiceToken_PushType>() {
  return ::AcFunDanmu::Im::Basic::PushServiceToken_PushType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PushServiceToken_2eproto