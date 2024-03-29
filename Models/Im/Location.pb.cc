// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Location.proto

#include "Location.pb.h"

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
PROTOBUF_CONSTEXPR Location::Location(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.latitude_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.longitude_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.poi_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.poiid_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct LocationDefaultTypeInternal {
  PROTOBUF_CONSTEXPR LocationDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~LocationDefaultTypeInternal() {}
  union {
    Location _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 LocationDefaultTypeInternal _Location_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_Location_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_Location_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Location_2eproto = nullptr;

const uint32_t TableStruct_Location_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Location, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Location, _impl_.poiid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Location, _impl_.latitude_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Location, _impl_.longitude_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Location, _impl_.poi_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::Location)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_Location_default_instance_._instance,
};

const char descriptor_table_protodef_Location_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016Location.proto\022\033AcFunDanmu.Im.Cloud.Me"
  "ssage\"K\n\010Location\022\r\n\005poiId\030\001 \001(\003\022\020\n\010lati"
  "tude\030\002 \001(\t\022\021\n\tlongitude\030\003 \001(\t\022\013\n\003poi\030\004 \001"
  "(\tb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_Location_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Location_2eproto = {
    false, false, 130, descriptor_table_protodef_Location_2eproto,
    "Location.proto",
    &descriptor_table_Location_2eproto_once, nullptr, 0, 1,
    schemas, file_default_instances, TableStruct_Location_2eproto::offsets,
    file_level_metadata_Location_2eproto, file_level_enum_descriptors_Location_2eproto,
    file_level_service_descriptors_Location_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Location_2eproto_getter() {
  return &descriptor_table_Location_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Location_2eproto(&descriptor_table_Location_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class Location::_Internal {
 public:
};

Location::Location(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.Location)
}
Location::Location(const Location& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Location* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.latitude_){}
    , decltype(_impl_.longitude_){}
    , decltype(_impl_.poi_){}
    , decltype(_impl_.poiid_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.latitude_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.latitude_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_latitude().empty()) {
    _this->_impl_.latitude_.Set(from._internal_latitude(), 
      _this->GetArenaForAllocation());
  }
  _impl_.longitude_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.longitude_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_longitude().empty()) {
    _this->_impl_.longitude_.Set(from._internal_longitude(), 
      _this->GetArenaForAllocation());
  }
  _impl_.poi_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.poi_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_poi().empty()) {
    _this->_impl_.poi_.Set(from._internal_poi(), 
      _this->GetArenaForAllocation());
  }
  _this->_impl_.poiid_ = from._impl_.poiid_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.Location)
}

inline void Location::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.latitude_){}
    , decltype(_impl_.longitude_){}
    , decltype(_impl_.poi_){}
    , decltype(_impl_.poiid_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.latitude_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.latitude_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.longitude_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.longitude_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.poi_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.poi_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Location::~Location() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.Location)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Location::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.latitude_.Destroy();
  _impl_.longitude_.Destroy();
  _impl_.poi_.Destroy();
}

void Location::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Location::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.Location)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.latitude_.ClearToEmpty();
  _impl_.longitude_.ClearToEmpty();
  _impl_.poi_.ClearToEmpty();
  _impl_.poiid_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Location::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int64 poiId = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.poiid_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // string latitude = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_latitude();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.Location.latitude"));
        } else
          goto handle_unusual;
        continue;
      // string longitude = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_longitude();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.Location.longitude"));
        } else
          goto handle_unusual;
        continue;
      // string poi = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_poi();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.Location.poi"));
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

uint8_t* Location::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.Location)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int64 poiId = 1;
  if (this->_internal_poiid() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(1, this->_internal_poiid(), target);
  }

  // string latitude = 2;
  if (!this->_internal_latitude().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_latitude().data(), static_cast<int>(this->_internal_latitude().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.Location.latitude");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_latitude(), target);
  }

  // string longitude = 3;
  if (!this->_internal_longitude().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_longitude().data(), static_cast<int>(this->_internal_longitude().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.Location.longitude");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_longitude(), target);
  }

  // string poi = 4;
  if (!this->_internal_poi().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_poi().data(), static_cast<int>(this->_internal_poi().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.Location.poi");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_poi(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.Location)
  return target;
}

size_t Location::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.Location)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string latitude = 2;
  if (!this->_internal_latitude().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_latitude());
  }

  // string longitude = 3;
  if (!this->_internal_longitude().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_longitude());
  }

  // string poi = 4;
  if (!this->_internal_poi().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_poi());
  }

  // int64 poiId = 1;
  if (this->_internal_poiid() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_poiid());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Location::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Location::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Location::GetClassData() const { return &_class_data_; }


void Location::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Location*>(&to_msg);
  auto& from = static_cast<const Location&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.Location)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (!from._internal_latitude().empty()) {
    _this->_internal_set_latitude(from._internal_latitude());
  }
  if (!from._internal_longitude().empty()) {
    _this->_internal_set_longitude(from._internal_longitude());
  }
  if (!from._internal_poi().empty()) {
    _this->_internal_set_poi(from._internal_poi());
  }
  if (from._internal_poiid() != 0) {
    _this->_internal_set_poiid(from._internal_poiid());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Location::CopyFrom(const Location& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.Location)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Location::IsInitialized() const {
  return true;
}

void Location::InternalSwap(Location* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.latitude_, lhs_arena,
      &other->_impl_.latitude_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.longitude_, lhs_arena,
      &other->_impl_.longitude_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.poi_, lhs_arena,
      &other->_impl_.poi_, rhs_arena
  );
  swap(_impl_.poiid_, other->_impl_.poiid_);
}

::PROTOBUF_NAMESPACE_ID::Metadata Location::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Location_2eproto_getter, &descriptor_table_Location_2eproto_once,
      file_level_metadata_Location_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::Location*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::Location >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::Location >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
