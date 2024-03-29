// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderSortResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionFolderSortResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionFolderSortResponse_2eproto

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
#include "SessionFolderBasic.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionFolderSortResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionFolderSortResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionFolderSortResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {
class SessionFolderSortResponse;
struct SessionFolderSortResponseDefaultTypeInternal;
extern SessionFolderSortResponseDefaultTypeInternal _SessionFolderSortResponse_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSortResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderSortResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderSortResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortResponse) */ {
 public:
  inline SessionFolderSortResponse() : SessionFolderSortResponse(nullptr) {}
  ~SessionFolderSortResponse() override;
  explicit PROTOBUF_CONSTEXPR SessionFolderSortResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionFolderSortResponse(const SessionFolderSortResponse& from);
  SessionFolderSortResponse(SessionFolderSortResponse&& from) noexcept
    : SessionFolderSortResponse() {
    *this = ::std::move(from);
  }

  inline SessionFolderSortResponse& operator=(const SessionFolderSortResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionFolderSortResponse& operator=(SessionFolderSortResponse&& from) noexcept {
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
  static const SessionFolderSortResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionFolderSortResponse* internal_default_instance() {
    return reinterpret_cast<const SessionFolderSortResponse*>(
               &_SessionFolderSortResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionFolderSortResponse& a, SessionFolderSortResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionFolderSortResponse* other) {
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
  void UnsafeArenaSwap(SessionFolderSortResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionFolderSortResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionFolderSortResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionFolderSortResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionFolderSortResponse& from) {
    SessionFolderSortResponse::MergeImpl(*this, from);
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
  void InternalSwap(SessionFolderSortResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortResponse";
  }
  protected:
  explicit SessionFolderSortResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSessionFolderFieldNumber = 1,
  };
  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBasic sessionFolder = 1;
  int sessionfolder_size() const;
  private:
  int _internal_sessionfolder_size() const;
  public:
  void clear_sessionfolder();
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* mutable_sessionfolder(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic >*
      mutable_sessionfolder();
  private:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic& _internal_sessionfolder(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* _internal_add_sessionfolder();
  public:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic& sessionfolder(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* add_sessionfolder();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic >&
      sessionfolder() const;

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic > sessionfolder_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionFolderSortResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionFolderSortResponse

// repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBasic sessionFolder = 1;
inline int SessionFolderSortResponse::_internal_sessionfolder_size() const {
  return _impl_.sessionfolder_.size();
}
inline int SessionFolderSortResponse::sessionfolder_size() const {
  return _internal_sessionfolder_size();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* SessionFolderSortResponse::mutable_sessionfolder(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortResponse.sessionFolder)
  return _impl_.sessionfolder_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic >*
SessionFolderSortResponse::mutable_sessionfolder() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortResponse.sessionFolder)
  return &_impl_.sessionfolder_;
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic& SessionFolderSortResponse::_internal_sessionfolder(int index) const {
  return _impl_.sessionfolder_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic& SessionFolderSortResponse::sessionfolder(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortResponse.sessionFolder)
  return _internal_sessionfolder(index);
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* SessionFolderSortResponse::_internal_add_sessionfolder() {
  return _impl_.sessionfolder_.Add();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* SessionFolderSortResponse::add_sessionfolder() {
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* _add = _internal_add_sessionfolder();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortResponse.sessionFolder)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic >&
SessionFolderSortResponse::sessionfolder() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderSortResponse.sessionFolder)
  return _impl_.sessionfolder_;
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionFolderSortResponse_2eproto
