// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: GroupMsgSearchResult.proto

#include "GroupMsgSearchResult.pb.h"

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
PROTOBUF_CONSTEXPR GroupMsgSearchResult::GroupMsgSearchResult(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.msg_)*/{}
  , /*decltype(_impl_.groupid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.offset_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.msgsize_)*/0
  , /*decltype(_impl_.hasmore_)*/false
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct GroupMsgSearchResultDefaultTypeInternal {
  PROTOBUF_CONSTEXPR GroupMsgSearchResultDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~GroupMsgSearchResultDefaultTypeInternal() {}
  union {
    GroupMsgSearchResult _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 GroupMsgSearchResultDefaultTypeInternal _GroupMsgSearchResult_default_instance_;
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_GroupMsgSearchResult_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_GroupMsgSearchResult_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_GroupMsgSearchResult_2eproto = nullptr;

const uint32_t TableStruct_GroupMsgSearchResult_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult, _impl_.groupid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult, _impl_.msgsize_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult, _impl_.msg_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult, _impl_.offset_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult, _impl_.hasmore_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Search::_GroupMsgSearchResult_default_instance_._instance,
};

const char descriptor_table_protodef_GroupMsgSearchResult_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\032GroupMsgSearchResult.proto\022\032AcFunDanmu"
  ".Im.Cloud.Search\032\rMessage.proto\"\206\001\n\024Grou"
  "pMsgSearchResult\022\017\n\007groupId\030\001 \001(\t\022\017\n\007msg"
  "Size\030\002 \001(\005\022+\n\003msg\030\003 \003(\0132\036.AcFunDanmu.Im."
  "Message.Message\022\016\n\006offset\030\004 \001(\t\022\017\n\007hasMo"
  "re\030\005 \001(\010b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_GroupMsgSearchResult_2eproto_deps[1] = {
  &::descriptor_table_Message_2eproto,
};
static ::_pbi::once_flag descriptor_table_GroupMsgSearchResult_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_GroupMsgSearchResult_2eproto = {
    false, false, 216, descriptor_table_protodef_GroupMsgSearchResult_2eproto,
    "GroupMsgSearchResult.proto",
    &descriptor_table_GroupMsgSearchResult_2eproto_once, descriptor_table_GroupMsgSearchResult_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_GroupMsgSearchResult_2eproto::offsets,
    file_level_metadata_GroupMsgSearchResult_2eproto, file_level_enum_descriptors_GroupMsgSearchResult_2eproto,
    file_level_service_descriptors_GroupMsgSearchResult_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_GroupMsgSearchResult_2eproto_getter() {
  return &descriptor_table_GroupMsgSearchResult_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_GroupMsgSearchResult_2eproto(&descriptor_table_GroupMsgSearchResult_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Search {

// ===================================================================

class GroupMsgSearchResult::_Internal {
 public:
};

void GroupMsgSearchResult::clear_msg() {
  _impl_.msg_.Clear();
}
GroupMsgSearchResult::GroupMsgSearchResult(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
}
GroupMsgSearchResult::GroupMsgSearchResult(const GroupMsgSearchResult& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  GroupMsgSearchResult* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.msg_){from._impl_.msg_}
    , decltype(_impl_.groupid_){}
    , decltype(_impl_.offset_){}
    , decltype(_impl_.msgsize_){}
    , decltype(_impl_.hasmore_){}
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
  _impl_.offset_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.offset_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_offset().empty()) {
    _this->_impl_.offset_.Set(from._internal_offset(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.msgsize_, &from._impl_.msgsize_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.hasmore_) -
    reinterpret_cast<char*>(&_impl_.msgsize_)) + sizeof(_impl_.hasmore_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
}

inline void GroupMsgSearchResult::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.msg_){arena}
    , decltype(_impl_.groupid_){}
    , decltype(_impl_.offset_){}
    , decltype(_impl_.msgsize_){0}
    , decltype(_impl_.hasmore_){false}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.groupid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.groupid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.offset_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.offset_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

GroupMsgSearchResult::~GroupMsgSearchResult() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void GroupMsgSearchResult::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.msg_.~RepeatedPtrField();
  _impl_.groupid_.Destroy();
  _impl_.offset_.Destroy();
}

void GroupMsgSearchResult::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void GroupMsgSearchResult::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.msg_.Clear();
  _impl_.groupid_.ClearToEmpty();
  _impl_.offset_.ClearToEmpty();
  ::memset(&_impl_.msgsize_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.hasmore_) -
      reinterpret_cast<char*>(&_impl_.msgsize_)) + sizeof(_impl_.hasmore_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* GroupMsgSearchResult::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
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
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.groupId"));
        } else
          goto handle_unusual;
        continue;
      // int32 msgSize = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.msgsize_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Message.Message msg = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_msg(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<26>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string offset = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 34)) {
          auto str = _internal_mutable_offset();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.offset"));
        } else
          goto handle_unusual;
        continue;
      // bool hasMore = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 40)) {
          _impl_.hasmore_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* GroupMsgSearchResult::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string groupId = 1;
  if (!this->_internal_groupid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_groupid().data(), static_cast<int>(this->_internal_groupid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.groupId");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_groupid(), target);
  }

  // int32 msgSize = 2;
  if (this->_internal_msgsize() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(2, this->_internal_msgsize(), target);
  }

  // repeated .AcFunDanmu.Im.Message.Message msg = 3;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_msg_size()); i < n; i++) {
    const auto& repfield = this->_internal_msg(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(3, repfield, repfield.GetCachedSize(), target, stream);
  }

  // string offset = 4;
  if (!this->_internal_offset().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_offset().data(), static_cast<int>(this->_internal_offset().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult.offset");
    target = stream->WriteStringMaybeAliased(
        4, this->_internal_offset(), target);
  }

  // bool hasMore = 5;
  if (this->_internal_hasmore() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteBoolToArray(5, this->_internal_hasmore(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
  return target;
}

size_t GroupMsgSearchResult::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Message.Message msg = 3;
  total_size += 1UL * this->_internal_msg_size();
  for (const auto& msg : this->_impl_.msg_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string groupId = 1;
  if (!this->_internal_groupid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_groupid());
  }

  // string offset = 4;
  if (!this->_internal_offset().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_offset());
  }

  // int32 msgSize = 2;
  if (this->_internal_msgsize() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_msgsize());
  }

  // bool hasMore = 5;
  if (this->_internal_hasmore() != 0) {
    total_size += 1 + 1;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData GroupMsgSearchResult::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    GroupMsgSearchResult::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*GroupMsgSearchResult::GetClassData() const { return &_class_data_; }


void GroupMsgSearchResult::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<GroupMsgSearchResult*>(&to_msg);
  auto& from = static_cast<const GroupMsgSearchResult&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.msg_.MergeFrom(from._impl_.msg_);
  if (!from._internal_groupid().empty()) {
    _this->_internal_set_groupid(from._internal_groupid());
  }
  if (!from._internal_offset().empty()) {
    _this->_internal_set_offset(from._internal_offset());
  }
  if (from._internal_msgsize() != 0) {
    _this->_internal_set_msgsize(from._internal_msgsize());
  }
  if (from._internal_hasmore() != 0) {
    _this->_internal_set_hasmore(from._internal_hasmore());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void GroupMsgSearchResult::CopyFrom(const GroupMsgSearchResult& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Search.GroupMsgSearchResult)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GroupMsgSearchResult::IsInitialized() const {
  return true;
}

void GroupMsgSearchResult::InternalSwap(GroupMsgSearchResult* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.msg_.InternalSwap(&other->_impl_.msg_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.groupid_, lhs_arena,
      &other->_impl_.groupid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.offset_, lhs_arena,
      &other->_impl_.offset_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(GroupMsgSearchResult, _impl_.hasmore_)
      + sizeof(GroupMsgSearchResult::_impl_.hasmore_)
      - PROTOBUF_FIELD_OFFSET(GroupMsgSearchResult, _impl_.msgsize_)>(
          reinterpret_cast<char*>(&_impl_.msgsize_),
          reinterpret_cast<char*>(&other->_impl_.msgsize_));
}

::PROTOBUF_NAMESPACE_ID::Metadata GroupMsgSearchResult::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_GroupMsgSearchResult_2eproto_getter, &descriptor_table_GroupMsgSearchResult_2eproto_once,
      file_level_metadata_GroupMsgSearchResult_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Search
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Search::GroupMsgSearchResult >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
