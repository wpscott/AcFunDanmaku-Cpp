// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MultiMediaMessage.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_MultiMediaMessage_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_MultiMediaMessage_2eproto

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
#include "Media.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_MultiMediaMessage_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_MultiMediaMessage_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_MultiMediaMessage_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class MultiMediaMessage;
struct MultiMediaMessageDefaultTypeInternal;
extern MultiMediaMessageDefaultTypeInternal _MultiMediaMessage_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class MultiMediaMessage final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage) */ {
 public:
  inline MultiMediaMessage() : MultiMediaMessage(nullptr) {}
  ~MultiMediaMessage() override;
  explicit PROTOBUF_CONSTEXPR MultiMediaMessage(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  MultiMediaMessage(const MultiMediaMessage& from);
  MultiMediaMessage(MultiMediaMessage&& from) noexcept
    : MultiMediaMessage() {
    *this = ::std::move(from);
  }

  inline MultiMediaMessage& operator=(const MultiMediaMessage& from) {
    CopyFrom(from);
    return *this;
  }
  inline MultiMediaMessage& operator=(MultiMediaMessage&& from) noexcept {
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
  static const MultiMediaMessage& default_instance() {
    return *internal_default_instance();
  }
  static inline const MultiMediaMessage* internal_default_instance() {
    return reinterpret_cast<const MultiMediaMessage*>(
               &_MultiMediaMessage_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(MultiMediaMessage& a, MultiMediaMessage& b) {
    a.Swap(&b);
  }
  inline void Swap(MultiMediaMessage* other) {
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
  void UnsafeArenaSwap(MultiMediaMessage* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  MultiMediaMessage* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<MultiMediaMessage>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const MultiMediaMessage& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const MultiMediaMessage& from) {
    MultiMediaMessage::MergeImpl(*this, from);
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
  void InternalSwap(MultiMediaMessage* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.MultiMediaMessage";
  }
  protected:
  explicit MultiMediaMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMediaFieldNumber = 2,
    kTextFieldNumber = 1,
    kExtraFieldNumber = 3,
  };
  // repeated .AcFunDanmu.Im.Cloud.Message.Media media = 2;
  int media_size() const;
  private:
  int _internal_media_size() const;
  public:
  void clear_media();
  ::AcFunDanmu::Im::Cloud::Message::Media* mutable_media(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::Media >*
      mutable_media();
  private:
  const ::AcFunDanmu::Im::Cloud::Message::Media& _internal_media(int index) const;
  ::AcFunDanmu::Im::Cloud::Message::Media* _internal_add_media();
  public:
  const ::AcFunDanmu::Im::Cloud::Message::Media& media(int index) const;
  ::AcFunDanmu::Im::Cloud::Message::Media* add_media();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::Media >&
      media() const;

  // string text = 1;
  void clear_text();
  const std::string& text() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_text(ArgT0&& arg0, ArgT... args);
  std::string* mutable_text();
  PROTOBUF_NODISCARD std::string* release_text();
  void set_allocated_text(std::string* text);
  private:
  const std::string& _internal_text() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_text(const std::string& value);
  std::string* _internal_mutable_text();
  public:

  // string extra = 3;
  void clear_extra();
  const std::string& extra() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_extra(ArgT0&& arg0, ArgT... args);
  std::string* mutable_extra();
  PROTOBUF_NODISCARD std::string* release_extra();
  void set_allocated_extra(std::string* extra);
  private:
  const std::string& _internal_extra() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_extra(const std::string& value);
  std::string* _internal_mutable_extra();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::Media > media_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr text_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr extra_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_MultiMediaMessage_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// MultiMediaMessage

// string text = 1;
inline void MultiMediaMessage::clear_text() {
  _impl_.text_.ClearToEmpty();
}
inline const std::string& MultiMediaMessage::text() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.text)
  return _internal_text();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MultiMediaMessage::set_text(ArgT0&& arg0, ArgT... args) {
 
 _impl_.text_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.text)
}
inline std::string* MultiMediaMessage::mutable_text() {
  std::string* _s = _internal_mutable_text();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.text)
  return _s;
}
inline const std::string& MultiMediaMessage::_internal_text() const {
  return _impl_.text_.Get();
}
inline void MultiMediaMessage::_internal_set_text(const std::string& value) {
  
  _impl_.text_.Set(value, GetArenaForAllocation());
}
inline std::string* MultiMediaMessage::_internal_mutable_text() {
  
  return _impl_.text_.Mutable(GetArenaForAllocation());
}
inline std::string* MultiMediaMessage::release_text() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.text)
  return _impl_.text_.Release();
}
inline void MultiMediaMessage::set_allocated_text(std::string* text) {
  if (text != nullptr) {
    
  } else {
    
  }
  _impl_.text_.SetAllocated(text, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.text_.IsDefault()) {
    _impl_.text_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.text)
}

// repeated .AcFunDanmu.Im.Cloud.Message.Media media = 2;
inline int MultiMediaMessage::_internal_media_size() const {
  return _impl_.media_.size();
}
inline int MultiMediaMessage::media_size() const {
  return _internal_media_size();
}
inline ::AcFunDanmu::Im::Cloud::Message::Media* MultiMediaMessage::mutable_media(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.media)
  return _impl_.media_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::Media >*
MultiMediaMessage::mutable_media() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.media)
  return &_impl_.media_;
}
inline const ::AcFunDanmu::Im::Cloud::Message::Media& MultiMediaMessage::_internal_media(int index) const {
  return _impl_.media_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::Message::Media& MultiMediaMessage::media(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.media)
  return _internal_media(index);
}
inline ::AcFunDanmu::Im::Cloud::Message::Media* MultiMediaMessage::_internal_add_media() {
  return _impl_.media_.Add();
}
inline ::AcFunDanmu::Im::Cloud::Message::Media* MultiMediaMessage::add_media() {
  ::AcFunDanmu::Im::Cloud::Message::Media* _add = _internal_add_media();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.media)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::Message::Media >&
MultiMediaMessage::media() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.media)
  return _impl_.media_;
}

// string extra = 3;
inline void MultiMediaMessage::clear_extra() {
  _impl_.extra_.ClearToEmpty();
}
inline const std::string& MultiMediaMessage::extra() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.extra)
  return _internal_extra();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void MultiMediaMessage::set_extra(ArgT0&& arg0, ArgT... args) {
 
 _impl_.extra_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.extra)
}
inline std::string* MultiMediaMessage::mutable_extra() {
  std::string* _s = _internal_mutable_extra();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.extra)
  return _s;
}
inline const std::string& MultiMediaMessage::_internal_extra() const {
  return _impl_.extra_.Get();
}
inline void MultiMediaMessage::_internal_set_extra(const std::string& value) {
  
  _impl_.extra_.Set(value, GetArenaForAllocation());
}
inline std::string* MultiMediaMessage::_internal_mutable_extra() {
  
  return _impl_.extra_.Mutable(GetArenaForAllocation());
}
inline std::string* MultiMediaMessage::release_extra() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.extra)
  return _impl_.extra_.Release();
}
inline void MultiMediaMessage::set_allocated_extra(std::string* extra) {
  if (extra != nullptr) {
    
  } else {
    
  }
  _impl_.extra_.SetAllocated(extra, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.extra_.IsDefault()) {
    _impl_.extra_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.extra)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_MultiMediaMessage_2eproto
