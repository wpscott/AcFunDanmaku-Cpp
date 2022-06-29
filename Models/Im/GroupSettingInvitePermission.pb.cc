// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupSettingInvitePermission.proto

#include "GroupSettingInvitePermission.pb.h"

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
PROTOBUF_CONSTEXPR GroupSettingInvitePermission::GroupSettingInvitePermission(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.invitepermissiontype_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupSettingInvitePermissionDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupSettingInvitePermissionDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupSettingInvitePermissionDefaultTypeInternal() {}
  union {
    GroupSettingInvitePermission _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupSettingInvitePermissionDefaultTypeInternal _GroupSettingInvitePermission_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupSettingInvitePermission_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupSettingInvitePermission_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupSettingInvitePermission_2eproto = nullptr;

const uint32_t TableStruct_GroupSettingInvitePermission_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingInvitePermission, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingInvitePermission, _impl_.invitepermissiontype_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupSettingInvitePermission)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupSettingInvitePermission_default_instance_._instance,
};

const char descriptor_table_protodef_GroupSettingInvitePermission_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\"GroupSettingInvitePermission.proto\022\033Ac"
  "FunDanmu.Im.Cloud.Message\032\032InvitePermiss"
  "ionType.proto\"o\n\034GroupSettingInvitePermi"
  "ssion\022O\n\024invitePermissionType\030\001 \001(\01621.Ac"
  "FunDanmu.Im.Cloud.Message.InvitePermissi"
  "onTypeb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupSettingInvitePermission_2eproto_deps[1] = {
  &::descriptor_table_InvitePermissionType_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupSettingInvitePermission_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupSettingInvitePermission_2eproto = {
    false, false, 214, descriptor_table_protodef_GroupSettingInvitePermission_2eproto,
    "GroupSettingInvitePermission.proto",
    &descriptor_table_GroupSettingInvitePermission_2eproto_once, descriptor_table_GroupSettingInvitePermission_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_GroupSettingInvitePermission_2eproto::offsets,
    file_level_metadata_GroupSettingInvitePermission_2eproto, file_level_enum_descriptors_GroupSettingInvitePermission_2eproto,
    file_level_service_descriptors_GroupSettingInvitePermission_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupSettingInvitePermission_2eproto_getter() {
  return &descriptor_table_GroupSettingInvitePermission_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupSettingInvitePermission_2eproto(&descriptor_table_GroupSettingInvitePermission_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupSettingInvitePermission::_Internal {
 public:
};

GroupSettingInvitePermission::GroupSettingInvitePermission(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
}
GroupSettingInvitePermission::GroupSettingInvitePermission(const GroupSettingInvitePermission& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupSettingInvitePermission* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.invitepermissiontype_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.invitepermissiontype_ = from._impl_.invitepermissiontype_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
}

inline void GroupSettingInvitePermission::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.invitepermissiontype_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GroupSettingInvitePermission::~GroupSettingInvitePermission() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupSettingInvitePermission::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void GroupSettingInvitePermission::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupSettingInvitePermission::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.invitepermissiontype_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupSettingInvitePermission::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Cloud.Message.InvitePermissionType invitePermissionType = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_invitepermissiontype(static_cast<::AcFunDanmu::Im::Cloud::Message::InvitePermissionType>(val));
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

uint8_t* GroupSettingInvitePermission::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Cloud.Message.InvitePermissionType invitePermissionType = 1;
  if (this->_internal_invitepermissiontype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      1, this->_internal_invitepermissiontype(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
  return target;
}

size_t GroupSettingInvitePermission::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Cloud.Message.InvitePermissionType invitePermissionType = 1;
  if (this->_internal_invitepermissiontype() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_invitepermissiontype());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupSettingInvitePermission::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupSettingInvitePermission::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupSettingInvitePermission::GetClassData() const { return &_class_data_; }


void GroupSettingInvitePermission::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupSettingInvitePermission*>(&to_msg);
  auto& from = static_cast<const GroupSettingInvitePermission&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_invitepermissiontype() != 0) {
    _this->_internal_set_invitepermissiontype(from._internal_invitepermissiontype());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupSettingInvitePermission::CopyFrom(const GroupSettingInvitePermission& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupSettingInvitePermission)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupSettingInvitePermission::IsInitialized() const {
  return true;
}

void GroupSettingInvitePermission::InternalSwap(GroupSettingInvitePermission* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.invitepermissiontype_, other->_impl_.invitepermissiontype_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupSettingInvitePermission::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupSettingInvitePermission_2eproto_getter, &descriptor_table_GroupSettingInvitePermission_2eproto_once,
      file_level_metadata_GroupSettingInvitePermission_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupSettingInvitePermission*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupSettingInvitePermission >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupSettingInvitePermission >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>