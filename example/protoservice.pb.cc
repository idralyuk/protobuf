// Generated by the protocol buffer compiler.  DO NOT EDIT!

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "protoservice.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace pwd {

namespace {

const ::google::protobuf::Descriptor* EntriesRequest_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EntriesRequest_reflection_ = NULL;
const ::google::protobuf::Descriptor* Entry_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  Entry_reflection_ = NULL;
const ::google::protobuf::Descriptor* EntriesResponse_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  EntriesResponse_reflection_ = NULL;
const ::google::protobuf::ServiceDescriptor* Pwd_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_protoservice_2eproto() {
  protobuf_AddDesc_protoservice_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "protoservice.proto");
  GOOGLE_CHECK(file != NULL);
  EntriesRequest_descriptor_ = file->message_type(0);
  static const int EntriesRequest_offsets_[1] = {
  };
  EntriesRequest_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EntriesRequest_descriptor_,
      EntriesRequest::default_instance_,
      EntriesRequest_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntriesRequest, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntriesRequest, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EntriesRequest));
  Entry_descriptor_ = file->message_type(1);
  static const int Entry_offsets_[5] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entry, name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entry, uid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entry, gid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entry, home_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entry, shell_),
  };
  Entry_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      Entry_descriptor_,
      Entry::default_instance_,
      Entry_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entry, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(Entry, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(Entry));
  EntriesResponse_descriptor_ = file->message_type(2);
  static const int EntriesResponse_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntriesResponse, entry_),
  };
  EntriesResponse_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      EntriesResponse_descriptor_,
      EntriesResponse::default_instance_,
      EntriesResponse_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntriesResponse, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(EntriesResponse, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(EntriesResponse));
  Pwd_descriptor_ = file->service(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_protoservice_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EntriesRequest_descriptor_, &EntriesRequest::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    Entry_descriptor_, &Entry::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    EntriesResponse_descriptor_, &EntriesResponse::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_protoservice_2eproto() {
  delete EntriesRequest::default_instance_;
  delete EntriesRequest_reflection_;
  delete Entry::default_instance_;
  delete Entry_reflection_;
  delete EntriesResponse::default_instance_;
  delete EntriesResponse_reflection_;
}

void protobuf_AddDesc_protoservice_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\022protoservice.proto\022\003pwd\"\020\n\016EntriesRequ"
    "est\"L\n\005Entry\022\014\n\004name\030\001 \001(\t\022\013\n\003uid\030\002 \001(\005\022"
    "\013\n\003gid\030\003 \001(\005\022\014\n\004home\030\004 \001(\t\022\r\n\005shell\030\005 \001("
    "\t\",\n\017EntriesResponse\022\031\n\005entry\030\001 \003(\0132\n.pw"
    "d.Entry2>\n\003Pwd\0227\n\nGetEntries\022\023.pwd.Entri"
    "esRequest\032\024.pwd.EntriesResponseB\003\200\001\001", 236);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "protoservice.proto", &protobuf_RegisterTypes);
  EntriesRequest::default_instance_ = new EntriesRequest();
  Entry::default_instance_ = new Entry();
  EntriesResponse::default_instance_ = new EntriesResponse();
  EntriesRequest::default_instance_->InitAsDefaultInstance();
  Entry::default_instance_->InitAsDefaultInstance();
  EntriesResponse::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_protoservice_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_protoservice_2eproto {
  StaticDescriptorInitializer_protoservice_2eproto() {
    protobuf_AddDesc_protoservice_2eproto();
  }
} static_descriptor_initializer_protoservice_2eproto_;


// ===================================================================

#ifndef _MSC_VER
#endif  // !_MSC_VER

EntriesRequest::EntriesRequest()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void EntriesRequest::InitAsDefaultInstance() {
}

EntriesRequest::EntriesRequest(const EntriesRequest& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void EntriesRequest::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EntriesRequest::~EntriesRequest() {
  SharedDtor();
}

void EntriesRequest::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EntriesRequest::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EntriesRequest::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EntriesRequest_descriptor_;
}

const EntriesRequest& EntriesRequest::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protoservice_2eproto();  return *default_instance_;
}

EntriesRequest* EntriesRequest::default_instance_ = NULL;

EntriesRequest* EntriesRequest::New() const {
  return new EntriesRequest;
}

void EntriesRequest::Clear() {
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EntriesRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
        ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
      return true;
    }
    DO_(::google::protobuf::internal::WireFormat::SkipField(
          input, tag, mutable_unknown_fields()));
  }
  return true;
#undef DO_
}

void EntriesRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* EntriesRequest::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int EntriesRequest::ByteSize() const {
  int total_size = 0;
  
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

void EntriesRequest::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EntriesRequest* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EntriesRequest*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EntriesRequest::MergeFrom(const EntriesRequest& from) {
  GOOGLE_CHECK_NE(&from, this);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EntriesRequest::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntriesRequest::CopyFrom(const EntriesRequest& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntriesRequest::IsInitialized() const {
  
  return true;
}

void EntriesRequest::Swap(EntriesRequest* other) {
  if (other != this) {
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EntriesRequest::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EntriesRequest_descriptor_;
  metadata.reflection = EntriesRequest_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int Entry::kNameFieldNumber;
const int Entry::kUidFieldNumber;
const int Entry::kGidFieldNumber;
const int Entry::kHomeFieldNumber;
const int Entry::kShellFieldNumber;
#endif  // !_MSC_VER

Entry::Entry()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void Entry::InitAsDefaultInstance() {
}

Entry::Entry(const Entry& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void Entry::SharedCtor() {
  _cached_size_ = 0;
  name_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  uid_ = 0;
  gid_ = 0;
  home_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  shell_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

Entry::~Entry() {
  SharedDtor();
}

void Entry::SharedDtor() {
  if (name_ != &::google::protobuf::internal::kEmptyString) {
    delete name_;
  }
  if (home_ != &::google::protobuf::internal::kEmptyString) {
    delete home_;
  }
  if (shell_ != &::google::protobuf::internal::kEmptyString) {
    delete shell_;
  }
  if (this != default_instance_) {
  }
}

void Entry::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* Entry::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Entry_descriptor_;
}

const Entry& Entry::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protoservice_2eproto();  return *default_instance_;
}

Entry* Entry::default_instance_ = NULL;

Entry* Entry::New() const {
  return new Entry;
}

void Entry::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (has_name()) {
      if (name_ != &::google::protobuf::internal::kEmptyString) {
        name_->clear();
      }
    }
    uid_ = 0;
    gid_ = 0;
    if (has_home()) {
      if (home_ != &::google::protobuf::internal::kEmptyString) {
        home_->clear();
      }
    }
    if (has_shell()) {
      if (shell_ != &::google::protobuf::internal::kEmptyString) {
        shell_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool Entry::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string name = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->name().data(), this->name().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_uid;
        break;
      }
      
      // optional int32 uid = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_uid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &uid_)));
          set_has_uid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(24)) goto parse_gid;
        break;
      }
      
      // optional int32 gid = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_gid:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &gid_)));
          set_has_gid();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(34)) goto parse_home;
        break;
      }
      
      // optional string home = 4;
      case 4: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_home:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_home()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->home().data(), this->home().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(42)) goto parse_shell;
        break;
      }
      
      // optional string shell = 5;
      case 5: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_shell:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_shell()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->shell().data(), this->shell().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void Entry::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      1, this->name(), output);
  }
  
  // optional int32 uid = 2;
  if (has_uid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->uid(), output);
  }
  
  // optional int32 gid = 3;
  if (has_gid()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->gid(), output);
  }
  
  // optional string home = 4;
  if (has_home()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->home().data(), this->home().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      4, this->home(), output);
  }
  
  // optional string shell = 5;
  if (has_shell()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->shell().data(), this->shell().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      5, this->shell(), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* Entry::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional string name = 1;
  if (has_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->name().data(), this->name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->name(), target);
  }
  
  // optional int32 uid = 2;
  if (has_uid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->uid(), target);
  }
  
  // optional int32 gid = 3;
  if (has_gid()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->gid(), target);
  }
  
  // optional string home = 4;
  if (has_home()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->home().data(), this->home().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->home(), target);
  }
  
  // optional string shell = 5;
  if (has_shell()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->shell().data(), this->shell().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        5, this->shell(), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int Entry::ByteSize() const {
  int total_size = 0;
  
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional string name = 1;
    if (has_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->name());
    }
    
    // optional int32 uid = 2;
    if (has_uid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->uid());
    }
    
    // optional int32 gid = 3;
    if (has_gid()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->gid());
    }
    
    // optional string home = 4;
    if (has_home()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->home());
    }
    
    // optional string shell = 5;
    if (has_shell()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->shell());
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

void Entry::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const Entry* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const Entry*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void Entry::MergeFrom(const Entry& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_name()) {
      set_name(from.name());
    }
    if (from.has_uid()) {
      set_uid(from.uid());
    }
    if (from.has_gid()) {
      set_gid(from.gid());
    }
    if (from.has_home()) {
      set_home(from.home());
    }
    if (from.has_shell()) {
      set_shell(from.shell());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void Entry::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void Entry::CopyFrom(const Entry& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool Entry::IsInitialized() const {
  
  return true;
}

void Entry::Swap(Entry* other) {
  if (other != this) {
    std::swap(name_, other->name_);
    std::swap(uid_, other->uid_);
    std::swap(gid_, other->gid_);
    std::swap(home_, other->home_);
    std::swap(shell_, other->shell_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata Entry::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = Entry_descriptor_;
  metadata.reflection = Entry_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int EntriesResponse::kEntryFieldNumber;
#endif  // !_MSC_VER

EntriesResponse::EntriesResponse()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void EntriesResponse::InitAsDefaultInstance() {
}

EntriesResponse::EntriesResponse(const EntriesResponse& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void EntriesResponse::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

EntriesResponse::~EntriesResponse() {
  SharedDtor();
}

void EntriesResponse::SharedDtor() {
  if (this != default_instance_) {
  }
}

void EntriesResponse::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* EntriesResponse::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EntriesResponse_descriptor_;
}

const EntriesResponse& EntriesResponse::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_protoservice_2eproto();  return *default_instance_;
}

EntriesResponse* EntriesResponse::default_instance_ = NULL;

EntriesResponse* EntriesResponse::New() const {
  return new EntriesResponse;
}

void EntriesResponse::Clear() {
  entry_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool EntriesResponse::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .pwd.Entry entry = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_entry:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_entry()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_entry;
        if (input->ExpectAtEnd()) return true;
        break;
      }
      
      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void EntriesResponse::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .pwd.Entry entry = 1;
  for (int i = 0; i < this->entry_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->entry(i), output);
  }
  
  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* EntriesResponse::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .pwd.Entry entry = 1;
  for (int i = 0; i < this->entry_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->entry(i), target);
  }
  
  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int EntriesResponse::ByteSize() const {
  int total_size = 0;
  
  // repeated .pwd.Entry entry = 1;
  total_size += 1 * this->entry_size();
  for (int i = 0; i < this->entry_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->entry(i));
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

void EntriesResponse::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const EntriesResponse* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const EntriesResponse*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void EntriesResponse::MergeFrom(const EntriesResponse& from) {
  GOOGLE_CHECK_NE(&from, this);
  entry_.MergeFrom(from.entry_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void EntriesResponse::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void EntriesResponse::CopyFrom(const EntriesResponse& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool EntriesResponse::IsInitialized() const {
  
  return true;
}

void EntriesResponse::Swap(EntriesResponse* other) {
  if (other != this) {
    entry_.Swap(&other->entry_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata EntriesResponse::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = EntriesResponse_descriptor_;
  metadata.reflection = EntriesResponse_reflection_;
  return metadata;
}


// ===================================================================

Pwd::~Pwd() {}

const ::google::protobuf::ServiceDescriptor* Pwd::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return Pwd_descriptor_;
}

const ::google::protobuf::ServiceDescriptor* Pwd::GetDescriptor() {
  protobuf_AssignDescriptorsOnce();
  return Pwd_descriptor_;
}

void Pwd::GetEntries(::google::protobuf::RpcController* controller,
                         const ::pwd::EntriesRequest*,
                         ::pwd::EntriesResponse*,
                         ::google::protobuf::Closure* done) {
  controller->SetFailed("Method GetEntries() not implemented.");
  done->Run();
}

void Pwd::CallMethod(const ::google::protobuf::MethodDescriptor* method,
                             ::google::protobuf::RpcController* controller,
                             const ::google::protobuf::Message* request,
                             ::google::protobuf::Message* response,
                             ::google::protobuf::Closure* done) {
  GOOGLE_DCHECK_EQ(method->service(), Pwd_descriptor_);
  switch(method->index()) {
    case 0:
      GetEntries(controller,
             ::google::protobuf::down_cast<const ::pwd::EntriesRequest*>(request),
             ::google::protobuf::down_cast< ::pwd::EntriesResponse*>(response),
             done);
      break;
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      break;
  }
}

const ::google::protobuf::Message& Pwd::GetRequestPrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::pwd::EntriesRequest::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

const ::google::protobuf::Message& Pwd::GetResponsePrototype(
    const ::google::protobuf::MethodDescriptor* method) const {
  GOOGLE_DCHECK_EQ(method->service(), descriptor());
  switch(method->index()) {
    case 0:
      return ::pwd::EntriesResponse::default_instance();
    default:
      GOOGLE_LOG(FATAL) << "Bad method index; this should never happen.";
      return *reinterpret_cast< ::google::protobuf::Message*>(NULL);
  }
}

Pwd_Stub::Pwd_Stub(::google::protobuf::RpcChannel* channel)
  : channel_(channel), owns_channel_(false) {}
Pwd_Stub::Pwd_Stub(
    ::google::protobuf::RpcChannel* channel,
    ::google::protobuf::Service::ChannelOwnership ownership)
  : channel_(channel),
    owns_channel_(ownership == ::google::protobuf::Service::STUB_OWNS_CHANNEL) {}
Pwd_Stub::~Pwd_Stub() {
  if (owns_channel_) delete channel_;
}

void Pwd_Stub::GetEntries(::google::protobuf::RpcController* controller,
                              const ::pwd::EntriesRequest* request,
                              ::pwd::EntriesResponse* response,
                              ::google::protobuf::Closure* done) {
  channel_->CallMethod(descriptor()->method(0),
                       controller, request, response, done);
}

// @@protoc_insertion_point(namespace_scope)

}  // namespace pwd

// @@protoc_insertion_point(global_scope)
