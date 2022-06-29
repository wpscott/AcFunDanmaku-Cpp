// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionFolderBatchDeleteRefRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_SessionFolderBatchDeleteRefRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_SessionFolderBatchDeleteRefRequest_2eproto

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
#include "SessionReference.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_SessionFolderBatchDeleteRefRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_SessionFolderBatchDeleteRefRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_SessionFolderBatchDeleteRefRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {
class SessionFolderBatchDeleteRefRequest;
struct SessionFolderBatchDeleteRefRequestDefaultTypeInternal;
extern SessionFolderBatchDeleteRefRequestDefaultTypeInternal _SessionFolderBatchDeleteRefRequest_default_instance_;
}  // namespace SessionFolder
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBatchDeleteRefRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Cloud::SessionFolder::SessionFolderBatchDeleteRefRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionFolder {

// ===================================================================

class SessionFolderBatchDeleteRefRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest) */ {
 public:
  inline SessionFolderBatchDeleteRefRequest() : SessionFolderBatchDeleteRefRequest(nullptr) {}
  ~SessionFolderBatchDeleteRefRequest() override;
  explicit PROTOBUF_CONSTEXPR SessionFolderBatchDeleteRefRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  SessionFolderBatchDeleteRefRequest(const SessionFolderBatchDeleteRefRequest& from);
  SessionFolderBatchDeleteRefRequest(SessionFolderBatchDeleteRefRequest&& from) noexcept
    : SessionFolderBatchDeleteRefRequest() {
    *this = ::std::move(from);
  }

  inline SessionFolderBatchDeleteRefRequest& operator=(const SessionFolderBatchDeleteRefRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline SessionFolderBatchDeleteRefRequest& operator=(SessionFolderBatchDeleteRefRequest&& from) noexcept {
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
  static const SessionFolderBatchDeleteRefRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const SessionFolderBatchDeleteRefRequest* internal_default_instance() {
    return reinterpret_cast<const SessionFolderBatchDeleteRefRequest*>(
               &_SessionFolderBatchDeleteRefRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(SessionFolderBatchDeleteRefRequest& a, SessionFolderBatchDeleteRefRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(SessionFolderBatchDeleteRefRequest* other) {
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
  void UnsafeArenaSwap(SessionFolderBatchDeleteRefRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  SessionFolderBatchDeleteRefRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<SessionFolderBatchDeleteRefRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const SessionFolderBatchDeleteRefRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const SessionFolderBatchDeleteRefRequest& from) {
    SessionFolderBatchDeleteRefRequest::MergeImpl(*this, from);
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
  void InternalSwap(SessionFolderBatchDeleteRefRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest";
  }
  protected:
  explicit SessionFolderBatchDeleteRefRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kTargetSessionFolderIdFieldNumber = 2,
    kSessionReferenceFieldNumber = 1,
  };
  // repeated string targetSessionFolderId = 2;
  int targetsessionfolderid_size() const;
  private:
  int _internal_targetsessionfolderid_size() const;
  public:
  void clear_targetsessionfolderid();
  const std::string& targetsessionfolderid(int index) const;
  std::string* mutable_targetsessionfolderid(int index);
  void set_targetsessionfolderid(int index, const std::string& value);
  void set_targetsessionfolderid(int index, std::string&& value);
  void set_targetsessionfolderid(int index, const char* value);
  void set_targetsessionfolderid(int index, const char* value, size_t size);
  std::string* add_targetsessionfolderid();
  void add_targetsessionfolderid(const std::string& value);
  void add_targetsessionfolderid(std::string&& value);
  void add_targetsessionfolderid(const char* value);
  void add_targetsessionfolderid(const char* value, size_t size);
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>& targetsessionfolderid() const;
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>* mutable_targetsessionfolderid();
  private:
  const std::string& _internal_targetsessionfolderid(int index) const;
  std::string* _internal_add_targetsessionfolderid();
  public:

  // .AcFunDanmu.Im.Cloud.SessionFolder.SessionReference sessionReference = 1;
  bool has_sessionreference() const;
  private:
  bool _internal_has_sessionreference() const;
  public:
  void clear_sessionreference();
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference& sessionreference() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* release_sessionreference();
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* mutable_sessionreference();
  void set_allocated_sessionreference(::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* sessionreference);
  private:
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference& _internal_sessionreference() const;
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* _internal_mutable_sessionreference();
  public:
  void unsafe_arena_set_allocated_sessionreference(
      ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* sessionreference);
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* unsafe_arena_release_sessionreference();

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string> targetsessionfolderid_;
    ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* sessionreference_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_SessionFolderBatchDeleteRefRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// SessionFolderBatchDeleteRefRequest

// .AcFunDanmu.Im.Cloud.SessionFolder.SessionReference sessionReference = 1;
inline bool SessionFolderBatchDeleteRefRequest::_internal_has_sessionreference() const {
  return this != internal_default_instance() && _impl_.sessionreference_ != nullptr;
}
inline bool SessionFolderBatchDeleteRefRequest::has_sessionreference() const {
  return _internal_has_sessionreference();
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference& SessionFolderBatchDeleteRefRequest::_internal_sessionreference() const {
  const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* p = _impl_.sessionreference_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference&>(
      ::AcFunDanmu::Im::Cloud::SessionFolder::_SessionReference_default_instance_);
}
inline const ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference& SessionFolderBatchDeleteRefRequest::sessionreference() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.sessionReference)
  return _internal_sessionreference();
}
inline void SessionFolderBatchDeleteRefRequest::unsafe_arena_set_allocated_sessionreference(
    ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* sessionreference) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.sessionreference_);
  }
  _impl_.sessionreference_ = sessionreference;
  if (sessionreference) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.sessionReference)
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* SessionFolderBatchDeleteRefRequest::release_sessionreference() {
  
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* temp = _impl_.sessionreference_;
  _impl_.sessionreference_ = nullptr;
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
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* SessionFolderBatchDeleteRefRequest::unsafe_arena_release_sessionreference() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.sessionReference)
  
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* temp = _impl_.sessionreference_;
  _impl_.sessionreference_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* SessionFolderBatchDeleteRefRequest::_internal_mutable_sessionreference() {
  
  if (_impl_.sessionreference_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference>(GetArenaForAllocation());
    _impl_.sessionreference_ = p;
  }
  return _impl_.sessionreference_;
}
inline ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* SessionFolderBatchDeleteRefRequest::mutable_sessionreference() {
  ::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* _msg = _internal_mutable_sessionreference();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.sessionReference)
  return _msg;
}
inline void SessionFolderBatchDeleteRefRequest::set_allocated_sessionreference(::AcFunDanmu::Im::Cloud::SessionFolder::SessionReference* sessionreference) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.sessionreference_);
  }
  if (sessionreference) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(sessionreference));
    if (message_arena != submessage_arena) {
      sessionreference = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, sessionreference, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.sessionreference_ = sessionreference;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.sessionReference)
}

// repeated string targetSessionFolderId = 2;
inline int SessionFolderBatchDeleteRefRequest::_internal_targetsessionfolderid_size() const {
  return _impl_.targetsessionfolderid_.size();
}
inline int SessionFolderBatchDeleteRefRequest::targetsessionfolderid_size() const {
  return _internal_targetsessionfolderid_size();
}
inline void SessionFolderBatchDeleteRefRequest::clear_targetsessionfolderid() {
  _impl_.targetsessionfolderid_.Clear();
}
inline std::string* SessionFolderBatchDeleteRefRequest::add_targetsessionfolderid() {
  std::string* _s = _internal_add_targetsessionfolderid();
  // @@protoc_insertion_point(field_add_mutable:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
  return _s;
}
inline const std::string& SessionFolderBatchDeleteRefRequest::_internal_targetsessionfolderid(int index) const {
  return _impl_.targetsessionfolderid_.Get(index);
}
inline const std::string& SessionFolderBatchDeleteRefRequest::targetsessionfolderid(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
  return _internal_targetsessionfolderid(index);
}
inline std::string* SessionFolderBatchDeleteRefRequest::mutable_targetsessionfolderid(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
  return _impl_.targetsessionfolderid_.Mutable(index);
}
inline void SessionFolderBatchDeleteRefRequest::set_targetsessionfolderid(int index, const std::string& value) {
  _impl_.targetsessionfolderid_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
}
inline void SessionFolderBatchDeleteRefRequest::set_targetsessionfolderid(int index, std::string&& value) {
  _impl_.targetsessionfolderid_.Mutable(index)->assign(std::move(value));
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
}
inline void SessionFolderBatchDeleteRefRequest::set_targetsessionfolderid(int index, const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.targetsessionfolderid_.Mutable(index)->assign(value);
  // @@protoc_insertion_point(field_set_char:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
}
inline void SessionFolderBatchDeleteRefRequest::set_targetsessionfolderid(int index, const char* value, size_t size) {
  _impl_.targetsessionfolderid_.Mutable(index)->assign(
    reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_set_pointer:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
}
inline std::string* SessionFolderBatchDeleteRefRequest::_internal_add_targetsessionfolderid() {
  return _impl_.targetsessionfolderid_.Add();
}
inline void SessionFolderBatchDeleteRefRequest::add_targetsessionfolderid(const std::string& value) {
  _impl_.targetsessionfolderid_.Add()->assign(value);
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
}
inline void SessionFolderBatchDeleteRefRequest::add_targetsessionfolderid(std::string&& value) {
  _impl_.targetsessionfolderid_.Add(std::move(value));
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
}
inline void SessionFolderBatchDeleteRefRequest::add_targetsessionfolderid(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  _impl_.targetsessionfolderid_.Add()->assign(value);
  // @@protoc_insertion_point(field_add_char:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
}
inline void SessionFolderBatchDeleteRefRequest::add_targetsessionfolderid(const char* value, size_t size) {
  _impl_.targetsessionfolderid_.Add()->assign(reinterpret_cast<const char*>(value), size);
  // @@protoc_insertion_point(field_add_pointer:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>&
SessionFolderBatchDeleteRefRequest::targetsessionfolderid() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
  return _impl_.targetsessionfolderid_;
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField<std::string>*
SessionFolderBatchDeleteRefRequest::mutable_targetsessionfolderid() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Cloud.SessionFolder.SessionFolderBatchDeleteRefRequest.targetSessionFolderId)
  return &_impl_.targetsessionfolderid_;
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_SessionFolderBatchDeleteRefRequest_2eproto
