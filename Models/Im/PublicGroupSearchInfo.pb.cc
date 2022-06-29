// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: PublicGroupSearchInfo.proto

#include "PublicGroupSearchInfo.pb.h"

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
namespace Search {
PROTOBUF_CONSTEXPR PublicGroupSearchInfo::PublicGroupSearchInfo(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.groupbasicinfo_)*/nullptr
  , /*decltype(_impl_.grouphit_)*/nullptr
  , /*decltype(_impl_.status_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct PublicGroupSearchInfoDefaultTypeInternal {
  PROTOBUF_CONSTEXPR PublicGroupSearchInfoDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~PublicGroupSearchInfoDefaultTypeInternal() {}
  union {
    PublicGroupSearchInfo _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 PublicGroupSearchInfoDefaultTypeInternal _PublicGroupSearchInfo_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_PublicGroupSearchInfo_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_PublicGroupSearchInfo_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_PublicGroupSearchInfo_2eproto = nullptr;

const uint32_t TableStruct_PublicGroupSearchInfo_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo, _impl_.groupbasicinfo_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo, _impl_.status_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo, _impl_.grouphit_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Search::_PublicGroupSearchInfo_default_instance_._instance,
};

const char descriptor_table_protodef_PublicGroupSearchInfo_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033PublicGroupSearchInfo.proto\022\032AcFunDanm"
  "u.Im.Cloud.Search\032\024GroupBasicInfo.proto\032"
  "\025GroupJoinStatus.proto\032\024PublicGroupHit.p"
  "roto\"\330\001\n\025PublicGroupSearchInfo\022C\n\016groupB"
  "asicInfo\030\001 \001(\0132+.AcFunDanmu.Im.Cloud.Mes"
  "sage.GroupBasicInfo\022<\n\006status\030\002 \001(\0162,.Ac"
  "FunDanmu.Im.Cloud.Message.GroupJoinStatu"
  "s\022<\n\010groupHit\030\003 \001(\0132*.AcFunDanmu.Im.Clou"
  "d.Search.PublicGroupHitb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_PublicGroupSearchInfo_2eproto_deps[3] = {
  &::descriptor_table_GroupBasicInfo_2eproto,
  &::descriptor_table_GroupJoinStatus_2eproto,
  &::descriptor_table_PublicGroupHit_2eproto,
};
static ::_pbi::once_flag descriptor_table_PublicGroupSearchInfo_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_PublicGroupSearchInfo_2eproto = {
    false, false, 351, descriptor_table_protodef_PublicGroupSearchInfo_2eproto,
    "PublicGroupSearchInfo.proto",
    &descriptor_table_PublicGroupSearchInfo_2eproto_once, descriptor_table_PublicGroupSearchInfo_2eproto_deps, 3, 1,
    schemas, file_default_instances, TableStruct_PublicGroupSearchInfo_2eproto::offsets,
    file_level_metadata_PublicGroupSearchInfo_2eproto, file_level_enum_descriptors_PublicGroupSearchInfo_2eproto,
    file_level_service_descriptors_PublicGroupSearchInfo_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_PublicGroupSearchInfo_2eproto_getter() {
  return &descriptor_table_PublicGroupSearchInfo_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_PublicGroupSearchInfo_2eproto(&descriptor_table_PublicGroupSearchInfo_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class PublicGroupSearchInfo::_Internal {
 public:
  static const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo& groupbasicinfo(const PublicGroupSearchInfo* msg);
  static const ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit& grouphit(const PublicGroupSearchInfo* msg);
};

const ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo&
PublicGroupSearchInfo::_Internal::groupbasicinfo(const PublicGroupSearchInfo* msg) {
  return *msg->_impl_.groupbasicinfo_;
}
const ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit&
PublicGroupSearchInfo::_Internal::grouphit(const PublicGroupSearchInfo* msg) {
  return *msg->_impl_.grouphit_;
}
void PublicGroupSearchInfo::clear_groupbasicinfo() {
  if (GetArenaForAllocation() == nullptr && _impl_.groupbasicinfo_ != nullptr) {
    delete _impl_.groupbasicinfo_;
  }
  _impl_.groupbasicinfo_ = nullptr;
}
void PublicGroupSearchInfo::clear_grouphit() {
  if (GetArenaForAllocation() == nullptr && _impl_.grouphit_ != nullptr) {
    delete _impl_.grouphit_;
  }
  _impl_.grouphit_ = nullptr;
}
PublicGroupSearchInfo::PublicGroupSearchInfo(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
}
PublicGroupSearchInfo::PublicGroupSearchInfo(const PublicGroupSearchInfo& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  PublicGroupSearchInfo* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.groupbasicinfo_){nullptr}
    , decltype(_impl_.grouphit_){nullptr}
    , decltype(_impl_.status_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_groupbasicinfo()) {
    _this->_impl_.groupbasicinfo_ = new ::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo(*from._impl_.groupbasicinfo_);
  }
  if (from._internal_has_grouphit()) {
    _this->_impl_.grouphit_ = new ::AcFunDanmu::Im::Cloud::Search::PublicGroupHit(*from._impl_.grouphit_);
  }
  _this->_impl_.status_ = from._impl_.status_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
}

inline void PublicGroupSearchInfo::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.groupbasicinfo_){nullptr}
    , decltype(_impl_.grouphit_){nullptr}
    , decltype(_impl_.status_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

PublicGroupSearchInfo::~PublicGroupSearchInfo() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void PublicGroupSearchInfo::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.groupbasicinfo_;
  if (this != internal_default_instance()) delete _impl_.grouphit_;
}

void PublicGroupSearchInfo::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void PublicGroupSearchInfo::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.groupbasicinfo_ != nullptr) {
    delete _impl_.groupbasicinfo_;
  }
  _impl_.groupbasicinfo_ = nullptr;
  if (GetArenaForAllocation() == nullptr && _impl_.grouphit_ != nullptr) {
    delete _impl_.grouphit_;
  }
  _impl_.grouphit_ = nullptr;
  _impl_.status_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* PublicGroupSearchInfo::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Cloud.Message.GroupBasicInfo groupBasicInfo = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_groupbasicinfo(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus status = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_status(static_cast<::AcFunDanmu::Im::Cloud::Message::GroupJoinStatus>(val));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Search.PublicGroupHit groupHit = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr = ctx->ParseMessage(_internal_mutable_grouphit(), ptr);
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

uint8_t* PublicGroupSearchInfo::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Cloud.Message.GroupBasicInfo groupBasicInfo = 1;
  if (this->_internal_has_groupbasicinfo()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::groupbasicinfo(this),
        _Internal::groupbasicinfo(this).GetCachedSize(), target, stream);
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus status = 2;
  if (this->_internal_status() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      2, this->_internal_status(), target);
  }

  // .AcFunDanmu.Im.Cloud.Search.PublicGroupHit groupHit = 3;
  if (this->_internal_has_grouphit()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(3, _Internal::grouphit(this),
        _Internal::grouphit(this).GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
  return target;
}

size_t PublicGroupSearchInfo::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Cloud.Message.GroupBasicInfo groupBasicInfo = 1;
  if (this->_internal_has_groupbasicinfo()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.groupbasicinfo_);
  }

  // .AcFunDanmu.Im.Cloud.Search.PublicGroupHit groupHit = 3;
  if (this->_internal_has_grouphit()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.grouphit_);
  }

  // .AcFunDanmu.Im.Cloud.Message.GroupJoinStatus status = 2;
  if (this->_internal_status() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_status());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData PublicGroupSearchInfo::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    PublicGroupSearchInfo::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*PublicGroupSearchInfo::GetClassData() const { return &_class_data_; }


void PublicGroupSearchInfo::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<PublicGroupSearchInfo*>(&to_msg);
  auto& from = static_cast<const PublicGroupSearchInfo&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_groupbasicinfo()) {
    _this->_internal_mutable_groupbasicinfo()->::AcFunDanmu::Im::Cloud::Message::GroupBasicInfo::MergeFrom(
        from._internal_groupbasicinfo());
  }
  if (from._internal_has_grouphit()) {
    _this->_internal_mutable_grouphit()->::AcFunDanmu::Im::Cloud::Search::PublicGroupHit::MergeFrom(
        from._internal_grouphit());
  }
  if (from._internal_status() != 0) {
    _this->_internal_set_status(from._internal_status());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void PublicGroupSearchInfo::CopyFrom(const PublicGroupSearchInfo& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Search.PublicGroupSearchInfo)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool PublicGroupSearchInfo::IsInitialized() const {
  return true;
}

void PublicGroupSearchInfo::InternalSwap(PublicGroupSearchInfo* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(PublicGroupSearchInfo, _impl_.status_)
      + sizeof(PublicGroupSearchInfo::_impl_.status_)
      - PROTOBUF_FIELD_OFFSET(PublicGroupSearchInfo, _impl_.groupbasicinfo_)>(
          reinterpret_cast<char*>(&_impl_.groupbasicinfo_),
          reinterpret_cast<char*>(&other->_impl_.groupbasicinfo_));
}

::PROTOBUF_NAMESPACE_ID::Metadata PublicGroupSearchInfo::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_PublicGroupSearchInfo_2eproto_getter, &descriptor_table_PublicGroupSearchInfo_2eproto_once,
      file_level_metadata_PublicGroupSearchInfo_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Search::PublicGroupSearchInfo >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
