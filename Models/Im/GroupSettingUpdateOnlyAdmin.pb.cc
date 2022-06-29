// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupSettingUpdateOnlyAdmin.proto

#include "GroupSettingUpdateOnlyAdmin.pb.h"

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
PROTOBUF_CONSTEXPR GroupSettingUpdateOnlyAdmin::GroupSettingUpdateOnlyAdmin(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.onlyadminupdatesetting_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupSettingUpdateOnlyAdminDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupSettingUpdateOnlyAdminDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupSettingUpdateOnlyAdminDefaultTypeInternal() {}
  union {
    GroupSettingUpdateOnlyAdmin _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupSettingUpdateOnlyAdminDefaultTypeInternal _GroupSettingUpdateOnlyAdmin_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupSettingUpdateOnlyAdmin_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupSettingUpdateOnlyAdmin_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupSettingUpdateOnlyAdmin_2eproto = nullptr;

const uint32_t TableStruct_GroupSettingUpdateOnlyAdmin_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingUpdateOnlyAdmin, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingUpdateOnlyAdmin, _impl_.onlyadminupdatesetting_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupSettingUpdateOnlyAdmin)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupSettingUpdateOnlyAdmin_default_instance_._instance,
};

const char descriptor_table_protodef_GroupSettingUpdateOnlyAdmin_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n!GroupSettingUpdateOnlyAdmin.proto\022\033AcF"
  "unDanmu.Im.Cloud.Message\"=\n\033GroupSetting"
  "UpdateOnlyAdmin\022\036\n\026onlyAdminUpdateSettin"
  "g\030\001 \001(\010b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_GroupSettingUpdateOnlyAdmin_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupSettingUpdateOnlyAdmin_2eproto = {
    false, false, 135, descriptor_table_protodef_GroupSettingUpdateOnlyAdmin_2eproto,
    "GroupSettingUpdateOnlyAdmin.proto",
    &descriptor_table_GroupSettingUpdateOnlyAdmin_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_GroupSettingUpdateOnlyAdmin_2eproto::offsets,
    file_level_metadata_GroupSettingUpdateOnlyAdmin_2eproto, file_level_enum_descriptors_GroupSettingUpdateOnlyAdmin_2eproto,
    file_level_service_descriptors_GroupSettingUpdateOnlyAdmin_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupSettingUpdateOnlyAdmin_2eproto_getter() {
  return &descriptor_table_GroupSettingUpdateOnlyAdmin_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupSettingUpdateOnlyAdmin_2eproto(&descriptor_table_GroupSettingUpdateOnlyAdmin_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupSettingUpdateOnlyAdmin::_Internal {
 public:
};

GroupSettingUpdateOnlyAdmin::GroupSettingUpdateOnlyAdmin(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
}
GroupSettingUpdateOnlyAdmin::GroupSettingUpdateOnlyAdmin(const GroupSettingUpdateOnlyAdmin& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupSettingUpdateOnlyAdmin* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.onlyadminupdatesetting_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.onlyadminupdatesetting_ = from._impl_.onlyadminupdatesetting_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
}

inline void GroupSettingUpdateOnlyAdmin::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.onlyadminupdatesetting_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GroupSettingUpdateOnlyAdmin::~GroupSettingUpdateOnlyAdmin() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupSettingUpdateOnlyAdmin::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void GroupSettingUpdateOnlyAdmin::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupSettingUpdateOnlyAdmin::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.onlyadminupdatesetting_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupSettingUpdateOnlyAdmin::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool onlyAdminUpdateSetting = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.onlyadminupdatesetting_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* GroupSettingUpdateOnlyAdmin::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool onlyAdminUpdateSetting = 1;
  if (this->_internal_onlyadminupdatesetting() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_onlyadminupdatesetting(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
  return target;
}

size_t GroupSettingUpdateOnlyAdmin::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // bool onlyAdminUpdateSetting = 1;
  if (this->_internal_onlyadminupdatesetting() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupSettingUpdateOnlyAdmin::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupSettingUpdateOnlyAdmin::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupSettingUpdateOnlyAdmin::GetClassData() const { return &_class_data_; }


void GroupSettingUpdateOnlyAdmin::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupSettingUpdateOnlyAdmin*>(&to_msg);
  auto& from = static_cast<const GroupSettingUpdateOnlyAdmin&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_onlyadminupdatesetting() != 0) {
    _this->_internal_set_onlyadminupdatesetting(from._internal_onlyadminupdatesetting());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupSettingUpdateOnlyAdmin::CopyFrom(const GroupSettingUpdateOnlyAdmin& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupSettingUpdateOnlyAdmin)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupSettingUpdateOnlyAdmin::IsInitialized() const {
  return true;
}

void GroupSettingUpdateOnlyAdmin::InternalSwap(GroupSettingUpdateOnlyAdmin* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.onlyadminupdatesetting_, other->_impl_.onlyadminupdatesetting_);
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupSettingUpdateOnlyAdmin::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupSettingUpdateOnlyAdmin_2eproto_getter, &descriptor_table_GroupSettingUpdateOnlyAdmin_2eproto_once,
      file_level_metadata_GroupSettingUpdateOnlyAdmin_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupSettingUpdateOnlyAdmin*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupSettingUpdateOnlyAdmin >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupSettingUpdateOnlyAdmin >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
