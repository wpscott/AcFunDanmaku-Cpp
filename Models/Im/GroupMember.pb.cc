// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupMember.proto

#include "GroupMember.pb.h"

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
PROTOBUF_CONSTEXPR GroupMember::GroupMember(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.nickname_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.user_)*/nullptr
  , /*decltype(_impl_.antidisturbing_)*/false
  , /*decltype(_impl_.status_)*/0
  , /*decltype(_impl_.inviterid_)*/int64_t{0}
  , /*decltype(_impl_.jointime_)*/int64_t{0}
  , /*decltype(_impl_.createtime_)*/int64_t{0}
  , /*decltype(_impl_.updatetime_)*/int64_t{0}
  , /*decltype(_impl_.role_)*/0
  , /*decltype(_impl_.findtype_)*/0
  , /*decltype(_impl_.keepsilencedeadline_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupMemberDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupMemberDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupMemberDefaultTypeInternal() {}
  union {
    GroupMember _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupMemberDefaultTypeInternal _GroupMember_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupMember_2eproto[1];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_GroupMember_2eproto[2];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupMember_2eproto = nullptr;

const uint32_t TableStruct_GroupMember_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.user_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.nickname_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.antidisturbing_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.status_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.inviterid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.jointime_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.createtime_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.updatetime_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.role_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.findtype_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupMember, _impl_.keepsilencedeadline_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupMember)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupMember_default_instance_._instance,
};

const char descriptor_table_protodef_GroupMember_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\021GroupMember.proto\022\033AcFunDanmu.Im.Cloud"
  ".Message\032\nUser.proto\"\250\004\n\013GroupMember\022\'\n\004"
  "user\030\001 \001(\0132\031.AcFunDanmu.Im.Basic.User\022\020\n"
  "\010nickname\030\002 \001(\t\022\026\n\016antiDisturbing\030\003 \001(\010\022"
  "J\n\006status\030\004 \001(\0162:.AcFunDanmu.Im.Cloud.Me"
  "ssage.GroupMember.GroupMemberStatus\022\021\n\ti"
  "nviterId\030\005 \001(\003\022\020\n\010joinTime\030\006 \001(\003\022\022\n\ncrea"
  "teTime\030\007 \001(\003\022\022\n\nupdateTime\030\010 \001(\003\022F\n\004role"
  "\030\t \001(\01628.AcFunDanmu.Im.Cloud.Message.Gro"
  "upMember.GroupMemberRole\022\020\n\010findType\030\n \001"
  "(\005\022\033\n\023keepSilenceDeadline\030\013 \001(\003\"b\n\021Group"
  "MemberStatus\022\031\n\025UNKNOWN_MEMBER_STATUS\020\000\022"
  "\n\n\006NORMAL\020\001\022\013\n\007QUITTED\020\002\022\n\n\006KICKED\020\003\022\r\n\t"
  "DISMISSED\020\004\"R\n\017GroupMemberRole\022\020\n\014UNKNOW"
  "N_ROLE\020\000\022\n\n\006COMMON\020\001\022\t\n\005ADMIN\020\002\022\013\n\007MANAG"
  "ER\020\003\022\t\n\005ROBOT\020\004b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupMember_2eproto_deps[1] = {
  &::descriptor_table_User_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupMember_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupMember_2eproto = {
    false, false, 623, descriptor_table_protodef_GroupMember_2eproto,
    "GroupMember.proto",
    &descriptor_table_GroupMember_2eproto_once, descriptor_table_GroupMember_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_GroupMember_2eproto::offsets,
    file_level_metadata_GroupMember_2eproto, file_level_enum_descriptors_GroupMember_2eproto,
    file_level_service_descriptors_GroupMember_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupMember_2eproto_getter() {
  return &descriptor_table_GroupMember_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupMember_2eproto(&descriptor_table_GroupMember_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GroupMember_GroupMemberStatus_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_GroupMember_2eproto);
  return file_level_enum_descriptors_GroupMember_2eproto[0];
}
bool GroupMember_GroupMemberStatus_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr GroupMember_GroupMemberStatus GroupMember::UNKNOWN_MEMBER_STATUS;
constexpr GroupMember_GroupMemberStatus GroupMember::NORMAL;
constexpr GroupMember_GroupMemberStatus GroupMember::QUITTED;
constexpr GroupMember_GroupMemberStatus GroupMember::KICKED;
constexpr GroupMember_GroupMemberStatus GroupMember::DISMISSED;
constexpr GroupMember_GroupMemberStatus GroupMember::GroupMemberStatus_MIN;
constexpr GroupMember_GroupMemberStatus GroupMember::GroupMemberStatus_MAX;
constexpr int GroupMember::GroupMemberStatus_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* GroupMember_GroupMemberRole_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_GroupMember_2eproto);
  return file_level_enum_descriptors_GroupMember_2eproto[1];
}
bool GroupMember_GroupMemberRole_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr GroupMember_GroupMemberRole GroupMember::UNKNOWN_ROLE;
constexpr GroupMember_GroupMemberRole GroupMember::COMMON;
constexpr GroupMember_GroupMemberRole GroupMember::ADMIN;
constexpr GroupMember_GroupMemberRole GroupMember::MANAGER;
constexpr GroupMember_GroupMemberRole GroupMember::ROBOT;
constexpr GroupMember_GroupMemberRole GroupMember::GroupMemberRole_MIN;
constexpr GroupMember_GroupMemberRole GroupMember::GroupMemberRole_MAX;
constexpr int GroupMember::GroupMemberRole_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class GroupMember::_Internal {
 public:
  static const ::AcFunDanmu::Im::Basic::User& user(const GroupMember* msg);
};

const ::AcFunDanmu::Im::Basic::User&
GroupMember::_Internal::user(const GroupMember* msg) {
  return *msg->_impl_.user_;
}
void GroupMember::clear_user() {
  if (GetArenaForAllocation() == nullptr && _impl_.user_ != nullptr) {
    delete _impl_.user_;
  }
  _impl_.user_ = nullptr;
}
GroupMember::GroupMember(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupMember)
}
GroupMember::GroupMember(const GroupMember& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupMember* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.nickname_){}
    , decltype(_impl_.user_){nullptr}
    , decltype(_impl_.antidisturbing_){}
    , decltype(_impl_.status_){}
    , decltype(_impl_.inviterid_){}
    , decltype(_impl_.jointime_){}
    , decltype(_impl_.createtime_){}
    , decltype(_impl_.updatetime_){}
    , decltype(_impl_.role_){}
    , decltype(_impl_.findtype_){}
    , decltype(_impl_.keepsilencedeadline_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.nickname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.nickname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_nickname().empty()) {
    _this->_impl_.nickname_.Set(from._internal_nickname(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_user()) {
    _this->_impl_.user_ = new ::AcFunDanmu::Im::Basic::User(*from._impl_.user_);
  }
  ::memcpy(&_impl_.antidisturbing_, &from._impl_.antidisturbing_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.keepsilencedeadline_) -
    reinterpret_cast<char*>(&_impl_.antidisturbing_)) + sizeof(_impl_.keepsilencedeadline_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupMember)
}

inline void GroupMember::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.nickname_){}
    , decltype(_impl_.user_){nullptr}
    , decltype(_impl_.antidisturbing_){false}
    , decltype(_impl_.status_){0}
    , decltype(_impl_.inviterid_){int64_t{0}}
    , decltype(_impl_.jointime_){int64_t{0}}
    , decltype(_impl_.createtime_){int64_t{0}}
    , decltype(_impl_.updatetime_){int64_t{0}}
    , decltype(_impl_.role_){0}
    , decltype(_impl_.findtype_){0}
    , decltype(_impl_.keepsilencedeadline_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.nickname_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.nickname_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GroupMember::~GroupMember() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupMember)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupMember::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.nickname_.Destroy();
  if (this != internal_default_instance()) delete _impl_.user_;
}

void GroupMember::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupMember::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupMember)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.nickname_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.user_ != nullptr) {
    delete _impl_.user_;
  }
  _impl_.user_ = nullptr;
  ::memset(&_impl_.antidisturbing_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.keepsilencedeadline_) -
      reinterpret_cast<char*>(&_impl_.antidisturbing_)) + sizeof(_impl_.keepsilencedeadline_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupMember::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Basic.User user = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_user(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string nickname = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_nickname();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.GroupMember.nickname"));
        } else
          goto handle_unusual;
        continue;
      // bool antiDisturbing = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.antidisturbing_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.GroupMember.GroupMemberStatus status = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_status(static_cast<::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberStatus>(val));
        } else
          goto handle_unusual;
        continue;
      // int64 inviterId = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.inviterid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 joinTime = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.jointime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 createTime = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.createtime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 updateTime = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 64)) {
          _impl_.updatetime_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.GroupMember.GroupMemberRole role = 9;
      case 9:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 72)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_role(static_cast<::AcFunDanmu::Im::Cloud::Message::GroupMember_GroupMemberRole>(val));
        } else
          goto handle_unusual;
        continue;
      // int32 findType = 10;
      case 10:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 80)) {
          _impl_.findtype_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 keepSilenceDeadline = 11;
      case 11:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 88)) {
          _impl_.keepsilencedeadline_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* GroupMember::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupMember)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Basic.User user = 1;
  if (this->_internal_has_user()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::user(this),
        _Internal::user(this).GetCachedSize(), target, stream);
  }

  // string nickname = 2;
  if (!this->_internal_nickname().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_nickname().data(), static_cast<int>(this->_internal_nickname().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.GroupMember.nickname");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_nickname(), target);
  }

  // bool antiDisturbing = 3;
  if (this->_internal_antidisturbing() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_antidisturbing(), target);
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupMember.GroupMemberStatus status = 4;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_status(), target);
  }

  // int64 inviterId = 5;
  if (this->_internal_inviterid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(5, this->_internal_inviterid(), target);
  }

  // int64 joinTime = 6;
  if (this->_internal_jointime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(6, this->_internal_jointime(), target);
  }

  // int64 createTime = 7;
  if (this->_internal_createtime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(7, this->_internal_createtime(), target);
  }

  // int64 updateTime = 8;
  if (this->_internal_updatetime() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(8, this->_internal_updatetime(), target);
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupMember.GroupMemberRole role = 9;
  if (this->_internal_role() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      9, this->_internal_role(), target);
  }

  // int32 findType = 10;
  if (this->_internal_findtype() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(10, this->_internal_findtype(), target);
  }

  // int64 keepSilenceDeadline = 11;
  if (this->_internal_keepsilencedeadline() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(11, this->_internal_keepsilencedeadline(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupMember)
  return target;
}

size_t GroupMember::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupMember)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string nickname = 2;
  if (!this->_internal_nickname().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_nickname());
  }

  // .AcFunDanmu.Im.Basic.User user = 1;
  if (this->_internal_has_user()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.user_);
  }

  // bool antiDisturbing = 3;
  if (this->_internal_antidisturbing() != 0) {
    total_size += 1 + 1;
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupMember.GroupMemberStatus status = 4;
  if (this->_internal_status() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_status());
  }

  // int64 inviterId = 5;
  if (this->_internal_inviterid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_inviterid());
  }

  // int64 joinTime = 6;
  if (this->_internal_jointime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_jointime());
  }

  // int64 createTime = 7;
  if (this->_internal_createtime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_createtime());
  }

  // int64 updateTime = 8;
  if (this->_internal_updatetime() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_updatetime());
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupMember.GroupMemberRole role = 9;
  if (this->_internal_role() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_role());
  }

  // int32 findType = 10;
  if (this->_internal_findtype() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_findtype());
  }

  // int64 keepSilenceDeadline = 11;
  if (this->_internal_keepsilencedeadline() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_keepsilencedeadline());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupMember::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupMember::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupMember::GetClassData() const { return &_class_data_; }


void GroupMember::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupMember*>(&to_msg);
  auto& from = static_cast<const GroupMember&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupMember)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_nickname().empty()) {
    _this->_internal_set_nickname(from._internal_nickname());
  }
  if (from._internal_has_user()) {
    _this->_internal_mutable_user()->::AcFunDanmu::Im::Basic::User::MergeFrom(
        from._internal_user());
  }
  if (from._internal_antidisturbing() != 0) {
    _this->_internal_set_antidisturbing(from._internal_antidisturbing());
  }
  if (from._internal_status() != 0) {
    _this->_internal_set_status(from._internal_status());
  }
  if (from._internal_inviterid() != 0) {
    _this->_internal_set_inviterid(from._internal_inviterid());
  }
  if (from._internal_jointime() != 0) {
    _this->_internal_set_jointime(from._internal_jointime());
  }
  if (from._internal_createtime() != 0) {
    _this->_internal_set_createtime(from._internal_createtime());
  }
  if (from._internal_updatetime() != 0) {
    _this->_internal_set_updatetime(from._internal_updatetime());
  }
  if (from._internal_role() != 0) {
    _this->_internal_set_role(from._internal_role());
  }
  if (from._internal_findtype() != 0) {
    _this->_internal_set_findtype(from._internal_findtype());
  }
  if (from._internal_keepsilencedeadline() != 0) {
    _this->_internal_set_keepsilencedeadline(from._internal_keepsilencedeadline());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupMember::CopyFrom(const GroupMember& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupMember)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupMember::IsInitialized() const {
  return true;
}

void GroupMember::InternalSwap(GroupMember* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.nickname_, lhs_arena,
      &other->_impl_.nickname_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.keepsilencedeadline_)
      + sizeof(GroupMember::_impl_.keepsilencedeadline_)
      - PROTOBUF_FIELD_OFFSET(GroupMember, _impl_.user_)>(
          reinterpret_cast<char*>(&_impl_.user_),
          reinterpret_cast<char*>(&other->_impl_.user_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupMember::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupMember_2eproto_getter, &descriptor_table_GroupMember_2eproto_once,
      file_level_metadata_GroupMember_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupMember*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupMember >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupMember >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
