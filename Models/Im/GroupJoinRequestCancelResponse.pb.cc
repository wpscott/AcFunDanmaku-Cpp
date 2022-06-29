// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupJoinRequestCancelResponse.proto

#include "GroupJoinRequestCancelResponse.pb.h"

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
PROTOBUF_CONSTEXPR GroupJoinRequestCancelResponse::GroupJoinRequestCancelResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.invitees_)*/{}
  , /*decltype(_impl_.groupid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.desccontent_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.inviter_)*/nullptr
  , /*decltype(_impl_.findway_)*/0
  , /*decltype(_impl_.status_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupJoinRequestCancelResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupJoinRequestCancelResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupJoinRequestCancelResponseDefaultTypeInternal() {}
  union {
    GroupJoinRequestCancelResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupJoinRequestCancelResponseDefaultTypeInternal _GroupJoinRequestCancelResponse_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupJoinRequestCancelResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupJoinRequestCancelResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupJoinRequestCancelResponse_2eproto = nullptr;

const uint32_t TableStruct_GroupJoinRequestCancelResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse, _impl_.groupid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse, _impl_.inviter_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse, _impl_.invitees_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse, _impl_.findway_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse, _impl_.desccontent_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse, _impl_.status_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupJoinRequestCancelResponse_default_instance_._instance,
};

const char descriptor_table_protodef_GroupJoinRequestCancelResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$GroupJoinRequestCancelResponse.proto\022\033"
  "AcFunDanmu.Im.Cloud.Message\032\027JoinRequest"
  "Status.proto\032\nUser.proto\"\360\001\n\036GroupJoinRe"
  "questCancelResponse\022\017\n\007groupId\030\001 \001(\t\022*\n\007"
  "inviter\030\002 \001(\0132\031.AcFunDanmu.Im.Basic.User"
  "\022+\n\010invitees\030\003 \003(\0132\031.AcFunDanmu.Im.Basic"
  ".User\022\017\n\007findWay\030\004 \001(\005\022\023\n\013descContent\030\005 "
  "\001(\t\022>\n\006status\030\006 \001(\0162..AcFunDanmu.Im.Clou"
  "d.Message.JoinRequestStatusb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupJoinRequestCancelResponse_2eproto_deps[2] = {
  &::descriptor_table_JoinRequestStatus_2eproto,
  &::descriptor_table_User_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupJoinRequestCancelResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupJoinRequestCancelResponse_2eproto = {
    false, false, 355, descriptor_table_protodef_GroupJoinRequestCancelResponse_2eproto,
    "GroupJoinRequestCancelResponse.proto",
    &descriptor_table_GroupJoinRequestCancelResponse_2eproto_once, descriptor_table_GroupJoinRequestCancelResponse_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_GroupJoinRequestCancelResponse_2eproto::offsets,
    file_level_metadata_GroupJoinRequestCancelResponse_2eproto, file_level_enum_descriptors_GroupJoinRequestCancelResponse_2eproto,
    file_level_service_descriptors_GroupJoinRequestCancelResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupJoinRequestCancelResponse_2eproto_getter() {
  return &descriptor_table_GroupJoinRequestCancelResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupJoinRequestCancelResponse_2eproto(&descriptor_table_GroupJoinRequestCancelResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupJoinRequestCancelResponse::_Internal {
 public:
  static const ::AcFunDanmu::Im::Basic::User& inviter(const GroupJoinRequestCancelResponse* msg);
};

const ::AcFunDanmu::Im::Basic::User&
GroupJoinRequestCancelResponse::_Internal::inviter(const GroupJoinRequestCancelResponse* msg) {
  return *msg->_impl_.inviter_;
}
void GroupJoinRequestCancelResponse::clear_inviter() {
  if (GetArenaForAllocation() == nullptr && _impl_.inviter_ != nullptr) {
    delete _impl_.inviter_;
  }
  _impl_.inviter_ = nullptr;
}
void GroupJoinRequestCancelResponse::clear_invitees() {
  _impl_.invitees_.Clear();
}
GroupJoinRequestCancelResponse::GroupJoinRequestCancelResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
}
GroupJoinRequestCancelResponse::GroupJoinRequestCancelResponse(const GroupJoinRequestCancelResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupJoinRequestCancelResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.invitees_){from._impl_.invitees_}
    , decltype(_impl_.groupid_){}
    , decltype(_impl_.desccontent_){}
    , decltype(_impl_.inviter_){nullptr}
    , decltype(_impl_.findway_){}
    , decltype(_impl_.status_){}
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
  _impl_.desccontent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.desccontent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_desccontent().empty()) {
    _this->_impl_.desccontent_.Set(from._internal_desccontent(), 
      _this->GetArenaForAllocation());
  }
  if (from._internal_has_inviter()) {
    _this->_impl_.inviter_ = new ::AcFunDanmu::Im::Basic::User(*from._impl_.inviter_);
  }
  ::memcpy(&_impl_.findway_, &from._impl_.findway_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.status_) -
    reinterpret_cast<char*>(&_impl_.findway_)) + sizeof(_impl_.status_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
}

inline void GroupJoinRequestCancelResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.invitees_){arena}
    , decltype(_impl_.groupid_){}
    , decltype(_impl_.desccontent_){}
    , decltype(_impl_.inviter_){nullptr}
    , decltype(_impl_.findway_){0}
    , decltype(_impl_.status_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.groupid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.groupid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.desccontent_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.desccontent_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GroupJoinRequestCancelResponse::~GroupJoinRequestCancelResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupJoinRequestCancelResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.invitees_.~RepeatedPtrField();
  _impl_.groupid_.Destroy();
  _impl_.desccontent_.Destroy();
  if (this != internal_default_instance()) delete _impl_.inviter_;
}

void GroupJoinRequestCancelResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupJoinRequestCancelResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.invitees_.Clear();
  _impl_.groupid_.ClearToEmpty();
  _impl_.desccontent_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.inviter_ != nullptr) {
    delete _impl_.inviter_;
  }
  _impl_.inviter_ = nullptr;
  ::memset(&_impl_.findway_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.status_) -
      reinterpret_cast<char*>(&_impl_.findway_)) + sizeof(_impl_.status_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupJoinRequestCancelResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse.groupId"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Basic.User inviter = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_inviter(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Basic.User invitees = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_invitees(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // int32 findWay = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          _impl_.findway_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string descContent = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          auto str = _internal_mutable_desccontent();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse.descContent"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.JoinRequestStatus status = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_status(static_cast<::AcFunDanmu::Im::Cloud::Message::JoinRequestStatus>(val));
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

uint8_t* GroupJoinRequestCancelResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string groupId = 1;
  if (!this->_internal_groupid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_groupid().data(), static_cast<int>(this->_internal_groupid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse.groupId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_groupid(), target);
  }

  // .AcFunDanmu.Im.Basic.User inviter = 2;
  if (this->_internal_has_inviter()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::inviter(this),
        _Internal::inviter(this).GetCachedSize(), target, stream);
  }

  // repeated .AcFunDanmu.Im.Basic.User invitees = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_invitees_size()); i < n; i++) {
    const auto& repfield = this->_internal_invitees(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // int32 findWay = 4;
  if (this->_internal_findway() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(4, this->_internal_findway(), target);
  }

  // string descContent = 5;
  if (!this->_internal_desccontent().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_desccontent().data(), static_cast<int>(this->_internal_desccontent().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse.descContent");
    target = stream->WriteStringMaybeAliased(
        5, this->_internal_desccontent(), target);
  }

  // .AcFunDanmu.Im.Cloud.Message.JoinRequestStatus status = 6;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      6, this->_internal_status(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
  return target;
}

size_t GroupJoinRequestCancelResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Basic.User invitees = 3;
  total_size += 1UL * this->_internal_invitees_size();
  for (const auto& msg : this->_impl_.invitees_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string groupId = 1;
  if (!this->_internal_groupid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_groupid());
  }

  // string descContent = 5;
  if (!this->_internal_desccontent().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_desccontent());
  }

  // .AcFunDanmu.Im.Basic.User inviter = 2;
  if (this->_internal_has_inviter()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.inviter_);
  }

  // int32 findWay = 4;
  if (this->_internal_findway() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_findway());
  }

  // .AcFunDanmu.Im.Cloud.Message.JoinRequestStatus status = 6;
  if (this->_internal_status() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_status());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupJoinRequestCancelResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupJoinRequestCancelResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupJoinRequestCancelResponse::GetClassData() const { return &_class_data_; }


void GroupJoinRequestCancelResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupJoinRequestCancelResponse*>(&to_msg);
  auto& from = static_cast<const GroupJoinRequestCancelResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.invitees_.MergeFrom(from._impl_.invitees_);
  if (!from._internal_groupid().empty()) {
    _this->_internal_set_groupid(from._internal_groupid());
  }
  if (!from._internal_desccontent().empty()) {
    _this->_internal_set_desccontent(from._internal_desccontent());
  }
  if (from._internal_has_inviter()) {
    _this->_internal_mutable_inviter()->::AcFunDanmu::Im::Basic::User::MergeFrom(
        from._internal_inviter());
  }
  if (from._internal_findway() != 0) {
    _this->_internal_set_findway(from._internal_findway());
  }
  if (from._internal_status() != 0) {
    _this->_internal_set_status(from._internal_status());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupJoinRequestCancelResponse::CopyFrom(const GroupJoinRequestCancelResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupJoinRequestCancelResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupJoinRequestCancelResponse::IsInitialized() const {
  return true;
}

void GroupJoinRequestCancelResponse::InternalSwap(GroupJoinRequestCancelResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.invitees_.InternalSwap(&other->_impl_.invitees_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.groupid_, lhs_arena,
      &other->_impl_.groupid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.desccontent_, lhs_arena,
      &other->_impl_.desccontent_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupJoinRequestCancelResponse, _impl_.status_)
      + sizeof(GroupJoinRequestCancelResponse::_impl_.status_)
      - PROTOBUF_FIELD_OFFSET(GroupJoinRequestCancelResponse, _impl_.inviter_)>(
          reinterpret_cast<char*>(&_impl_.inviter_),
          reinterpret_cast<char*>(&other->_impl_.inviter_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupJoinRequestCancelResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupJoinRequestCancelResponse_2eproto_getter, &descriptor_table_GroupJoinRequestCancelResponse_2eproto_once,
      file_level_metadata_GroupJoinRequestCancelResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupJoinRequestCancelResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
