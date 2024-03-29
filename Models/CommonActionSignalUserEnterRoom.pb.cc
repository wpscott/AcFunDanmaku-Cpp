// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonActionSignalUserEnterRoom.proto

#include "CommonActionSignalUserEnterRoom.pb.h"

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
PROTOBUF_CONSTEXPR CommonActionSignalUserEnterRoom::CommonActionSignalUserEnterRoom(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.userinfo_)*/nullptr
  , /*decltype(_impl_.sendtimems_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommonActionSignalUserEnterRoomDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommonActionSignalUserEnterRoomDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommonActionSignalUserEnterRoomDefaultTypeInternal() {}
  union {
    CommonActionSignalUserEnterRoom _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommonActionSignalUserEnterRoomDefaultTypeInternal _CommonActionSignalUserEnterRoom_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CommonActionSignalUserEnterRoom_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CommonActionSignalUserEnterRoom_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CommonActionSignalUserEnterRoom_2eproto = nullptr;

const uint32_t TableStruct_CommonActionSignalUserEnterRoom_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalUserEnterRoom, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalUserEnterRoom, _impl_.userinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonActionSignalUserEnterRoom, _impl_.sendtimems_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::CommonActionSignalUserEnterRoom)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_CommonActionSignalUserEnterRoom_default_instance_._instance,
};

const char descriptor_table_protodef_CommonActionSignalUserEnterRoom_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n%CommonActionSignalUserEnterRoom.proto\022"
  "\nAcFunDanmu\032\024ZtLiveUserInfo.proto\"c\n\037Com"
  "monActionSignalUserEnterRoom\022,\n\010userInfo"
  "\030\001 \001(\0132\032.AcFunDanmu.ZtLiveUserInfo\022\022\n\nse"
  "ndTimeMs\030\002 \001(\003b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_CommonActionSignalUserEnterRoom_2eproto_deps[1] = {
  &::descriptor_table_ZtLiveUserInfo_2eproto,
};
static ::_pbi::once_flag descriptor_table_CommonActionSignalUserEnterRoom_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CommonActionSignalUserEnterRoom_2eproto = {
    false, false, 182, descriptor_table_protodef_CommonActionSignalUserEnterRoom_2eproto,
    "CommonActionSignalUserEnterRoom.proto",
    &descriptor_table_CommonActionSignalUserEnterRoom_2eproto_once, descriptor_table_CommonActionSignalUserEnterRoom_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_CommonActionSignalUserEnterRoom_2eproto::offsets,
    file_level_metadata_CommonActionSignalUserEnterRoom_2eproto, file_level_enum_descriptors_CommonActionSignalUserEnterRoom_2eproto,
    file_level_service_descriptors_CommonActionSignalUserEnterRoom_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CommonActionSignalUserEnterRoom_2eproto_getter() {
  return &descriptor_table_CommonActionSignalUserEnterRoom_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CommonActionSignalUserEnterRoom_2eproto(&descriptor_table_CommonActionSignalUserEnterRoom_2eproto);
namespace AcFunDanmu {

// ===================================================================

class CommonActionSignalUserEnterRoom::_Internal {
 public:
  static const ::AcFunDanmu::ZtLiveUserInfo& userinfo(const CommonActionSignalUserEnterRoom* msg);
};

const ::AcFunDanmu::ZtLiveUserInfo&
CommonActionSignalUserEnterRoom::_Internal::userinfo(const CommonActionSignalUserEnterRoom* msg) {
  return *msg->_impl_.userinfo_;
}
void CommonActionSignalUserEnterRoom::clear_userinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.userinfo_ != nullptr) {
    delete _impl_.userinfo_;
  }
  _impl_.userinfo_ = nullptr;
}
CommonActionSignalUserEnterRoom::CommonActionSignalUserEnterRoom(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonActionSignalUserEnterRoom)
}
CommonActionSignalUserEnterRoom::CommonActionSignalUserEnterRoom(const CommonActionSignalUserEnterRoom& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommonActionSignalUserEnterRoom* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.userinfo_){nullptr}
    , decltype(_impl_.sendtimems_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_userinfo()) {
    _this->_impl_.userinfo_ = new ::AcFunDanmu::ZtLiveUserInfo(*from._impl_.userinfo_);
  }
  _this->_impl_.sendtimems_ = from._impl_.sendtimems_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonActionSignalUserEnterRoom)
}

inline void CommonActionSignalUserEnterRoom::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.userinfo_){nullptr}
    , decltype(_impl_.sendtimems_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

CommonActionSignalUserEnterRoom::~CommonActionSignalUserEnterRoom() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonActionSignalUserEnterRoom)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommonActionSignalUserEnterRoom::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.userinfo_;
}

void CommonActionSignalUserEnterRoom::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommonActionSignalUserEnterRoom::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonActionSignalUserEnterRoom)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.userinfo_ != nullptr) {
    delete _impl_.userinfo_;
  }
  _impl_.userinfo_ = nullptr;
  _impl_.sendtimems_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonActionSignalUserEnterRoom::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.ZtLiveUserInfo userInfo = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_userinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 sendTimeMs = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.sendtimems_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* CommonActionSignalUserEnterRoom::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonActionSignalUserEnterRoom)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.ZtLiveUserInfo userInfo = 1;
  if (this->_internal_has_userinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::userinfo(this),
        _Internal::userinfo(this).GetCachedSize(), target, stream);
  }

  // int64 sendTimeMs = 2;
  if (this->_internal_sendtimems() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_sendtimems(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonActionSignalUserEnterRoom)
  return target;
}

size_t CommonActionSignalUserEnterRoom::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonActionSignalUserEnterRoom)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.ZtLiveUserInfo userInfo = 1;
  if (this->_internal_has_userinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.userinfo_);
  }

  // int64 sendTimeMs = 2;
  if (this->_internal_sendtimems() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_sendtimems());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommonActionSignalUserEnterRoom::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommonActionSignalUserEnterRoom::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommonActionSignalUserEnterRoom::GetClassData() const { return &_class_data_; }


void CommonActionSignalUserEnterRoom::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommonActionSignalUserEnterRoom*>(&to_msg);
  auto& from = static_cast<const CommonActionSignalUserEnterRoom&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonActionSignalUserEnterRoom)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_userinfo()) {
    _this->_internal_mutable_userinfo()->::AcFunDanmu::ZtLiveUserInfo::MergeFrom(
        from._internal_userinfo());
  }
  if (from._internal_sendtimems() != 0) {
    _this->_internal_set_sendtimems(from._internal_sendtimems());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommonActionSignalUserEnterRoom::CopyFrom(const CommonActionSignalUserEnterRoom& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonActionSignalUserEnterRoom)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonActionSignalUserEnterRoom::IsInitialized() const {
  return true;
}

void CommonActionSignalUserEnterRoom::InternalSwap(CommonActionSignalUserEnterRoom* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(CommonActionSignalUserEnterRoom, _impl_.sendtimems_)
      + sizeof(CommonActionSignalUserEnterRoom::_impl_.sendtimems_)
      - PROTOBUF_FIELD_OFFSET(CommonActionSignalUserEnterRoom, _impl_.userinfo_)>(
          reinterpret_cast<char*>(&_impl_.userinfo_),
          reinterpret_cast<char*>(&other->_impl_.userinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonActionSignalUserEnterRoom::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CommonActionSignalUserEnterRoom_2eproto_getter, &descriptor_table_CommonActionSignalUserEnterRoom_2eproto_once,
      file_level_metadata_CommonActionSignalUserEnterRoom_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonActionSignalUserEnterRoom*
Arena::CreateMaybeMessage< ::AcFunDanmu::CommonActionSignalUserEnterRoom >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonActionSignalUserEnterRoom >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
