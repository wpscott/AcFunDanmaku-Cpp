// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupSettingDesc.proto

#include "GroupSettingDesc.pb.h"

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
PROTOBUF_CONSTEXPR GroupSettingDesc::GroupSettingDesc(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.desc_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.needsenddescmsg_)*/false
  , /*decltype(_impl_.remindall_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupSettingDescDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupSettingDescDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupSettingDescDefaultTypeInternal() {}
  union {
    GroupSettingDesc _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupSettingDescDefaultTypeInternal _GroupSettingDesc_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupSettingDesc_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupSettingDesc_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupSettingDesc_2eproto = nullptr;

const uint32_t TableStruct_GroupSettingDesc_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingDesc, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingDesc, _impl_.desc_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingDesc, _impl_.needsenddescmsg_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingDesc, _impl_.remindall_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupSettingDesc)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupSettingDesc_default_instance_._instance,
};

const char descriptor_table_protodef_GroupSettingDesc_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\026GroupSettingDesc.proto\022\033AcFunDanmu.Im."
  "Cloud.Message\"L\n\020GroupSettingDesc\022\014\n\004des"
  "c\030\001 \001(\t\022\027\n\017needSendDescMsg\030\002 \001(\010\022\021\n\tremi"
  "ndAll\030\003 \001(\010b\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_GroupSettingDesc_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupSettingDesc_2eproto = {
    false, false, 139, descriptor_table_protodef_GroupSettingDesc_2eproto,
    "GroupSettingDesc.proto",
    &descriptor_table_GroupSettingDesc_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_GroupSettingDesc_2eproto::offsets,
    file_level_metadata_GroupSettingDesc_2eproto, file_level_enum_descriptors_GroupSettingDesc_2eproto,
    file_level_service_descriptors_GroupSettingDesc_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupSettingDesc_2eproto_getter() {
  return &descriptor_table_GroupSettingDesc_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupSettingDesc_2eproto(&descriptor_table_GroupSettingDesc_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupSettingDesc::_Internal {
 public:
};

GroupSettingDesc::GroupSettingDesc(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
}
GroupSettingDesc::GroupSettingDesc(const GroupSettingDesc& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupSettingDesc* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.desc_){}
    , decltype(_impl_.needsenddescmsg_){}
    , decltype(_impl_.remindall_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.desc_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.desc_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_desc().empty()) {
    _this->_impl_.desc_.Set(from._internal_desc(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.needsenddescmsg_, &from._impl_.needsenddescmsg_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.remindall_) -
    reinterpret_cast<char*>(&_impl_.needsenddescmsg_)) + sizeof(_impl_.remindall_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
}

inline void GroupSettingDesc::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.desc_){}
    , decltype(_impl_.needsenddescmsg_){false}
    , decltype(_impl_.remindall_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.desc_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.desc_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GroupSettingDesc::~GroupSettingDesc() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupSettingDesc::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.desc_.Destroy();
}

void GroupSettingDesc::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupSettingDesc::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.desc_.ClearToEmpty();
  ::memset(&_impl_.needsenddescmsg_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.remindall_) -
      reinterpret_cast<char*>(&_impl_.needsenddescmsg_)) + sizeof(_impl_.remindall_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupSettingDesc::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string desc = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_desc();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.GroupSettingDesc.desc"));
        } else
          goto handle_unusual;
        continue;
      // bool needSendDescMsg = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.needsenddescmsg_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool remindAll = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.remindall_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* GroupSettingDesc::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string desc = 1;
  if (!this->_internal_desc().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_desc().data(), static_cast<int>(this->_internal_desc().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.GroupSettingDesc.desc");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_desc(), target);
  }

  // bool needSendDescMsg = 2;
  if (this->_internal_needsenddescmsg() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(2, this->_internal_needsenddescmsg(), target);
  }

  // bool remindAll = 3;
  if (this->_internal_remindall() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_remindall(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
  return target;
}

size_t GroupSettingDesc::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string desc = 1;
  if (!this->_internal_desc().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_desc());
  }

  // bool needSendDescMsg = 2;
  if (this->_internal_needsenddescmsg() != 0) {
    total_size += 1 + 1;
  }

  // bool remindAll = 3;
  if (this->_internal_remindall() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupSettingDesc::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupSettingDesc::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupSettingDesc::GetClassData() const { return &_class_data_; }


void GroupSettingDesc::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupSettingDesc*>(&to_msg);
  auto& from = static_cast<const GroupSettingDesc&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_desc().empty()) {
    _this->_internal_set_desc(from._internal_desc());
  }
  if (from._internal_needsenddescmsg() != 0) {
    _this->_internal_set_needsenddescmsg(from._internal_needsenddescmsg());
  }
  if (from._internal_remindall() != 0) {
    _this->_internal_set_remindall(from._internal_remindall());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupSettingDesc::CopyFrom(const GroupSettingDesc& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupSettingDesc)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupSettingDesc::IsInitialized() const {
  return true;
}

void GroupSettingDesc::InternalSwap(GroupSettingDesc* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.desc_, lhs_arena,
      &other->_impl_.desc_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupSettingDesc, _impl_.remindall_)
      + sizeof(GroupSettingDesc::_impl_.remindall_)
      - PROTOBUF_FIELD_OFFSET(GroupSettingDesc, _impl_.needsenddescmsg_)>(
          reinterpret_cast<char*>(&_impl_.needsenddescmsg_),
          reinterpret_cast<char*>(&other->_impl_.needsenddescmsg_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupSettingDesc::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupSettingDesc_2eproto_getter, &descriptor_table_GroupSettingDesc_2eproto_once,
      file_level_metadata_GroupSettingDesc_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupSettingDesc*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupSettingDesc >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupSettingDesc >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
