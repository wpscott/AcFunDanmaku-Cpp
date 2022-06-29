// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupMemberSettingRequest.proto

#include "GroupMemberSettingRequest.pb.h"

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
PROTOBUF_CONSTEXPR GroupMemberSettingRequest::GroupMemberSettingRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.groupid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.UserSetting_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}
  , /*decltype(_impl_._oneof_case_)*/{}} {}
struct GroupMemberSettingRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupMemberSettingRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupMemberSettingRequestDefaultTypeInternal() {}
  union {
    GroupMemberSettingRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupMemberSettingRequestDefaultTypeInternal _GroupMemberSettingRequest_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupMemberSettingRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupMemberSettingRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupMemberSettingRequest_2eproto = nullptr;

const uint32_t TableStruct_GroupMemberSettingRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMemberSettingRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMemberSettingRequest, _impl_._oneof_case_[0]),
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  ::_pbi::kInvalidFieldOffsetTag,
  ::_pbi::kInvalidFieldOffsetTag,
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMemberSettingRequest, _impl_.groupid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMemberSettingRequest, _impl_.UserSetting_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupMemberSettingRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupMemberSettingRequest_default_instance_._instance,
};

const char descriptor_table_protodef_GroupMemberSettingRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\037GroupMemberSettingRequest.proto\022\033AcFun"
  "Danmu.Im.Cloud.Message\032\033SetUserAntiDistu"
  "rbing.proto\032\025SetUserNickname.proto\"\321\001\n\031G"
  "roupMemberSettingRequest\022C\n\013setNickname\030"
  "\002 \001(\0132,.AcFunDanmu.Im.Cloud.Message.SetU"
  "serNicknameH\000\022O\n\021setAntiDisturbing\030\003 \001(\013"
  "22.AcFunDanmu.Im.Cloud.Message.SetUserAn"
  "tiDisturbingH\000\022\017\n\007groupId\030\001 \001(\tB\r\n\013UserS"
  "ettingb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupMemberSettingRequest_2eproto_deps[2] = {
  &::descriptor_table_SetUserAntiDisturbing_2eproto,
  &::descriptor_table_SetUserNickname_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupMemberSettingRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupMemberSettingRequest_2eproto = {
    false, false, 334, descriptor_table_protodef_GroupMemberSettingRequest_2eproto,
    "GroupMemberSettingRequest.proto",
    &descriptor_table_GroupMemberSettingRequest_2eproto_once, descriptor_table_GroupMemberSettingRequest_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_GroupMemberSettingRequest_2eproto::offsets,
    file_level_metadata_GroupMemberSettingRequest_2eproto, file_level_enum_descriptors_GroupMemberSettingRequest_2eproto,
    file_level_service_descriptors_GroupMemberSettingRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupMemberSettingRequest_2eproto_getter() {
  return &descriptor_table_GroupMemberSettingRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupMemberSettingRequest_2eproto(&descriptor_table_GroupMemberSettingRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupMemberSettingRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Cloud::Message::SetUserNickname& setnickname(const GroupMemberSettingRequest* msg);
  static const ::AcFunDanmu::Im::Cloud::Message::SetUserAntiDisturbing& setantidisturbing(const GroupMemberSettingRequest* msg);
};

const ::AcFunDanmu::Im::Cloud::Message::SetUserNickname&
GroupMemberSettingRequest::_Internal::setnickname(const GroupMemberSettingRequest* msg) {
  return *msg->_impl_.UserSetting_.setnickname_;
}
const ::AcFunDanmu::Im::Cloud::Message::SetUserAntiDisturbing&
GroupMemberSettingRequest::_Internal::setantidisturbing(const GroupMemberSettingRequest* msg) {
  return *msg->_impl_.UserSetting_.setantidisturbing_;
}
void GroupMemberSettingRequest::set_allocated_setnickname(::AcFunDanmu::Im::Cloud::Message::SetUserNickname* setnickname) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_UserSetting();
  if (setnickname) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(setnickname));
    if (message_arena != submessage_arena) {
      setnickname = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, setnickname, submessage_arena);
    }
    set_has_setnickname();
    _impl_.UserSetting_.setnickname_ = setnickname;
  }
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest.setNickname)
}
void GroupMemberSettingRequest::clear_setnickname() {
  if (_internal_has_setnickname()) {
    if (GetArenaForAllocation() == nullptr) {
      delete _impl_.UserSetting_.setnickname_;
    }
    clear_has_UserSetting();
  }
}
void GroupMemberSettingRequest::set_allocated_setantidisturbing(::AcFunDanmu::Im::Cloud::Message::SetUserAntiDisturbing* setantidisturbing) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaForAllocation();
  clear_UserSetting();
  if (setantidisturbing) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena =
        ::PROTOBUF_NAMESPACE_ID::Arena::InternalGetOwningArena(
                reinterpret_cast<::PROTOBUF_NAMESPACE_ID::MessageLite*>(setantidisturbing));
    if (message_arena != submessage_arena) {
      setantidisturbing = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, setantidisturbing, submessage_arena);
    }
    set_has_setantidisturbing();
    _impl_.UserSetting_.setantidisturbing_ = setantidisturbing;
  }
  // @@protoc_insertion_point(field_set_allocated:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest.setAntiDisturbing)
}
void GroupMemberSettingRequest::clear_setantidisturbing() {
  if (_internal_has_setantidisturbing()) {
    if (GetArenaForAllocation() == nullptr) {
      delete _impl_.UserSetting_.setantidisturbing_;
    }
    clear_has_UserSetting();
  }
}
GroupMemberSettingRequest::GroupMemberSettingRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
}
GroupMemberSettingRequest::GroupMemberSettingRequest(const GroupMemberSettingRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupMemberSettingRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.groupid_){}
    , decltype(_impl_.UserSetting_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.groupid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.groupid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_groupid().empty()) {
    _this->_impl_.groupid_.Set(from._internal_groupid(), 
      _this->GetArenaForAllocation());
  }
  clear_has_UserSetting();
  switch (from.UserSetting_case()) {
    case kSetNickname: {
      _this->_internal_mutable_setnickname()->::AcFunDanmu::Im::Cloud::Message::SetUserNickname::MergeFrom(
          from._internal_setnickname());
      break;
    }
    case kSetAntiDisturbing: {
      _this->_internal_mutable_setantidisturbing()->::AcFunDanmu::Im::Cloud::Message::SetUserAntiDisturbing::MergeFrom(
          from._internal_setantidisturbing());
      break;
    }
    case USERSETTING_NOT_SET: {
      break;
    }
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
}

inline void GroupMemberSettingRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.groupid_){}
    , decltype(_impl_.UserSetting_){}
    , /*decltype(_impl_._cached_size_)*/{}
    , /*decltype(_impl_._oneof_case_)*/{}
  };
  _impl_.groupid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.groupid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  clear_has_UserSetting();
}

GroupMemberSettingRequest::~GroupMemberSettingRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupMemberSettingRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.groupid_.Destroy();
  if (has_UserSetting()) {
    clear_UserSetting();
  }
}

void GroupMemberSettingRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupMemberSettingRequest::clear_UserSetting() {
// @@protoc_insertion_point(one_of_clear_start:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
  switch (UserSetting_case()) {
    case kSetNickname: {
      if (GetArenaForAllocation() == nullptr) {
        delete _impl_.UserSetting_.setnickname_;
      }
      break;
    }
    case kSetAntiDisturbing: {
      if (GetArenaForAllocation() == nullptr) {
        delete _impl_.UserSetting_.setantidisturbing_;
      }
      break;
    }
    case USERSETTING_NOT_SET: {
      break;
    }
  }
  _impl_._oneof_case_[0] = USERSETTING_NOT_SET;
}


void GroupMemberSettingRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.groupid_.ClearToEmpty();
  clear_UserSetting();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupMemberSettingRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string groupId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_groupid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest.groupId"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.SetUserNickname setNickname = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_setnickname(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.SetUserAntiDisturbing setAntiDisturbing = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_setantidisturbing(), ptr);
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

uint8_t* GroupMemberSettingRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string groupId = 1;
  if (!this->_internal_groupid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_groupid().data(), static_cast<int>(this->_internal_groupid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest.groupId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_groupid(), target);
  }

  // .AcFunDanmu.Im.Cloud.Message.SetUserNickname setNickname = 2;
  if (_internal_has_setnickname()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::setnickname(this),
        _Internal::setnickname(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Cloud.Message.SetUserAntiDisturbing setAntiDisturbing = 3;
  if (_internal_has_setantidisturbing()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::setantidisturbing(this),
        _Internal::setantidisturbing(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
  return target;
}

size_t GroupMemberSettingRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string groupId = 1;
  if (!this->_internal_groupid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_groupid());
  }

  switch (UserSetting_case()) {
    // .AcFunDanmu.Im.Cloud.Message.SetUserNickname setNickname = 2;
    case kSetNickname: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.UserSetting_.setnickname_);
      break;
    }
    // .AcFunDanmu.Im.Cloud.Message.SetUserAntiDisturbing setAntiDisturbing = 3;
    case kSetAntiDisturbing: {
      total_size += 1 +
        ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
          *_impl_.UserSetting_.setantidisturbing_);
      break;
    }
    case USERSETTING_NOT_SET: {
      break;
    }
  }
  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupMemberSettingRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupMemberSettingRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupMemberSettingRequest::GetClassData() const { return &_class_data_; }


void GroupMemberSettingRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupMemberSettingRequest*>(&to_msg);
  auto& from = static_cast<const GroupMemberSettingRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_groupid().empty()) {
    _this->_internal_set_groupid(from._internal_groupid());
  }
  switch (from.UserSetting_case()) {
    case kSetNickname: {
      _this->_internal_mutable_setnickname()->::AcFunDanmu::Im::Cloud::Message::SetUserNickname::MergeFrom(
          from._internal_setnickname());
      break;
    }
    case kSetAntiDisturbing: {
      _this->_internal_mutable_setantidisturbing()->::AcFunDanmu::Im::Cloud::Message::SetUserAntiDisturbing::MergeFrom(
          from._internal_setantidisturbing());
      break;
    }
    case USERSETTING_NOT_SET: {
      break;
    }
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupMemberSettingRequest::CopyFrom(const GroupMemberSettingRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupMemberSettingRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupMemberSettingRequest::IsInitialized() const {
  return true;
}

void GroupMemberSettingRequest::InternalSwap(GroupMemberSettingRequest* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.groupid_, lhs_arena,
      &other->_impl_.groupid_, rhs_arena
  );
  swap(_impl_.UserSetting_, other->_impl_.UserSetting_);
  swap(_impl_._oneof_case_[0], other->_impl_._oneof_case_[0]);
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupMemberSettingRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupMemberSettingRequest_2eproto_getter, &descriptor_table_GroupMemberSettingRequest_2eproto_once,
      file_level_metadata_GroupMemberSettingRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupMemberSettingRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupMemberSettingRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupMemberSettingRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
