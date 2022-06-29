// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CPullOldRequest.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_B2CPullOldRequest_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_B2CPullOldRequest_2eproto

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
#define PROTOBUF_INTERNAL_EXPORT_B2CPullOldRequest_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_B2CPullOldRequest_2eproto {
  static const uint32_t offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_B2CPullOldRequest_2eproto;
namespace AcFunDanmu {
namespace Im {
namespace Message {
class B2CPullOldRequest;
struct B2CPullOldRequestDefaultTypeInternal;
extern B2CPullOldRequestDefaultTypeInternal _B2CPullOldRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> ::AcFunDanmu::Im::Message::B2CPullOldRequest* Arena::CreateMaybeMessage<::AcFunDanmu::Im::Message::B2CPullOldRequest>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CPullOldRequest final :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:AcFunDanmu.Im.Message.B2CPullOldRequest) */ {
 public:
  inline B2CPullOldRequest() : B2CPullOldRequest(nullptr) {}
  ~B2CPullOldRequest() override;
  explicit PROTOBUF_CONSTEXPR B2CPullOldRequest(::PROTOBUF_NAMESPACE_ID::internal::ConstantInitialized);

  B2CPullOldRequest(const B2CPullOldRequest& from);
  B2CPullOldRequest(B2CPullOldRequest&& from) noexcept
    : B2CPullOldRequest() {
    *this = ::std::move(from);
  }

  inline B2CPullOldRequest& operator=(const B2CPullOldRequest& from) {
    CopyFrom(from);
    return *this;
  }
  inline B2CPullOldRequest& operator=(B2CPullOldRequest&& from) noexcept {
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
  static const B2CPullOldRequest& default_instance() {
    return *internal_default_instance();
  }
  static inline const B2CPullOldRequest* internal_default_instance() {
    return reinterpret_cast<const B2CPullOldRequest*>(
               &_B2CPullOldRequest_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(B2CPullOldRequest& a, B2CPullOldRequest& b) {
    a.Swap(&b);
  }
  inline void Swap(B2CPullOldRequest* other) {
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
  void UnsafeArenaSwap(B2CPullOldRequest* other) {
    if (other == this) return;
    GOOGLE_DCHECK(GetOwningArena() == other->GetOwningArena());
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  B2CPullOldRequest* New(::PROTOBUF_NAMESPACE_ID::Arena* arena = nullptr) const final {
    return CreateMaybeMessage<B2CPullOldRequest>(arena);
  }
  using ::PROTOBUF_NAMESPACE_ID::Message::CopyFrom;
  void CopyFrom(const B2CPullOldRequest& from);
  using ::PROTOBUF_NAMESPACE_ID::Message::MergeFrom;
  void MergeFrom( const B2CPullOldRequest& from) {
    B2CPullOldRequest::MergeImpl(*this, from);
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
  void InternalSwap(B2CPullOldRequest* other);

  private:
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "AcFunDanmu.Im.Message.B2CPullOldRequest";
  }
  protected:
  explicit B2CPullOldRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                       bool is_message_owned = false);
  public:

  static const ClassData _class_data_;
  const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GetClassData() const final;

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kStrTargetIdFieldNumber = 1,
    kMinSeqFieldNumber = 2,
    kMaxSeqFieldNumber = 3,
    kCountFieldNumber = 4,
  };
  // string strTargetId = 1;
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

  // int64 minSeq = 2;
  void clear_minseq();
  int64_t minseq() const;
  void set_minseq(int64_t value);
  private:
  int64_t _internal_minseq() const;
  void _internal_set_minseq(int64_t value);
  public:

  // int64 maxSeq = 3;
  void clear_maxseq();
  int64_t maxseq() const;
  void set_maxseq(int64_t value);
  private:
  int64_t _internal_maxseq() const;
  void _internal_set_maxseq(int64_t value);
  public:

  // int32 count = 4;
  void clear_count();
  int32_t count() const;
  void set_count(int32_t value);
  private:
  int32_t _internal_count() const;
  void _internal_set_count(int32_t value);
  public:

  // @@protoc_insertion_point(class_scope:AcFunDanmu.Im.Message.B2CPullOldRequest)
 private:
  class _Internal;

  template <typename T> friend class ::PROTOBUF_NAMESPACE_ID::Arena::InternalHelper;
  typedef void InternalArenaConstructable_;
  typedef void DestructorSkippable_;
  struct Impl_ {
    ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr strtargetid_;
    int64_t minseq_;
    int64_t maxseq_;
    int32_t count_;
    mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  };
  union { Impl_ _impl_; };
  friend struct ::TableStruct_B2CPullOldRequest_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// B2CPullOldRequest

// string strTargetId = 1;
inline void B2CPullOldRequest::clear_strtargetid() {
  _impl_.strtargetid_.ClearToEmpty();
}
inline const std::string& B2CPullOldRequest::strtargetid() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CPullOldRequest.strTargetId)
  return _internal_strtargetid();
}
template <typename ArgT0, typename... ArgT>
inline PROTOBUF_ALWAYS_INLINE
void B2CPullOldRequest::set_strtargetid(ArgT0&& arg0, ArgT... args) {
 
 _impl_.strtargetid_.Set(static_cast<ArgT0 &&>(arg0), args..., GetArenaForAllocation());
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CPullOldRequest.strTargetId)
}
inline std::string* B2CPullOldRequest::mutable_strtargetid() {
  std::string* _s = _internal_mutable_strtargetid();
  // @@protoc_insertion_point(field_mutable:AcFunDanmu.Im.Message.B2CPullOldRequest.strTargetId)
  return _s;
}
inline const std::string& B2CPullOldRequest::_internal_strtargetid() const {
  return _impl_.strtargetid_.Get();
}
inline void B2CPullOldRequest::_internal_set_strtargetid(const std::string& value) {
  
  _impl_.strtargetid_.Set(value, GetArenaForAllocation());
}
inline std::string* B2CPullOldRequest::_internal_mutable_strtargetid() {
  
  return _impl_.strtargetid_.Mutable(GetArenaForAllocation());
}
inline std::string* B2CPullOldRequest::release_strtargetid() {
  // @@protoc_insertion_point(field_release:AcFunDanmu.Im.Message.B2CPullOldRequest.strTargetId)
  return _impl_.strtargetid_.Release();
}
inline void B2CPullOldRequest::set_allocated_strtargetid(std::string* strtargetid) {
  if (strtargetid != nullptr) {
    
  } else {
    
  }
  _impl_.strtargetid_.SetAllocated(strtargetid, GetArenaForAllocation());
#ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (_impl_.strtargetid_.IsDefault()) {
    _impl_.strtargetid_.Set("", GetArenaForAllocation());
  }
#endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Message.B2CPullOldRequest.strTargetId)
}

// int64 minSeq = 2;
inline void B2CPullOldRequest::clear_minseq() {
  _impl_.minseq_ = int64_t{0};
}
inline int64_t B2CPullOldRequest::_internal_minseq() const {
  return _impl_.minseq_;
}
inline int64_t B2CPullOldRequest::minseq() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CPullOldRequest.minSeq)
  return _internal_minseq();
}
inline void B2CPullOldRequest::_internal_set_minseq(int64_t value) {
  
  _impl_.minseq_ = value;
}
inline void B2CPullOldRequest::set_minseq(int64_t value) {
  _internal_set_minseq(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CPullOldRequest.minSeq)
}

// int64 maxSeq = 3;
inline void B2CPullOldRequest::clear_maxseq() {
  _impl_.maxseq_ = int64_t{0};
}
inline int64_t B2CPullOldRequest::_internal_maxseq() const {
  return _impl_.maxseq_;
}
inline int64_t B2CPullOldRequest::maxseq() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CPullOldRequest.maxSeq)
  return _internal_maxseq();
}
inline void B2CPullOldRequest::_internal_set_maxseq(int64_t value) {
  
  _impl_.maxseq_ = value;
}
inline void B2CPullOldRequest::set_maxseq(int64_t value) {
  _internal_set_maxseq(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CPullOldRequest.maxSeq)
}

// int32 count = 4;
inline void B2CPullOldRequest::clear_count() {
  _impl_.count_ = 0;
}
inline int32_t B2CPullOldRequest::_internal_count() const {
  return _impl_.count_;
}
inline int32_t B2CPullOldRequest::count() const {
  // @@protoc_insertion_point(field_get:AcFunDanmu.Im.Message.B2CPullOldRequest.count)
  return _internal_count();
}
inline void B2CPullOldRequest::_internal_set_count(int32_t value) {
  
  _impl_.count_ = value;
}
inline void B2CPullOldRequest::set_count(int32_t value) {
  _internal_set_count(value);
  // @@protoc_insertion_point(field_set:AcFunDanmu.Im.Message.B2CPullOldRequest.count)
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
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_B2CPullOldRequest_2eproto
