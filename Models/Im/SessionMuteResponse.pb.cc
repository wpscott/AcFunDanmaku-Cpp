// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionMuteResponse.proto

#include "SessionMuteResponse.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace AcFunDanmu {
namespace Im {
namespace Message {
PROTOBUF_CONSTEXPR SessionMuteResponse::SessionMuteResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.session_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionMuteResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionMuteResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionMuteResponseDefaultTypeInternal() {}
  union {
    SessionMuteResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionMuteResponseDefaultTypeInternal _SessionMuteResponse_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionMuteResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionMuteResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionMuteResponse_2eproto = nullptr;

const uint32_t TableStruct_SessionMuteResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SessionMuteResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SessionMuteResponse, _impl_.session_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::SessionMuteResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_SessionMuteResponse_default_instance_._instance,
};

const char descriptor_table_protodef_SessionMuteResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031SessionMuteResponse.proto\022\025AcFunDanmu."
  "Im.Message\032\021ChatSession.proto\"J\n\023Session"
  "MuteResponse\0223\n\007session\030\001 \001(\0132\".AcFunDan"
  "mu.Im.Message.ChatSessionb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionMuteResponse_2eproto_deps[1] = {
  &::descriptor_table_ChatSession_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionMuteResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionMuteResponse_2eproto = {
    false, false, 153, descriptor_table_protodef_SessionMuteResponse_2eproto,
    "SessionMuteResponse.proto",
    &descriptor_table_SessionMuteResponse_2eproto_once, descriptor_table_SessionMuteResponse_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SessionMuteResponse_2eproto::offsets,
    file_level_metadata_SessionMuteResponse_2eproto, file_level_enum_descriptors_SessionMuteResponse_2eproto,
    file_level_service_descriptors_SessionMuteResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionMuteResponse_2eproto_getter() {
  return &descriptor_table_SessionMuteResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionMuteResponse_2eproto(&descriptor_table_SessionMuteResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class SessionMuteResponse::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatSession& session(const SessionMuteResponse* msg);
};

const ::AcFunDanmu::Im::Message::ChatSession&
SessionMuteResponse::_Internal::session(const SessionMuteResponse* msg) {
  return *msg->_impl_.session_;
}
void SessionMuteResponse::clear_session() {
  if (GetArenaForAllocation() == nullptr && _impl_.session_ != nullptr) {
    delete _impl_.session_;
  }
  _impl_.session_ = nullptr;
}
SessionMuteResponse::SessionMuteResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.SessionMuteResponse)
}
SessionMuteResponse::SessionMuteResponse(const SessionMuteResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionMuteResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.session_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_session()) {
    _this->_impl_.session_ = new ::AcFunDanmu::Im::Message::ChatSession(*from._impl_.session_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.SessionMuteResponse)
}

inline void SessionMuteResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.session_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SessionMuteResponse::~SessionMuteResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.SessionMuteResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionMuteResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.session_;
}

void SessionMuteResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionMuteResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.SessionMuteResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.session_ != nullptr) {
    delete _impl_.session_;
  }
  _impl_.session_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionMuteResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Message.ChatSession session = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_session(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* SessionMuteResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.SessionMuteResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatSession session = 1;
  if (this->_internal_has_session()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::session(this),
        _Internal::session(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.SessionMuteResponse)
  return target;
}

size_t SessionMuteResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.SessionMuteResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatSession session = 1;
  if (this->_internal_has_session()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.session_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionMuteResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionMuteResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionMuteResponse::GetClassData() const { return &_class_data_; }


void SessionMuteResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionMuteResponse*>(&to_msg);
  auto& from = static_cast<const SessionMuteResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.SessionMuteResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_session()) {
    _this->_internal_mutable_session()->::AcFunDanmu::Im::Message::ChatSession::MergeFrom(
        from._internal_session());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionMuteResponse::CopyFrom(const SessionMuteResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.SessionMuteResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionMuteResponse::IsInitialized() const {
  return true;
}

void SessionMuteResponse::InternalSwap(SessionMuteResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.session_, other->_impl_.session_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionMuteResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionMuteResponse_2eproto_getter, &descriptor_table_SessionMuteResponse_2eproto_once,
      file_level_metadata_SessionMuteResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::SessionMuteResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::SessionMuteResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::SessionMuteResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
