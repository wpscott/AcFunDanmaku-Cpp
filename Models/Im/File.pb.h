// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: File.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_File_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_File_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_File_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_File_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_File_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
class File;
struct FileDefaultTypeInternal;
extern FileDefaultTypeInternal _File_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Message::File* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Message::File>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class File final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Message.File) */ {
 public:
  inline File() : File(nullptr) {}
  ~File() override;
  explicit PROTOBUF_CONSTEXPR File(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  File(const File& from);
  File(File&& from) noexcept
    : File() {
    *this = ::std::move(from);
  }

  inline File& operator=(const File& from) {
    CopyFrom(from);
    return *this;
  }
  inline File& operator=(File&& from) noexcept {
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
  static const File& default_instance() {
    return *internal_default_instance();
  }
  static inline const File* internal_default_instance() {
    return reinterpret_cast<const File*>(
               &_File_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(File& a, File& b) {
    a.Swap(&b);
  }
  inline void Swap(File* other) {
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
  void UnsafeArenaSwap(File* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  File* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<File>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const File& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const File& from) {
    File::MergeImpl(*this, from);
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
  void InternalSwap(File* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Message.File";
  }
  protected:
  explicit File(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUriFieldNumber = 1,
    kNameFieldNumber = 2,
    kExtFieldNumber = 3,
    kExtraFieldNumber = 4,
    kContentLengthFieldNumber = 5,
  };
  // string uri = 1;
  void clear_uri();
  const std::string& uri() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_uri(ArgT0&& arg0, ArgT... args);
  std::string* mutable_uri();
  PROTOBUF_NODISCARD std::string* release_uri();
  void set_allocated_uri(std::string* uri);
  private:
  const std::string& _internal_uri() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_uri(const std::string& value);
  std::string* _internal_mutable_uri();
  public:

  // string name = 2;
  void clear_name();
  const std::string& name() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_name(ArgT0&& arg0, ArgT... args);
  std::string* mutable_name();
  PROTOBUF_NODISCARD std::string* release_name();
  void set_allocated_name(std::string* name);
  private:
  const std::string& _internal_name() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_name(const std::string& value);
  std::string* _internal_mutable_name();
  public:

  // string ext = 3;
  void clear_ext();
  const std::string& ext() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_ext(ArgT0&& arg0, ArgT... args);
  std::string* mutable_ext();
  PROTOBUF_NODISCARD std::string* release_ext();
  void set_allocated_ext(std::string* ext);
  private:
  const std::string& _internal_ext() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_ext(const std::string& value);
  std::string* _internal_mutable_ext();
  public:

  // string extra = 4;
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

  // int64 contentLength = 5;
  void clear_contentlength();
  int64_t contentlength() const;
  void set_contentlength(int64_t value);
  private:
  int64_t _internal_contentlength() const;
  void _internal_set_contentlength(int64_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Message.File)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr uri_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr name_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr ext_;
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr extra_;
    int64_t contentlength_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_File_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// File

// string uri = 1;
inline void File::clear_uri() {
  _impl_.uri_.ClearToEmpty();
}
inline const std::string& File::uri() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.File.uri)
  return _internal_uri();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void File::set_uri(ArgT0&& arg0, ArgT... args) {
 
 _impl_.uri_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.File.uri)
}
inline std::string* File::mutable_uri() {
  std::string* _s = _internal_mutable_uri();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.File.uri)
  return _s;
}
inline const std::string& File::_internal_uri() const {
  return _impl_.uri_.Get();
}
inline void File::_internal_set_uri(const std::string& value) {
  
  _impl_.uri_.Set(value, GetArenaForAllocation());
}
inline std::string* File::_internal_mutable_uri() {
  
  return _impl_.uri_.Mutable(GetArenaForAllocation());
}
inline std::string* File::release_uri() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.File.uri)
  return _impl_.uri_.Release();
}
inline void File::set_allocated_uri(std::string* uri) {
  if (uri != nullptr) {
    
  } else {
    
  }
  _impl_.uri_.SetAllocated(uri, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.uri_.IsDefault()) {
    _impl_.uri_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.File.uri)
}

// string name = 2;
inline void File::clear_name() {
  _impl_.name_.ClearToEmpty();
}
inline const std::string& File::name() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.File.name)
  return _internal_name();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void File::set_name(ArgT0&& arg0, ArgT... args) {
 
 _impl_.name_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.File.name)
}
inline std::string* File::mutable_name() {
  std::string* _s = _internal_mutable_name();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.File.name)
  return _s;
}
inline const std::string& File::_internal_name() const {
  return _impl_.name_.Get();
}
inline void File::_internal_set_name(const std::string& value) {
  
  _impl_.name_.Set(value, GetArenaForAllocation());
}
inline std::string* File::_internal_mutable_name() {
  
  return _impl_.name_.Mutable(GetArenaForAllocation());
}
inline std::string* File::release_name() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.File.name)
  return _impl_.name_.Release();
}
inline void File::set_allocated_name(std::string* name) {
  if (name != nullptr) {
    
  } else {
    
  }
  _impl_.name_.SetAllocated(name, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.name_.IsDefault()) {
    _impl_.name_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.File.name)
}

// string ext = 3;
inline void File::clear_ext() {
  _impl_.ext_.ClearToEmpty();
}
inline const std::string& File::ext() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.File.ext)
  return _internal_ext();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void File::set_ext(ArgT0&& arg0, ArgT... args) {
 
 _impl_.ext_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.File.ext)
}
inline std::string* File::mutable_ext() {
  std::string* _s = _internal_mutable_ext();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.File.ext)
  return _s;
}
inline const std::string& File::_internal_ext() const {
  return _impl_.ext_.Get();
}
inline void File::_internal_set_ext(const std::string& value) {
  
  _impl_.ext_.Set(value, GetArenaForAllocation());
}
inline std::string* File::_internal_mutable_ext() {
  
  return _impl_.ext_.Mutable(GetArenaForAllocation());
}
inline std::string* File::release_ext() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.File.ext)
  return _impl_.ext_.Release();
}
inline void File::set_allocated_ext(std::string* ext) {
  if (ext != nullptr) {
    
  } else {
    
  }
  _impl_.ext_.SetAllocated(ext, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.ext_.IsDefault()) {
    _impl_.ext_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.File.ext)
}

// string extra = 4;
inline void File::clear_extra() {
  _impl_.extra_.ClearToEmpty();
}
inline const std::string& File::extra() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.File.extra)
  return _internal_extra();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void File::set_extra(ArgT0&& arg0, ArgT... args) {
 
 _impl_.extra_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.File.extra)
}
inline std::string* File::mutable_extra() {
  std::string* _s = _internal_mutable_extra();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Message.File.extra)
  return _s;
}
inline const std::string& File::_internal_extra() const {
  return _impl_.extra_.Get();
}
inline void File::_internal_set_extra(const std::string& value) {
  
  _impl_.extra_.Set(value, GetArenaForAllocation());
}
inline std::string* File::_internal_mutable_extra() {
  
  return _impl_.extra_.Mutable(GetArenaForAllocation());
}
inline std::string* File::release_extra() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.Message.File.extra)
  return _impl_.extra_.Release();
}
inline void File::set_allocated_extra(std::string* extra) {
  if (extra != nullptr) {
    
  } else {
    
  }
  _impl_.extra_.SetAllocated(extra, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.extra_.IsDefault()) {
    _impl_.extra_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.File.extra)
}

// int64 contentLength = 5;
inline void File::clear_contentlength() {
  _impl_.contentlength_ = int64_t{0};
}
inline int64_t File::_internal_contentlength() const {
  return _impl_.contentlength_;
}
inline int64_t File::contentlength() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Message.File.contentLength)
  return _internal_contentlength();
}
inline void File::_internal_set_contentlength(int64_t value) {
  
  _impl_.contentlength_ = value;
}
inline void File::set_contentlength(int64_t value) {
  _internal_set_contentlength(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.Message.File.contentLength)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_File_2eproto
