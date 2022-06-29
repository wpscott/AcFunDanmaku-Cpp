// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserGroupInfo.proto

#include "UserGroupInfo.pb.h"

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
PROTOBUF_CONSTEXPR UserGroupInfo::UserGroupInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.groupinfo_)*/nullptr
  , /*decltype(_impl_.groupmember_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UserGroupInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserGroupInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserGroupInfoDefaultTypeInternal() {}
  union {
    UserGroupInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserGroupInfoDefaultTypeInternal _UserGroupInfo_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_UserGroupInfo_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_UserGroupInfo_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_UserGroupInfo_2eproto = nullptr;

const uint32_t TableStruct_UserGroupInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::UserGroupInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::UserGroupInfo, _impl_.groupinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::UserGroupInfo, _impl_.groupmember_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::UserGroupInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_UserGroupInfo_default_instance_._instance,
};

const char descriptor_table_protodef_UserGroupInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\023UserGroupInfo.proto\022\033AcFunDanmu.Im.Clo"
  "ud.Message\032\017GroupInfo.proto\032\021GroupMember"
  ".proto\"\211\001\n\rUserGroupInfo\0229\n\tgroupInfo\030\001 "
  "\001(\0132&.AcFunDanmu.Im.Cloud.Message.GroupI"
  "nfo\022=\n\013groupMember\030\002 \001(\0132(.AcFunDanmu.Im"
  ".Cloud.Message.GroupMemberb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_UserGroupInfo_2eproto_deps[2] = {
  &::descriptor_table_GroupInfo_2eproto,
  &::descriptor_table_GroupMember_2eproto,
};
static ::_pbi::once_flag descriptor_table_UserGroupInfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_UserGroupInfo_2eproto = {
    false, false, 234, descriptor_table_protodef_UserGroupInfo_2eproto,
    "UserGroupInfo.proto",
    &descriptor_table_UserGroupInfo_2eproto_once, descriptor_table_UserGroupInfo_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_UserGroupInfo_2eproto::offsets,
    file_level_metadata_UserGroupInfo_2eproto, file_level_enum_descriptors_UserGroupInfo_2eproto,
    file_level_service_descriptors_UserGroupInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_UserGroupInfo_2eproto_getter() {
  return &descriptor_table_UserGroupInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_UserGroupInfo_2eproto(&descriptor_table_UserGroupInfo_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class UserGroupInfo::_Internal {
 public:
  static const ::AcFunDanmu::Im::Cloud::Message::GroupInfo& groupinfo(const UserGroupInfo* msg);
  static const ::AcFunDanmu::Im::Cloud::Message::GroupMember& groupmember(const UserGroupInfo* msg);
};

const ::AcFunDanmu::Im::Cloud::Message::GroupInfo&
UserGroupInfo::_Internal::groupinfo(const UserGroupInfo* msg) {
  return *msg->_impl_.groupinfo_;
}
const ::AcFunDanmu::Im::Cloud::Message::GroupMember&
UserGroupInfo::_Internal::groupmember(const UserGroupInfo* msg) {
  return *msg->_impl_.groupmember_;
}
void UserGroupInfo::clear_groupinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.groupinfo_ != nullptr) {
    delete _impl_.groupinfo_;
  }
  _impl_.groupinfo_ = nullptr;
}
void UserGroupInfo::clear_groupmember() {
  if (GetArenaForAllocation() == nullptr && _impl_.groupmember_ != nullptr) {
    delete _impl_.groupmember_;
  }
  _impl_.groupmember_ = nullptr;
}
UserGroupInfo::UserGroupInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
}
UserGroupInfo::UserGroupInfo(const UserGroupInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UserGroupInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.groupinfo_){nullptr}
    , decltype(_impl_.groupmember_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_groupinfo()) {
    _this->_impl_.groupinfo_ = new ::AcFunDanmu::Im::Cloud::Message::GroupInfo(*from._impl_.groupinfo_);
  }
  if (from._internal_has_groupmember()) {
    _this->_impl_.groupmember_ = new ::AcFunDanmu::Im::Cloud::Message::GroupMember(*from._impl_.groupmember_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
}

inline void UserGroupInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.groupinfo_){nullptr}
    , decltype(_impl_.groupmember_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

UserGroupInfo::~UserGroupInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UserGroupInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.groupinfo_;
  if (this != internal_default_instance()) delete _impl_.groupmember_;
}

void UserGroupInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UserGroupInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.groupinfo_ != nullptr) {
    delete _impl_.groupinfo_;
  }
  _impl_.groupinfo_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.groupmember_ != nullptr) {
    delete _impl_.groupmember_;
  }
  _impl_.groupmember_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserGroupInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Cloud.Message.GroupInfo groupInfo = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_groupinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.GroupMember groupMember = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_groupmember(), ptr);
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

uint8_t* UserGroupInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Cloud.Message.GroupInfo groupInfo = 1;
  if (this->_internal_has_groupinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::groupinfo(this),
        _Internal::groupinfo(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupMember groupMember = 2;
  if (this->_internal_has_groupmember()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::groupmember(this),
        _Internal::groupmember(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
  return target;
}

size_t UserGroupInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Cloud.Message.GroupInfo groupInfo = 1;
  if (this->_internal_has_groupinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.groupinfo_);
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupMember groupMember = 2;
  if (this->_internal_has_groupmember()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.groupmember_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UserGroupInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UserGroupInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UserGroupInfo::GetClassData() const { return &_class_data_; }


void UserGroupInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UserGroupInfo*>(&to_msg);
  auto& from = static_cast<const UserGroupInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_groupinfo()) {
    _this->_internal_mutable_groupinfo()->::AcFunDanmu::Im::Cloud::Message::GroupInfo::MergeFrom(
        from._internal_groupinfo());
  }
  if (from._internal_has_groupmember()) {
    _this->_internal_mutable_groupmember()->::AcFunDanmu::Im::Cloud::Message::GroupMember::MergeFrom(
        from._internal_groupmember());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UserGroupInfo::CopyFrom(const UserGroupInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.UserGroupInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserGroupInfo::IsInitialized() const {
  return true;
}

void UserGroupInfo::InternalSwap(UserGroupInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UserGroupInfo, _impl_.groupmember_)
      + sizeof(UserGroupInfo::_impl_.groupmember_)
      - PROTOBUF_FIELD_OFFSET(UserGroupInfo, _impl_.groupinfo_)>(
          reinterpret_cast<char*>(&_impl_.groupinfo_),
          reinterpret_cast<char*>(&other->_impl_.groupinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata UserGroupInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_UserGroupInfo_2eproto_getter, &descriptor_table_UserGroupInfo_2eproto_once,
      file_level_metadata_UserGroupInfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::UserGroupInfo*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::UserGroupInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::UserGroupInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
