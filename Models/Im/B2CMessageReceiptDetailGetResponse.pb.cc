// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CMessageReceiptDetailGetResponse.proto

#include "B2CMessageReceiptDetailGetResponse.pb.h"

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
PROTOBUF_CONSTEXPR B2CMessageReceiptDetailGetResponse::B2CMessageReceiptDetailGetResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.readuser_)*/{}
  , /*decltype(_impl_.unreaduser_)*/{}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct B2CMessageReceiptDetailGetResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR B2CMessageReceiptDetailGetResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~B2CMessageReceiptDetailGetResponseDefaultTypeInternal() {}
  union {
    B2CMessageReceiptDetailGetResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 B2CMessageReceiptDetailGetResponseDefaultTypeInternal _B2CMessageReceiptDetailGetResponse_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_B2CMessageReceiptDetailGetResponse_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_B2CMessageReceiptDetailGetResponse_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_B2CMessageReceiptDetailGetResponse_2eproto = nullptr;

const uint32_t TableStruct_B2CMessageReceiptDetailGetResponse_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReceiptDetailGetResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReceiptDetailGetResponse, _impl_.readuser_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReceiptDetailGetResponse, _impl_.unreaduser_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::B2CMessageReceiptDetailGetResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_B2CMessageReceiptDetailGetResponse_default_instance_._instance,
};

const char descriptor_table_protodef_B2CMessageReceiptDetailGetResponse_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n(B2CMessageReceiptDetailGetResponse.pro"
  "to\022\025AcFunDanmu.Im.Message\032\nUser.proto\"\200\001"
  "\n\"B2CMessageReceiptDetailGetResponse\022+\n\010"
  "readUser\030\001 \003(\0132\031.AcFunDanmu.Im.Basic.Use"
  "r\022-\n\nunreadUser\030\002 \003(\0132\031.AcFunDanmu.Im.Ba"
  "sic.Userb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto_deps[1] = {
  &::descriptor_table_User_2eproto,
};
static ::_pbi::once_flag descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto = {
    false, false, 216, descriptor_table_protodef_B2CMessageReceiptDetailGetResponse_2eproto,
    "B2CMessageReceiptDetailGetResponse.proto",
    &descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto_once, descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_B2CMessageReceiptDetailGetResponse_2eproto::offsets,
    file_level_metadata_B2CMessageReceiptDetailGetResponse_2eproto, file_level_enum_descriptors_B2CMessageReceiptDetailGetResponse_2eproto,
    file_level_service_descriptors_B2CMessageReceiptDetailGetResponse_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto_getter() {
  return &descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_B2CMessageReceiptDetailGetResponse_2eproto(&descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CMessageReceiptDetailGetResponse::_Internal {
 public:
};

void B2CMessageReceiptDetailGetResponse::clear_readuser() {
  _impl_.readuser_.Clear();
}
void B2CMessageReceiptDetailGetResponse::clear_unreaduser() {
  _impl_.unreaduser_.Clear();
}
B2CMessageReceiptDetailGetResponse::B2CMessageReceiptDetailGetResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
}
B2CMessageReceiptDetailGetResponse::B2CMessageReceiptDetailGetResponse(const B2CMessageReceiptDetailGetResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  B2CMessageReceiptDetailGetResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.readuser_){from._impl_.readuser_}
    , decltype(_impl_.unreaduser_){from._impl_.unreaduser_}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
}

inline void B2CMessageReceiptDetailGetResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.readuser_){arena}
    , decltype(_impl_.unreaduser_){arena}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

B2CMessageReceiptDetailGetResponse::~B2CMessageReceiptDetailGetResponse() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void B2CMessageReceiptDetailGetResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.readuser_.~RepeatedPtrField();
  _impl_.unreaduser_.~RepeatedPtrField();
}

void B2CMessageReceiptDetailGetResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void B2CMessageReceiptDetailGetResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.readuser_.Clear();
  _impl_.unreaduser_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* B2CMessageReceiptDetailGetResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated .AcFunDanmu.Im.Basic.User readUser = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_readuser(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<10>(ptr));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Basic.User unreadUser = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_unreaduser(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
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

uint8_t* B2CMessageReceiptDetailGetResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Basic.User readUser = 1;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_readuser_size()); i < n; i++) {
    const auto& repfield = this->_internal_readuser(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(1, repfield, repfield.GetCachedSize(), target, stream);
  }

  // repeated .AcFunDanmu.Im.Basic.User unreadUser = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_unreaduser_size()); i < n; i++) {
    const auto& repfield = this->_internal_unreaduser(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
  return target;
}

size_t B2CMessageReceiptDetailGetResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Basic.User readUser = 1;
  total_size += 1UL * this->_internal_readuser_size();
  for (const auto& msg : this->_impl_.readuser_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .AcFunDanmu.Im.Basic.User unreadUser = 2;
  total_size += 1UL * this->_internal_unreaduser_size();
  for (const auto& msg : this->_impl_.unreaduser_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData B2CMessageReceiptDetailGetResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    B2CMessageReceiptDetailGetResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*B2CMessageReceiptDetailGetResponse::GetClassData() const { return &_class_data_; }


void B2CMessageReceiptDetailGetResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<B2CMessageReceiptDetailGetResponse*>(&to_msg);
  auto& from = static_cast<const B2CMessageReceiptDetailGetResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.readuser_.MergeFrom(from._impl_.readuser_);
  _this->_impl_.unreaduser_.MergeFrom(from._impl_.unreaduser_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void B2CMessageReceiptDetailGetResponse::CopyFrom(const B2CMessageReceiptDetailGetResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.B2CMessageReceiptDetailGetResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool B2CMessageReceiptDetailGetResponse::IsInitialized() const {
  return true;
}

void B2CMessageReceiptDetailGetResponse::InternalSwap(B2CMessageReceiptDetailGetResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.readuser_.InternalSwap(&other->_impl_.readuser_);
  _impl_.unreaduser_.InternalSwap(&other->_impl_.unreaduser_);
}

::PROTOBUF_NAMESPACE_ID::Metadata B2CMessageReceiptDetailGetResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto_getter, &descriptor_table_B2CMessageReceiptDetailGetResponse_2eproto_once,
      file_level_metadata_B2CMessageReceiptDetailGetResponse_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::B2CMessageReceiptDetailGetResponse*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::B2CMessageReceiptDetailGetResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::B2CMessageReceiptDetailGetResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
