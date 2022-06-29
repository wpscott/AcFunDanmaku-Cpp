// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ChannelSubscribeResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_ChannelSubscribeResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_ChannelSubscribeResponse_2eproto

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
#include <google/protobuf/generated_message_bases.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata_lite.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_ChannelSubscribeResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_ChannelSubscribeResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_ChannelSubscribeResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Channel {
class ChannelSubscribeResponse;
struct ChannelSubscribeResponseDefaultTypeInternal;
extern ChannelSubscribeResponseDefaultTypeInternal _ChannelSubscribeResponse_default_instance_;
}  // namespace Channel
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Channel::ChannelSubscribeResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Channel::ChannelSubscribeResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Channel {

// ===================================================================

class ChannelSubscribeResponse final :
    public ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribeResponse) */ {
 public:
  inline ChannelSubscribeResponse() : ChannelSubscribeResponse(nullptr) {}
  explicit PROTOBUF_CONSTEXPR ChannelSubscribeResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  ChannelSubscribeResponse(const ChannelSubscribeResponse& from);
  ChannelSubscribeResponse(ChannelSubscribeResponse&& from) noexcept
    : ChannelSubscribeResponse() {
    *this = ::std::move(from);
  }

  inline ChannelSubscribeResponse& operator=(const ChannelSubscribeResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline ChannelSubscribeResponse& operator=(ChannelSubscribeResponse&& from) noexcept {
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
  static const ChannelSubscribeResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const ChannelSubscribeResponse* internal_default_instance() {
    return reinterpret_cast<const ChannelSubscribeResponse*>(
               &_ChannelSubscribeResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ChannelSubscribeResponse& a, ChannelSubscribeResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(ChannelSubscribeResponse* other) {
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
  void UnsafeArenaSwap(ChannelSubscribeResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  ChannelSubscribeResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<ChannelSubscribeResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyFrom;
  inline void CopyFrom(const ChannelSubscribeResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::CopyImpl(*this, from);
  }
  using ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeFrom;
  void MergeFrom(const ChannelSubscribeResponse& from) {
    ::PROTOBUF_NAMESPACE_ID::internal::ZeroFieldsBase::MergeImpl(*this, from);
  }
  public:

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Channel.ChannelSubscribeResponse";
  }
  protected:
  explicit ChannelSubscribeResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Channel.ChannelSubscribeResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
  };
  friend struct ::TableStruct_ChannelSubscribeResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ChannelSubscribeResponse

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Channel
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_ChannelSubscribeResponse_2eproto
