// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: B2CMessageReadRequest.proto

#include "B2CMessageReadRequest.pb.h"

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
PROTOBUF_CONSTEXPR B2CMessageReadRequest::B2CMessageReadRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.chattarget_)*/nullptr
  , /*decltype(_impl_.readseq_)*/int64_t{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct B2CMessageReadRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR B2CMessageReadRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~B2CMessageReadRequestDefaultTypeInternal() {}
  union {
    B2CMessageReadRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 B2CMessageReadRequestDefaultTypeInternal _B2CMessageReadRequest_default_instance_;
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_B2CMessageReadRequest_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_B2CMessageReadRequest_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_B2CMessageReadRequest_2eproto = nullptr;

const uint32_t TableStruct_B2CMessageReadRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReadRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReadRequest, _impl_.chattarget_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Message::B2CMessageReadRequest, _impl_.readseq_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Message::B2CMessageReadRequest)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Message::_B2CMessageReadRequest_default_instance_._instance,
};

const char descriptor_table_protodef_B2CMessageReadRequest_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\033B2CMessageReadRequest.proto\022\025AcFunDanm"
  "u.Im.Message\032\020ChatTarget.proto\"_\n\025B2CMes"
  "sageReadRequest\0225\n\nchatTarget\030\001 \001(\0132!.Ac"
  "FunDanmu.Im.Message.ChatTarget\022\017\n\007readSe"
  "q\030\002 \001(\003b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_B2CMessageReadRequest_2eproto_deps[1] = {
  &::descriptor_table_ChatTarget_2eproto,
};
static ::_pbi::once_flag descriptor_table_B2CMessageReadRequest_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_B2CMessageReadRequest_2eproto = {
    false, false, 175, descriptor_table_protodef_B2CMessageReadRequest_2eproto,
    "B2CMessageReadRequest.proto",
    &descriptor_table_B2CMessageReadRequest_2eproto_once, descriptor_table_B2CMessageReadRequest_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_B2CMessageReadRequest_2eproto::offsets,
    file_level_metadata_B2CMessageReadRequest_2eproto, file_level_enum_descriptors_B2CMessageReadRequest_2eproto,
    file_level_service_descriptors_B2CMessageReadRequest_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_B2CMessageReadRequest_2eproto_getter() {
  return &descriptor_table_B2CMessageReadRequest_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_B2CMessageReadRequest_2eproto(&descriptor_table_B2CMessageReadRequest_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Message {

// ===================================================================

class B2CMessageReadRequest::_Internal {
 public:
  static const ::AcFunDanmu::Im::Message::ChatTarget& chattarget(const B2CMessageReadRequest* msg);
};

const ::AcFunDanmu::Im::Message::ChatTarget&
B2CMessageReadRequest::_Internal::chattarget(const B2CMessageReadRequest* msg) {
  return *msg->_impl_.chattarget_;
}
void B2CMessageReadRequest::clear_chattarget() {
  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
}
B2CMessageReadRequest::B2CMessageReadRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Message.B2CMessageReadRequest)
}
B2CMessageReadRequest::B2CMessageReadRequest(const B2CMessageReadRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  B2CMessageReadRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){nullptr}
    , decltype(_impl_.readseq_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  if (from._internal_has_chattarget()) {
    _this->_impl_.chattarget_ = new ::AcFunDanmu::Im::Message::ChatTarget(*from._impl_.chattarget_);
  }
  _this->_impl_.readseq_ = from._impl_.readseq_;
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Message.B2CMessageReadRequest)
}

inline void B2CMessageReadRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.chattarget_){nullptr}
    , decltype(_impl_.readseq_){int64_t{0}}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

B2CMessageReadRequest::~B2CMessageReadRequest() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Message.B2CMessageReadRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void B2CMessageReadRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  if (this != internal_default_instance()) delete _impl_.chattarget_;
}

void B2CMessageReadRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void B2CMessageReadRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Message.B2CMessageReadRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaForAllocation() == nullptr && _impl_.chattarget_ != nullptr) {
    delete _impl_.chattarget_;
  }
  _impl_.chattarget_ = nullptr;
  _impl_.readseq_ = int64_t{0};
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* B2CMessageReadRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ctx->ParseMessage(_internal_mutable_chattarget(), ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int64 readSeq = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 16)) {
          _impl_.readseq_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
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

uint8_t* B2CMessageReadRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Message.B2CMessageReadRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
      InternalWriteMessage(1, _Internal::chattarget(this),
        _Internal::chattarget(this).GetCachedSize(), target, stream);
  }

  // int64 readSeq = 2;
  if (this->_internal_readseq() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt64ToArray(2, this->_internal_readseq(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Message.B2CMessageReadRequest)
  return target;
}

size_t B2CMessageReadRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Message.B2CMessageReadRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .AcFunDanmu.Im.Message.ChatTarget chatTarget = 1;
  if (this->_internal_has_chattarget()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(
        *_impl_.chattarget_);
  }

  // int64 readSeq = 2;
  if (this->_internal_readseq() != 0) {
    total_size += ::_pbi::WireFormatLite::Int64SizePlusOne(this->_internal_readseq());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData B2CMessageReadRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    B2CMessageReadRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*B2CMessageReadRequest::GetClassData() const { return &_class_data_; }


void B2CMessageReadRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<B2CMessageReadRequest*>(&to_msg);
  auto& from = static_cast<const B2CMessageReadRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Message.B2CMessageReadRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_has_chattarget()) {
    _this->_internal_mutable_chattarget()->::AcFunDanmu::Im::Message::ChatTarget::MergeFrom(
        from._internal_chattarget());
  }
  if (from._internal_readseq() != 0) {
    _this->_internal_set_readseq(from._internal_readseq());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void B2CMessageReadRequest::CopyFrom(const B2CMessageReadRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Message.B2CMessageReadRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool B2CMessageReadRequest::IsInitialized() const {
  return true;
}

void B2CMessageReadRequest::InternalSwap(B2CMessageReadRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(B2CMessageReadRequest, _impl_.readseq_)
      + sizeof(B2CMessageReadRequest::_impl_.readseq_)
      - PROTOBUF_FIELD_OFFSET(B2CMessageReadRequest, _impl_.chattarget_)>(
          reinterpret_cast<char*>(&_impl_.chattarget_),
          reinterpret_cast<char*>(&other->_impl_.chattarget_));
}

::PROTOBUF_NAMESPACE_ID::Metadata B2CMessageReadRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_B2CMessageReadRequest_2eproto_getter, &descriptor_table_B2CMessageReadRequest_2eproto_once,
      file_level_metadata_B2CMessageReadRequest_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Message::B2CMessageReadRequest*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Message::B2CMessageReadRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Message::B2CMessageReadRequest >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
