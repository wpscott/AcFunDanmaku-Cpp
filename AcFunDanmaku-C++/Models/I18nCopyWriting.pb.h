// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: I18nCopyWriting.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_I18nCopyWriting_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_I18nCopyWriting_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3014000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3014000 < PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_I18nCopyWriting_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_I18nCopyWriting_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxiliaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_I18nCopyWriting_2eproto;
namespace AcFunDanmu {
class I18nCopyWriting;
class I18nCopyWritingDefaultTypeInternal;
extern I18nCopyWritingDefaultTypeInternal _I18nCopyWriting_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::I18nCopyWriting* Arena::CreateMaybeMessage<::AcFunDanmu::I18nCopyWriting>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class I18nCopyWriting PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.I18nCopyWriting) */ {
 public:
  inline I18nCopyWriting() : I18nCopyWriting(nullptr) {}
  virtual ~I18nCopyWriting();

  I18nCopyWriting(const I18nCopyWriting& from);
  I18nCopyWriting(I18nCopyWriting&& from) noexcept
    : I18nCopyWriting() {
    *this = ::std::move(from);
  }

  inline I18nCopyWriting& operator=(const I18nCopyWriting& from) {
    CopyFrom(from);
    return *this;
  }
  inline I18nCopyWriting& operator=(I18nCopyWriting&& from) noexcept {
    if (GetArena() == from.GetArena()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const I18nCopyWriting& default_instance();

  static inline const I18nCopyWriting* internal_default_instance() {
    return reinterpret_cast<const I18nCopyWriting*>(
               &_I18nCopyWriting_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(I18nCopyWriting& a, I18nCopyWriting& b) {
    a.Swap(&b);
  }
  inline void Swap(I18nCopyWriting* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(I18nCopyWriting* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline I18nCopyWriting* New() const final {
    return CreateMaybeMessage<I18nCopyWriting>(nullptr);
  }

  I18nCopyWriting* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<I18nCopyWriting>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const I18nCopyWriting& from);
  void MergeFrom(const I18nCopyWriting& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* _InternalSerialize(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(I18nCopyWriting* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.I18nCopyWriting";
  }
  protected:
  explicit I18nCopyWriting(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_I18nCopyWriting_2eproto);
    return ::descriptor_table_I18nCopyWriting_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kFormatParamFieldNumber = 2,
    kFormatKeyFieldNumber = 1,
  };
  // repeated string formatParam = 2;
  int formatparam_size() const;
  private:
  int _internal_formatparam_size() const;
  public:
  void clear_formatparam();
  const std::string& formatparam(int index) const;
  std::string* mutable_formatparam(int index);
  void set_formatparam(int index, const std::string& value);
  void set_formatparam(int index, std::string&& value);
  void set_formatparam(int index, const char* value);
  void set_formatparam(int index, const char* value, size_t size);
  std::string* add_formatparam();
  void add_formatparam(const std::string& value);
  void add_formatparam(std::string&& value);
  void add_formatparam(const char* value);
  void add_formatparam(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& formatparam() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_formatparam();
  private:
  const std::string& _internal_formatparam(int index) const;
  std::string* _internal_add_formatparam();
  public:

  // string formatKey = 1;
  void clear_formatkey();
  const std::string& formatkey() const;
  void set_formatkey(const std::string& value);
  void set_formatkey(std::string&& value);
  void set_formatkey(const char* value);
  void set_formatkey(const char* value, size_t size);
  std::string* mutable_formatkey();
  std::string* release_formatkey();
  void set_allocated_formatkey(std::string* formatkey);
  private:
  const std::string& _internal_formatkey() const;
  void _internal_set_formatkey(const std::string& value);
  std::string* _internal_mutable_formatkey();
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.I18nCopyWriting)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> formatparam_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr formatkey_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_I18nCopyWriting_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// I18nCopyWriting

// string formatKey = 1;
inline void I18nCopyWriting::clear_formatkey() {
  formatkey_.ClearToEmpty();
}
inline const std::string& I18nCopyWriting::formatkey() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.I18nCopyWriting.formatKey)
  return _internal_formatkey();
}
inline void I18nCopyWriting::set_formatkey(const std::string& value) {
  _internal_set_formatkey(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.I18nCopyWriting.formatKey)
}
inline std::string* I18nCopyWriting::mutable_formatkey() {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.I18nCopyWriting.formatKey)
  return _internal_mutable_formatkey();
}
inline const std::string& I18nCopyWriting::_internal_formatkey() const {
  return formatkey_.Get();
}
inline void I18nCopyWriting::_internal_set_formatkey(const std::string& value) {
  
  formatkey_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, value, GetArena());
}
inline void I18nCopyWriting::set_formatkey(std::string&& value) {
  
  formatkey_.Set(
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::move(value), GetArena());
  // @@protoc_insertion_point(field_set_rvalue:AcFunDanmu.I18nCopyWriting.formatKey)
}
inline void I18nCopyWriting::set_formatkey(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  formatkey_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(value), GetArena());
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.I18nCopyWriting.formatKey)
}
inline void I18nCopyWriting::set_formatkey(const char* value,
    size_t size) {
  
  formatkey_.Set(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, ::std::string(
      reinterpret_cast<const char*>(value), size), GetArena());
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.I18nCopyWriting.formatKey)
}
inline std::string* I18nCopyWriting::_internal_mutable_formatkey() {
  
  return formatkey_.Mutable(::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::EmptyDefault{}, GetArena());
}
inline std::string* I18nCopyWriting::release_formatkey() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.I18nCopyWriting.formatKey)
  return formatkey_.Release(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), GetArena());
}
inline void I18nCopyWriting::set_allocated_formatkey(std::string* formatkey) {
  if (formatkey != nullptr) {
    
  } else {
    
  }
  formatkey_.SetAllocated(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), formatkey,
      GetArena());
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.I18nCopyWriting.formatKey)
}

// repeated string formatParam = 2;
inline int I18nCopyWriting::_internal_formatparam_size() const {
  return formatparam_.size();
}
inline int I18nCopyWriting::formatparam_size() const {
  return _internal_formatparam_size();
}
inline void I18nCopyWriting::clear_formatparam() {
  formatparam_.Clear();
}
inline std::string* I18nCopyWriting::add_formatparam() {
  // @@protoc_insertion_point(field_add_mutable:AcFunDanmu.I18nCopyWriting.formatParam)
  return _internal_add_formatparam();
}
inline const std::string& I18nCopyWriting::_internal_formatparam(int index) const {
  return formatparam_.Get(index);
}
inline const std::string& I18nCopyWriting::formatparam(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.I18nCopyWriting.formatParam)
  return _internal_formatparam(index);
}
inline std::string* I18nCopyWriting::mutable_formatparam(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.I18nCopyWriting.formatParam)
  return formatparam_.Mutable(index);
}
inline void I18nCopyWriting::set_formatparam(int index, const std::string& value) {
  // @@protoc_insertion_point(field_set:AcFunDanmu.I18nCopyWriting.formatParam)
  formatparam_.Mutable(index)->assign(value);
}
inline void I18nCopyWriting::set_formatparam(int index, std::string&& value) {
  // @@protoc_insertion_point(field_set:AcFunDanmu.I18nCopyWriting.formatParam)
  formatparam_.Mutable(index)->assign(std::move(value));
}
inline void I18nCopyWriting::set_formatparam(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  formatparam_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.I18nCopyWriting.formatParam)
}
inline void I18nCopyWriting::set_formatparam(int index, const char* value, size_t size) {
  formatparam_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.I18nCopyWriting.formatParam)
}
inline std::string* I18nCopyWriting::_internal_add_formatparam() {
  return formatparam_.Add();
}
inline void I18nCopyWriting::add_formatparam(const std::string& value) {
  formatparam_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AcFunDanmu.I18nCopyWriting.formatParam)
}
inline void I18nCopyWriting::add_formatparam(std::string&& value) {
  formatparam_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:AcFunDanmu.I18nCopyWriting.formatParam)
}
inline void I18nCopyWriting::add_formatparam(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  formatparam_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AcFunDanmu.I18nCopyWriting.formatParam)
}
inline void I18nCopyWriting::add_formatparam(const char* value, size_t size) {
  formatparam_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AcFunDanmu.I18nCopyWriting.formatParam)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
I18nCopyWriting::formatparam() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.I18nCopyWriting.formatParam)
  return formatparam_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
I18nCopyWriting::mutable_formatparam() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.I18nCopyWriting.formatParam)
  return &formatparam_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_I18nCopyWriting_2eproto
