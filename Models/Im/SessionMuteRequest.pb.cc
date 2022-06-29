// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionMuteRequest.proto

#include "SessionMuteRequest.pb.h"

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
PROTOBUF_CONSTEXPR SessionMuteRequest::SessionMuteRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.chattarget_)*/nullptr
  , /*decltype(_impl_.mute_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionMuteRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionMuteRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionMuteRequestDefaultTypeInternal() {}
  union {
    SessionMuteRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionMuteRequestDefaultTypeInternal _SessionMuteRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionMuteRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionMuteRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionMuteRequest_2eproto = nullptr;

const uint32_t TableStruct_SessionMuteRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SessionMuteRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SessionMuteRequest, _impl_.chattarget_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::SessionMuteRequest, _impl_.mute_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::SessionMuteRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_SessionMuteRequest_default_instance_._instance,
};

const char descriptor_table_protodef_SessionMuteRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030SessionMuteRequest.proto\022\025AcFunDanmu.I"
  "m.Message\032\020ChatTarget.proto\"Y\n\022SessionMu"
  "teRequest\0225\n\nchatTarget\030\001 \001(\0132!.AcFunDan"
  "mu.Im.Message.ChatTarget\022\014\n\004mute\030\002 \001(\010b\006"
  "proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionMuteRequest_2eproto_deps[1] = {
  &::descriptor_table_ChatTarget_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionMuteRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionMuteRequest_2eproto = {
    false, false, 166, descriptor_table_protodef_SessionMuteRequest_2eproto,
    "SessionMuteRequest.proto",
    &descriptor_table_SessionMuteRequest_2eproto_once, descriptor_table_SessionMuteRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SessionMuteRequest_2eproto::offsets,
    file_level_metadata_SessionMuteRequest_2eproto, file_level_enum_descriptors_SessionMuteRequest_2eproto,
    file_level_service_descriptors_SessionMuteRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionMuteRequest_2eproto_getter() {
  return &descriptor_table_SessionMuteRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionMuteRequest_2eproto(&descriptor_table_SessionMuteRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class SessionMuteRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& chattarget(const SessionMuteRequest* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
SessionMuteRequest::_Internal::chattarget(const SessionMuteRequest* msg) {
  return *msg->_impl_.chattarget_;
}
void SessionMuteRequest::clear_chattarget() {
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
}
SessionMuteRequest::SessionMuteRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.SessionMuteRequest)
}
SessionMuteRequest::SessionMuteRequest(const SessionMuteRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionMuteRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){nullptr}
    , decltype(_impl_.mute_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_chattarget()) {
    _this->_impl_.chattarget_ = new ::AcFunDanmu::Im::Message::ChatTarget(*from._impl_.chattarget_);
  }
  _this->_impl_.mute_ = from._impl_.mute_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.SessionMuteRequest)
}

inline void SessionMuteRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){nullptr}
    , decltype(_impl_.mute_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SessionMuteRequest::~SessionMuteRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.SessionMuteRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionMuteRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.chattarget_;
}

void SessionMuteRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionMuteRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.SessionMuteRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
  _impl_.mute_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionMuteRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_chattarget(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool mute = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.mute_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* SessionMuteRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.SessionMuteRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::chattarget(this),
        _Internal::chattarget(this).GetCachedSize(), target, stream);
  }

  // bool mute = 2;
  if (this->_internal_mute() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_mute(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.SessionMuteRequest)
  return target;
}

size_t SessionMuteRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.SessionMuteRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.chattarget_);
  }

  // bool mute = 2;
  if (this->_internal_mute() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionMuteRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionMuteRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionMuteRequest::GetClassData() const { return &_class_data_; }


void SessionMuteRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionMuteRequest*>(&to_msg);
  auto& from = static_cast<const SessionMuteRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.SessionMuteRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_chattarget()) {
    _this->_internal_mutable_chattarget()->::AcFunDanmu::Im::Message::ChatTarget::MergeFrom(
        from._internal_chattarget());
  }
  if (from._internal_mute() != 0) {
    _this->_internal_set_mute(from._internal_mute());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionMuteRequest::CopyFrom(const SessionMuteRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.SessionMuteRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionMuteRequest::IsInitialized() const {
  return true;
}

void SessionMuteRequest::InternalSwap(SessionMuteRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(SessionMuteRequest, _impl_.mute_)
      + sizeof(SessionMuteRequest::_impl_.mute_)
      - PROTOBUF_FIELD_OFFSET(SessionMuteRequest, _impl_.chattarget_)>(
          reinterpret_cast<char*>(&_impl_.chattarget_),
          reinterpret_cast<char*>(&other->_impl_.chattarget_));
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionMuteRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionMuteRequest_2eproto_getter, &descriptor_table_SessionMuteRequest_2eproto_once,
      file_level_metadata_SessionMuteRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::SessionMuteRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::SessionMuteRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::SessionMuteRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
