// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupSettingMemberTempSilence.proto

#include "GroupSettingMemberTempSilence.pb.h"

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
PROTOBUF_CONSTEXPR GroupSettingMemberTempSilence::GroupSettingMemberTempSilence(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.user_)*/nullptr
  , /*decltype(_impl_.ismute_)*/false
  , /*decltype(_impl_.slienceseconds_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupSettingMemberTempSilenceDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupSettingMemberTempSilenceDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupSettingMemberTempSilenceDefaultTypeInternal() {}
  union {
    GroupSettingMemberTempSilence _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupSettingMemberTempSilenceDefaultTypeInternal _GroupSettingMemberTempSilence_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupSettingMemberTempSilence_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupSettingMemberTempSilence_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupSettingMemberTempSilence_2eproto = nullptr;

const uint32_t TableStruct_GroupSettingMemberTempSilence_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberTempSilence, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberTempSilence, _impl_.ismute_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberTempSilence, _impl_.user_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberTempSilence, _impl_.slienceseconds_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberTempSilence)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_GroupSettingMemberTempSilence_default_instance_._instance,
};

const char descriptor_table_protodef_GroupSettingMemberTempSilence_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n#GroupSettingMemberTempSilence.proto\022\033A"
  "cFunDanmu.Im.Cloud.Message\032\nUser.proto\"p"
  "\n\035GroupSettingMemberTempSilence\022\016\n\006isMut"
  "e\030\001 \001(\010\022\'\n\004user\030\002 \001(\0132\031.AcFunDanmu.Im.Ba"
  "sic.User\022\026\n\016slienceSeconds\030\003 \001(\005b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupSettingMemberTempSilence_2eproto_deps[1] = {
  &::descriptor_table_User_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupSettingMemberTempSilence_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupSettingMemberTempSilence_2eproto = {
    false, false, 200, descriptor_table_protodef_GroupSettingMemberTempSilence_2eproto,
    "GroupSettingMemberTempSilence.proto",
    &descriptor_table_GroupSettingMemberTempSilence_2eproto_once, descriptor_table_GroupSettingMemberTempSilence_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_GroupSettingMemberTempSilence_2eproto::offsets,
    file_level_metadata_GroupSettingMemberTempSilence_2eproto, file_level_enum_descriptors_GroupSettingMemberTempSilence_2eproto,
    file_level_service_descriptors_GroupSettingMemberTempSilence_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupSettingMemberTempSilence_2eproto_getter() {
  return &descriptor_table_GroupSettingMemberTempSilence_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupSettingMemberTempSilence_2eproto(&descriptor_table_GroupSettingMemberTempSilence_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class GroupSettingMemberTempSilence::_Internal {
 public:
  static const ::AcFunDanmu::Im::Basic::User& user(const GroupSettingMemberTempSilence* msg);
};

const ::AcFunDanmu::Im::Basic::User&
GroupSettingMemberTempSilence::_Internal::user(const GroupSettingMemberTempSilence* msg) {
  return *msg->_impl_.user_;
}
void GroupSettingMemberTempSilence::clear_user() {
  if (GetArenaForAllocation() == nullptr && _impl_.user_ != nullptr) {
    delete _impl_.user_;
  }
  _impl_.user_ = nullptr;
}
GroupSettingMemberTempSilence::GroupSettingMemberTempSilence(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
}
GroupSettingMemberTempSilence::GroupSettingMemberTempSilence(const GroupSettingMemberTempSilence& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupSettingMemberTempSilence* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.user_){nullptr}
    , decltype(_impl_.ismute_){}
    , decltype(_impl_.slienceseconds_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_user()) {
    _this->_impl_.user_ = new ::AcFunDanmu::Im::Basic::User(*from._impl_.user_);
  }
  ::memcpy(&_impl_.ismute_, &from._impl_.ismute_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.slienceseconds_) -
    reinterpret_cast<char*>(&_impl_.ismute_)) + sizeof(_impl_.slienceseconds_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
}

inline void GroupSettingMemberTempSilence::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.user_){nullptr}
    , decltype(_impl_.ismute_){false}
    , decltype(_impl_.slienceseconds_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

GroupSettingMemberTempSilence::~GroupSettingMemberTempSilence() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupSettingMemberTempSilence::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.user_;
}

void GroupSettingMemberTempSilence::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupSettingMemberTempSilence::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.user_ != nullptr) {
    delete _impl_.user_;
  }
  _impl_.user_ = nullptr;
  ::memset(&_impl_.ismute_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.slienceseconds_) -
      reinterpret_cast<char*>(&_impl_.ismute_)) + sizeof(_impl_.slienceseconds_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupSettingMemberTempSilence::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // bool isMute = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.ismute_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Basic.User user = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr = ctx->ParseMessage(_internal_mutable_user(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 slienceSeconds = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 24)) {
          _impl_.slienceseconds_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
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

uint8_t* GroupSettingMemberTempSilence::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // bool isMute = 1;
  if (this->_internal_ismute() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(1, this->_internal_ismute(), target);
  }

  // .AcFunDanmu.Im.Basic.User user = 2;
  if (this->_internal_has_user()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(2, _Internal::user(this),
        _Internal::user(this).GetCachedSize(), target, stream);
  }

  // int32 slienceSeconds = 3;
  if (this->_internal_slienceseconds() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(3, this->_internal_slienceseconds(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
  return target;
}

size_t GroupSettingMemberTempSilence::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Basic.User user = 2;
  if (this->_internal_has_user()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.user_);
  }

  // bool isMute = 1;
  if (this->_internal_ismute() != 0) {
    total_size += 1 + 1;
  }

  // int32 slienceSeconds = 3;
  if (this->_internal_slienceseconds() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_slienceseconds());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupSettingMemberTempSilence::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupSettingMemberTempSilence::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupSettingMemberTempSilence::GetClassData() const { return &_class_data_; }


void GroupSettingMemberTempSilence::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupSettingMemberTempSilence*>(&to_msg);
  auto& from = static_cast<const GroupSettingMemberTempSilence&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_user()) {
    _this->_internal_mutable_user()->::AcFunDanmu::Im::Basic::User::MergeFrom(
        from._internal_user());
  }
  if (from._internal_ismute() != 0) {
    _this->_internal_set_ismute(from._internal_ismute());
  }
  if (from._internal_slienceseconds() != 0) {
    _this->_internal_set_slienceseconds(from._internal_slienceseconds());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupSettingMemberTempSilence::CopyFrom(const GroupSettingMemberTempSilence& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.GroupSettingMemberTempSilence)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupSettingMemberTempSilence::IsInitialized() const {
  return true;
}

void GroupSettingMemberTempSilence::InternalSwap(GroupSettingMemberTempSilence* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupSettingMemberTempSilence, _impl_.slienceseconds_)
      + sizeof(GroupSettingMemberTempSilence::_impl_.slienceseconds_)
      - PROTOBUF_FIELD_OFFSET(GroupSettingMemberTempSilence, _impl_.user_)>(
          reinterpret_cast<char*>(&_impl_.user_),
          reinterpret_cast<char*>(&other->_impl_.user_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupSettingMemberTempSilence::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupSettingMemberTempSilence_2eproto_getter, &descriptor_table_GroupSettingMemberTempSilence_2eproto_once,
      file_level_metadata_GroupSettingMemberTempSilence_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberTempSilence*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberTempSilence >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::GroupSettingMemberTempSilence >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
