// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Emoticon.proto

#include "Emoticon.pb.h"

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
PROTOBUF_CONSTEXPR Emoticon_Code::Emoticon_Code(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.code_)*/{}
  , /*decltype(_impl_.language_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct Emoticon_CodeDefaultTypeInternal {
  PROTOBUF_CONSTEXPR Emoticon_CodeDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~Emoticon_CodeDefaultTypeInternal() {}
  union {
    Emoticon_Code _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 Emoticon_CodeDefaultTypeInternal _Emoticon_Code_default_instance_;
PROTOBUF_CONSTEXPR Emoticon::Emoticon(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.bigurl_)*/{}
  , /*decltype(_impl_.emoticoncode_)*/{}
  , /*decltype(_impl_.id_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.packageid_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.name_)*/{&::_pbi::fixed_address_empty_string, ::_pbi::ConstantInitialized{}}
  , /*decltype(_impl_.type_)*/0
  , /*decltype(_impl_.width_)*/0
  , /*decltype(_impl_.height_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct EmoticonDefaultTypeInternal {
  PROTOBUF_CONSTEXPR EmoticonDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~EmoticonDefaultTypeInternal() {}
  union {
    Emoticon _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 EmoticonDefaultTypeInternal _Emoticon_default_instance_;
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
static ::_pb::Metadata file_level_metadata_Emoticon_2eproto[2];
static const ::_pb::EnumDescriptor* file_level_enum_descriptors_Emoticon_2eproto[1];
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_Emoticon_2eproto = nullptr;

const uint32_t TableStruct_Emoticon_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon_Code, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon_Code, _impl_.language_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon_Code, _impl_.code_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _impl_.id_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _impl_.packageid_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _impl_.name_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _impl_.type_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _impl_.bigurl_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _impl_.width_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _impl_.height_),
  PROTOBUF_FIELD_OFFSET(::AcFunDanmu::Im::Cloud::Message::Emoticon, _impl_.emoticoncode_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::Emoticon_Code)},
  { 8, -1, -1, sizeof(::AcFunDanmu::Im::Cloud::Message::Emoticon)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::AcFunDanmu::Im::Cloud::Message::_Emoticon_Code_default_instance_._instance,
  &::AcFunDanmu::Im::Cloud::Message::_Emoticon_default_instance_._instance,
};

const char descriptor_table_protodef_Emoticon_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\016Emoticon.proto\022\033AcFunDanmu.Im.Cloud.Me"
  "ssage\032\014PicUrl.proto\"\203\003\n\010Emoticon\022\n\n\002id\030\001"
  " \001(\t\022\021\n\tpackageId\030\002 \001(\t\022\014\n\004name\030\003 \001(\t\0228\n"
  "\004type\030\004 \001(\0162*.AcFunDanmu.Im.Cloud.Messag"
  "e.Emoticon.Type\0223\n\006bigUrl\030\005 \003(\0132#.AcFunD"
  "anmu.Im.Cloud.Message.PicUrl\022\r\n\005width\030\006 "
  "\001(\005\022\016\n\006height\030\007 \001(\005\022@\n\014emoticonCode\030\010 \003("
  "\0132*.AcFunDanmu.Im.Cloud.Message.Emoticon"
  ".Code\032&\n\004Code\022\020\n\010language\030\001 \001(\t\022\014\n\004code\030"
  "\002 \003(\t\"R\n\004Type\022\013\n\007UNKNOWN\020\000\022\t\n\005BASIC\020\001\022\t\n"
  "\005IMAGE\020\002\022\007\n\003GIF\020\003\022\022\n\016SPECIAL_EFFECT\020\004\022\n\n"
  "\006SCRIPT\020\005b\006proto3"
  ;
static const ::_pbi::DescriptorTable* const descriptor_table_Emoticon_2eproto_deps[1] = {
  &::descriptor_table_PicUrl_2eproto,
};
static ::_pbi::once_flag descriptor_table_Emoticon_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_Emoticon_2eproto = {
    false, false, 457, descriptor_table_protodef_Emoticon_2eproto,
    "Emoticon.proto",
    &descriptor_table_Emoticon_2eproto_once, descriptor_table_Emoticon_2eproto_deps, 1, 2,
    schemas, file_default_instances, TableStruct_Emoticon_2eproto::offsets,
    file_level_metadata_Emoticon_2eproto, file_level_enum_descriptors_Emoticon_2eproto,
    file_level_service_descriptors_Emoticon_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_Emoticon_2eproto_getter() {
  return &descriptor_table_Emoticon_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_Emoticon_2eproto(&descriptor_table_Emoticon_2eproto);
namespace AcFunDanmu {
namespace Im {
namespace Cloud {
namespace Message {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* Emoticon_Type_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_Emoticon_2eproto);
  return file_level_enum_descriptors_Emoticon_2eproto[0];
}
bool Emoticon_Type_IsValid(int value) {
  switch (value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      return true;
    default:
      return false;
  }
}

#if (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))
constexpr Emoticon_Type Emoticon::UNKNOWN;
constexpr Emoticon_Type Emoticon::BASIC;
constexpr Emoticon_Type Emoticon::IMAGE;
constexpr Emoticon_Type Emoticon::GIF;
constexpr Emoticon_Type Emoticon::SPECIAL_EFFECT;
constexpr Emoticon_Type Emoticon::SCRIPT;
constexpr Emoticon_Type Emoticon::Type_MIN;
constexpr Emoticon_Type Emoticon::Type_MAX;
constexpr int Emoticon::Type_ARRAYSIZE;
#endif  // (__cplusplus < 201703) && (!defined(_MSC_VER) || (_MSC_VER >= 1900 && _MSC_VER < 1912))

// ===================================================================

class Emoticon_Code::_Internal {
 public:
};

Emoticon_Code::Emoticon_Code(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
}
Emoticon_Code::Emoticon_Code(const Emoticon_Code& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Emoticon_Code* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.code_){from._impl_.code_}
    , decltype(_impl_.language_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.language_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.language_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_language().empty()) {
    _this->_impl_.language_.Set(from._internal_language(), 
      _this->GetArenaForAllocation());
  }
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
}

inline void Emoticon_Code::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.code_){arena}
    , decltype(_impl_.language_){}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.language_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.language_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Emoticon_Code::~Emoticon_Code() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Emoticon_Code::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.code_.~RepeatedPtrField();
  _impl_.language_.Destroy();
}

void Emoticon_Code::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Emoticon_Code::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.code_.Clear();
  _impl_.language_.ClearToEmpty();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Emoticon_Code::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string language = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_language();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.Emoticon.Code.language"));
        } else
          goto handle_unusual;
        continue;
      // repeated string code = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          ptr -= 1;
          do {
            ptr += 1;
            auto str = _internal_add_code();
            ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
            CHK_(ptr);
            CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.Emoticon.Code.code"));
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

uint8_t* Emoticon_Code::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string language = 1;
  if (!this->_internal_language().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_language().data(), static_cast<int>(this->_internal_language().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.Emoticon.Code.language");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_language(), target);
  }

  // repeated string code = 2;
  for (int i = 0, n = this->_internal_code_size(); i < n; i++) {
    const auto& s = this->_internal_code(i);
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      s.data(), static_cast<int>(s.length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.Emoticon.Code.code");
    target = stream->WriteString(2, s, target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
  return target;
}

size_t Emoticon_Code::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated string code = 2;
  total_size += 1 *
      ::PROTOBUF_NAMESPACE_ID::internal::FromIntSize(_impl_.code_.size());
  for (int i = 0, n = _impl_.code_.size(); i < n; i++) {
    total_size += ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
      _impl_.code_.Get(i));
  }

  // string language = 1;
  if (!this->_internal_language().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_language());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Emoticon_Code::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Emoticon_Code::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Emoticon_Code::GetClassData() const { return &_class_data_; }


void Emoticon_Code::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Emoticon_Code*>(&to_msg);
  auto& from = static_cast<const Emoticon_Code&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.code_.MergeFrom(from._impl_.code_);
  if (!from._internal_language().empty()) {
    _this->_internal_set_language(from._internal_language());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Emoticon_Code::CopyFrom(const Emoticon_Code& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.Emoticon.Code)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Emoticon_Code::IsInitialized() const {
  return true;
}

void Emoticon_Code::InternalSwap(Emoticon_Code* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.code_.InternalSwap(&other->_impl_.code_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.language_, lhs_arena,
      &other->_impl_.language_, rhs_arena
  );
}

::PROTOBUF_NAMESPACE_ID::Metadata Emoticon_Code::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Emoticon_2eproto_getter, &descriptor_table_Emoticon_2eproto_once,
      file_level_metadata_Emoticon_2eproto[0]);
}

// ===================================================================

class Emoticon::_Internal {
 public:
};

void Emoticon::clear_bigurl() {
  _impl_.bigurl_.Clear();
}
Emoticon::Emoticon(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:AcFunDanmu.Im.Cloud.Message.Emoticon)
}
Emoticon::Emoticon(const Emoticon& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  Emoticon* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.bigurl_){from._impl_.bigurl_}
    , decltype(_impl_.emoticoncode_){from._impl_.emoticoncode_}
    , decltype(_impl_.id_){}
    , decltype(_impl_.packageid_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.type_){}
    , decltype(_impl_.width_){}
    , decltype(_impl_.height_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_id().empty()) {
    _this->_impl_.id_.Set(from._internal_id(), 
      _this->GetArenaForAllocation());
  }
  _impl_.packageid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.packageid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_packageid().empty()) {
    _this->_impl_.packageid_.Set(from._internal_packageid(), 
      _this->GetArenaForAllocation());
  }
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  if (!from._internal_name().empty()) {
    _this->_impl_.name_.Set(from._internal_name(), 
      _this->GetArenaForAllocation());
  }
  ::memcpy(&_impl_.type_, &from._impl_.type_,
    static_cast<size_t>(reinterpret_cast<char*>(&_impl_.height_) -
    reinterpret_cast<char*>(&_impl_.type_)) + sizeof(_impl_.height_));
  // @@protoc_insertion_point(copy_constructor:AcFunDanmu.Im.Cloud.Message.Emoticon)
}

inline void Emoticon::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.bigurl_){arena}
    , decltype(_impl_.emoticoncode_){arena}
    , decltype(_impl_.id_){}
    , decltype(_impl_.packageid_){}
    , decltype(_impl_.name_){}
    , decltype(_impl_.type_){0}
    , decltype(_impl_.width_){0}
    , decltype(_impl_.height_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
  _impl_.id_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.id_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.packageid_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.packageid_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
  _impl_.name_.InitDefault();
  #ifdef PROTOBUF_FORCE_COPY_DEFAULT_STRING
    _impl_.name_.Set("", GetArenaForAllocation());
  #endif // PROTOBUF_FORCE_COPY_DEFAULT_STRING
}

Emoticon::~Emoticon() {
  // @@protoc_insertion_point(destructor:AcFunDanmu.Im.Cloud.Message.Emoticon)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void Emoticon::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.bigurl_.~RepeatedPtrField();
  _impl_.emoticoncode_.~RepeatedPtrField();
  _impl_.id_.Destroy();
  _impl_.packageid_.Destroy();
  _impl_.name_.Destroy();
}

void Emoticon::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void Emoticon::Clear() {
// @@protoc_insertion_point(message_clear_start:AcFunDanmu.Im.Cloud.Message.Emoticon)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.bigurl_.Clear();
  _impl_.emoticoncode_.Clear();
  _impl_.id_.ClearToEmpty();
  _impl_.packageid_.ClearToEmpty();
  _impl_.name_.ClearToEmpty();
  ::memset(&_impl_.type_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&_impl_.height_) -
      reinterpret_cast<char*>(&_impl_.type_)) + sizeof(_impl_.height_));
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* Emoticon::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // string id = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          auto str = _internal_mutable_id();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.Emoticon.id"));
        } else
          goto handle_unusual;
        continue;
      // string packageId = 2;
      case 2:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 18)) {
          auto str = _internal_mutable_packageid();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.Emoticon.packageId"));
        } else
          goto handle_unusual;
        continue;
      // string name = 3;
      case 3:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 26)) {
          auto str = _internal_mutable_name();
          ptr = ::_pbi::InlineGreedyStringParser(str, ptr, ctx);
          CHK_(ptr);
          CHK_(::_pbi::VerifyUTF8(str, "AcFunDanmu.Im.Cloud.Message.Emoticon.name"));
        } else
          goto handle_unusual;
        continue;
      // .AcFunDanmu.Im.Cloud.Message.Emoticon.Type type = 4;
      case 4:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 32)) {
          uint64_t val = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint64(&ptr);
          CHK_(ptr);
          _internal_set_type(static_cast<::AcFunDanmu::Im::Cloud::Message::Emoticon_Type>(val));
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.Message.PicUrl bigUrl = 5;
      case 5:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 42)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_bigurl(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<42>(ptr));
        } else
          goto handle_unusual;
        continue;
      // int32 width = 6;
      case 6:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 48)) {
          _impl_.width_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // int32 height = 7;
      case 7:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 56)) {
          _impl_.height_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      // repeated .AcFunDanmu.Im.Cloud.Message.Emoticon.Code emoticonCode = 8;
      case 8:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 66)) {
          ptr -= 1;
          do {
            ptr += 1;
            ptr = ctx->ParseMessage(_internal_add_emoticoncode(), ptr);
            CHK_(ptr);
            if (!ctx->DataAvailable(ptr)) break;
          } while (::PROTOBUF_NAMESPACE_ID::internal::ExpectTag<66>(ptr));
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

uint8_t* Emoticon::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:AcFunDanmu.Im.Cloud.Message.Emoticon)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // string id = 1;
  if (!this->_internal_id().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_id().data(), static_cast<int>(this->_internal_id().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.Emoticon.id");
    target = stream->WriteStringMaybeAliased(
        1, this->_internal_id(), target);
  }

  // string packageId = 2;
  if (!this->_internal_packageid().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_packageid().data(), static_cast<int>(this->_internal_packageid().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.Emoticon.packageId");
    target = stream->WriteStringMaybeAliased(
        2, this->_internal_packageid(), target);
  }

  // string name = 3;
  if (!this->_internal_name().empty()) {
    ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::VerifyUtf8String(
      this->_internal_name().data(), static_cast<int>(this->_internal_name().length()),
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::SERIALIZE,
      "AcFunDanmu.Im.Cloud.Message.Emoticon.name");
    target = stream->WriteStringMaybeAliased(
        3, this->_internal_name(), target);
  }

  // .AcFunDanmu.Im.Cloud.Message.Emoticon.Type type = 4;
  if (this->_internal_type() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteEnumToArray(
      4, this->_internal_type(), target);
  }

  // repeated .AcFunDanmu.Im.Cloud.Message.PicUrl bigUrl = 5;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_bigurl_size()); i < n; i++) {
    const auto& repfield = this->_internal_bigurl(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(5, repfield, repfield.GetCachedSize(), target, stream);
  }

  // int32 width = 6;
  if (this->_internal_width() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(6, this->_internal_width(), target);
  }

  // int32 height = 7;
  if (this->_internal_height() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(7, this->_internal_height(), target);
  }

  // repeated .AcFunDanmu.Im.Cloud.Message.Emoticon.Code emoticonCode = 8;
  for (unsigned i = 0,
      n = static_cast<unsigned>(this->_internal_emoticoncode_size()); i < n; i++) {
    const auto& repfield = this->_internal_emoticoncode(i);
    target = ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::
        InternalWriteMessage(8, repfield, repfield.GetCachedSize(), target, stream);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:AcFunDanmu.Im.Cloud.Message.Emoticon)
  return target;
}

size_t Emoticon::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:AcFunDanmu.Im.Cloud.Message.Emoticon)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated .AcFunDanmu.Im.Cloud.Message.PicUrl bigUrl = 5;
  total_size += 1UL * this->_internal_bigurl_size();
  for (const auto& msg : this->_impl_.bigurl_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // repeated .AcFunDanmu.Im.Cloud.Message.Emoticon.Code emoticonCode = 8;
  total_size += 1UL * this->_internal_emoticoncode_size();
  for (const auto& msg : this->_impl_.emoticoncode_) {
    total_size +=
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::MessageSize(msg);
  }

  // string id = 1;
  if (!this->_internal_id().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_id());
  }

  // string packageId = 2;
  if (!this->_internal_packageid().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_packageid());
  }

  // string name = 3;
  if (!this->_internal_name().empty()) {
    total_size += 1 +
      ::PROTOBUF_NAMESPACE_ID::internal::WireFormatLite::StringSize(
        this->_internal_name());
  }

  // .AcFunDanmu.Im.Cloud.Message.Emoticon.Type type = 4;
  if (this->_internal_type() != 0) {
    total_size += 1 +
      ::_pbi::WireFormatLite::EnumSize(this->_internal_type());
  }

  // int32 width = 6;
  if (this->_internal_width() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_width());
  }

  // int32 height = 7;
  if (this->_internal_height() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_height());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData Emoticon::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    Emoticon::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*Emoticon::GetClassData() const { return &_class_data_; }


void Emoticon::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<Emoticon*>(&to_msg);
  auto& from = static_cast<const Emoticon&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:AcFunDanmu.Im.Cloud.Message.Emoticon)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.bigurl_.MergeFrom(from._impl_.bigurl_);
  _this->_impl_.emoticoncode_.MergeFrom(from._impl_.emoticoncode_);
  if (!from._internal_id().empty()) {
    _this->_internal_set_id(from._internal_id());
  }
  if (!from._internal_packageid().empty()) {
    _this->_internal_set_packageid(from._internal_packageid());
  }
  if (!from._internal_name().empty()) {
    _this->_internal_set_name(from._internal_name());
  }
  if (from._internal_type() != 0) {
    _this->_internal_set_type(from._internal_type());
  }
  if (from._internal_width() != 0) {
    _this->_internal_set_width(from._internal_width());
  }
  if (from._internal_height() != 0) {
    _this->_internal_set_height(from._internal_height());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void Emoticon::CopyFrom(const Emoticon& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:AcFunDanmu.Im.Cloud.Message.Emoticon)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Emoticon::IsInitialized() const {
  return true;
}

void Emoticon::InternalSwap(Emoticon* other) {
  using std::swap;
  auto* lhs_arena = GetArenaForAllocation();
  auto* rhs_arena = other->GetArenaForAllocation();
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.bigurl_.InternalSwap(&other->_impl_.bigurl_);
  _impl_.emoticoncode_.InternalSwap(&other->_impl_.emoticoncode_);
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.id_, lhs_arena,
      &other->_impl_.id_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.packageid_, lhs_arena,
      &other->_impl_.packageid_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr::InternalSwap(
      &_impl_.name_, lhs_arena,
      &other->_impl_.name_, rhs_arena
  );
  ::PROTOBUF_NAMESPACE_ID::internal::memswap<
      PROTOBUF_FIELD_OFFSET(Emoticon, _impl_.height_)
      + sizeof(Emoticon::_impl_.height_)
      - PROTOBUF_FIELD_OFFSET(Emoticon, _impl_.type_)>(
          reinterpret_cast<char*>(&_impl_.type_),
          reinterpret_cast<char*>(&other->_impl_.type_));
}

::PROTOBUF_NAMESPACE_ID::Metadata Emoticon::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_Emoticon_2eproto_getter, &descriptor_table_Emoticon_2eproto_once,
      file_level_metadata_Emoticon_2eproto[1]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace Message
}  // namespace Cloud
}  // namespace Im
}  // namespace AcFunDanmu
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::Emoticon_Code*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::Emoticon_Code >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::Emoticon_Code >(arena);
}
template<> PROTOBUF_NOINLINE ::AcFunDanmu::Im::Cloud::Message::Emoticon*
Arena::CreateMaybeMessage< ::AcFunDanmu::Im::Cloud::Message::Emoticon >(Arena* arena) {
  return Arena::CreateMessageInternal< ::AcFunDanmu::Im::Cloud::Message::Emoticon >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
