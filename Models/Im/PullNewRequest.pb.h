// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PullNewRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_PullNewRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_PullNewRequest_2eproto

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
#include "User.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_PullNewRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_PullNewRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_PullNewRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class PullNewRequest;
struct PullNewRequestDefaultTypeInternal;
extern PullNewRequestDefaultTypeInternal _PullNewRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::PullNewRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::PullNewRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class PullNewRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.PullNewRequest) */ {
 public:
  inline PullNewRequest() : PullNewRequest(nullptr) {}
  ~PullNewRequest() override;
  explicit PROTOBUF_CONSTEXPR PullNewRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  PullNewRequest(const PullNewRequest& from);
  PullNewRequest(PullNewRequest&& from) noexcept
    : PullNewRequest() {
    *this = ::std::move(from);
  }

  inline PullNewRequest& operator=(const PullNewRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline PullNewRequest& operator=(PullNewRequest&& from) noexcept {
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
  static const PullNewRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const PullNewRequest* internal_default_instance() {
    return reinterpret_cast<const PullNewRequest*>(
               &_PullNewRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(PullNewRequest& a, PullNewRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(PullNewRequest* other) {
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
  void UnsafeArenaSwap(PullNewRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  PullNewRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<PullNewRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const PullNewRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const PullNewRequest& from) {
    PullNewRequest::MergeImpl(*this, from);
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
  void InternalSwap(PullNewRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.PullNewRequest";
  }
  protected:
  explicit PullNewRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStrTargetIdFieldNumber = 5,
    kTargetFieldNumber = 1,
    kMinSeqFieldNumber = 2,
    kTargetIdFieldNumber = 4,
    kCountFieldNumber = 3,
  };
  // string strTargetId = 5;
  void clear_strtargetid();
  const std::string& strtargetid() const;
  template <typename ArgT0 = const std::string&, typename... ArgT>
  void set_strtargetid(ArgT0&& arg0, ArgT... args);
  std::string* mutable_strtargetid();
  PROTOBUF_NODISCARD std::string* release_strtargetid();
  void set_allocated_strtargetid(std::string* strtargetid);
  private:
  const std::string& _internal_strtargetid() const;
  inline PROTOBUF_ALWAYS_INLINE void _internal_set_strtargetid(const std::string& value);
  std::string* _internal_mutable_strtargetid();
  public:

  // .AcFunDanmu.Im.Basic.User target = 1;
  bool has_target() const;
  private:
  bool _internal_has_target() const;
  public:
  void clear_target();
  const ::AcFunDanmu::Im::Basic::User& target() const;
  PROTOBUF_NODISCARD ::AcFunDanmu::Im::Basic::User* release_target();
  ::AcFunDanmu::Im::Basic::User* mutable_target();
  void set_allocated_target(::AcFunDanmu::Im::Basic::User* target);
  private:
  const ::AcFunDanmu::Im::Basic::User& _internal_target() const;
  ::AcFunDanmu::Im::Basic::User* _internal_mutable_target();
  public:
  void unsafe_arena_set_allocated_target(
      ::AcFunDanmu::Im::Basic::User* target);
  ::AcFunDanmu::Im::Basic::User* unsafe_arena_release_target();

  // int64 minSeq = 2;
  void clear_minseq();
  int64_t minseq() const;
  void set_minseq(int64_t value);
  private:
  int64_t _internal_minseq() const;
  void _internal_set_minseq(int64_t value);
  public:

  // int64 targetId = 4;
  void clear_targetid();
  int64_t targetid() const;
  void set_targetid(int64_t value);
  private:
  int64_t _internal_targetid() const;
  void _internal_set_targetid(int64_t value);
  public:

  // int32 count = 3;
  void clear_count();
  int32_t count() const;
  void set_count(int32_t value);
  private:
  int32_t _internal_count() const;
  void _internal_set_count(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.PullNewRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr strtargetid_;
    ::AcFunDanmu::Im::Basic::User* target_;
    int64_t minseq_;
    int64_t targetid_;
    int32_t count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_PullNewRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// PullNewRequest

// .AcFunDanmu.Im.Basic.User target = 1;
inline bool PullNewRequest::_internal_has_target() const {
  return this != internal_default_instance() && _impl_.target_ != nullptr;
}
inline bool PullNewRequest::has_target() const {
  return _internal_has_target();
}
inline const ::AcFunDanmu::Im::Basic::User& PullNewRequest::_internal_target() const {
  const ::AcFunDanmu::Im::Basic::User* p = _impl_.target_;
  return p != nullptr ? *p : reinterpret_cast<const ::AcFunDanmu::Im::Basic::User&>(
      ::AcFunDanmu::Im::Basic::_User_default_instance_);
}
inline const ::AcFunDanmu::Im::Basic::User& PullNewRequest::target() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.PullNewRequest.target)
  return _internal_target();
}
inline void PullNewRequest::unsafe_arena_set_allocated_target(
    ::AcFunDanmu::Im::Basic::User* target) {
  if (GetArenaForAllocation() == nullptr) {
    delete reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.target_);
  }
  _impl_.target_ = target;
  if (target) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_unsafe_arena_set_allocated:AcFunDanmu.Im.Message.PullNewRequest.target)
}
inline ::AcFunDanmu::Im::Basic::User* PullNewRequest::release_target() {
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.target_;
  _impl_.target_ = nullptr;
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
inline ::AcFunDanmu::Im::Basic::User* PullNewRequest::unsafe_arena_release_target() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.PullNewRequest.target)
  
  ::AcFunDanmu::Im::Basic::User* temp = _impl_.target_;
  _impl_.target_ = nullptr;
  return temp;
}
inline ::AcFunDanmu::Im::Basic::User* PullNewRequest::_internal_mutable_target() {
  
  if (_impl_.target_ == nullptr) {
    auto* p = CreateMaybeMessage<::AcFunDanmu::Im::Basic::User>(GetArenaForAllocation());
    _impl_.target_ = p;
  }
  return _impl_.target_;
}
inline ::AcFunDanmu::Im::Basic::User* PullNewRequest::mutable_target() {
  ::AcFunDanmu::Im::Basic::User* _msg = _internal_mutable_target();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.PullNewRequest.target)
  return _msg;
}
inline void PullNewRequest::set_allocated_target(::AcFunDanmu::Im::Basic::User* target) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(_impl_.target_);
  }
  if (target) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(target));
    if (message_arena != submessage_arena) {
      target = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, target, submessage_arena);
    }
    
  } else {
    
  }
  _impl_.target_ = target;
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.PullNewRequest.target)
}

// int64 minSeq = 2;
inline void PullNewRequest::clear_minseq() {
  _impl_.minseq_ = int64_t{0};
}
inline int64_t PullNewRequest::_internal_minseq() const {
  return _impl_.minseq_;
}
inline int64_t PullNewRequest::minseq() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.PullNewRequest.minSeq)
  return _internal_minseq();
}
inline void PullNewRequest::_internal_set_minseq(int64_t value) {
  
  _impl_.minseq_ = value;
}
inline void PullNewRequest::set_minseq(int64_t value) {
  _internal_set_minseq(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.PullNewRequest.minSeq)
}

// int32 count = 3;
inline void PullNewRequest::clear_count() {
  _impl_.count_ = 0;
}
inline int32_t PullNewRequest::_internal_count() const {
  return _impl_.count_;
}
inline int32_t PullNewRequest::count() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.PullNewRequest.count)
  return _internal_count();
}
inline void PullNewRequest::_internal_set_count(int32_t value) {
  
  _impl_.count_ = value;
}
inline void PullNewRequest::set_count(int32_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.PullNewRequest.count)
}

// int64 targetId = 4;
inline void PullNewRequest::clear_targetid() {
  _impl_.targetid_ = int64_t{0};
}
inline int64_t PullNewRequest::_internal_targetid() const {
  return _impl_.targetid_;
}
inline int64_t PullNewRequest::targetid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.PullNewRequest.targetId)
  return _internal_targetid();
}
inline void PullNewRequest::_internal_set_targetid(int64_t value) {
  
  _impl_.targetid_ = value;
}
inline void PullNewRequest::set_targetid(int64_t value) {
  _internal_set_targetid(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.PullNewRequest.targetId)
}

// string strTargetId = 5;
inline void PullNewRequest::clear_strtargetid() {
  _impl_.strtargetid_.ClearToEmpty();
}
inline const std::string& PullNewRequest::strtargetid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.PullNewRequest.strTargetId)
  return _internal_strtargetid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void PullNewRequest::set_strtargetid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.strtargetid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.PullNewRequest.strTargetId)
}
inline std::string* PullNewRequest::mutable_strtargetid() {
  std::string* _s = _internal_mutable_strtargetid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.PullNewRequest.strTargetId)
  return _s;
}
inline const std::string& PullNewRequest::_internal_strtargetid() const {
  return _impl_.strtargetid_.Get();
}
inline void PullNewRequest::_internal_set_strtargetid(const std::string& value) {
  
  _impl_.strtargetid_.Set(value, GetArenaForAllocation());
}
inline std::string* PullNewRequest::_internal_mutable_strtargetid() {
  
  return _impl_.strtargetid_.Mutable(GetArenaForAllocation());
}
inline std::string* PullNewRequest::release_strtargetid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.PullNewRequest.strTargetId)
  return _impl_.strtargetid_.Release();
}
inline void PullNewRequest::set_allocated_strtargetid(std::string* strtargetid) {
  if (strtargetid != nullptr) {
    
  } else {
    
  }
  _impl_.strtargetid_.SetAllocated(strtargetid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.strtargetid_.IsDefault()) {
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.PullNewRequest.strTargetId)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_PullNewRequest_2eproto
