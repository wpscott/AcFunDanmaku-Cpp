// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SessionTagRemoveRequest.proto

#include "SessionTagRemoveRequest.pb.h"

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
namespace Cloud {
namespace SessionTag {
PROTOBUF_CONSTEXPR SessionTagRemoveRequest::SessionTagRemoveRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.chattarget_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct SessionTagRemoveRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR SessionTagRemoveRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~SessionTagRemoveRequestDefaultTypeInternal() {}
  union {
    SessionTagRemoveRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 SessionTagRemoveRequestDefaultTypeInternal _SessionTagRemoveRequest_default_instance_;
}  // namespace SessionTag
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_SessionTagRemoveRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_SessionTagRemoveRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_SessionTagRemoveRequest_2eproto = nullptr;

const uint32_t TableStruct_SessionTagRemoveRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionTag::SessionTagRemoveRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::SessionTag::SessionTagRemoveRequest, _impl_.chattarget_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::SessionTag::SessionTagRemoveRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::SessionTag::_SessionTagRemoveRequest_default_instance_._instance,
};

const char descriptor_table_protodef_SessionTagRemoveRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\035SessionTagRemoveRequest.proto\022\036AcFunDa"
  "nmu.Im.Cloud.SessionTag\032\020ChatTarget.prot"
  "o\"P\n\027SessionTagRemoveRequest\0225\n\nchatTarg"
  "et\030\001 \001(\0132!.AcFunDanmu.Im.Message.ChatTar"
  "getb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_SessionTagRemoveRequest_2eproto_deps[1] = {
  &::descriptor_table_ChatTarget_2eproto,
};
static ::_pbi::once_flag descriptor_table_SessionTagRemoveRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_SessionTagRemoveRequest_2eproto = {
    false, false, 171, descriptor_table_protodef_SessionTagRemoveRequest_2eproto,
    "SessionTagRemoveRequest.proto",
    &descriptor_table_SessionTagRemoveRequest_2eproto_once, descriptor_table_SessionTagRemoveRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_SessionTagRemoveRequest_2eproto::offsets,
    file_level_metadata_SessionTagRemoveRequest_2eproto, file_level_enum_descriptors_SessionTagRemoveRequest_2eproto,
    file_level_service_descriptors_SessionTagRemoveRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_SessionTagRemoveRequest_2eproto_getter() {
  return &descriptor_table_SessionTagRemoveRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_SessionTagRemoveRequest_2eproto(&descriptor_table_SessionTagRemoveRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace SessionTag {

// ===================================================================

class SessionTagRemoveRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& chattarget(const SessionTagRemoveRequest* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
SessionTagRemoveRequest::_Internal::chattarget(const SessionTagRemoveRequest* msg) {
  return *msg->_impl_.chattarget_;
}
void SessionTagRemoveRequest::clear_chattarget() {
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
}
SessionTagRemoveRequest::SessionTagRemoveRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
}
SessionTagRemoveRequest::SessionTagRemoveRequest(const SessionTagRemoveRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  SessionTagRemoveRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_chattarget()) {
    _this->_impl_.chattarget_ = new ::AcFunDanmu::Im::Message::ChatTarget(*from._impl_.chattarget_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
}

inline void SessionTagRemoveRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

SessionTagRemoveRequest::~SessionTagRemoveRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void SessionTagRemoveRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.chattarget_;
}

void SessionTagRemoveRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void SessionTagRemoveRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* SessionTagRemoveRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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

uint8_t* SessionTagRemoveRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::chattarget(this),
        _Internal::chattarget(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
  return target;
}

size_t SessionTagRemoveRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
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

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData SessionTagRemoveRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    SessionTagRemoveRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*SessionTagRemoveRequest::GetClassData() const { return &_class_data_; }


void SessionTagRemoveRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<SessionTagRemoveRequest*>(&to_msg);
  auto& from = static_cast<const SessionTagRemoveRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_chattarget()) {
    _this->_internal_mutable_chattarget()->::AcFunDanmu::Im::Message::ChatTarget::MergeFrom(
        from._internal_chattarget());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void SessionTagRemoveRequest::CopyFrom(const SessionTagRemoveRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.SessionTag.SessionTagRemoveRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SessionTagRemoveRequest::IsInitialized() const {
  return true;
}

void SessionTagRemoveRequest::InternalSwap(SessionTagRemoveRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.chattarget_, other->_impl_.chattarget_);
}

::PROTOBUF_NAMESPACE_ID::Metadata SessionTagRemoveRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_SessionTagRemoveRequest_2eproto_getter, &descriptor_table_SessionTagRemoveRequest_2eproto_once,
      file_level_metadata_SessionTagRemoveRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace SessionTag
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagRemoveRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagRemoveRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::SessionTag::SessionTagRemoveRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
