// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderDataUpdate.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionFolderDataUpdate_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionFolderDataUpdate_2eproto

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
#include "SessionReferenceUpdateItem.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionFolderDataUpdate_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionFolderDataUpdate_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionFolderDataUpdate_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {
class SessionFolderDataUpdate;
struct SessionFolderDataUpdateDefaultTypeInternal;
extern SessionFolderDataUpdateDefaultTypeInternal _SessionFolderDataUpdate_default_instance_;
}  // namespace Update
}  // namespace Data
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::Data::Update::SessionFolderDataUpdate* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::Data::Update::SessionFolderDataUpdate>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Data {
namespace Update {

// ===================================================================

class SessionFolderDataUpdate final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate) */ {
 public:
  inline SessionFolderDataUpdate() : SessionFolderDataUpdate(nullptr) {}
  ~SessionFolderDataUpdate() override;
  explicit PROTOBUF_CONSTEXPR SessionFolderDataUpdate(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionFolderDataUpdate(const SessionFolderDataUpdate& from);
  SessionFolderDataUpdate(SessionFolderDataUpdate&& from) noexcept
    : SessionFolderDataUpdate() {
    *this = ::std::move(from);
  }

  inline SessionFolderDataUpdate& operator=(const SessionFolderDataUpdate& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionFolderDataUpdate& operator=(SessionFolderDataUpdate&& from) noexcept {
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
  static const SessionFolderDataUpdate& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionFolderDataUpdate* internal_default_instance() {
    return reinterpret_cast<const SessionFolderDataUpdate*>(
               &_SessionFolderDataUpdate_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionFolderDataUpdate& a, SessionFolderDataUpdate& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionFolderDataUpdate* other) {
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
  void UnsafeArenaSwap(SessionFolderDataUpdate* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionFolderDataUpdate* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionFolderDataUpdate>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionFolderDataUpdate& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionFolderDataUpdate& from) {
    SessionFolderDataUpdate::MergeImpl(*this, from);
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
  void InternalSwap(SessionFolderDataUpdate* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate";
  }
  protected:
  explicit SessionFolderDataUpdate(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSessionFolderBasicFieldNumber = 1,
    kAddedFieldNumber = 2,
    kRemovedFieldNumber = 3,
  };
  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBasic sessionFolderBasic = 1;
  int sessionfolderbasic_size() const;
  private:
  int _internal_sessionfolderbasic_size() const;
  public:
  void clear_sessionfolderbasic();
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* mutable_sessionfolderbasic(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic >*
      mutable_sessionfolderbasic();
  private:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic& _internal_sessionfolderbasic(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* _internal_add_sessionfolderbasic();
  public:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic& sessionfolderbasic(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* add_sessionfolderbasic();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic >&
      sessionfolderbasic() const;

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem added = 2;
  int added_size() const;
  private:
  int _internal_added_size() const;
  public:
  void clear_added();
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* mutable_added(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem >*
      mutable_added();
  private:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem& _internal_added(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* _internal_add_added();
  public:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem& added(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* add_added();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem >&
      added() const;

  // repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem removed = 3;
  int removed_size() const;
  private:
  int _internal_removed_size() const;
  public:
  void clear_removed();
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* mutable_removed(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem >*
      mutable_removed();
  private:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem& _internal_removed(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* _internal_add_removed();
  public:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem& removed(int index) const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* add_removed();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem >&
      removed() const;

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic > sessionfolderbasic_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem > added_;
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem > removed_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionFolderDataUpdate_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionFolderDataUpdate

// repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBasic sessionFolderBasic = 1;
inline int SessionFolderDataUpdate::_internal_sessionfolderbasic_size() const {
  return _impl_.sessionfolderbasic_.size();
}
inline int SessionFolderDataUpdate::sessionfolderbasic_size() const {
  return _internal_sessionfolderbasic_size();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* SessionFolderDataUpdate::mutable_sessionfolderbasic(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.sessionFolderBasic)
  return _impl_.sessionfolderbasic_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic >*
SessionFolderDataUpdate::mutable_sessionfolderbasic() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.sessionFolderBasic)
  return &_impl_.sessionfolderbasic_;
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic& SessionFolderDataUpdate::_internal_sessionfolderbasic(int index) const {
  return _impl_.sessionfolderbasic_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic& SessionFolderDataUpdate::sessionfolderbasic(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.sessionFolderBasic)
  return _internal_sessionfolderbasic(index);
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* SessionFolderDataUpdate::_internal_add_sessionfolderbasic() {
  return _impl_.sessionfolderbasic_.Add();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* SessionFolderDataUpdate::add_sessionfolderbasic() {
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic* _add = _internal_add_sessionfolderbasic();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.sessionFolderBasic)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBasic >&
SessionFolderDataUpdate::sessionfolderbasic() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.sessionFolderBasic)
  return _impl_.sessionfolderbasic_;
}

// repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem added = 2;
inline int SessionFolderDataUpdate::_internal_added_size() const {
  return _impl_.added_.size();
}
inline int SessionFolderDataUpdate::added_size() const {
  return _internal_added_size();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* SessionFolderDataUpdate::mutable_added(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.added)
  return _impl_.added_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem >*
SessionFolderDataUpdate::mutable_added() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.added)
  return &_impl_.added_;
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem& SessionFolderDataUpdate::_internal_added(int index) const {
  return _impl_.added_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem& SessionFolderDataUpdate::added(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.added)
  return _internal_added(index);
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* SessionFolderDataUpdate::_internal_add_added() {
  return _impl_.added_.Add();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* SessionFolderDataUpdate::add_added() {
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* _add = _internal_add_added();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.added)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem >&
SessionFolderDataUpdate::added() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.added)
  return _impl_.added_;
}

// repeated .AcFunDanmu.Im.Cloud.SessionFolder.SessionReferenceUpdateItem removed = 3;
inline int SessionFolderDataUpdate::_internal_removed_size() const {
  return _impl_.removed_.size();
}
inline int SessionFolderDataUpdate::removed_size() const {
  return _internal_removed_size();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* SessionFolderDataUpdate::mutable_removed(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.removed)
  return _impl_.removed_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem >*
SessionFolderDataUpdate::mutable_removed() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.removed)
  return &_impl_.removed_;
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem& SessionFolderDataUpdate::_internal_removed(int index) const {
  return _impl_.removed_.Get(index);
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem& SessionFolderDataUpdate::removed(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.removed)
  return _internal_removed(index);
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* SessionFolderDataUpdate::_internal_add_removed() {
  return _impl_.removed_.Add();
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* SessionFolderDataUpdate::add_removed() {
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem* _add = _internal_add_removed();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.removed)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReferenceUpdateItem >&
SessionFolderDataUpdate::removed() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.Data.Update.SessionFolderDataUpdate.removed)
  return _impl_.removed_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionFolderDataUpdate_2eproto
