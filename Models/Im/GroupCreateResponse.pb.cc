// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupCreateResponse.proto

#include "GroupCreateResponse.pb.h"

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
PROTOBUF_CONSTEXPR GroupCreateResponse::GroupCreateResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.members_)*/{}
  , /*decltype(_impl_.groupid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.groupinfo_)*/nullptr
  , /*decltype(_impl_.synccookie_)*/nullptr
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupCreateResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupCreateResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupCreateResponseDefaultTypeInternal() {}
  union {
    GroupCreateResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupCreateResponseDefaultTypeInternal _GroupCreateResponse_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupCreateResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupCreateResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupCreateResponse_2eproto = nullptr;

const uint32_t TableStruct_GroupCreateResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse, _impl_.groupid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse, _impl_.groupinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse, _impl_.members_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse, _impl_.synccookie_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupCreateResponse_default_instance_._instance,
};

const char descriptor_table_protodef_GroupCreateResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\031GroupCreateResponse.proto\022\033AcFunDanmu."
  "Im.Cloud.Message\032\017GroupInfo.proto\032\021Group"
  "Member.proto\032\020SyncCookie.proto\"\321\001\n\023Group"
  "CreateResponse\022\017\n\007groupId\030\001 \001(\t\0229\n\tgroup"
  "Info\030\002 \001(\0132&.AcFunDanmu.Im.Cloud.Message"
  ".GroupInfo\0229\n\007members\030\003 \003(\0132(.AcFunDanmu"
  ".Im.Cloud.Message.GroupMember\0223\n\nsyncCoo"
  "kie\030\004 \001(\0132\037.AcFunDanmu.Im.Basic.SyncCook"
  "ieb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupCreateResponse_2eproto_deps[3] = {
  &::descriptor_table_GroupInfo_2eproto,
  &::descriptor_table_GroupMember_2eproto,
  &::descriptor_table_SyncCookie_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupCreateResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupCreateResponse_2eproto = {
    false, false, 330, descriptor_table_protodef_GroupCreateResponse_2eproto,
    "GroupCreateResponse.proto",
    &descriptor_table_GroupCreateResponse_2eproto_once, descriptor_table_GroupCreateResponse_2eproto_deps, 3, 1,
    schemas, file_default_instances, TableStruct_GroupCreateResponse_2eproto::offsets,
    file_level_metadata_GroupCreateResponse_2eproto, file_level_enum_descriptors_GroupCreateResponse_2eproto,
    file_level_service_descriptors_GroupCreateResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupCreateResponse_2eproto_getter() {
  return &descriptor_table_GroupCreateResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupCreateResponse_2eproto(&descriptor_table_GroupCreateResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupCreateResponse::_Internal {
 public:
  static const ::AcFunDanmu::Im::Cloud::Message::GroupInfo& groupinfo(const GroupCreateResponse* msg);
  static const ::AcFunDanmu::Im::Basic::SyncCookie& synccookie(const GroupCreateResponse* msg);
};

const ::AcFunDanmu::Im::Cloud::Message::GroupInfo&
GroupCreateResponse::_Internal::groupinfo(const GroupCreateResponse* msg) {
  return *msg->_impl_.groupinfo_;
}
const ::AcFunDanmu::Im::Basic::SyncCookie&
GroupCreateResponse::_Internal::synccookie(const GroupCreateResponse* msg) {
  return *msg->_impl_.synccookie_;
}
void GroupCreateResponse::clear_groupinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.groupinfo_ != nullptr) {
    delete _impl_.groupinfo_;
  }
  _impl_.groupinfo_ = nullptr;
}
void GroupCreateResponse::clear_members() {
  _impl_.members_.Clear();
}
void GroupCreateResponse::clear_synccookie() {
  if (GetArenaForAllocation() == nullptr && _impl_.synccookie_ != nullptr) {
    delete _impl_.synccookie_;
  }
  _impl_.synccookie_ = nullptr;
}
GroupCreateResponse::GroupCreateResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
}
GroupCreateResponse::GroupCreateResponse(const GroupCreateResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupCreateResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.members_){from._impl_.members_}
    , decltype(_impl_.groupid_){}
    , decltype(_impl_.groupinfo_){nullptr}
    , decltype(_impl_.synccookie_){nullptr}
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
  if (from._internal_has_groupinfo()) {
    _this->_impl_.groupinfo_ = new ::AcFunDanmu::Im::Cloud::Message::GroupInfo(*from._impl_.groupinfo_);
  }
  if (from._internal_has_synccookie()) {
    _this->_impl_.synccookie_ = new ::AcFunDanmu::Im::Basic::SyncCookie(*from._impl_.synccookie_);
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
}

inline void GroupCreateResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.members_){arena}
    , decltype(_impl_.groupid_){}
    , decltype(_impl_.groupinfo_){nullptr}
    , decltype(_impl_.synccookie_){nullptr}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.groupid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.groupid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GroupCreateResponse::~GroupCreateResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupCreateResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.members_.~RepeatedPtrField();
  _impl_.groupid_.Destroy();
  if (this != internal_default_instance()) delete _impl_.groupinfo_;
  if (this != internal_default_instance()) delete _impl_.synccookie_;
}

void GroupCreateResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupCreateResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.members_.Clear();
  _impl_.groupid_.ClearToEmpty();
  if (GetArenaForAllocation() == nullptr && _impl_.groupinfo_ != nullptr) {
    delete _impl_.groupinfo_;
  }
  _impl_.groupinfo_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.synccookie_ != nullptr) {
    delete _impl_.synccookie_;
  }
  _impl_.synccookie_ = nullptr;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupCreateResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupId"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.GroupInfo groupInfo = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_groupinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.Message.GroupMember members = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_members(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          ptr = ctx->ParseMessage(_internal_mutable_synccookie(), ptr);
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

uint8_t* GroupCreateResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string groupId = 1;
  if (!this->_internal_groupid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_groupid().data(), static_cast<int>(this->_internal_groupid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.GroupCreateResponse.groupId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_groupid(), target);
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupInfo groupInfo = 2;
  if (this->_internal_has_groupinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::groupinfo(this),
        _Internal::groupinfo(this).GetCachedSize(), target, stream);
  }

  // repeated .AcFunDanmu.Im.Cloud.Message.GroupMember members = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_members_size()); i < n; i++) {
    const auto& repfield = this->_internal_members(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 4;
  if (this->_internal_has_synccookie()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(4, _Internal::synccookie(this),
        _Internal::synccookie(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
  return target;
}

size_t GroupCreateResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Message.GroupMember members = 3;
  total_size += 1UL * this->_internal_members_size();
  for (const auto& msg : this->_impl_.members_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string groupId = 1;
  if (!this->_internal_groupid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_groupid());
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupInfo groupInfo = 2;
  if (this->_internal_has_groupinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.groupinfo_);
  }

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 4;
  if (this->_internal_has_synccookie()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.synccookie_);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupCreateResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupCreateResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupCreateResponse::GetClassData() const { return &_class_data_; }


void GroupCreateResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupCreateResponse*>(&to_msg);
  auto& from = static_cast<const GroupCreateResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.members_.MergeFrom(from._impl_.members_);
  if (!from._internal_groupid().empty()) {
    _this->_internal_set_groupid(from._internal_groupid());
  }
  if (from._internal_has_groupinfo()) {
    _this->_internal_mutable_groupinfo()->::AcFunDanmu::Im::Cloud::Message::GroupInfo::MergeFrom(
        from._internal_groupinfo());
  }
  if (from._internal_has_synccookie()) {
    _this->_internal_mutable_synccookie()->::AcFunDanmu::Im::Basic::SyncCookie::MergeFrom(
        from._internal_synccookie());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupCreateResponse::CopyFrom(const GroupCreateResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupCreateResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupCreateResponse::IsInitialized() const {
  return true;
}

void GroupCreateResponse::InternalSwap(GroupCreateResponse* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.members_.InternalSwap(&other->_impl_.members_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.groupid_, lhs_arena,
      &other->_impl_.groupid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupCreateResponse, _impl_.synccookie_)
      + sizeof(GroupCreateResponse::_impl_.synccookie_)
      - PROTOBUF_FIELD_OFFSET(GroupCreateResponse, _impl_.groupinfo_)>(
          reinterpret_cast<char*>(&_impl_.groupinfo_),
          reinterpret_cast<char*>(&other->_impl_.groupinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupCreateResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupCreateResponse_2eproto_getter, &descriptor_table_GroupCreateResponse_2eproto_once,
      file_level_metadata_GroupCreateResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupCreateResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>