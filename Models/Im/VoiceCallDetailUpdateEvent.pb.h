// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: VoiceCallDetailUpdateEvent.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_VoiceCallDetailUpdateEvent_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_VoiceCallDetailUpdateEvent_2eproto

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
#include "VoiceCallDetail.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_VoiceCallDetailUpdateEvent_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_VoiceCallDetailUpdateEvent_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_VoiceCallDetailUpdateEvent_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {
class VoiceCallDetailUpdateEvent;
struct VoiceCallDetailUpdateEventDefaultTypeInternal;
extern VoiceCallDetailUpdateEventDefaultTypeInternal _VoiceCallDetailUpdateEvent_default_instance_;
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetailUpdateEvent* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetailUpdateEvent>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {

// ===================================================================

class VoiceCallDetailUpdateEvent final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetailUpdateEvent) */ {
 public:
  inline VoiceCallDetailUpdateEvent() : VoiceCallDetailUpdateEvent(nullptr) {}
  ~VoiceCallDetailUpdateEvent() override;
  explicit PROTOBUF_CONSTEXPR VoiceCallDetailUpdateEvent(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  VoiceCallDetailUpdateEvent(const VoiceCallDetailUpdateEvent& from);
  VoiceCallDetailUpdateEvent(VoiceCallDetailUpdateEvent&& from) noexcept
    : VoiceCallDetailUpdateEvent() {
    *this = ::std::move(from);
  }

  inline VoiceCallDetailUpdateEvent& operator=(const VoiceCallDetailUpdateEvent& from) {
    CopyFrom(from);
    return *this;
  }
  inline VoiceCallDetailUpdateEvent& operator=(VoiceCallDetailUpdateEvent&& from) noexcept {
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
  static const VoiceCallDetailUpdateEvent& default_instance() {
    return *internal_default_instance();
  }
  static inline const VoiceCallDetailUpdateEvent* internal_default_instance() {
    return reinterpret_cast<const VoiceCallDetailUpdateEvent*>(
               &_VoiceCallDetailUpdateEvent_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(VoiceCallDetailUpdateEvent& a, VoiceCallDetailUpdateEvent& b) {
    a.Swap(&b);
  }
  inline void Swap(VoiceCallDetailUpdateEvent* other) {
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
  void UnsafeArenaSwap(VoiceCallDetailUpdateEvent* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  VoiceCallDetailUpdateEvent* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<VoiceCallDetailUpdateEvent>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const VoiceCallDetailUpdateEvent& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const VoiceCallDetailUpdateEvent& from) {
    VoiceCallDetailUpdateEvent::MergeImpl(*this, from);
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
  void InternalSwap(VoiceCallDetailUpdateEvent* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetailUpdateEvent";
  }
  protected:
  explicit VoiceCallDetailUpdateEvent(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kVoiceCallDetailFieldNumber = 1,
  };
  // .AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail voiceCallDetail = 1;
  bool has_voicecalldetail() const;
  private:
  bool _internal_has_voicecalldetail() const;
  public:
  void clear_voicecalldetail();
  const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail& voicecalldetail() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* release_voicecalldetail();
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* mutable_voicecalldetail();
  void set_allocated_voicecalldetail(::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* voicecalldetail);
  private:
  const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail& _internal_voicecalldetail() const;
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* _internal_mutable_voicecalldetail();
  public:
  void unsafe_arena_set_allocated_voicecalldetail(
      ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* voicecalldetail);
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* unsafe_arena_release_voicecalldetail();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetailUpdateEvent)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* voicecalldetail_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_VoiceCallDetailUpdateEvent_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// VoiceCallDetailUpdateEvent

// .AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetail voiceCallDetail = 1;
inline bool VoiceCallDetailUpdateEvent::_internal_has_voicecalldetail() const {
  return this != internal_default_instance() && _impl_.voicecalldetail_ != nullptr;
}
inline bool VoiceCallDetailUpdateEvent::has_voicecalldetail() const {
  return _internal_has_voicecalldetail();
}
inline const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail& VoiceCallDetailUpdateEvent::_internal_voicecalldetail() const {
  const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* p = _impl_.voicecalldetail_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail&>(
      ::AcFunDanmu::Im::Cloud::Voice::Call::_VoiceCallDetail_default_instance_);
}
inline const ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail& VoiceCallDetailUpdateEvent::voicecalldetail() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetailUpdateEvent.voiceCallDetail)
  return _internal_voicecalldetail();
}
inline void VoiceCallDetailUpdateEvent::unsafe_arena_set_allocated_voicecalldetail(
    ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* voicecalldetail) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.voicecalldetail_);
  }
  _impl_.voicecalldetail_ = voicecalldetail;
  if (voicecalldetail) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetailUpdateEvent.voiceCallDetail)
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* VoiceCallDetailUpdateEvent::release_voicecalldetail() {
  
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* temp = _impl_.voicecalldetail_;
  _impl_.voicecalldetail_ = nullptr;
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
inline ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* VoiceCallDetailUpdateEvent::unsafe_arena_release_voicecalldetail() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetailUpdateEvent.voiceCallDetail)
  
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* temp = _impl_.voicecalldetail_;
  _impl_.voicecalldetail_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* VoiceCallDetailUpdateEvent::_internal_mutable_voicecalldetail() {
  
  if (_impl_.voicecalldetail_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail>(GetArenaForAllocation());
    _impl_.voicecalldetail_ = p;
  }
  return _impl_.voicecalldetail_;
}
inline ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* VoiceCallDetailUpdateEvent::mutable_voicecalldetail() {
  ::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* _msg = _internal_mutable_voicecalldetail();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetailUpdateEvent.voiceCallDetail)
  return _msg;
}
inline void VoiceCallDetailUpdateEvent::set_allocated_voicecalldetail(::AcFunDanmu::Im::Cloud::Voice::Call::VoiceCallDetail* voicecalldetail) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.voicecalldetail_);
  }
  if (voicecalldetail) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(voicecalldetail));
    if (message_arena != submessage_arena) {
      voicecalldetail = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, voicecalldetail, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.voicecalldetail_ = voicecalldetail;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Voice.Call.VoiceCallDetailUpdateEvent.voiceCallDetail)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_VoiceCallDetailUpdateEvent_2eproto
