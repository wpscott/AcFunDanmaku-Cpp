// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ClientConfigGetRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ClientConfigGetRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ClientConfigGetRequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_ClientConfigGetRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ClientConfigGetRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ClientConfigGetRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Config {
class ClientConfigGetRequest;
struct ClientConfigGetRequestDefaultTypeInternal;
extern ClientConfigGetRequestDefaultTypeInternal _ClientConfigGetRequest_default_instance_;
}  // namespace Config
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Config::ClientConfigGetRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Config::ClientConfigGetRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Config {

// ===================================================================

class ClientConfigGetRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Config.ClientConfigGetRequest) */ {
 public:
  inline ClientConfigGetRequest() : ClientConfigGetRequest(nullptr) {}
  ~ClientConfigGetRequest() override;
  explicit PROTOBUF_CONSTEXPR ClientConfigGetRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ClientConfigGetRequest(const ClientConfigGetRequest& from);
  ClientConfigGetRequest(ClientConfigGetRequest&& from) noexcept
    : ClientConfigGetRequest() {
    *this = ::std::move(from);
  }

  inline ClientConfigGetRequest& operator=(const ClientConfigGetRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline ClientConfigGetRequest& operator=(ClientConfigGetRequest&& from) noexcept {
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
  static const ClientConfigGetRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const ClientConfigGetRequest* internal_default_instance() {
    return reinterpret_cast<const ClientConfigGetRequest*>(
               &_ClientConfigGetRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ClientConfigGetRequest& a, ClientConfigGetRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(ClientConfigGetRequest* other) {
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
  void UnsafeArenaSwap(ClientConfigGetRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ClientConfigGetRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ClientConfigGetRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const ClientConfigGetRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const ClientConfigGetRequest& from) {
    ClientConfigGetRequest::MergeImpl(*this, from);
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
  void InternalSwap(ClientConfigGetRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Config.ClientConfigGetRequest";
  }
  protected:
  explicit ClientConfigGetRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVersionFieldNumber = 1,
  };
  // uint32 version = 1;
  void clear_version();
  uint32_t version() const;
  void set_version(uint32_t value);
  private:
  uint32_t _internal_version() const;
  void _internal_set_version(uint32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Config.ClientConfigGetRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    uint32_t version_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_ClientConfigGetRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ClientConfigGetRequest

// uint32 version = 1;
inline void ClientConfigGetRequest::clear_version() {
  _impl_.version_ = 0u;
}
inline uint32_t ClientConfigGetRequest::_internal_version() const {
  return _impl_.version_;
}
inline uint32_t ClientConfigGetRequest::version() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Config.ClientConfigGetRequest.version)
  return _internal_version();
}
inline void ClientConfigGetRequest::_internal_set_version(uint32_t value) {
  
  _impl_.version_ = value;
}
inline void ClientConfigGetRequest::set_version(uint32_t value) {
  _internal_set_version(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Config.ClientConfigGetRequest.version)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Config
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ClientConfigGetRequest_2eproto
