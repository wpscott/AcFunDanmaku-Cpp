// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: AudioAttachment.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_AudioAttachment_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_AudioAttachment_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_AudioAttachment_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_AudioAttachment_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_AudioAttachment_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class AudioAttachment;
struct AudioAttachmentDefaultTypeInternal;
extern AudioAttachmentDefaultTypeInternal _AudioAttachment_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::AudioAttachment* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::AudioAttachment>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class AudioAttachment final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.AudioAttachment) */ {
 public:
  inline AudioAttachment() : AudioAttachment(nullptr) {}
  ~AudioAttachment() override;
  explicit PROTOBUF_CONSTEXPR AudioAttachment(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  AudioAttachment(const AudioAttachment& from);
  AudioAttachment(AudioAttachment&& from) noexcept
    : AudioAttachment() {
    *this = ::std::move(from);
  }

  inline AudioAttachment& operator=(const AudioAttachment& from) {
    CopyFrom(from);
    return *this;
  }
  inline AudioAttachment& operator=(AudioAttachment&& from) noexcept {
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
  static const AudioAttachment& default_instance() {
    return *internal_default_instance();
  }
  static inline const AudioAttachment* internal_default_instance() {
    return reinterpret_cast<const AudioAttachment*>(
               &_AudioAttachment_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(AudioAttachment& a, AudioAttachment& b) {
    a.Swap(&b);
  }
  inline void Swap(AudioAttachment* other) {
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
  void UnsafeArenaSwap(AudioAttachment* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  AudioAttachment* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<AudioAttachment>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const AudioAttachment& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const AudioAttachment& from) {
    AudioAttachment::MergeImpl(*this, from);
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
  void InternalSwap(AudioAttachment* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.AudioAttachment";
  }
  protected:
  explicit AudioAttachment(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMimeTypeFieldNumber = 1,
    kUrlFieldNumber = 2,
    kDurationInMSFieldNumber = 3,
    kLengthInBytesFieldNumber = 5,
  };
  // string mimeType = 1;
  void clear_mimetype();
  const std::string& mimetype() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_mimetype(ArgT0&& arg0, ArgT... args);
  std::string* mutable_mimetype();
  PROTOBUF_NODISCARD std::string* release_mimetype();
  void set_allocated_mimetype(std::string* mimetype);
  private:
  const std::string& _internal_mimetype() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_mimetype(const std::string& value);
  std::string* _internal_mutable_mimetype();
  public:

  // string url = 2;
  void clear_url();
  const std::string& url() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_url(ArgT0&& arg0, ArgT... args);
  std::string* mutable_url();
  PROTOBUF_NODISCARD std::string* release_url();
  void set_allocated_url(std::string* url);
  private:
  const std::string& _internal_url() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_url(const std::string& value);
  std::string* _internal_mutable_url();
  public:

  // int64 durationInMS = 3;
  void clear_durationinms();
  int64_t durationinms() const;
  void set_durationinms(int64_t value);
  private:
  int64_t _internal_durationinms() const;
  void _internal_set_durationinms(int64_t value);
  public:

  // int64 lengthInBytes = 5;
  void clear_lengthinbytes();
  int64_t lengthinbytes() const;
  void set_lengthinbytes(int64_t value);
  private:
  int64_t _internal_lengthinbytes() const;
  void _internal_set_lengthinbytes(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.AudioAttachment)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr mimetype_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
    int64_t durationinms_;
    int64_t lengthinbytes_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_AudioAttachment_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// AudioAttachment

// string mimeType = 1;
inline void AudioAttachment::clear_mimetype() {
  _impl_.mimetype_.ClearToEmpty();
}
inline const std::string& AudioAttachment::mimetype() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.AudioAttachment.mimeType)
  return _internal_mimetype();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AudioAttachment::set_mimetype(ArgT0&& arg0, ArgT... args) {
 
 _impl_.mimetype_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.AudioAttachment.mimeType)
}
inline std::string* AudioAttachment::mutable_mimetype() {
  std::string* _s = _internal_mutable_mimetype();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.AudioAttachment.mimeType)
  return _s;
}
inline const std::string& AudioAttachment::_internal_mimetype() const {
  return _impl_.mimetype_.Get();
}
inline void AudioAttachment::_internal_set_mimetype(const std::string& value) {
  
  _impl_.mimetype_.Set(value, GetArenaForAllocation());
}
inline std::string* AudioAttachment::_internal_mutable_mimetype() {
  
  return _impl_.mimetype_.Mutable(GetArenaForAllocation());
}
inline std::string* AudioAttachment::release_mimetype() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.AudioAttachment.mimeType)
  return _impl_.mimetype_.Release();
}
inline void AudioAttachment::set_allocated_mimetype(std::string* mimetype) {
  if (mimetype != nullptr) {
    
  } else {
    
  }
  _impl_.mimetype_.SetAllocated(mimetype, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.mimetype_.IsDefault()) {
    _impl_.mimetype_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.AudioAttachment.mimeType)
}

// string url = 2;
inline void AudioAttachment::clear_url() {
  _impl_.url_.ClearToEmpty();
}
inline const std::string& AudioAttachment::url() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.AudioAttachment.url)
  return _internal_url();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void AudioAttachment::set_url(ArgT0&& arg0, ArgT... args) {
 
 _impl_.url_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.AudioAttachment.url)
}
inline std::string* AudioAttachment::mutable_url() {
  std::string* _s = _internal_mutable_url();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.AudioAttachment.url)
  return _s;
}
inline const std::string& AudioAttachment::_internal_url() const {
  return _impl_.url_.Get();
}
inline void AudioAttachment::_internal_set_url(const std::string& value) {
  
  _impl_.url_.Set(value, GetArenaForAllocation());
}
inline std::string* AudioAttachment::_internal_mutable_url() {
  
  return _impl_.url_.Mutable(GetArenaForAllocation());
}
inline std::string* AudioAttachment::release_url() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.AudioAttachment.url)
  return _impl_.url_.Release();
}
inline void AudioAttachment::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  _impl_.url_.SetAllocated(url, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.url_.IsDefault()) {
    _impl_.url_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.AudioAttachment.url)
}

// int64 durationInMS = 3;
inline void AudioAttachment::clear_durationinms() {
  _impl_.durationinms_ = int64_t{0};
}
inline int64_t AudioAttachment::_internal_durationinms() const {
  return _impl_.durationinms_;
}
inline int64_t AudioAttachment::durationinms() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.AudioAttachment.durationInMS)
  return _internal_durationinms();
}
inline void AudioAttachment::_internal_set_durationinms(int64_t value) {
  
  _impl_.durationinms_ = value;
}
inline void AudioAttachment::set_durationinms(int64_t value) {
  _internal_set_durationinms(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.AudioAttachment.durationInMS)
}

// int64 lengthInBytes = 5;
inline void AudioAttachment::clear_lengthinbytes() {
  _impl_.lengthinbytes_ = int64_t{0};
}
inline int64_t AudioAttachment::_internal_lengthinbytes() const {
  return _impl_.lengthinbytes_;
}
inline int64_t AudioAttachment::lengthinbytes() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.AudioAttachment.lengthInBytes)
  return _internal_lengthinbytes();
}
inline void AudioAttachment::_internal_set_lengthinbytes(int64_t value) {
  
  _impl_.lengthinbytes_ = value;
}
inline void AudioAttachment::set_lengthinbytes(int64_t value) {
  _internal_set_lengthinbytes(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.AudioAttachment.lengthInBytes)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_AudioAttachment_2eproto
