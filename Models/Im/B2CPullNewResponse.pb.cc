// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CPullNewResponse.proto

#include "B2CPullNewResponse.pb.h"

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
namespace Message {
PROTOBUF_CONSTEXPR B2CPullNewResponse::B2CPullNewResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.messages_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct B2CPullNewResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR B2CPullNewResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~B2CPullNewResponseDefaultTypeInternal() {}
  union {
    B2CPullNewResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 B2CPullNewResponseDefaultTypeInternal _B2CPullNewResponse_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_B2CPullNewResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_B2CPullNewResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_B2CPullNewResponse_2eproto = nullptr;

const uint32_t TableStruct_B2CPullNewResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CPullNewResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CPullNewResponse, _impl_.messages_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::B2CPullNewResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_B2CPullNewResponse_default_instance_._instance,
};

const char descriptor_table_protodef_B2CPullNewResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\030B2CPullNewResponse.proto\022\025AcFunDanmu.I"
  "m.Message\032\rMessage.proto\"F\n\022B2CPullNewRe"
  "sponse\0220\n\010messages\030\001 \003(\0132\036.AcFunDanmu.Im"
  ".Message.Messageb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_B2CPullNewResponse_2eproto_deps[1] = {
  &::descriptor_table_Message_2eproto,
};
static ::_pbi::once_flag descriptor_table_B2CPullNewResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_B2CPullNewResponse_2eproto = {
    false, false, 144, descriptor_table_protodef_B2CPullNewResponse_2eproto,
    "B2CPullNewResponse.proto",
    &descriptor_table_B2CPullNewResponse_2eproto_once, descriptor_table_B2CPullNewResponse_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_B2CPullNewResponse_2eproto::offsets,
    file_level_metadata_B2CPullNewResponse_2eproto, file_level_enum_descriptors_B2CPullNewResponse_2eproto,
    file_level_service_descriptors_B2CPullNewResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_B2CPullNewResponse_2eproto_getter() {
  return &descriptor_table_B2CPullNewResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_B2CPullNewResponse_2eproto(&descriptor_table_B2CPullNewResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CPullNewResponse::_Internal {
 public:
};

void B2CPullNewResponse::clear_messages() {
  _impl_.messages_.Clear();
}
B2CPullNewResponse::B2CPullNewResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.B2CPullNewResponse)
}
B2CPullNewResponse::B2CPullNewResponse(const B2CPullNewResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  B2CPullNewResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.messages_){from._impl_.messages_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.B2CPullNewResponse)
}

inline void B2CPullNewResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.messages_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

B2CPullNewResponse::~B2CPullNewResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.B2CPullNewResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void B2CPullNewResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.messages_.~RepeatedPtrField();
}

void B2CPullNewResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void B2CPullNewResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.B2CPullNewResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.messages_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* B2CPullNewResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .AcFunDanmu.Im.Message.Message messages = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_messages(), ptr);
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

uint8_t* B2CPullNewResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.B2CPullNewResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Message.Message messages = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_messages_size()); i < n; i++) {
    const auto& repfield = this->_internal_messages(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.B2CPullNewResponse)
  return target;
}

size_t B2CPullNewResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.B2CPullNewResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Message.Message messages = 1;
  total_size += 1UL * this->_internal_messages_size();
  for (const auto& msg : this->_impl_.messages_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData B2CPullNewResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    B2CPullNewResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*B2CPullNewResponse::GetClassData() const { return &_class_data_; }


void B2CPullNewResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<B2CPullNewResponse*>(&to_msg);
  auto& from = static_cast<const B2CPullNewResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.B2CPullNewResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.messages_.MergeFrom(from._impl_.messages_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void B2CPullNewResponse::CopyFrom(const B2CPullNewResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.B2CPullNewResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool B2CPullNewResponse::IsInitialized() const {
  return true;
}

void B2CPullNewResponse::InternalSwap(B2CPullNewResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.messages_.InternalSwap(&other->_impl_.messages_);
}

::PROTOBUF_NAMESPACE_ID::Metadata B2CPullNewResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_B2CPullNewResponse_2eproto_getter, &descriptor_table_B2CPullNewResponse_2eproto_once,
      file_level_metadata_B2CPullNewResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::B2CPullNewResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::B2CPullNewResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::B2CPullNewResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
