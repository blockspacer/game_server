// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: ProtoGM.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "ProtoGM.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace ProtoGM {

namespace {

const ::google::protobuf::Descriptor* GMCmdReq_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  GMCmdReq_reflection_ = NULL;
const ::google::protobuf::Descriptor* SyncInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SyncInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_ProtoGM_2eproto() {
  protobuf_AddDesc_ProtoGM_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "ProtoGM.proto");
  GOOGLE_CHECK(file != NULL);
  GMCmdReq_descriptor_ = file->message_type(0);
  static const int GMCmdReq_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GMCmdReq, cmd_),
  };
  GMCmdReq_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      GMCmdReq_descriptor_,
      GMCmdReq::default_instance_,
      GMCmdReq_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GMCmdReq, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(GMCmdReq, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(GMCmdReq));
  SyncInfo_descriptor_ = file->message_type(1);
  static const int SyncInfo_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncInfo, common_),
  };
  SyncInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      SyncInfo_descriptor_,
      SyncInfo::default_instance_,
      SyncInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SyncInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(SyncInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_ProtoGM_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    GMCmdReq_descriptor_, &GMCmdReq::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    SyncInfo_descriptor_, &SyncInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_ProtoGM_2eproto() {
  delete GMCmdReq::default_instance_;
  delete GMCmdReq_reflection_;
  delete SyncInfo::default_instance_;
  delete SyncInfo_reflection_;
}

void protobuf_AddDesc_ProtoGM_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::DataCommon::protobuf_AddDesc_DataCommon_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rProtoGM.proto\022\007ProtoGM\032\020DataCommon.pro"
    "to\"\027\n\010GMCmdReq\022\013\n\003cmd\030\001 \002(\t\"6\n\010SyncInfo\022"
    "*\n\006common\030\001 \001(\0132\032.DataCommon.CommonItems"
    "CPP", 123);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "ProtoGM.proto", &protobuf_RegisterTypes);
  GMCmdReq::default_instance_ = new GMCmdReq();
  SyncInfo::default_instance_ = new SyncInfo();
  GMCmdReq::default_instance_->InitAsDefaultInstance();
  SyncInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_ProtoGM_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_ProtoGM_2eproto {
  StaticDescriptorInitializer_ProtoGM_2eproto() {
    protobuf_AddDesc_ProtoGM_2eproto();
  }
} static_descriptor_initializer_ProtoGM_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int GMCmdReq::kCmdFieldNumber;
#endif  // !_MSC_VER

GMCmdReq::GMCmdReq()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoGM.GMCmdReq)
}

void GMCmdReq::InitAsDefaultInstance() {
}

GMCmdReq::GMCmdReq(const GMCmdReq& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ProtoGM.GMCmdReq)
}

void GMCmdReq::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  cmd_ = const_cast< ::std::string*>(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

GMCmdReq::~GMCmdReq() {
  // @@protoc_insertion_point(destructor:ProtoGM.GMCmdReq)
  SharedDtor();
}

void GMCmdReq::SharedDtor() {
  if (cmd_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
    delete cmd_;
  }
  if (this != default_instance_) {
  }
}

void GMCmdReq::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* GMCmdReq::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GMCmdReq_descriptor_;
}

const GMCmdReq& GMCmdReq::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoGM_2eproto();
  return *default_instance_;
}

GMCmdReq* GMCmdReq::default_instance_ = NULL;

GMCmdReq* GMCmdReq::New() const {
  return new GMCmdReq;
}

void GMCmdReq::Clear() {
  if (has_cmd()) {
    if (cmd_ != &::google::protobuf::internal::GetEmptyStringAlreadyInited()) {
      cmd_->clear();
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool GMCmdReq::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoGM.GMCmdReq)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required string cmd = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_cmd()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->cmd().data(), this->cmd().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "cmd");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ProtoGM.GMCmdReq)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoGM.GMCmdReq)
  return false;
#undef DO_
}

void GMCmdReq::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoGM.GMCmdReq)
  // required string cmd = 1;
  if (has_cmd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->cmd().data(), this->cmd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "cmd");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->cmd(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtoGM.GMCmdReq)
}

::google::protobuf::uint8* GMCmdReq::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ProtoGM.GMCmdReq)
  // required string cmd = 1;
  if (has_cmd()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->cmd().data(), this->cmd().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "cmd");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->cmd(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoGM.GMCmdReq)
  return target;
}

int GMCmdReq::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required string cmd = 1;
    if (has_cmd()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->cmd());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void GMCmdReq::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const GMCmdReq* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const GMCmdReq*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void GMCmdReq::MergeFrom(const GMCmdReq& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_cmd()) {
      set_cmd(from.cmd());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void GMCmdReq::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void GMCmdReq::CopyFrom(const GMCmdReq& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool GMCmdReq::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000001) != 0x00000001) return false;

  return true;
}

void GMCmdReq::Swap(GMCmdReq* other) {
  if (other != this) {
    std::swap(cmd_, other->cmd_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata GMCmdReq::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = GMCmdReq_descriptor_;
  metadata.reflection = GMCmdReq_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int SyncInfo::kCommonFieldNumber;
#endif  // !_MSC_VER

SyncInfo::SyncInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
  // @@protoc_insertion_point(constructor:ProtoGM.SyncInfo)
}

void SyncInfo::InitAsDefaultInstance() {
  common_ = const_cast< ::DataCommon::CommonItemsCPP*>(&::DataCommon::CommonItemsCPP::default_instance());
}

SyncInfo::SyncInfo(const SyncInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:ProtoGM.SyncInfo)
}

void SyncInfo::SharedCtor() {
  _cached_size_ = 0;
  common_ = NULL;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SyncInfo::~SyncInfo() {
  // @@protoc_insertion_point(destructor:ProtoGM.SyncInfo)
  SharedDtor();
}

void SyncInfo::SharedDtor() {
  if (this != default_instance_) {
    delete common_;
  }
}

void SyncInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SyncInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SyncInfo_descriptor_;
}

const SyncInfo& SyncInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_ProtoGM_2eproto();
  return *default_instance_;
}

SyncInfo* SyncInfo::default_instance_ = NULL;

SyncInfo* SyncInfo::New() const {
  return new SyncInfo;
}

void SyncInfo::Clear() {
  if (has_common()) {
    if (common_ != NULL) common_->::DataCommon::CommonItemsCPP::Clear();
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool SyncInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:ProtoGM.SyncInfo)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional .DataCommon.CommonItemsCPP common = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
               input, mutable_common()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:ProtoGM.SyncInfo)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:ProtoGM.SyncInfo)
  return false;
#undef DO_
}

void SyncInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:ProtoGM.SyncInfo)
  // optional .DataCommon.CommonItemsCPP common = 1;
  if (has_common()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->common(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:ProtoGM.SyncInfo)
}

::google::protobuf::uint8* SyncInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:ProtoGM.SyncInfo)
  // optional .DataCommon.CommonItemsCPP common = 1;
  if (has_common()) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->common(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:ProtoGM.SyncInfo)
  return target;
}

int SyncInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional .DataCommon.CommonItemsCPP common = 1;
    if (has_common()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->common());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SyncInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const SyncInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const SyncInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void SyncInfo::MergeFrom(const SyncInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_common()) {
      mutable_common()->::DataCommon::CommonItemsCPP::MergeFrom(from.common());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void SyncInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SyncInfo::CopyFrom(const SyncInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SyncInfo::IsInitialized() const {

  if (has_common()) {
    if (!this->common().IsInitialized()) return false;
  }
  return true;
}

void SyncInfo::Swap(SyncInfo* other) {
  if (other != this) {
    std::swap(common_, other->common_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata SyncInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SyncInfo_descriptor_;
  metadata.reflection = SyncInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoGM

// @@protoc_insertion_point(global_scope)
