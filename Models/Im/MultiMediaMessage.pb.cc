// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MultiMediaMessage.proto

#include "MultiMediaMessage.pb.h"

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
PROTOBUF_CONSTEXPR MultiMediaMessage::MultiMediaMessage(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.media_)*/{}
  , /*decltype(_impl_.text_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.extra_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MultiMediaMessageDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MultiMediaMessageDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MultiMediaMessageDefaultTypeInternal() {}
  union {
    MultiMediaMessage _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MultiMediaMessageDefaultTypeInternal _MultiMediaMessage_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_MultiMediaMessage_2eproto[1];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_MultiMediaMessage_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_MultiMediaMessage_2eproto = nullptr;

const uint32_t TableStruct_MultiMediaMessage_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage, _impl_.text_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage, _impl_.media_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage, _impl_.extra_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_MultiMediaMessage_default_instance_._instance,
};

const char descriptor_table_protodef_MultiMediaMessage_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\027MultiMediaMessage.proto\022\033AcFunDanmu.Im"
  ".Cloud.Message\032\013Media.proto\"c\n\021MultiMedi"
  "aMessage\022\014\n\004text\030\001 \001(\t\0221\n\005media\030\002 \003(\0132\"."
  "AcFunDanmu.Im.Cloud.Message.Media\022\r\n\005ext"
  "ra\030\003 \001(\tb\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_MultiMediaMessage_2eproto_deps[1] = {
  &::descriptor_table_Media_2eproto,
};
static ::_pbi::once_flag descriptor_table_MultiMediaMessage_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_MultiMediaMessage_2eproto = {
    false, false, 176, descriptor_table_protodef_MultiMediaMessage_2eproto,
    "MultiMediaMessage.proto",
    &descriptor_table_MultiMediaMessage_2eproto_once, descriptor_table_MultiMediaMessage_2eproto_deps, 1, 1,
    schemas, file_default_instances, TableStruct_MultiMediaMessage_2eproto::offsets,
    file_level_metadata_MultiMediaMessage_2eproto, file_level_enum_descriptors_MultiMediaMessage_2eproto,
    file_level_service_descriptors_MultiMediaMessage_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_MultiMediaMessage_2eproto_getter() {
  return &descriptor_table_MultiMediaMessage_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_MultiMediaMessage_2eproto(&descriptor_table_MultiMediaMessage_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {

// ===================================================================

class MultiMediaMessage::_Internal {
 public:
};

void MultiMediaMessage::clear_media() {
  _impl_.media_.Clear();
}
MultiMediaMessage::MultiMediaMessage(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
}
MultiMediaMessage::MultiMediaMessage(const MultiMediaMessage& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MultiMediaMessage* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.media_){from._impl_.media_}
    , decltype(_impl_.text_){}
    , decltype(_impl_.extra_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.text_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_text().empty()) {
    _this->_impl_.text_.Set(from._internal_text(), 
      _this->GetArenaForAllocation());
  }
  _impl_.extra_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extra_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_extra().empty()) {
    _this->_impl_.extra_.Set(from._internal_extra(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
}

inline void MultiMediaMessage::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.media_){arena}
    , decltype(_impl_.text_){}
    , decltype(_impl_.extra_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.text_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.text_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.extra_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.extra_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

MultiMediaMessage::~MultiMediaMessage() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MultiMediaMessage::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.media_.~RepeatedPtrField();
  _impl_.text_.Destroy();
  _impl_.extra_.Destroy();
}

void MultiMediaMessage::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MultiMediaMessage::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.media_.Clear();
  _impl_.text_.ClearToEmpty();
  _impl_.extra_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MultiMediaMessage::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string text = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_text();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.text"));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.Message.Media media = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_media(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<18>(ptr));
        } else
          goto handle_unusual;
        continue;
      // string extra = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_extra();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.extra"));
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

uint8_t* MultiMediaMessage::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string text = 1;
  if (!this->_internal_text().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_text().data(), static_cast<int>(this->_internal_text().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.text");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_text(), target);
  }

  // repeated .AcFunDanmu.Im.Cloud.Message.Media media = 2;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_media_size()); i < n; i++) {
    const auto& repfield = this->_internal_media(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(2, repfield, repfield.GetCachedSize(), target, stream);
  }

  // string extra = 3;
  if (!this->_internal_extra().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_extra().data(), static_cast<int>(this->_internal_extra().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.MultiMediaMessage.extra");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_extra(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
  return target;
}

size_t MultiMediaMessage::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Message.Media media = 2;
  total_size += 1UL * this->_internal_media_size();
  for (const auto& msg : this->_impl_.media_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string text = 1;
  if (!this->_internal_text().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_text());
  }

  // string extra = 3;
  if (!this->_internal_extra().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_extra());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MultiMediaMessage::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MultiMediaMessage::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MultiMediaMessage::GetClassData() const { return &_class_data_; }


void MultiMediaMessage::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MultiMediaMessage*>(&to_msg);
  auto& from = static_cast<const MultiMediaMessage&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.media_.MergeFrom(from._impl_.media_);
  if (!from._internal_text().empty()) {
    _this->_internal_set_text(from._internal_text());
  }
  if (!from._internal_extra().empty()) {
    _this->_internal_set_extra(from._internal_extra());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MultiMediaMessage::CopyFrom(const MultiMediaMessage& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.MultiMediaMessage)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MultiMediaMessage::IsInitialized() const {
  return true;
}

void MultiMediaMessage::InternalSwap(MultiMediaMessage* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.media_.InternalSwap(&other->_impl_.media_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.text_, lhs_arena,
      &other->_impl_.text_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.extra_, lhs_arena,
      &other->_impl_.extra_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata MultiMediaMessage::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_MultiMediaMessage_2eproto_getter, &descriptor_table_MultiMediaMessage_2eproto_once,
      file_level_metadata_MultiMediaMessage_2eproto[0]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::MultiMediaMessage >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
