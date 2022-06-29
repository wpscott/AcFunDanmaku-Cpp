// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: UserGroupListResponse.proto

#include "UserGroupListResponse.pb.h"

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
PROTOBUF_CONSTEXPR UserGroupListResponse::UserGroupListResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.usergroupinfo_)*/{}
  , /*decltype(_impl_.synccookie_)*/nullptr
  , /*decltype(_impl_.notfullfetch_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct UserGroupListResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR UserGroupListResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~UserGroupListResponseDefaultTypeInternal() {}
  union {
    UserGroupListResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 UserGroupListResponseDefaultTypeInternal _UserGroupListResponse_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_UserGroupListResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_UserGroupListResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_UserGroupListResponse_2eproto = nullptr;

const uint32_t TableStruct_UserGroupListResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::UserGroupListResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::UserGroupListResponse, _impl_.usergroupinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::UserGroupListResponse, _impl_.synccookie_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::UserGroupListResponse, _impl_.notfullfetch_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::UserGroupListResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_UserGroupListResponse_default_instance_._instance,
};

const char descriptor_table_protodef_UserGroupListResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033UserGroupListResponse.proto\022\033AcFunDanm"
  "u.Im.Cloud.Message\032\020SyncCookie.proto\032\023Us"
  "erGroupInfo.proto\"\245\001\n\025UserGroupListRespo"
  "nse\022A\n\ruserGroupInfo\030\001 \003(\0132*.AcFunDanmu."
  "Im.Cloud.Message.UserGroupInfo\0223\n\nsyncCo"
  "okie\030\002 \001(\0132\037.AcFunDanmu.Im.Basic.SyncCoo"
  "kie\022\024\n\014notFullFetch\030\003 \001(\010b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_UserGroupListResponse_2eproto_deps[2] = {
  &::descriptor_table_SyncCookie_2eproto,
  &::descriptor_table_UserGroupInfo_2eproto,
};
static ::_pbi::once_flag descriptor_table_UserGroupListResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_UserGroupListResponse_2eproto = {
    false, false, 273, descriptor_table_protodef_UserGroupListResponse_2eproto,
    "UserGroupListResponse.proto",
    &descriptor_table_UserGroupListResponse_2eproto_once, descriptor_table_UserGroupListResponse_2eproto_deps, 2, 1,
    schemas, file_default_instances, TableStruct_UserGroupListResponse_2eproto::offsets,
    file_level_metadata_UserGroupListResponse_2eproto, file_level_enum_descriptors_UserGroupListResponse_2eproto,
    file_level_service_descriptors_UserGroupListResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_UserGroupListResponse_2eproto_getter() {
  return &descriptor_table_UserGroupListResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_UserGroupListResponse_2eproto(&descriptor_table_UserGroupListResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class UserGroupListResponse::_Internal {
 public:
  static const ::AcFunDanmu::Im::Basic::SyncCookie& synccookie(const UserGroupListResponse* msg);
};

const ::AcFunDanmu::Im::Basic::SyncCookie&
UserGroupListResponse::_Internal::synccookie(const UserGroupListResponse* msg) {
  return *msg->_impl_.synccookie_;
}
void UserGroupListResponse::clear_usergroupinfo() {
  _impl_.usergroupinfo_.Clear();
}
void UserGroupListResponse::clear_synccookie() {
  if (GetArenaForAllocation() == nullptr && _impl_.synccookie_ != nullptr) {
    delete _impl_.synccookie_;
  }
  _impl_.synccookie_ = nullptr;
}
UserGroupListResponse::UserGroupListResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
}
UserGroupListResponse::UserGroupListResponse(const UserGroupListResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  UserGroupListResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.usergroupinfo_){from._impl_.usergroupinfo_}
    , decltype(_impl_.synccookie_){nullptr}
    , decltype(_impl_.notfullfetch_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_synccookie()) {
    _this->_impl_.synccookie_ = new ::AcFunDanmu::Im::Basic::SyncCookie(*from._impl_.synccookie_);
  }
  _this->_impl_.notfullfetch_ = from._impl_.notfullfetch_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
}

inline void UserGroupListResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.usergroupinfo_){arena}
    , decltype(_impl_.synccookie_){nullptr}
    , decltype(_impl_.notfullfetch_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

UserGroupListResponse::~UserGroupListResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void UserGroupListResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.usergroupinfo_.~RepeatedPtrField();
  if (this != internal_default_instance()) delete _impl_.synccookie_;
}

void UserGroupListResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void UserGroupListResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.usergroupinfo_.Clear();
  if (GetArenaForAllocation() == nullptr && _impl_.synccookie_ != nullptr) {
    delete _impl_.synccookie_;
  }
  _impl_.synccookie_ = nullptr;
  _impl_.notfullfetch_ = false;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* UserGroupListResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .AcFunDanmu.Im.Cloud.Message.UserGroupInfo userGroupInfo = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_usergroupinfo(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_synccookie(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // bool notFullFetch = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.notfullfetch_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* UserGroupListResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Message.UserGroupInfo userGroupInfo = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_usergroupinfo_size()); i < n; i++) {
    const auto& repfield = this->_internal_usergroupinfo(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 2;
  if (this->_internal_has_synccookie()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::synccookie(this),
        _Internal::synccookie(this).GetCachedSize(), target, stream);
  }

  // bool notFullFetch = 3;
  if (this->_internal_notfullfetch() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(3, this->_internal_notfullfetch(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
  return target;
}

size_t UserGroupListResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Message.UserGroupInfo userGroupInfo = 1;
  total_size += 1UL * this->_internal_usergroupinfo_size();
  for (const auto& msg : this->_impl_.usergroupinfo_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // .AcFunDanmu.Im.Basic.SyncCookie syncCookie = 2;
  if (this->_internal_has_synccookie()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.synccookie_);
  }

  // bool notFullFetch = 3;
  if (this->_internal_notfullfetch() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData UserGroupListResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    UserGroupListResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*UserGroupListResponse::GetClassData() const { return &_class_data_; }


void UserGroupListResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<UserGroupListResponse*>(&to_msg);
  auto& from = static_cast<const UserGroupListResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.usergroupinfo_.MergeFrom(from._impl_.usergroupinfo_);
  if (from._internal_has_synccookie()) {
    _this->_internal_mutable_synccookie()->::AcFunDanmu::Im::Basic::SyncCookie::MergeFrom(
        from._internal_synccookie());
  }
  if (from._internal_notfullfetch() != 0) {
    _this->_internal_set_notfullfetch(from._internal_notfullfetch());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void UserGroupListResponse::CopyFrom(const UserGroupListResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.UserGroupListResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool UserGroupListResponse::IsInitialized() const {
  return true;
}

void UserGroupListResponse::InternalSwap(UserGroupListResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.usergroupinfo_.InternalSwap(&other->_impl_.usergroupinfo_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(UserGroupListResponse, _impl_.notfullfetch_)
      + sizeof(UserGroupListResponse::_impl_.notfullfetch_)
      - PROTOBUF_FIELD_OFFSET(UserGroupListResponse, _impl_.synccookie_)>(
          reinterpret_cast<char*>(&_impl_.synccookie_),
          reinterpret_cast<char*>(&other->_impl_.synccookie_));
}

::PROTOBUF_NAMESPACE_ID::Metadata UserGroupListResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_UserGroupListResponse_2eproto_getter, &descriptor_table_UserGroupListResponse_2eproto_once,
      file_level_metadata_UserGroupListResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::UserGroupListResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::UserGroupListResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::UserGroupListResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
