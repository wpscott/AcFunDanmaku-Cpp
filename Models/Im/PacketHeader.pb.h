// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PacketHeader.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PacketHeader_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PacketHeader_2eproto

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
#include "TokenInfo.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PacketHeader_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PacketHeader_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PacketHeader_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Basic {
class PacketHeader;
struct PacketHeaderDefaultTypeInternal;
extern PacketHeaderDefaultTypeInternal _PacketHeader_default_instance_;
}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Basic::PacketHeader* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Basic::PacketHeader>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Basic {

enum PacketHeader_Flags : int {
  PacketHeader_Flags_kDirUpstream = 0,
  PacketHeader_Flags_kDirDownstream = 1,
  PacketHeader_Flags_kDirMask = 1,
  PacketHeader_Flags_PacketHeader_Flags_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  PacketHeader_Flags_PacketHeader_Flags_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool PacketHeader_Flags_IsValid(int value);
constexpr PacketHeader_Flags PacketHeader_Flags_Flags_MIN = PacketHeader_Flags_kDirUpstream;
constexpr PacketHeader_Flags PacketHeader_Flags_Flags_MAX = PacketHeader_Flags_kDirDownstream;
constexpr int PacketHeader_Flags_Flags_ARRAYSIZE = PacketHeader_Flags_Flags_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PacketHeader_Flags_descriptor();
template<typename T>
inline const std::string& PacketHeader_Flags_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PacketHeader_Flags>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PacketHeader_Flags_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PacketHeader_Flags_descriptor(), enum_t_value);
}
inline bool PacketHeader_Flags_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PacketHeader_Flags* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PacketHeader_Flags>(
    PacketHeader_Flags_descriptor(), name, value);
}
enum PacketHeader_EncodingType : int {
  PacketHeader_EncodingType_kEncodingNone = 0,
  PacketHeader_EncodingType_kEncodingLz4 = 1,
  PacketHeader_EncodingType_PacketHeader_EncodingType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  PacketHeader_EncodingType_PacketHeader_EncodingType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool PacketHeader_EncodingType_IsValid(int value);
constexpr PacketHeader_EncodingType PacketHeader_EncodingType_EncodingType_MIN = PacketHeader_EncodingType_kEncodingNone;
constexpr PacketHeader_EncodingType PacketHeader_EncodingType_EncodingType_MAX = PacketHeader_EncodingType_kEncodingLz4;
constexpr int PacketHeader_EncodingType_EncodingType_ARRAYSIZE = PacketHeader_EncodingType_EncodingType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PacketHeader_EncodingType_descriptor();
template<typename T>
inline const std::string& PacketHeader_EncodingType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PacketHeader_EncodingType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PacketHeader_EncodingType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PacketHeader_EncodingType_descriptor(), enum_t_value);
}
inline bool PacketHeader_EncodingType_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PacketHeader_EncodingType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PacketHeader_EncodingType>(
    PacketHeader_EncodingType_descriptor(), name, value);
}
enum PacketHeader_EncryptionMode : int {
  PacketHeader_EncryptionMode_kEncryptionNone = 0,
  PacketHeader_EncryptionMode_kEncryptionServiceToken = 1,
  PacketHeader_EncryptionMode_kEncryptionSessionKey = 2,
  PacketHeader_EncryptionMode_PacketHeader_EncryptionMode_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  PacketHeader_EncryptionMode_PacketHeader_EncryptionMode_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool PacketHeader_EncryptionMode_IsValid(int value);
constexpr PacketHeader_EncryptionMode PacketHeader_EncryptionMode_EncryptionMode_MIN = PacketHeader_EncryptionMode_kEncryptionNone;
constexpr PacketHeader_EncryptionMode PacketHeader_EncryptionMode_EncryptionMode_MAX = PacketHeader_EncryptionMode_kEncryptionSessionKey;
constexpr int PacketHeader_EncryptionMode_EncryptionMode_ARRAYSIZE = PacketHeader_EncryptionMode_EncryptionMode_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PacketHeader_EncryptionMode_descriptor();
template<typename T>
inline const std::string& PacketHeader_EncryptionMode_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PacketHeader_EncryptionMode>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PacketHeader_EncryptionMode_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PacketHeader_EncryptionMode_descriptor(), enum_t_value);
}
inline bool PacketHeader_EncryptionMode_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PacketHeader_EncryptionMode* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PacketHeader_EncryptionMode>(
    PacketHeader_EncryptionMode_descriptor(), name, value);
}
enum PacketHeader_Feature : int {
  PacketHeader_Feature_kReserve = 0,
  PacketHeader_Feature_kCompressLz4 = 1,
  PacketHeader_Feature_PacketHeader_Feature_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::min(),
  PacketHeader_Feature_PacketHeader_Feature_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<int32_t>::max()
};
bool PacketHeader_Feature_IsValid(int value);
constexpr PacketHeader_Feature PacketHeader_Feature_Feature_MIN = PacketHeader_Feature_kReserve;
constexpr PacketHeader_Feature PacketHeader_Feature_Feature_MAX = PacketHeader_Feature_kCompressLz4;
constexpr int PacketHeader_Feature_Feature_ARRAYSIZE = PacketHeader_Feature_Feature_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* PacketHeader_Feature_descriptor();
template<typename T>
inline const std::string& PacketHeader_Feature_Name(T enum_t_value) {
  static_assert(::std::is_same<T, PacketHeader_Feature>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function PacketHeader_Feature_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    PacketHeader_Feature_descriptor(), enum_t_value);
}
inline bool PacketHeader_Feature_Parse(
    ::PROTOBUF_NAMESPACE_ID::ConstStringParam name, PacketHeader_Feature* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<PacketHeader_Feature>(
    PacketHeader_Feature_descriptor(), name, value);
}
// ===================================================================

class PacketHeader final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Basic.PacketHeader) */ {
 public:
  inline PacketHeader() : PacketHeader(nullptr) {}
  ~PacketHeader() override;
  explicit PROTOBUF_CONSTEXPR PacketHeader(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PacketHeader(const PacketHeader& from);
  PacketHeader(PacketHeader&& from) noexcept
    : PacketHeader() {
    *this = ::std::move(from);
  }

  inline PacketHeader& operator=(const PacketHeader& from) {
    CopyFrom(from);
    return *this;
  }
  inline PacketHeader& operator=(PacketHeader&& from) noexcept {
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
  static const PacketHeader& default_instance() {
    return *internal_default_instance();
  }
  static inline const PacketHeader* internal_default_instance() {
    return reinterpret_cast<const PacketHeader*>(
               &_PacketHeader_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PacketHeader& a, PacketHeader& b) {
    a.Swap(&b);
  }
  inline void Swap(PacketHeader* other) {
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
  void UnsafeArenaSwap(PacketHeader* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PacketHeader* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PacketHeader>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PacketHeader& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PacketHeader& from) {
    PacketHeader::MergeImpl(*this, from);
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
  void InternalSwap(PacketHeader* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Basic.PacketHeader";
  }
  protected:
  explicit PacketHeader(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  typedef PacketHeader_Flags Flags;
  static constexpr Flags kDirUpstream =
    PacketHeader_Flags_kDirUpstream;
  static constexpr Flags kDirDownstream =
    PacketHeader_Flags_kDirDownstream;
  static constexpr Flags kDirMask =
    PacketHeader_Flags_kDirMask;
  static inline bool Flags_IsValid(int value) {
    return PacketHeader_Flags_IsValid(value);
  }
  static constexpr Flags Flags_MIN =
    PacketHeader_Flags_Flags_MIN;
  static constexpr Flags Flags_MAX =
    PacketHeader_Flags_Flags_MAX;
  static constexpr int Flags_ARRAYSIZE =
    PacketHeader_Flags_Flags_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Flags_descriptor() {
    return PacketHeader_Flags_descriptor();
  }
  template<typename T>
  static inline const std::string& Flags_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Flags>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Flags_Name.");
    return PacketHeader_Flags_Name(enum_t_value);
  }
  static inline bool Flags_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Flags* value) {
    return PacketHeader_Flags_Parse(name, value);
  }

  typedef PacketHeader_EncodingType EncodingType;
  static constexpr EncodingType kEncodingNone =
    PacketHeader_EncodingType_kEncodingNone;
  static constexpr EncodingType kEncodingLz4 =
    PacketHeader_EncodingType_kEncodingLz4;
  static inline bool EncodingType_IsValid(int value) {
    return PacketHeader_EncodingType_IsValid(value);
  }
  static constexpr EncodingType EncodingType_MIN =
    PacketHeader_EncodingType_EncodingType_MIN;
  static constexpr EncodingType EncodingType_MAX =
    PacketHeader_EncodingType_EncodingType_MAX;
  static constexpr int EncodingType_ARRAYSIZE =
    PacketHeader_EncodingType_EncodingType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  EncodingType_descriptor() {
    return PacketHeader_EncodingType_descriptor();
  }
  template<typename T>
  static inline const std::string& EncodingType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, EncodingType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function EncodingType_Name.");
    return PacketHeader_EncodingType_Name(enum_t_value);
  }
  static inline bool EncodingType_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      EncodingType* value) {
    return PacketHeader_EncodingType_Parse(name, value);
  }

  typedef PacketHeader_EncryptionMode EncryptionMode;
  static constexpr EncryptionMode kEncryptionNone =
    PacketHeader_EncryptionMode_kEncryptionNone;
  static constexpr EncryptionMode kEncryptionServiceToken =
    PacketHeader_EncryptionMode_kEncryptionServiceToken;
  static constexpr EncryptionMode kEncryptionSessionKey =
    PacketHeader_EncryptionMode_kEncryptionSessionKey;
  static inline bool EncryptionMode_IsValid(int value) {
    return PacketHeader_EncryptionMode_IsValid(value);
  }
  static constexpr EncryptionMode EncryptionMode_MIN =
    PacketHeader_EncryptionMode_EncryptionMode_MIN;
  static constexpr EncryptionMode EncryptionMode_MAX =
    PacketHeader_EncryptionMode_EncryptionMode_MAX;
  static constexpr int EncryptionMode_ARRAYSIZE =
    PacketHeader_EncryptionMode_EncryptionMode_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  EncryptionMode_descriptor() {
    return PacketHeader_EncryptionMode_descriptor();
  }
  template<typename T>
  static inline const std::string& EncryptionMode_Name(T enum_t_value) {
    static_assert(::std::is_same<T, EncryptionMode>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function EncryptionMode_Name.");
    return PacketHeader_EncryptionMode_Name(enum_t_value);
  }
  static inline bool EncryptionMode_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      EncryptionMode* value) {
    return PacketHeader_EncryptionMode_Parse(name, value);
  }

  typedef PacketHeader_Feature Feature;
  static constexpr Feature kReserve =
    PacketHeader_Feature_kReserve;
  static constexpr Feature kCompressLz4 =
    PacketHeader_Feature_kCompressLz4;
  static inline bool Feature_IsValid(int value) {
    return PacketHeader_Feature_IsValid(value);
  }
  static constexpr Feature Feature_MIN =
    PacketHeader_Feature_Feature_MIN;
  static constexpr Feature Feature_MAX =
    PacketHeader_Feature_Feature_MAX;
  static constexpr int Feature_ARRAYSIZE =
    PacketHeader_Feature_Feature_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  Feature_descriptor() {
    return PacketHeader_Feature_descriptor();
  }
  template<typename T>
  static inline const std::string& Feature_Name(T enum_t_value) {
    static_assert(::std::is_same<T, Feature>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function Feature_Name.");
    return PacketHeader_Feature_Name(enum_t_value);
  }
  static inline bool Feature_Parse(::PROTOBUF_NAMESPACE_ID::ConstStringParam name,
      Feature* value) {
    return PacketHeader_Feature_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kFeaturesFieldNumber = 11,
    kKpnFieldNumber = 12,
    kTokenInfoFieldNumber = 9,
    kUidFieldNumber = 2,
    kInstanceIdFieldNumber = 3,
    kAppIdFieldNumber = 1,
    kFlagsFieldNumber = 5,
    kEncodingTypeFieldNumber = 6,
    kDecodedPayloadLenFieldNumber = 7,
    kSeqIdFieldNumber = 10,
    kEncryptionModeFieldNumber = 8,
  };
  // repeated .AcFunDanmu.Im.Basic.PacketHeader.Feature features = 11;
  int features_size() const;
  private:
  int _internal_features_size() const;
  public:
  void clear_features();
  private:
  ::AcFunDanmu::Im::Basic::PacketHeader_Feature _internal_features(int index) const;
  void _internal_add_features(::AcFunDanmu::Im::Basic::PacketHeader_Feature value);
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* _internal_mutable_features();
  public:
  ::AcFunDanmu::Im::Basic::PacketHeader_Feature features(int index) const;
  void set_features(int index, ::AcFunDanmu::Im::Basic::PacketHeader_Feature value);
  void add_features(::AcFunDanmu::Im::Basic::PacketHeader_Feature value);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>& features() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>* mutable_features();

  // string kpn = 12;
  void clear_kpn();
  const std::string& kpn() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_kpn(ArgT0&& arg0, ArgT... args);
  std::string* mutable_kpn();
  PROTOBUF_NODISCARD std::string* release_kpn();
  void set_allocated_kpn(std::string* kpn);
  private:
  const std::string& _internal_kpn() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_kpn(const std::string& value);
  std::string* _internal_mutable_kpn();
  public:

  // .AcFunDanmu.Im.Basic.TokenInfo tokenInfo = 9;
  bool has_tokeninfo() const;
  private:
  bool _internal_has_tokeninfo() const;
  public:
  void clear_tokeninfo();
  const ::AcFunDanmu::Im::Basic::TokenInfo& tokeninfo() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::TokenInfo* release_tokeninfo();
  ::AcFunDanmu::Im::Basic::TokenInfo* mutable_tokeninfo();
  void set_allocated_tokeninfo(::AcFunDanmu::Im::Basic::TokenInfo* tokeninfo);
  private:
  const ::AcFunDanmu::Im::Basic::TokenInfo& _internal_tokeninfo() const;
  ::AcFunDanmu::Im::Basic::TokenInfo* _internal_mutable_tokeninfo();
  public:
  void unsafe_arena_set_allocated_tokeninfo(
      ::AcFunDanmu::Im::Basic::TokenInfo* tokeninfo);
  ::AcFunDanmu::Im::Basic::TokenInfo* unsafe_arena_release_tokeninfo();

  // int64 uid = 2;
  void clear_uid();
  int64_t uid() const;
  void set_uid(int64_t value);
  private:
  int64_t _internal_uid() const;
  void _internal_set_uid(int64_t value);
  public:

  // int64 instanceId = 3;
  void clear_instanceid();
  int64_t instanceid() const;
  void set_instanceid(int64_t value);
  private:
  int64_t _internal_instanceid() const;
  void _internal_set_instanceid(int64_t value);
  public:

  // int32 appId = 1;
  void clear_appid();
  int32_t appid() const;
  void set_appid(int32_t value);
  private:
  int32_t _internal_appid() const;
  void _internal_set_appid(int32_t value);
  public:

  // uint32 flags = 5;
  void clear_flags();
  uint32_t flags() const;
  void set_flags(uint32_t value);
  private:
  uint32_t _internal_flags() const;
  void _internal_set_flags(uint32_t value);
  public:

  // .AcFunDanmu.Im.Basic.PacketHeader.EncodingType encodingType = 6;
  void clear_encodingtype();
  ::AcFunDanmu::Im::Basic::PacketHeader_EncodingType encodingtype() const;
  void set_encodingtype(::AcFunDanmu::Im::Basic::PacketHeader_EncodingType value);
  private:
  ::AcFunDanmu::Im::Basic::PacketHeader_EncodingType _internal_encodingtype() const;
  void _internal_set_encodingtype(::AcFunDanmu::Im::Basic::PacketHeader_EncodingType value);
  public:

  // uint32 decodedPayloadLen = 7;
  void clear_decodedpayloadlen();
  uint32_t decodedpayloadlen() const;
  void set_decodedpayloadlen(uint32_t value);
  private:
  uint32_t _internal_decodedpayloadlen() const;
  void _internal_set_decodedpayloadlen(uint32_t value);
  public:

  // int64 seqId = 10;
  void clear_seqid();
  int64_t seqid() const;
  void set_seqid(int64_t value);
  private:
  int64_t _internal_seqid() const;
  void _internal_set_seqid(int64_t value);
  public:

  // .AcFunDanmu.Im.Basic.PacketHeader.EncryptionMode encryptionMode = 8;
  void clear_encryptionmode();
  ::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode encryptionmode() const;
  void set_encryptionmode(::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode value);
  private:
  ::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode _internal_encryptionmode() const;
  void _internal_set_encryptionmode(::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Basic.PacketHeader)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedField<int> features_;
    mutable std::atomic<int> _features_cached_byte_size_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr kpn_;
    ::AcFunDanmu::Im::Basic::TokenInfo* tokeninfo_;
    int64_t uid_;
    int64_t instanceid_;
    int32_t appid_;
    uint32_t flags_;
    int encodingtype_;
    uint32_t decodedpayloadlen_;
    int64_t seqid_;
    int encryptionmode_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_PacketHeader_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PacketHeader

// int32 appId = 1;
inline void PacketHeader::clear_appid() {
  _impl_.appid_ = 0;
}
inline int32_t PacketHeader::_internal_appid() const {
  return _impl_.appid_;
}
inline int32_t PacketHeader::appid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.appId)
  return _internal_appid();
}
inline void PacketHeader::_internal_set_appid(int32_t value) {
  
  _impl_.appid_ = value;
}
inline void PacketHeader::set_appid(int32_t value) {
  _internal_set_appid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.appId)
}

// int64 uid = 2;
inline void PacketHeader::clear_uid() {
  _impl_.uid_ = int64_t{0};
}
inline int64_t PacketHeader::_internal_uid() const {
  return _impl_.uid_;
}
inline int64_t PacketHeader::uid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.uid)
  return _internal_uid();
}
inline void PacketHeader::_internal_set_uid(int64_t value) {
  
  _impl_.uid_ = value;
}
inline void PacketHeader::set_uid(int64_t value) {
  _internal_set_uid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.uid)
}

// int64 instanceId = 3;
inline void PacketHeader::clear_instanceid() {
  _impl_.instanceid_ = int64_t{0};
}
inline int64_t PacketHeader::_internal_instanceid() const {
  return _impl_.instanceid_;
}
inline int64_t PacketHeader::instanceid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.instanceId)
  return _internal_instanceid();
}
inline void PacketHeader::_internal_set_instanceid(int64_t value) {
  
  _impl_.instanceid_ = value;
}
inline void PacketHeader::set_instanceid(int64_t value) {
  _internal_set_instanceid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.instanceId)
}

// uint32 flags = 5;
inline void PacketHeader::clear_flags() {
  _impl_.flags_ = 0u;
}
inline uint32_t PacketHeader::_internal_flags() const {
  return _impl_.flags_;
}
inline uint32_t PacketHeader::flags() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.flags)
  return _internal_flags();
}
inline void PacketHeader::_internal_set_flags(uint32_t value) {
  
  _impl_.flags_ = value;
}
inline void PacketHeader::set_flags(uint32_t value) {
  _internal_set_flags(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.flags)
}

// .AcFunDanmu.Im.Basic.PacketHeader.EncodingType encodingType = 6;
inline void PacketHeader::clear_encodingtype() {
  _impl_.encodingtype_ = 0;
}
inline ::AcFunDanmu::Im::Basic::PacketHeader_EncodingType PacketHeader::_internal_encodingtype() const {
  return static_cast< ::AcFunDanmu::Im::Basic::PacketHeader_EncodingType >(_impl_.encodingtype_);
}
inline ::AcFunDanmu::Im::Basic::PacketHeader_EncodingType PacketHeader::encodingtype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.encodingType)
  return _internal_encodingtype();
}
inline void PacketHeader::_internal_set_encodingtype(::AcFunDanmu::Im::Basic::PacketHeader_EncodingType value) {
  
  _impl_.encodingtype_ = value;
}
inline void PacketHeader::set_encodingtype(::AcFunDanmu::Im::Basic::PacketHeader_EncodingType value) {
  _internal_set_encodingtype(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.encodingType)
}

// uint32 decodedPayloadLen = 7;
inline void PacketHeader::clear_decodedpayloadlen() {
  _impl_.decodedpayloadlen_ = 0u;
}
inline uint32_t PacketHeader::_internal_decodedpayloadlen() const {
  return _impl_.decodedpayloadlen_;
}
inline uint32_t PacketHeader::decodedpayloadlen() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.decodedPayloadLen)
  return _internal_decodedpayloadlen();
}
inline void PacketHeader::_internal_set_decodedpayloadlen(uint32_t value) {
  
  _impl_.decodedpayloadlen_ = value;
}
inline void PacketHeader::set_decodedpayloadlen(uint32_t value) {
  _internal_set_decodedpayloadlen(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.decodedPayloadLen)
}

// .AcFunDanmu.Im.Basic.PacketHeader.EncryptionMode encryptionMode = 8;
inline void PacketHeader::clear_encryptionmode() {
  _impl_.encryptionmode_ = 0;
}
inline ::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode PacketHeader::_internal_encryptionmode() const {
  return static_cast< ::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode >(_impl_.encryptionmode_);
}
inline ::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode PacketHeader::encryptionmode() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.encryptionMode)
  return _internal_encryptionmode();
}
inline void PacketHeader::_internal_set_encryptionmode(::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode value) {
  
  _impl_.encryptionmode_ = value;
}
inline void PacketHeader::set_encryptionmode(::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode value) {
  _internal_set_encryptionmode(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.encryptionMode)
}

// .AcFunDanmu.Im.Basic.TokenInfo tokenInfo = 9;
inline bool PacketHeader::_internal_has_tokeninfo() const {
  return this != internal_default_instance() && _impl_.tokeninfo_ != nullptr;
}
inline bool PacketHeader::has_tokeninfo() const {
  return _internal_has_tokeninfo();
}
inline const ::AcFunDanmu::Im::Basic::TokenInfo& PacketHeader::_internal_tokeninfo() const {
  const ::AcFunDanmu::Im::Basic::TokenInfo* p = _impl_.tokeninfo_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::TokenInfo&>(
      ::AcFunDanmu::Im::Basic::_TokenInfo_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::TokenInfo& PacketHeader::tokeninfo() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.tokenInfo)
  return _internal_tokeninfo();
}
inline void PacketHeader::unsafe_arena_set_allocated_tokeninfo(
    ::AcFunDanmu::Im::Basic::TokenInfo* tokeninfo) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.tokeninfo_);
  }
  _impl_.tokeninfo_ = tokeninfo;
  if (tokeninfo) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Basic.PacketHeader.tokenInfo)
}
inline ::AcFunDanmu::Im::Basic::TokenInfo* PacketHeader::release_tokeninfo() {
  
  ::AcFunDanmu::Im::Basic::TokenInfo* temp = _impl_.tokeninfo_;
  _impl_.tokeninfo_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::TokenInfo* PacketHeader::unsafe_arena_release_tokeninfo() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Basic.PacketHeader.tokenInfo)
  
  ::AcFunDanmu::Im::Basic::TokenInfo* temp = _impl_.tokeninfo_;
  _impl_.tokeninfo_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::TokenInfo* PacketHeader::_internal_mutable_tokeninfo() {
  
  if (_impl_.tokeninfo_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::TokenInfo>(GetArenaForAllocation());
    _impl_.tokeninfo_ = p;
  }
  return _impl_.tokeninfo_;
}
inline ::AcFunDanmu::Im::Basic::TokenInfo* PacketHeader::mutable_tokeninfo() {
  ::AcFunDanmu::Im::Basic::TokenInfo* _msg = _internal_mutable_tokeninfo();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.PacketHeader.tokenInfo)
  return _msg;
}
inline void PacketHeader::set_allocated_tokeninfo(::AcFunDanmu::Im::Basic::TokenInfo* tokeninfo) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.tokeninfo_);
  }
  if (tokeninfo) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(tokeninfo));
    if (message_arena != submessage_arena) {
      tokeninfo = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, tokeninfo, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.tokeninfo_ = tokeninfo;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Basic.PacketHeader.tokenInfo)
}

// int64 seqId = 10;
inline void PacketHeader::clear_seqid() {
  _impl_.seqid_ = int64_t{0};
}
inline int64_t PacketHeader::_internal_seqid() const {
  return _impl_.seqid_;
}
inline int64_t PacketHeader::seqid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.seqId)
  return _internal_seqid();
}
inline void PacketHeader::_internal_set_seqid(int64_t value) {
  
  _impl_.seqid_ = value;
}
inline void PacketHeader::set_seqid(int64_t value) {
  _internal_set_seqid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.seqId)
}

// repeated .AcFunDanmu.Im.Basic.PacketHeader.Feature features = 11;
inline int PacketHeader::_internal_features_size() const {
  return _impl_.features_.size();
}
inline int PacketHeader::features_size() const {
  return _internal_features_size();
}
inline void PacketHeader::clear_features() {
  _impl_.features_.Clear();
}
inline ::AcFunDanmu::Im::Basic::PacketHeader_Feature PacketHeader::_internal_features(int index) const {
  return static_cast< ::AcFunDanmu::Im::Basic::PacketHeader_Feature >(_impl_.features_.Get(index));
}
inline ::AcFunDanmu::Im::Basic::PacketHeader_Feature PacketHeader::features(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.features)
  return _internal_features(index);
}
inline void PacketHeader::set_features(int index, ::AcFunDanmu::Im::Basic::PacketHeader_Feature value) {
  _impl_.features_.Set(index, value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.features)
}
inline void PacketHeader::_internal_add_features(::AcFunDanmu::Im::Basic::PacketHeader_Feature value) {
  _impl_.features_.Add(value);
}
inline void PacketHeader::add_features(::AcFunDanmu::Im::Basic::PacketHeader_Feature value) {
  _internal_add_features(value);
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Basic.PacketHeader.features)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>&
PacketHeader::features() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Basic.PacketHeader.features)
  return _impl_.features_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
PacketHeader::_internal_mutable_features() {
  return &_impl_.features_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedField<int>*
PacketHeader::mutable_features() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Basic.PacketHeader.features)
  return _internal_mutable_features();
}

// string kpn = 12;
inline void PacketHeader::clear_kpn() {
  _impl_.kpn_.ClearToEmpty();
}
inline const std::string& PacketHeader::kpn() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Basic.PacketHeader.kpn)
  return _internal_kpn();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PacketHeader::set_kpn(ArgT0&& arg0, ArgT... args) {
 
 _impl_.kpn_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Basic.PacketHeader.kpn)
}
inline std::string* PacketHeader::mutable_kpn() {
  std::string* _s = _internal_mutable_kpn();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Basic.PacketHeader.kpn)
  return _s;
}
inline const std::string& PacketHeader::_internal_kpn() const {
  return _impl_.kpn_.Get();
}
inline void PacketHeader::_internal_set_kpn(const std::string& value) {
  
  _impl_.kpn_.Set(value, GetArenaForAllocation());
}
inline std::string* PacketHeader::_internal_mutable_kpn() {
  
  return _impl_.kpn_.Mutable(GetArenaForAllocation());
}
inline std::string* PacketHeader::release_kpn() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Basic.PacketHeader.kpn)
  return _impl_.kpn_.Release();
}
inline void PacketHeader::set_allocated_kpn(std::string* kpn) {
  if (kpn != nullptr) {
    
  } else {
    
  }
  _impl_.kpn_.SetAllocated(kpn, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.kpn_.IsDefault()) {
    _impl_.kpn_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Basic.PacketHeader.kpn)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Basic
}  // namespace Im
}  // namespace AcFunDanmu

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::AcFunDanmu::Im::Basic::PacketHeader_Flags> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Basic::PacketHeader_Flags>() {
  return ::AcFunDanmu::Im::Basic::PacketHeader_Flags_descriptor();
}
template <> struct is_proto_enum< ::AcFunDanmu::Im::Basic::PacketHeader_EncodingType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Basic::PacketHeader_EncodingType>() {
  return ::AcFunDanmu::Im::Basic::PacketHeader_EncodingType_descriptor();
}
template <> struct is_proto_enum< ::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode>() {
  return ::AcFunDanmu::Im::Basic::PacketHeader_EncryptionMode_descriptor();
}
template <> struct is_proto_enum< ::AcFunDanmu::Im::Basic::PacketHeader_Feature> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::AcFunDanmu::Im::Basic::PacketHeader_Feature>() {
  return ::AcFunDanmu::Im::Basic::PacketHeader_Feature_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PacketHeader_2eproto
