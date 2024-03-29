// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: CommonStateSignalRecentComment.proto

#include "CommonStateSignalRecentComment.pb.h"

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
PROTOBUF_CONSTEXPR CommonStateSignalRecentComment::CommonStateSignalRecentComment(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.comment_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct CommonStateSignalRecentCommentDefaultTypeInternal {
  PROTOBUF_CONSTEXPR CommonStateSignalRecentCommentDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~CommonStateSignalRecentCommentDefaultTypeInternal() {}
  union {
    CommonStateSignalRecentComment _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 CommonStateSignalRecentCommentDefaultTypeInternal _CommonStateSignalRecentComment_default_instance_;
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_CommonStateSignalRecentComment_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_CommonStateSignalRecentComment_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_CommonStateSignalRecentComment_2eproto = nullptr;

const uint32_t TableStruct_CommonStateSignalRecentComment_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalRecentComment, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::CommonStateSignalRecentComment, _impl_.comment_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::CommonStateSignalRecentComment)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::_CommonStateSignalRecentComment_default_instance_._instance,
};

const char descriptor_table_protodef_CommonStateSignalRecentComment_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n$CommonStateSignalRecentComment.proto\022\n"
  "AcFunDanmu\032\037CommonActionSignalComment.pr"
  "oto\"X\n\036CommonStateSignalRecentComment\0226\n"
  "\007comment\030\001 \003(\0132%.AcFunDanmu.CommonAction"
  "SignalCommentb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_CommonStateSignalRecentComment_2eproto_deps[1] = {
  &::descriptor_table_CommonActionSignalComment_2eproto,
};
static ::_pbi::once_flag descriptor_table_CommonStateSignalRecentComment_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_CommonStateSignalRecentComment_2eproto = {
    false, false, 181, descriptor_table_protodef_CommonStateSignalRecentComment_2eproto,
    "CommonStateSignalRecentComment.proto",
    &descriptor_table_CommonStateSignalRecentComment_2eproto_once, descriptor_table_CommonStateSignalRecentComment_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_CommonStateSignalRecentComment_2eproto::offsets,
    file_level_metadata_CommonStateSignalRecentComment_2eproto, file_level_enum_descriptors_CommonStateSignalRecentComment_2eproto,
    file_level_service_descriptors_CommonStateSignalRecentComment_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_CommonStateSignalRecentComment_2eproto_getter() {
  return &descriptor_table_CommonStateSignalRecentComment_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_CommonStateSignalRecentComment_2eproto(&descriptor_table_CommonStateSignalRecentComment_2eproto);
namespace AcFunDanmu {

// ===================================================================

class CommonStateSignalRecentComment::_Internal {
 public:
};

void CommonStateSignalRecentComment::clear_comment() {
  _impl_.comment_.Clear();
}
CommonStateSignalRecentComment::CommonStateSignalRecentComment(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.CommonStateSignalRecentComment)
}
CommonStateSignalRecentComment::CommonStateSignalRecentComment(const CommonStateSignalRecentComment& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  CommonStateSignalRecentComment* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.comment_){from._impl_.comment_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.CommonStateSignalRecentComment)
}

inline void CommonStateSignalRecentComment::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.comment_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

CommonStateSignalRecentComment::~CommonStateSignalRecentComment() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.CommonStateSignalRecentComment)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void CommonStateSignalRecentComment::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.comment_.~RepeatedPtrField();
}

void CommonStateSignalRecentComment::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void CommonStateSignalRecentComment::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.CommonStateSignalRecentComment)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.comment_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* CommonStateSignalRecentComment::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .AcFunDanmu.CommonActionSignalComment comment = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_comment(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
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

uint8_t* CommonStateSignalRecentComment::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.CommonStateSignalRecentComment)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .AcFunDanmu.CommonActionSignalComment comment = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_comment_size()); i < n; i++) {
    const auto& repfield = this->_internal_comment(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.CommonStateSignalRecentComment)
  return target;
}

size_t CommonStateSignalRecentComment::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.CommonStateSignalRecentComment)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.CommonActionSignalComment comment = 1;
  total_size += 1UL * this->_internal_comment_size();
  for (const auto& msg : this->_impl_.comment_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData CommonStateSignalRecentComment::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    CommonStateSignalRecentComment::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*CommonStateSignalRecentComment::GetClassData() const { return &_class_data_; }


void CommonStateSignalRecentComment::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<CommonStateSignalRecentComment*>(&to_msg);
  auto& from = static_cast<const CommonStateSignalRecentComment&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.CommonStateSignalRecentComment)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.comment_.MergeFrom(from._impl_.comment_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void CommonStateSignalRecentComment::CopyFrom(const CommonStateSignalRecentComment& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.CommonStateSignalRecentComment)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CommonStateSignalRecentComment::IsInitialized() const {
  return true;
}

void CommonStateSignalRecentComment::InternalSwap(CommonStateSignalRecentComment* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.comment_.InternalSwap(&other->_impl_.comment_);
}

::PROTOBUF_NAMESPACE_ID::Metadata CommonStateSignalRecentComment::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_CommonStateSignalRecentComment_2eproto_getter, &descriptor_table_CommonStateSignalRecentComment_2eproto_once,
      file_level_metadata_CommonStateSignalRecentComment_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::CommonStateSignalRecentComment*
Arena::CreateMaybeMessage< ::AcFunDanmu::CommonStateSignalRecentComment >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::CommonStateSignalRecentComment >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
