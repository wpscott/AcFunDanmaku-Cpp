// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupInviteAcceptRequest.proto

#include "GroupInviteAcceptRequest.pb.h"

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
namespace Message {
PROTOBUF_CONSTEXPR GroupInviteAcceptRequest::GroupInviteAcceptRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.groupid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.inviteid_)*/int64_t{0}
  , /*decltype(_impl_.invitestatus_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupInviteAcceptRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupInviteAcceptRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupInviteAcceptRequestDefaultTypeInternal() {}
  union {
    GroupInviteAcceptRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupInviteAcceptRequestDefaultTypeInternal _GroupInviteAcceptRequest_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupInviteAcceptRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupInviteAcceptRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupInviteAcceptRequest_2eproto = nullptr;

const uint32_t TableStruct_GroupInviteAcceptRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest, _impl_.inviteid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest, _impl_.groupid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest, _impl_.invitestatus_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupInviteAcceptRequest_default_instance_._instance,
};

const char descriptor_table_protodef_GroupInviteAcceptRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\036GroupInviteAcceptRequest.proto\022\033AcFunD"
  "anmu.Im.Cloud.Message\032\025GroupJoinStatus.p"
  "roto\"\201\001\n\030GroupInviteAcceptRequest\022\020\n\010inv"
  "iteId\030\001 \001(\003\022\017\n\007groupId\030\002 \001(\t\022B\n\014inviteSt"
  "atus\030\003 \001(\0162,.AcFunDanmu.Im.Cloud.Message"
  ".GroupJoinStatusb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupInviteAcceptRequest_2eproto_deps[1] = {
  &::descriptor_table_GroupJoinStatus_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupInviteAcceptRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupInviteAcceptRequest_2eproto = {
    false, false, 224, descriptor_table_protodef_GroupInviteAcceptRequest_2eproto,
    "GroupInviteAcceptRequest.proto",
    &descriptor_table_GroupInviteAcceptRequest_2eproto_once, descriptor_table_GroupInviteAcceptRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_GroupInviteAcceptRequest_2eproto::offsets,
    file_level_metadata_GroupInviteAcceptRequest_2eproto, file_level_enum_descriptors_GroupInviteAcceptRequest_2eproto,
    file_level_service_descriptors_GroupInviteAcceptRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupInviteAcceptRequest_2eproto_getter() {
  return &descriptor_table_GroupInviteAcceptRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupInviteAcceptRequest_2eproto(&descriptor_table_GroupInviteAcceptRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupInviteAcceptRequest::_Internal {
 public:
};

GroupInviteAcceptRequest::GroupInviteAcceptRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
}
GroupInviteAcceptRequest::GroupInviteAcceptRequest(const GroupInviteAcceptRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupInviteAcceptRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.groupid_){}
    , decltype(_impl_.inviteid_){}
    , decltype(_impl_.invitestatus_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.groupid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.groupid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_groupid().empty()) {
    _this->_impl_.groupid_.Set(from._internal_groupid(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.inviteid_, &from._impl_.inviteid_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.invitestatus_) -
    reinterpret_cast<char*>(&_impl_.inviteid_)) + sizeof(_impl_.invitestatus_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
}

inline void GroupInviteAcceptRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.groupid_){}
    , decltype(_impl_.inviteid_){int64_t{0}}
    , decltype(_impl_.invitestatus_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.groupid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.groupid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GroupInviteAcceptRequest::~GroupInviteAcceptRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupInviteAcceptRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.groupid_.Destroy();
}

void GroupInviteAcceptRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupInviteAcceptRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.groupid_.ClearToEmpty();
  ::memset(&_impl_.inviteid_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.invitestatus_) -
      reinterpret_cast<char*>(&_impl_.inviteid_)) + sizeof(_impl_.invitestatus_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupInviteAcceptRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 inviteId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.inviteid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string groupId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_groupid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.groupId"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus inviteStatus = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_invitestatus(static_cast<::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus>(val));
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

uint8_t* GroupInviteAcceptRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 inviteId = 1;
  if (this->_internal_inviteid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_inviteid(), target);
  }

  // string groupId = 2;
  if (!this->_internal_groupid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_groupid().data(), static_cast<int>(this->_internal_groupid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest.groupId");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_groupid(), target);
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus inviteStatus = 3;
  if (this->_internal_invitestatus() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      3, this->_internal_invitestatus(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
  return target;
}

size_t GroupInviteAcceptRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string groupId = 2;
  if (!this->_internal_groupid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_groupid());
  }

  // int64 inviteId = 1;
  if (this->_internal_inviteid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_inviteid());
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus inviteStatus = 3;
  if (this->_internal_invitestatus() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_invitestatus());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupInviteAcceptRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupInviteAcceptRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupInviteAcceptRequest::GetClassData() const { return &_class_data_; }


void GroupInviteAcceptRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupInviteAcceptRequest*>(&to_msg);
  auto& from = static_cast<const GroupInviteAcceptRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_groupid().empty()) {
    _this->_internal_set_groupid(from._internal_groupid());
  }
  if (from._internal_inviteid() != 0) {
    _this->_internal_set_inviteid(from._internal_inviteid());
  }
  if (from._internal_invitestatus() != 0) {
    _this->_internal_set_invitestatus(from._internal_invitestatus());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupInviteAcceptRequest::CopyFrom(const GroupInviteAcceptRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupInviteAcceptRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupInviteAcceptRequest::IsInitialized() const {
  return true;
}

void GroupInviteAcceptRequest::InternalSwap(GroupInviteAcceptRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.groupid_, lhs_arena,
      &other->_impl_.groupid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupInviteAcceptRequest, _impl_.invitestatus_)
      + sizeof(GroupInviteAcceptRequest::_impl_.invitestatus_)
      - PROTOBUF_FIELD_OFFSET(GroupInviteAcceptRequest, _impl_.inviteid_)>(
          reinterpret_cast<char*>(&_impl_.inviteid_),
          reinterpret_cast<char*>(&other->_impl_.inviteid_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupInviteAcceptRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupInviteAcceptRequest_2eproto_getter, &descriptor_table_GroupInviteAcceptRequest_2eproto_once,
      file_level_metadata_GroupInviteAcceptRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupInviteAcceptRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
