// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupMembersBriefInfo.proto

#include "GroupMembersBriefInfo.pb.h"

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
PROTOBUF_CONSTEXPR GroupMembersBriefInfo::GroupMembersBriefInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.topmembers_)*/{}
  , /*decltype(_impl_.lastupdatetime_)*/int64_t{0}
  , /*decltype(_impl_.membercount_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupMembersBriefInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupMembersBriefInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupMembersBriefInfoDefaultTypeInternal() {}
  union {
    GroupMembersBriefInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupMembersBriefInfoDefaultTypeInternal _GroupMembersBriefInfo_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupMembersBriefInfo_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupMembersBriefInfo_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupMembersBriefInfo_2eproto = nullptr;

const uint32_t TableStruct_GroupMembersBriefInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo, _impl_.membercount_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo, _impl_.topmembers_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo, _impl_.lastupdatetime_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupMembersBriefInfo_default_instance_._instance,
};

const char descriptor_table_protodef_GroupMembersBriefInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033GroupMembersBriefInfo.proto\022\033AcFunDanm"
  "u.Im.Cloud.Message\032\nUser.proto\"s\n\025GroupM"
  "embersBriefInfo\022\023\n\013memberCount\030\001 \001(\005\022-\n\n"
  "topMembers\030\002 \003(\0132\031.AcFunDanmu.Im.Basic.U"
  "ser\022\026\n\016lastUpdateTime\030\003 \001(\003b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupMembersBriefInfo_2eproto_deps[1] = {
  &::descriptor_table_User_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupMembersBriefInfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupMembersBriefInfo_2eproto = {
    false, false, 195, descriptor_table_protodef_GroupMembersBriefInfo_2eproto,
    "GroupMembersBriefInfo.proto",
    &descriptor_table_GroupMembersBriefInfo_2eproto_once, descriptor_table_GroupMembersBriefInfo_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_GroupMembersBriefInfo_2eproto::offsets,
    file_level_metadata_GroupMembersBriefInfo_2eproto, file_level_enum_descriptors_GroupMembersBriefInfo_2eproto,
    file_level_service_descriptors_GroupMembersBriefInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupMembersBriefInfo_2eproto_getter() {
  return &descriptor_table_GroupMembersBriefInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupMembersBriefInfo_2eproto(&descriptor_table_GroupMembersBriefInfo_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupMembersBriefInfo::_Internal {
 public:
};

void GroupMembersBriefInfo::clear_topmembers() {
  _impl_.topmembers_.Clear();
}
GroupMembersBriefInfo::GroupMembersBriefInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
}
GroupMembersBriefInfo::GroupMembersBriefInfo(const GroupMembersBriefInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupMembersBriefInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.topmembers_){from._impl_.topmembers_}
    , decltype(_impl_.lastupdatetime_){}
    , decltype(_impl_.membercount_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  ::memcpy(&_impl_.lastupdatetime_, &from._impl_.lastupdatetime_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.membercount_) -
    reinterpret_cast<char*>(&_impl_.lastupdatetime_)) + sizeof(_impl_.membercount_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
}

inline void GroupMembersBriefInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.topmembers_){arena}
    , decltype(_impl_.lastupdatetime_){int64_t{0}}
    , decltype(_impl_.membercount_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GroupMembersBriefInfo::~GroupMembersBriefInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupMembersBriefInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.topmembers_.~RepeatedPtrField();
}

void GroupMembersBriefInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupMembersBriefInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.topmembers_.Clear();
  ::memset(&_impl_.lastupdatetime_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.membercount_) -
      reinterpret_cast<char*>(&_impl_.lastupdatetime_)) + sizeof(_impl_.membercount_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupMembersBriefInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 memberCount = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.membercount_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Basic.User topMembers = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_topmembers(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // int64 lastUpdateTime = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.lastupdatetime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* GroupMembersBriefInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 memberCount = 1;
  if (this->_internal_membercount() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_membercount(), target);
  }

  // repeated .AcFunDanmu.Im.Basic.User topMembers = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_topmembers_size()); i < n; i++) {
    const auto& repfield = this->_internal_topmembers(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // int64 lastUpdateTime = 3;
  if (this->_internal_lastupdatetime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(3, this->_internal_lastupdatetime(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
  return target;
}

size_t GroupMembersBriefInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Basic.User topMembers = 2;
  total_size += 1UL * this->_internal_topmembers_size();
  for (const auto& msg : this->_impl_.topmembers_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // int64 lastUpdateTime = 3;
  if (this->_internal_lastupdatetime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_lastupdatetime());
  }

  // int32 memberCount = 1;
  if (this->_internal_membercount() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_membercount());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupMembersBriefInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupMembersBriefInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupMembersBriefInfo::GetClassData() const { return &_class_data_; }


void GroupMembersBriefInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupMembersBriefInfo*>(&to_msg);
  auto& from = static_cast<const GroupMembersBriefInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.topmembers_.MergeFrom(from._impl_.topmembers_);
  if (from._internal_lastupdatetime() != 0) {
    _this->_internal_set_lastupdatetime(from._internal_lastupdatetime());
  }
  if (from._internal_membercount() != 0) {
    _this->_internal_set_membercount(from._internal_membercount());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupMembersBriefInfo::CopyFrom(const GroupMembersBriefInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupMembersBriefInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupMembersBriefInfo::IsInitialized() const {
  return true;
}

void GroupMembersBriefInfo::InternalSwap(GroupMembersBriefInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.topmembers_.InternalSwap(&other->_impl_.topmembers_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupMembersBriefInfo, _impl_.membercount_)
      + sizeof(GroupMembersBriefInfo::_impl_.membercount_)
      - PROTOBUF_FIELD_OFFSET(GroupMembersBriefInfo, _impl_.lastupdatetime_)>(
          reinterpret_cast<char*>(&_impl_.lastupdatetime_),
          reinterpret_cast<char*>(&other->_impl_.lastupdatetime_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupMembersBriefInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupMembersBriefInfo_2eproto_getter, &descriptor_table_GroupMembersBriefInfo_2eproto_once,
      file_level_metadata_GroupMembersBriefInfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupMembersBriefInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>