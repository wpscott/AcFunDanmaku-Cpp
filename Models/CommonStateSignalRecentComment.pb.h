// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalRecentComment.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalRecentComment_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalRecentComment_2eproto

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
#include "CommonActionSignalComment.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_CommonStateSignalRecentComment_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_CommonStateSignalRecentComment_2eproto {
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
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_CommonStateSignalRecentComment_2eproto;
namespace AcFunDanmu {
class CommonStateSignalRecentComment;
class CommonStateSignalRecentCommentDefaultTypeInternal;
extern CommonStateSignalRecentCommentDefaultTypeInternal _CommonStateSignalRecentComment_default_instance_;
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::CommonStateSignalRecentComment* Arena::CreateMaybeMessage<::AcFunDanmu::CommonStateSignalRecentComment>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalRecentComment PROTOBUF_FINAL :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.CommonStateSignalRecentComment) */ {
 public:
  inline CommonStateSignalRecentComment() : CommonStateSignalRecentComment(nullptr) {}
  virtual ~CommonStateSignalRecentComment();

  CommonStateSignalRecentComment(const CommonStateSignalRecentComment& from);
  CommonStateSignalRecentComment(CommonStateSignalRecentComment&& from) noexcept
    : CommonStateSignalRecentComment() {
    *this = ::std::move(from);
  }

  inline CommonStateSignalRecentComment& operator=(const CommonStateSignalRecentComment& from) {
    CopyFrom(from);
    return *this;
  }
  inline CommonStateSignalRecentComment& operator=(CommonStateSignalRecentComment&& from) noexcept {
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
  static const CommonStateSignalRecentComment& default_instance();

  static inline const CommonStateSignalRecentComment* internal_default_instance() {
    return reinterpret_cast<const CommonStateSignalRecentComment*>(
               &_CommonStateSignalRecentComment_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(CommonStateSignalRecentComment& a, CommonStateSignalRecentComment& b) {
    a.Swap(&b);
  }
  inline void Swap(CommonStateSignalRecentComment* other) {
    if (other == this) return;
    if (GetArena() == other->GetArena()) {
      InternalSwap(other);
    } else {
      ::PROTOBUF_NAMESPACE_ID::internal::GenericSwap(this, other);
    }
  }
  void UnsafeArenaSwap(CommonStateSignalRecentComment* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetArena() == other->GetArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline CommonStateSignalRecentComment* New() const final {
    return CreateMaybeMessage<CommonStateSignalRecentComment>(nullptr);
  }

  CommonStateSignalRecentComment* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<CommonStateSignalRecentComment>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const CommonStateSignalRecentComment& from);
  void MergeFrom(const CommonStateSignalRecentComment& from);
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
  void InternalSwap(CommonStateSignalRecentComment* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.CommonStateSignalRecentComment";
  }
  protected:
  explicit CommonStateSignalRecentComment(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  private:
  static void ArenaDtor(void* object);
  inline void RegisterArenaDtor(::PROTOBUF_NAMESPACE_ID::Arena* arena);
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_CommonStateSignalRecentComment_2eproto);
    return ::descriptor_table_CommonStateSignalRecentComment_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kCommentFieldNumber = 1,
  };
  // repeated .AcFunDanmu.CommonActionSignalComment comment = 1;
  int comment_size() const;
  private:
  int _internal_comment_size() const;
  public:
  void clear_comment();
  ::AcFunDanmu::CommonActionSignalComment* mutable_comment(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::CommonActionSignalComment >*
      mutable_comment();
  private:
  const ::AcFunDanmu::CommonActionSignalComment& _internal_comment(int index) const;
  ::AcFunDanmu::CommonActionSignalComment* _internal_add_comment();
  public:
  const ::AcFunDanmu::CommonActionSignalComment& comment(int index) const;
  ::AcFunDanmu::CommonActionSignalComment* add_comment();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::CommonActionSignalComment >&
      comment() const;

  // @@protoc_insertion_point(class_scope:AcFunDanmu.CommonStateSignalRecentComment)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::CommonActionSignalComment > comment_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_CommonStateSignalRecentComment_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// CommonStateSignalRecentComment

// repeated .AcFunDanmu.CommonActionSignalComment comment = 1;
inline int CommonStateSignalRecentComment::_internal_comment_size() const {
  return comment_.size();
}
inline int CommonStateSignalRecentComment::comment_size() const {
  return _internal_comment_size();
}
inline ::AcFunDanmu::CommonActionSignalComment* CommonStateSignalRecentComment::mutable_comment(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.CommonStateSignalRecentComment.comment)
  return comment_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::CommonActionSignalComment >*
CommonStateSignalRecentComment::mutable_comment() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.CommonStateSignalRecentComment.comment)
  return &comment_;
}
inline const ::AcFunDanmu::CommonActionSignalComment& CommonStateSignalRecentComment::_internal_comment(int index) const {
  return comment_.Get(index);
}
inline const ::AcFunDanmu::CommonActionSignalComment& CommonStateSignalRecentComment::comment(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.CommonStateSignalRecentComment.comment)
  return _internal_comment(index);
}
inline ::AcFunDanmu::CommonActionSignalComment* CommonStateSignalRecentComment::_internal_add_comment() {
  return comment_.Add();
}
inline ::AcFunDanmu::CommonActionSignalComment* CommonStateSignalRecentComment::add_comment() {
  // @@protoc_insertion_point(field_add:AcFunDanmu.CommonStateSignalRecentComment.comment)
  return _internal_add_comment();
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::CommonActionSignalComment >&
CommonStateSignalRecentComment::comment() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.CommonStateSignalRecentComment.comment)
  return comment_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_CommonStateSignalRecentComment_2eproto
