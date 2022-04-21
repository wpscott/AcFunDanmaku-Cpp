// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Ping.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_Ping_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_Ping_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3017000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3017000 < PROTOBUF_MIN_PROTOC_VERSION
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
#define PROTOBUF_INTERNAL_EXPORT_Ping_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_Ping_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_Ping_2eproto;
namespace AcFunDanmu {
class PingRequest;
struct PingRequestDefaultTypeInternal;
extern PingRequestDefaultTypeInternal _PingRequest_default_instance_;
class PingResponse;
struct PingResponseDefaultTypeInternal;
extern PingResponseDefaultTypeInternal _PingResponse_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::PingRequest* Arena::CreateMaybeMessage<::AcFunDanmu::PingRequest>(Arena*);
template<> ::AcFunDanmu::PingResponse* Arena::CreateMaybeMessage<::AcFunDanmu::PingResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

enum PingRequest_PingType : int {
  PingRequest_PingType_kInvalid = 0,
  PingRequest_PingType_kPriorRegister = 1,
  PingRequest_PingType_kPostRegister = 2,
  PingRequest_PingType_PingRequest_PingType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  PingRequest_PingType_PingRequest_PingType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool PingRequest_PingType_IsValid(int value);
constexpr PingRequest_PingType PingRequest_PingType_PingType_MIN = PingRequest_PingType_kInvalid;
constexpr PingRequest_PingType PingRequest_PingType_PingType_MAX = PingRequest_PingType_kPostRegister;
constexpr int PingRequest_PingType_PingType_ARRAYSIZE = PingRequest_PingType_PingType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PingRequest_PingType_descriptor();
template<typename T>
inline const std::string& PingRequest_PingType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PingRequest_PingType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PingRequest_PingType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PingRequest_PingType_descriptor(), enum_t_value);
}
inline bool PingRequest_PingType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PingRequest_PingType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PingRequest_PingType>(
    PingRequest_PingType_descriptor(), name, value);
}
// ===================================================================

class PingRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.PingRequest) */ {
 public:
  inline PingRequest() : PingRequest(nullptr) {}
  ~PingRequest() override;
  explicit constexpr PingRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PingRequest(const PingRequest& from);
  PingRequest(PingRequest&& from) noexcept
    : PingRequest() {
    *this = ::std::move(from);
  }

  inline PingRequest& operator=(const PingRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PingRequest& operator=(PingRequest&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const PingRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const PingRequest* internal_default_instance() {
    return reinterpret_cast<const PingRequest*>(
               &_PingRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PingRequest& a, PingRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PingRequest* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PingRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PingRequest* New() const final {
    return new PingRequest();
  }

  PingRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PingRequest>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PingRequest& from);
  void MergeFrom(const PingRequest& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PingRequest* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.PingRequest";
  }
  protected:
  explicit PingRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef PingRequest_PingType PingType;
  static constexpr PingType kInvalid =
    PingRequest_PingType_kInvalid;
  static constexpr PingType kPriorRegister =
    PingRequest_PingType_kPriorRegister;
  static constexpr PingType kPostRegister =
    PingRequest_PingType_kPostRegister;
  static inline bool PingType_IsValid(int value) {
    return PingRequest_PingType_IsValid(value);
  }
  static constexpr PingType PingType_MIN =
    PingRequest_PingType_PingType_MIN;
  static constexpr PingType PingType_MAX =
    PingRequest_PingType_PingType_MAX;
  static constexpr int PingType_ARRAYSIZE =
    PingRequest_PingType_PingType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  PingType_descriptor() {
    return PingRequest_PingType_descriptor();
  }
  template<typename T>
  static inline const std::string& PingType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, PingType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function PingType_Name.");
    return PingRequest_PingType_Name(enum_t_value);
  }
  static inline bool PingType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      PingType* value) {
    return PingRequest_PingType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kPingTypeFieldNumber = 1,
    kPingRoundFieldNumber = 2,
  };
  // .AcFunDanmu.PingRequest.PingType pingType = 1;
  void clear_pingtype();
  ::AcFunDanmu::PingRequest_PingType pingtype() const;
  void set_pingtype(::AcFunDanmu::PingRequest_PingType value);
  private:
  ::AcFunDanmu::PingRequest_PingType _internal_pingtype() const;
  void _internal_set_pingtype(::AcFunDanmu::PingRequest_PingType value);
  public:

  // uint32 pingRound = 2;
  void clear_pinground();
  ::PROTOBUF_NAMESPACE_ID::uint32 pinground() const;
  void set_pinground(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_pinground() const;
  void _internal_set_pinground(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.PingRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  int pingtype_;
  ::PROTOBUF_NAMESPACE_ID::uint32 pinground_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Ping_2eproto;
};
// -------------------------------------------------------------------

class PingResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.PingResponse) */ {
 public:
  inline PingResponse() : PingResponse(nullptr) {}
  ~PingResponse() override;
  explicit constexpr PingResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PingResponse(const PingResponse& from);
  PingResponse(PingResponse&& from) noexcept
    : PingResponse() {
    *this = ::std::move(from);
  }

  inline PingResponse& operator=(const PingResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline PingResponse& operator=(PingResponse&& from) noexcept {
    if (this == &from) return *this;
    if (GetOwningArena() == from.GetOwningArena()) {
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
  static const PingResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const PingResponse* internal_default_instance() {
    return reinterpret_cast<const PingResponse*>(
               &_PingResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(PingResponse& a, PingResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(PingResponse* other) {
    if (other == this) return;
    if (GetOwningArena() == other->GetOwningArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(PingResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline PingResponse* New() const final {
    return new PingResponse();
  }

  PingResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<PingResponse>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const PingResponse& from);
  void MergeFrom(const PingResponse& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(PingResponse* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.PingResponse";
  }
  protected:
  explicit PingResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kClientIpV6FieldNumber = 5,
    kServerTimestampFieldNumber = 1,
    kClientIpFieldNumber = 2,
    kRedirectIpFieldNumber = 3,
    kRedirectPortFieldNumber = 4,
  };
  // bytes clientIpV6 = 5;
  void clear_clientipv6();
  const std::string& clientipv6() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_clientipv6(ArgT0&& arg0, ArgT... args);
  std::string* mutable_clientipv6();
  PROTOBUF_FUTURE_MUST_USE_RESULT std::string* release_clientipv6();
  void set_allocated_clientipv6(std::string* clientipv6);
  private:
  const std::string& _internal_clientipv6() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_clientipv6(const std::string& value);
  std::string* _internal_mutable_clientipv6();
  public:

  // sfixed32 serverTimestamp = 1;
  void clear_servertimestamp();
  ::PROTOBUF_NAMESPACE_ID::int32 servertimestamp() const;
  void set_servertimestamp(::PROTOBUF_NAMESPACE_ID::int32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int32 _internal_servertimestamp() const;
  void _internal_set_servertimestamp(::PROTOBUF_NAMESPACE_ID::int32 value);
  public:

  // fixed32 clientIp = 2;
  void clear_clientip();
  ::PROTOBUF_NAMESPACE_ID::uint32 clientip() const;
  void set_clientip(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_clientip() const;
  void _internal_set_clientip(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // fixed32 redirectIp = 3;
  void clear_redirectip();
  ::PROTOBUF_NAMESPACE_ID::uint32 redirectip() const;
  void set_redirectip(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_redirectip() const;
  void _internal_set_redirectip(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // uint32 redirectPort = 4;
  void clear_redirectport();
  ::PROTOBUF_NAMESPACE_ID::uint32 redirectport() const;
  void set_redirectport(::PROTOBUF_NAMESPACE_ID::uint32 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::uint32 _internal_redirectport() const;
  void _internal_set_redirectport(::PROTOBUF_NAMESPACE_ID::uint32 value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.PingResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr clientipv6_;
  ::PROTOBUF_NAMESPACE_ID::int32 servertimestamp_;
  ::PROTOBUF_NAMESPACE_ID::uint32 clientip_;
  ::PROTOBUF_NAMESPACE_ID::uint32 redirectip_;
  ::PROTOBUF_NAMESPACE_ID::uint32 redirectport_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_Ping_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PingRequest

// .AcFunDanmu.PingRequest.PingType pingType = 1;
inline void PingRequest::clear_pingtype() {
  pingtype_ = 0;
}
inline ::AcFunDanmu::PingRequest_PingType PingRequest::_internal_pingtype() const {
  return static_cast< ::AcFunDanmu::PingRequest_PingType >(pingtype_);
}
inline ::AcFunDanmu::PingRequest_PingType PingRequest::pingtype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PingRequest.pingType)
  return _internal_pingtype();
}
inline void PingRequest::_internal_set_pingtype(::AcFunDanmu::PingRequest_PingType value) {
  
  pingtype_ = value;
}
inline void PingRequest::set_pingtype(::AcFunDanmu::PingRequest_PingType value) {
  _internal_set_pingtype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.PingRequest.pingType)
}

// uint32 pingRound = 2;
inline void PingRequest::clear_pinground() {
  pinground_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PingRequest::_internal_pinground() const {
  return pinground_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PingRequest::pinground() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PingRequest.pingRound)
  return _internal_pinground();
}
inline void PingRequest::_internal_set_pinground(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  pinground_ = value;
}
inline void PingRequest::set_pinground(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_pinground(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.PingRequest.pingRound)
}

// -------------------------------------------------------------------

// PingResponse

// sfixed32 serverTimestamp = 1;
inline void PingResponse::clear_servertimestamp() {
  servertimestamp_ = 0;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PingResponse::_internal_servertimestamp() const {
  return servertimestamp_;
}
inline ::PROTOBUF_NAMESPACE_ID::int32 PingResponse::servertimestamp() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PingResponse.serverTimestamp)
  return _internal_servertimestamp();
}
inline void PingResponse::_internal_set_servertimestamp(::PROTOBUF_NAMESPACE_ID::int32 value) {
  
  servertimestamp_ = value;
}
inline void PingResponse::set_servertimestamp(::PROTOBUF_NAMESPACE_ID::int32 value) {
  _internal_set_servertimestamp(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.PingResponse.serverTimestamp)
}

// fixed32 clientIp = 2;
inline void PingResponse::clear_clientip() {
  clientip_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PingResponse::_internal_clientip() const {
  return clientip_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PingResponse::clientip() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PingResponse.clientIp)
  return _internal_clientip();
}
inline void PingResponse::_internal_set_clientip(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  clientip_ = value;
}
inline void PingResponse::set_clientip(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_clientip(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.PingResponse.clientIp)
}

// fixed32 redirectIp = 3;
inline void PingResponse::clear_redirectip() {
  redirectip_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PingResponse::_internal_redirectip() const {
  return redirectip_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PingResponse::redirectip() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PingResponse.redirectIp)
  return _internal_redirectip();
}
inline void PingResponse::_internal_set_redirectip(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  redirectip_ = value;
}
inline void PingResponse::set_redirectip(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_redirectip(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.PingResponse.redirectIp)
}

// uint32 redirectPort = 4;
inline void PingResponse::clear_redirectport() {
  redirectport_ = 0u;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PingResponse::_internal_redirectport() const {
  return redirectport_;
}
inline ::PROTOBUF_NAMESPACE_ID::uint32 PingResponse::redirectport() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PingResponse.redirectPort)
  return _internal_redirectport();
}
inline void PingResponse::_internal_set_redirectport(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  
  redirectport_ = value;
}
inline void PingResponse::set_redirectport(::PROTOBUF_NAMESPACE_ID::uint32 value) {
  _internal_set_redirectport(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.PingResponse.redirectPort)
}

// bytes clientIpV6 = 5;
inline void PingResponse::clear_clientipv6() {
  clientipv6_.ClearToEmpty();
}
inline const std::string& PingResponse::clientipv6() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.PingResponse.clientIpV6)
  return _internal_clientipv6();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PingResponse::set_clientipv6(ArgT0&& arg0, ArgT... args) {
 
 clientipv6_.SetBytes(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.PingResponse.clientIpV6)
}
inline std::string* PingResponse::mutable_clientipv6() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.PingResponse.clientIpV6)
  return _internal_mutable_clientipv6();
}
inline const std::string& PingResponse::_internal_clientipv6() const {
  return clientipv6_.Get();
}
inline void PingResponse::_internal_set_clientipv6(const std::string& value) {
  
  clientipv6_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArenaForAllocation());
}
inline std::string* PingResponse::_internal_mutable_clientipv6() {
  
  return clientipv6_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArenaForAllocation());
}
inline std::string* PingResponse::release_clientipv6() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.PingResponse.clientIpV6)
  return clientipv6_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArenaForAllocation());
}
inline void PingResponse::set_allocated_clientipv6(std::string* clientipv6) {
  if (clientipv6 != nullptr) {
    
  } else {
    
  }
  clientipv6_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), clientipv6,
      GetArenaForAllocation());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.PingResponse.clientIpV6)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::PingRequest_PingType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::PingRequest_PingType>() {
  return ::AcFunDanmu::PingRequest_PingType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_Ping_2eproto
