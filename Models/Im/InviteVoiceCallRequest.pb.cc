// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: InviteVoiceCallRequest.proto

#include "InviteVoiceCallRequest.pb.h"

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
namespace Voice {
namespace Call {
PROTOBUF_CONSTEXPR InviteVoiceCallRequest::InviteVoiceCallRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.invitee_)*/{}
  , /*decltype(_impl_.roomid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct InviteVoiceCallRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR InviteVoiceCallRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~InviteVoiceCallRequestDefaultTypeInternal() {}
  union {
    InviteVoiceCallRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 InviteVoiceCallRequestDefaultTypeInternal _InviteVoiceCallRequest_default_instance_;
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_InviteVoiceCallRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_InviteVoiceCallRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_InviteVoiceCallRequest_2eproto = nullptr;

const uint32_t TableStruct_InviteVoiceCallRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::InviteVoiceCallRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::InviteVoiceCallRequest, _impl_.roomid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Voice::Call::InviteVoiceCallRequest, _impl_.invitee_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Voice::Call::InviteVoiceCallRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Voice::Call::_InviteVoiceCallRequest_default_instance_._instance,
};

const char descriptor_table_protodef_InviteVoiceCallRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\034InviteVoiceCallRequest.proto\022\036AcFunDan"
  "mu.Im.Cloud.Voice.Call\032\nUser.proto\"T\n\026In"
  "viteVoiceCallRequest\022\016\n\006roomId\030\001 \001(\t\022*\n\007"
  "invitee\030\002 \003(\0132\031.AcFunDanmu.Im.Basic.User"
  "b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_InviteVoiceCallRequest_2eproto_deps[1] = {
  &::descriptor_table_User_2eproto,
};
static ::_pbi::once_flag descriptor_table_InviteVoiceCallRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_InviteVoiceCallRequest_2eproto = {
    false, false, 168, descriptor_table_protodef_InviteVoiceCallRequest_2eproto,
    "InviteVoiceCallRequest.proto",
    &descriptor_table_InviteVoiceCallRequest_2eproto_once, descriptor_table_InviteVoiceCallRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_InviteVoiceCallRequest_2eproto::offsets,
    file_level_metadata_InviteVoiceCallRequest_2eproto, file_level_enum_descriptors_InviteVoiceCallRequest_2eproto,
    file_level_service_descriptors_InviteVoiceCallRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_InviteVoiceCallRequest_2eproto_getter() {
  return &descriptor_table_InviteVoiceCallRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_InviteVoiceCallRequest_2eproto(&descriptor_table_InviteVoiceCallRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Voice {
namespace Call {

// ===================================================================

class InviteVoiceCallRequest::_Internal {
 public:
};

void InviteVoiceCallRequest::clear_invitee() {
  _impl_.invitee_.Clear();
}
InviteVoiceCallRequest::InviteVoiceCallRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
}
InviteVoiceCallRequest::InviteVoiceCallRequest(const InviteVoiceCallRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  InviteVoiceCallRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.invitee_){from._impl_.invitee_}
    , decltype(_impl_.roomid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.roomid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.roomid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_roomid().empty()) {
    _this->_impl_.roomid_.Set(from._internal_roomid(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
}

inline void InviteVoiceCallRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.invitee_){arena}
    , decltype(_impl_.roomid_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.roomid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.roomid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

InviteVoiceCallRequest::~InviteVoiceCallRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void InviteVoiceCallRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.invitee_.~RepeatedPtrField();
  _impl_.roomid_.Destroy();
}

void InviteVoiceCallRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void InviteVoiceCallRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.invitee_.Clear();
  _impl_.roomid_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* InviteVoiceCallRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string roomId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_roomid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest.roomId"));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Basic.User invitee = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_invitee(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* InviteVoiceCallRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string roomId = 1;
  if (!this->_internal_roomid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_roomid().data(), static_cast<int>(this->_internal_roomid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest.roomId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_roomid(), target);
  }

  // repeated .AcFunDanmu.Im.Basic.User invitee = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_invitee_size()); i < n; i++) {
    const auto& repfield = this->_internal_invitee(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
  return target;
}

size_t InviteVoiceCallRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Basic.User invitee = 2;
  total_size += 1UL * this->_internal_invitee_size();
  for (const auto& msg : this->_impl_.invitee_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string roomId = 1;
  if (!this->_internal_roomid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_roomid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData InviteVoiceCallRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    InviteVoiceCallRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*InviteVoiceCallRequest::GetClassData() const { return &_class_data_; }


void InviteVoiceCallRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<InviteVoiceCallRequest*>(&to_msg);
  auto& from = static_cast<const InviteVoiceCallRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.invitee_.MergeFrom(from._impl_.invitee_);
  if (!from._internal_roomid().empty()) {
    _this->_internal_set_roomid(from._internal_roomid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void InviteVoiceCallRequest::CopyFrom(const InviteVoiceCallRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Voice.Call.InviteVoiceCallRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool InviteVoiceCallRequest::IsInitialized() const {
  return true;
}

void InviteVoiceCallRequest::InternalSwap(InviteVoiceCallRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.invitee_.InternalSwap(&other->_impl_.invitee_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.roomid_, lhs_arena,
      &other->_impl_.roomid_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata InviteVoiceCallRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_InviteVoiceCallRequest_2eproto_getter, &descriptor_table_InviteVoiceCallRequest_2eproto_once,
      file_level_metadata_InviteVoiceCallRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Call
}  // namespace Voice
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Voice::Call::InviteVoiceCallRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Voice::Call::InviteVoiceCallRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Voice::Call::InviteVoiceCallRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
