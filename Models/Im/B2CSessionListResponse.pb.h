// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CSessionListResponse.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_B2CSessionListResponse_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_B2CSessionListResponse_2eproto

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
#include "ChatSession.pb.h"
#include "SyncCookie.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_B2CSessionListResponse_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_B2CSessionListResponse_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_B2CSessionListResponse_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class B2CSessionListResponse;
struct B2CSessionListResponseDefaultTypeInternal;
extern B2CSessionListResponseDefaultTypeInternal _B2CSessionListResponse_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::B2CSessionListResponse* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::B2CSessionListResponse>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CSessionListResponse final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.B2CSessionListResponse) */ {
 public:
  inline B2CSessionListResponse() : B2CSessionListResponse(nullptr) {}
  ~B2CSessionListResponse() override;
  explicit PROTOBUF_CONSTEXPR B2CSessionListResponse(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  B2CSessionListResponse(const B2CSessionListResponse& from);
  B2CSessionListResponse(B2CSessionListResponse&& from) noexcept
    : B2CSessionListResponse() {
    *this = ::std::move(from);
  }

  inline B2CSessionListResponse& operator=(const B2CSessionListResponse& from) {
    CopyFrom(from);
    return *this;
  }
  inline B2CSessionListResponse& operator=(B2CSessionListResponse&& from) noexcept {
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
  static const B2CSessionListResponse& default_instance() {
    return *internal_default_instance();
  }
  static inline const B2CSessionListResponse* internal_default_instance() {
    return reinterpret_cast<const B2CSessionListResponse*>(
               &_B2CSessionListResponse_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(B2CSessionListResponse& a, B2CSessionListResponse& b) {
    a.Swap(&b);
  }
  inline void Swap(B2CSessionListResponse* other) {
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
  void UnsafeArenaSwap(B2CSessionListResponse* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  B2CSessionListResponse* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<B2CSessionListResponse>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const B2CSessionListResponse& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const B2CSessionListResponse& from) {
    B2CSessionListResponse::MergeImpl(*this, from);
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
  void InternalSwap(B2CSessionListResponse* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.B2CSessionListResponse";
  }
  protected:
  explicit B2CSessionListResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kSessionsFieldNumber = 2,
    kSyncCookieFieldNumber = 1,
    kServerTimeFieldNumber = 4,
    kNotFullFetchFieldNumber = 3,
    kClearLocalDataFieldNumber = 5,
    kCategoryIdFieldNumber = 6,
    kClientDataStatusFieldNumber = 7,
  };
  // repeated .AcFunDanmu.Im.Message.ChatSession sessions = 2;
  int sessions_size() const;
  private:
  int _internal_sessions_size() const;
  public:
  void clear_sessions();
  ::AcFunDanmu::Im::Message::ChatSession* mutable_sessions(int index);
  ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::ChatSession >*
      mutable_sessions();
  private:
  const ::AcFunDanmu::Im::Message::ChatSession& _internal_sessions(int index) const;
  ::AcFunDanmu::Im::Message::ChatSession* _internal_add_sessions();
  public:
  const ::AcFunDanmu::Im::Message::ChatSession& sessions(int index) const;
  ::AcFunDanmu::Im::Message::ChatSession* add_sessions();
  const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::ChatSession >&
      sessions() const;

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
  bool has_synccookie() const;
  private:
  bool _internal_has_synccookie() const;
  public:
  void clear_synccookie();
  const ::AcFunDanmu::Im::Basic::SyncCookie& synccookie() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::SyncCookie* release_synccookie();
  ::AcFunDanmu::Im::Basic::SyncCookie* mutable_synccookie();
  void set_allocated_synccookie(::AcFunDanmu::Im::Basic::SyncCookie* synccookie);
  private:
  const ::AcFunDanmu::Im::Basic::SyncCookie& _internal_synccookie() const;
  ::AcFunDanmu::Im::Basic::SyncCookie* _internal_mutable_synccookie();
  public:
  void unsafe_arena_set_allocated_synccookie(
      ::AcFunDanmu::Im::Basic::SyncCookie* synccookie);
  ::AcFunDanmu::Im::Basic::SyncCookie* unsafe_arena_release_synccookie();

  // int64 serverTime = 4;
  void clear_servertime();
  int64_t servertime() const;
  void set_servertime(int64_t value);
  private:
  int64_t _internal_servertime() const;
  void _internal_set_servertime(int64_t value);
  public:

  // bool notFullFetch = 3;
  void clear_notfullfetch();
  bool notfullfetch() const;
  void set_notfullfetch(bool value);
  private:
  bool _internal_notfullfetch() const;
  void _internal_set_notfullfetch(bool value);
  public:

  // bool clearLocalData = 5;
  void clear_clearlocaldata();
  bool clearlocaldata() const;
  void set_clearlocaldata(bool value);
  private:
  bool _internal_clearlocaldata() const;
  void _internal_set_clearlocaldata(bool value);
  public:

  // int32 categoryId = 6;
  void clear_categoryid();
  int32_t categoryid() const;
  void set_categoryid(int32_t value);
  private:
  int32_t _internal_categoryid() const;
  void _internal_set_categoryid(int32_t value);
  public:

  // int32 clientDataStatus = 7;
  void clear_clientdatastatus();
  int32_t clientdatastatus() const;
  void set_clientdatastatus(int32_t value);
  private:
  int32_t _internal_clientdatastatus() const;
  void _internal_set_clientdatastatus(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.B2CSessionListResponse)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::ChatSession > sessions_;
    ::AcFunDanmu::Im::Basic::SyncCookie* synccookie_;
    int64_t servertime_;
    bool notfullfetch_;
    bool clearlocaldata_;
    int32_t categoryid_;
    int32_t clientdatastatus_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_B2CSessionListResponse_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// B2CSessionListResponse

// .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 1;
inline bool B2CSessionListResponse::_internal_has_synccookie() const {
  return this != internal_default_instance() && _impl_.synccookie_ != nullptr;
}
inline bool B2CSessionListResponse::has_synccookie() const {
  return _internal_has_synccookie();
}
inline const ::AcFunDanmu::Im::Basic::SyncCookie& B2CSessionListResponse::_internal_synccookie() const {
  const ::AcFunDanmu::Im::Basic::SyncCookie* p = _impl_.synccookie_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::SyncCookie&>(
      ::AcFunDanmu::Im::Basic::_SyncCookie_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::SyncCookie& B2CSessionListResponse::synccookie() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListResponse.syncCookie)
  return _internal_synccookie();
}
inline void B2CSessionListResponse::unsafe_arena_set_allocated_synccookie(
    ::AcFunDanmu::Im::Basic::SyncCookie* synccookie) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.synccookie_);
  }
  _impl_.synccookie_ = synccookie;
  if (synccookie) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Message.B2CSessionListResponse.syncCookie)
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* B2CSessionListResponse::release_synccookie() {
  
  ::AcFunDanmu::Im::Basic::SyncCookie* temp = _impl_.synccookie_;
  _impl_.synccookie_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::SyncCookie* B2CSessionListResponse::unsafe_arena_release_synccookie() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.B2CSessionListResponse.syncCookie)
  
  ::AcFunDanmu::Im::Basic::SyncCookie* temp = _impl_.synccookie_;
  _impl_.synccookie_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* B2CSessionListResponse::_internal_mutable_synccookie() {
  
  if (_impl_.synccookie_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::SyncCookie>(GetArenaForAllocation());
    _impl_.synccookie_ = p;
  }
  return _impl_.synccookie_;
}
inline ::AcFunDanmu::Im::Basic::SyncCookie* B2CSessionListResponse::mutable_synccookie() {
  ::AcFunDanmu::Im::Basic::SyncCookie* _msg = _internal_mutable_synccookie();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.B2CSessionListResponse.syncCookie)
  return _msg;
}
inline void B2CSessionListResponse::set_allocated_synccookie(::AcFunDanmu::Im::Basic::SyncCookie* synccookie) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.synccookie_);
  }
  if (synccookie) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(synccookie));
    if (message_arena != submessage_arena) {
      synccookie = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, synccookie, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.synccookie_ = synccookie;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.B2CSessionListResponse.syncCookie)
}

// repeated .AcFunDanmu.Im.Message.ChatSession sessions = 2;
inline int B2CSessionListResponse::_internal_sessions_size() const {
  return _impl_.sessions_.size();
}
inline int B2CSessionListResponse::sessions_size() const {
  return _internal_sessions_size();
}
inline ::AcFunDanmu::Im::Message::ChatSession* B2CSessionListResponse::mutable_sessions(int index) {
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.B2CSessionListResponse.sessions)
  return _impl_.sessions_.Mutable(index);
}
inline ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::ChatSession >*
B2CSessionListResponse::mutable_sessions() {
  // @@protoc_insertion_point(field_mutable_list:AcFunDanmu.Im.Message.B2CSessionListResponse.sessions)
  return &_impl_.sessions_;
}
inline const ::AcFunDanmu::Im::Message::ChatSession& B2CSessionListResponse::_internal_sessions(int index) const {
  return _impl_.sessions_.Get(index);
}
inline const ::AcFunDanmu::Im::Message::ChatSession& B2CSessionListResponse::sessions(int index) const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListResponse.sessions)
  return _internal_sessions(index);
}
inline ::AcFunDanmu::Im::Message::ChatSession* B2CSessionListResponse::_internal_add_sessions() {
  return _impl_.sessions_.Add();
}
inline ::AcFunDanmu::Im::Message::ChatSession* B2CSessionListResponse::add_sessions() {
  ::AcFunDanmu::Im::Message::ChatSession* _add = _internal_add_sessions();
  // @@protoc_insertion_point(field_add:AcFunDanmu.Im.Message.B2CSessionListResponse.sessions)
  return _add;
}
inline const ::PROTOBUF_NAMESPACE_ID::RepeatedPtrField< ::AcFunDanmu::Im::Message::ChatSession >&
B2CSessionListResponse::sessions() const {
  // @@protoc_insertion_point(field_list:AcFunDanmu.Im.Message.B2CSessionListResponse.sessions)
  return _impl_.sessions_;
}

// bool notFullFetch = 3;
inline void B2CSessionListResponse::clear_notfullfetch() {
  _impl_.notfullfetch_ = false;
}
inline bool B2CSessionListResponse::_internal_notfullfetch() const {
  return _impl_.notfullfetch_;
}
inline bool B2CSessionListResponse::notfullfetch() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListResponse.notFullFetch)
  return _internal_notfullfetch();
}
inline void B2CSessionListResponse::_internal_set_notfullfetch(bool value) {
  
  _impl_.notfullfetch_ = value;
}
inline void B2CSessionListResponse::set_notfullfetch(bool value) {
  _internal_set_notfullfetch(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CSessionListResponse.notFullFetch)
}

// int64 serverTime = 4;
inline void B2CSessionListResponse::clear_servertime() {
  _impl_.servertime_ = int64_t{0};
}
inline int64_t B2CSessionListResponse::_internal_servertime() const {
  return _impl_.servertime_;
}
inline int64_t B2CSessionListResponse::servertime() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListResponse.serverTime)
  return _internal_servertime();
}
inline void B2CSessionListResponse::_internal_set_servertime(int64_t value) {
  
  _impl_.servertime_ = value;
}
inline void B2CSessionListResponse::set_servertime(int64_t value) {
  _internal_set_servertime(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CSessionListResponse.serverTime)
}

// bool clearLocalData = 5;
inline void B2CSessionListResponse::clear_clearlocaldata() {
  _impl_.clearlocaldata_ = false;
}
inline bool B2CSessionListResponse::_internal_clearlocaldata() const {
  return _impl_.clearlocaldata_;
}
inline bool B2CSessionListResponse::clearlocaldata() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListResponse.clearLocalData)
  return _internal_clearlocaldata();
}
inline void B2CSessionListResponse::_internal_set_clearlocaldata(bool value) {
  
  _impl_.clearlocaldata_ = value;
}
inline void B2CSessionListResponse::set_clearlocaldata(bool value) {
  _internal_set_clearlocaldata(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CSessionListResponse.clearLocalData)
}

// int32 categoryId = 6;
inline void B2CSessionListResponse::clear_categoryid() {
  _impl_.categoryid_ = 0;
}
inline int32_t B2CSessionListResponse::_internal_categoryid() const {
  return _impl_.categoryid_;
}
inline int32_t B2CSessionListResponse::categoryid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListResponse.categoryId)
  return _internal_categoryid();
}
inline void B2CSessionListResponse::_internal_set_categoryid(int32_t value) {
  
  _impl_.categoryid_ = value;
}
inline void B2CSessionListResponse::set_categoryid(int32_t value) {
  _internal_set_categoryid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CSessionListResponse.categoryId)
}

// int32 clientDataStatus = 7;
inline void B2CSessionListResponse::clear_clientdatastatus() {
  _impl_.clientdatastatus_ = 0;
}
inline int32_t B2CSessionListResponse::_internal_clientdatastatus() const {
  return _impl_.clientdatastatus_;
}
inline int32_t B2CSessionListResponse::clientdatastatus() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CSessionListResponse.clientDataStatus)
  return _internal_clientdatastatus();
}
inline void B2CSessionListResponse::_internal_set_clientdatastatus(int32_t value) {
  
  _impl_.clientdatastatus_ = value;
}
inline void B2CSessionListResponse::set_clientdatastatus(int32_t value) {
  _internal_set_clientdatastatus(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CSessionListResponse.clientDataStatus)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_B2CSessionListResponse_2eproto
