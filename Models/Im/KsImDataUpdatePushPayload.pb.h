// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: KsImDataUpdatePushPayload.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_KsImDataUpdatePushPayload_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_KsImDataUpdatePushPayload_2eproto

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
#include "KsImDataUpdateType.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_KsImDataUpdatePushPayload_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_KsImDataUpdatePushPayload_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_KsImDataUpdatePushPayload_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {
class KsImDataUpdatePushPayload;
struct KsImDataUpdatePushPayloadDefaultTypeInternal;
extern KsImDataUpdatePushPayloadDefaultTypeInternal _KsImDataUpdatePushPayload_default_instance_;
}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdatePushPayload* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdatePushPayload>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {

// ===================================================================

class KsImDataUpdatePushPayload final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload) */ {
 public:
  inline KsImDataUpdatePushPayload() : KsImDataUpdatePushPayload(nullptr) {}
  ~KsImDataUpdatePushPayload() override;
  explicit PROTOBUF_CONSTEXPR KsImDataUpdatePushPayload(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  KsImDataUpdatePushPayload(const KsImDataUpdatePushPayload& from);
  KsImDataUpdatePushPayload(KsImDataUpdatePushPayload&& from) noexcept
    : KsImDataUpdatePushPayload() {
    *this = ::std::move(from);
  }

  inline KsImDataUpdatePushPayload& operator=(const KsImDataUpdatePushPayload& from) {
    CopyFrom(from);
    return *this;
  }
  inline KsImDataUpdatePushPayload& operator=(KsImDataUpdatePushPayload&& from) noexcept {
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
  static const KsImDataUpdatePushPayload& default_instance() {
    return *internal_default_instance();
  }
  static inline const KsImDataUpdatePushPayload* internal_default_instance() {
    return reinterpret_cast<const KsImDataUpdatePushPayload*>(
               &_KsImDataUpdatePushPayload_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(KsImDataUpdatePushPayload& a, KsImDataUpdatePushPayload& b) {
    a.Swap(&b);
  }
  inline void Swap(KsImDataUpdatePushPayload* other) {
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
  void UnsafeArenaSwap(KsImDataUpdatePushPayload* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  KsImDataUpdatePushPayload* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<KsImDataUpdatePushPayload>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const KsImDataUpdatePushPayload& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const KsImDataUpdatePushPayload& from) {
    KsImDataUpdatePushPayload::MergeImpl(*this, from);
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
  void InternalSwap(KsImDataUpdatePushPayload* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload";
  }
  protected:
  explicit KsImDataUpdatePushPayload(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kContentFieldNumber = 2,
    kTimestampFieldNumber = 3,
    kTypeFieldNumber = 1,
  };
  // bytes content = 2;
  void clear_content();
  const std::string& content() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_content(ArgT0&& arg0, ArgT... args);
  std::string* mutable_content();
  PROTOBUF_NODISCARD std::string* release_content();
  void set_allocated_content(std::string* content);
  private:
  const std::string& _internal_content() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_content(const std::string& value);
  std::string* _internal_mutable_content();
  public:

  // int64 timestamp = 3;
  void clear_timestamp();
  int64_t timestamp() const;
  void set_timestamp(int64_t value);
  private:
  int64_t _internal_timestamp() const;
  void _internal_set_timestamp(int64_t value);
  public:

  // .AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdateType type = 1;
  void clear_type();
  ::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType type() const;
  void set_type(::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType value);
  private:
  ::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType _internal_type() const;
  void _internal_set_type(::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr content_;
    int64_t timestamp_;
    int type_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_KsImDataUpdatePushPayload_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// KsImDataUpdatePushPayload

// .AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdateType type = 1;
inline void KsImDataUpdatePushPayload::clear_type() {
  _impl_.type_ = 0;
}
inline ::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType KsImDataUpdatePushPayload::_internal_type() const {
  return static_cast< ::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType >(_impl_.type_);
}
inline ::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType KsImDataUpdatePushPayload::type() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.type)
  return _internal_type();
}
inline void KsImDataUpdatePushPayload::_internal_set_type(::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType value) {
  
  _impl_.type_ = value;
}
inline void KsImDataUpdatePushPayload::set_type(::AcFunDanmu::Im::Cloud::Data::Update::KsImDataUpdateType value) {
  _internal_set_type(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.type)
}

// bytes content = 2;
inline void KsImDataUpdatePushPayload::clear_content() {
  _impl_.content_.ClearToEmpty();
}
inline const std::string& KsImDataUpdatePushPayload::content() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.content)
  return _internal_content();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void KsImDataUpdatePushPayload::set_content(ArgT0&& arg0, ArgT... args) {
 
 _impl_.content_.SetBytes(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.content)
}
inline std::string* KsImDataUpdatePushPayload::mutable_content() {
  std::string* _s = _internal_mutable_content();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.content)
  return _s;
}
inline const std::string& KsImDataUpdatePushPayload::_internal_content() const {
  return _impl_.content_.Get();
}
inline void KsImDataUpdatePushPayload::_internal_set_content(const std::string& value) {
  
  _impl_.content_.Set(value, GetArenaForAllocation());
}
inline std::string* KsImDataUpdatePushPayload::_internal_mutable_content() {
  
  return _impl_.content_.Mutable(GetArenaForAllocation());
}
inline std::string* KsImDataUpdatePushPayload::release_content() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.content)
  return _impl_.content_.Release();
}
inline void KsImDataUpdatePushPayload::set_allocated_content(std::string* content) {
  if (content != nullptr) {
    
  } else {
    
  }
  _impl_.content_.SetAllocated(content, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.content_.IsDefault()) {
    _impl_.content_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.content)
}

// int64 timestamp = 3;
inline void KsImDataUpdatePushPayload::clear_timestamp() {
  _impl_.timestamp_ = int64_t{0};
}
inline int64_t KsImDataUpdatePushPayload::_internal_timestamp() const {
  return _impl_.timestamp_;
}
inline int64_t KsImDataUpdatePushPayload::timestamp() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.timestamp)
  return _internal_timestamp();
}
inline void KsImDataUpdatePushPayload::_internal_set_timestamp(int64_t value) {
  
  _impl_.timestamp_ = value;
}
inline void KsImDataUpdatePushPayload::set_timestamp(int64_t value) {
  _internal_set_timestamp(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Data.Update.KsImDataUpdatePushPayload.timestamp)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_KsImDataUpdatePushPayload_2eproto