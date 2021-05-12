// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: echo.proto

#include "echo.pb.h"
#include "echo.grpc.pb.h"

#include <functional>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/channel_interface.h>
#include <grpcpp/impl/codegen/client_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/rpc_service_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/sync_stream.h>

static const char* EchoService_method_names[] = {
  "/EchoService/EchoString",
  "/EchoService/EchoInteger",
  "/EchoService/EchoLong",
  "/EchoService/EchoFloat",
  "/EchoService/EchoDouble",
  "/EchoService/EchoStringArray",
  "/EchoService/EchoIntegerArray",
  "/EchoService/EchoLongArray",
  "/EchoService/EchoFloatArray",
  "/EchoService/EchoDoubleArray",
};

std::unique_ptr< EchoService::Stub> EchoService::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< EchoService::Stub> stub(new EchoService::Stub(channel));
  return stub;
}

EchoService::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel)
  : channel_(channel), rpcmethod_EchoString_(EchoService_method_names[0], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoInteger_(EchoService_method_names[1], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoLong_(EchoService_method_names[2], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoFloat_(EchoService_method_names[3], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoDouble_(EchoService_method_names[4], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoStringArray_(EchoService_method_names[5], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoIntegerArray_(EchoService_method_names[6], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoLongArray_(EchoService_method_names[7], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoFloatArray_(EchoService_method_names[8], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_EchoDoubleArray_(EchoService_method_names[9], ::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status EchoService::Stub::EchoString(::grpc::ClientContext* context, const ::StringMessage& request, ::StringMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::StringMessage, ::StringMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoString_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoString(::grpc::ClientContext* context, const ::StringMessage* request, ::StringMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::StringMessage, ::StringMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoString_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoString(::grpc::ClientContext* context, const ::StringMessage* request, ::StringMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoString_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::StringMessage>* EchoService::Stub::PrepareAsyncEchoStringRaw(::grpc::ClientContext* context, const ::StringMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::StringMessage, ::StringMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoString_, context, request);
}

::grpc::ClientAsyncResponseReader< ::StringMessage>* EchoService::Stub::AsyncEchoStringRaw(::grpc::ClientContext* context, const ::StringMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoStringRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoInteger(::grpc::ClientContext* context, const ::IntegerMessage& request, ::IntegerMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::IntegerMessage, ::IntegerMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoInteger_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoInteger(::grpc::ClientContext* context, const ::IntegerMessage* request, ::IntegerMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::IntegerMessage, ::IntegerMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoInteger_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoInteger(::grpc::ClientContext* context, const ::IntegerMessage* request, ::IntegerMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoInteger_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::IntegerMessage>* EchoService::Stub::PrepareAsyncEchoIntegerRaw(::grpc::ClientContext* context, const ::IntegerMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::IntegerMessage, ::IntegerMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoInteger_, context, request);
}

::grpc::ClientAsyncResponseReader< ::IntegerMessage>* EchoService::Stub::AsyncEchoIntegerRaw(::grpc::ClientContext* context, const ::IntegerMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoIntegerRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoLong(::grpc::ClientContext* context, const ::LongMessage& request, ::LongMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::LongMessage, ::LongMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoLong_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoLong(::grpc::ClientContext* context, const ::LongMessage* request, ::LongMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::LongMessage, ::LongMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoLong_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoLong(::grpc::ClientContext* context, const ::LongMessage* request, ::LongMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoLong_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::LongMessage>* EchoService::Stub::PrepareAsyncEchoLongRaw(::grpc::ClientContext* context, const ::LongMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::LongMessage, ::LongMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoLong_, context, request);
}

::grpc::ClientAsyncResponseReader< ::LongMessage>* EchoService::Stub::AsyncEchoLongRaw(::grpc::ClientContext* context, const ::LongMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoLongRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoFloat(::grpc::ClientContext* context, const ::FloatMessage& request, ::FloatMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::FloatMessage, ::FloatMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoFloat_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoFloat(::grpc::ClientContext* context, const ::FloatMessage* request, ::FloatMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::FloatMessage, ::FloatMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoFloat_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoFloat(::grpc::ClientContext* context, const ::FloatMessage* request, ::FloatMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoFloat_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::FloatMessage>* EchoService::Stub::PrepareAsyncEchoFloatRaw(::grpc::ClientContext* context, const ::FloatMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::FloatMessage, ::FloatMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoFloat_, context, request);
}

::grpc::ClientAsyncResponseReader< ::FloatMessage>* EchoService::Stub::AsyncEchoFloatRaw(::grpc::ClientContext* context, const ::FloatMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoFloatRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoDouble(::grpc::ClientContext* context, const ::DoubleMessage& request, ::DoubleMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::DoubleMessage, ::DoubleMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoDouble_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoDouble(::grpc::ClientContext* context, const ::DoubleMessage* request, ::DoubleMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::DoubleMessage, ::DoubleMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoDouble_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoDouble(::grpc::ClientContext* context, const ::DoubleMessage* request, ::DoubleMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoDouble_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::DoubleMessage>* EchoService::Stub::PrepareAsyncEchoDoubleRaw(::grpc::ClientContext* context, const ::DoubleMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::DoubleMessage, ::DoubleMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoDouble_, context, request);
}

::grpc::ClientAsyncResponseReader< ::DoubleMessage>* EchoService::Stub::AsyncEchoDoubleRaw(::grpc::ClientContext* context, const ::DoubleMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoDoubleRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoStringArray(::grpc::ClientContext* context, const ::StringArrayMessage& request, ::StringArrayMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::StringArrayMessage, ::StringArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoStringArray_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoStringArray(::grpc::ClientContext* context, const ::StringArrayMessage* request, ::StringArrayMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::StringArrayMessage, ::StringArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoStringArray_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoStringArray(::grpc::ClientContext* context, const ::StringArrayMessage* request, ::StringArrayMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoStringArray_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::StringArrayMessage>* EchoService::Stub::PrepareAsyncEchoStringArrayRaw(::grpc::ClientContext* context, const ::StringArrayMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::StringArrayMessage, ::StringArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoStringArray_, context, request);
}

::grpc::ClientAsyncResponseReader< ::StringArrayMessage>* EchoService::Stub::AsyncEchoStringArrayRaw(::grpc::ClientContext* context, const ::StringArrayMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoStringArrayRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoIntegerArray(::grpc::ClientContext* context, const ::IntegerArrayMessage& request, ::IntegerArrayMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::IntegerArrayMessage, ::IntegerArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoIntegerArray_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoIntegerArray(::grpc::ClientContext* context, const ::IntegerArrayMessage* request, ::IntegerArrayMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::IntegerArrayMessage, ::IntegerArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoIntegerArray_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoIntegerArray(::grpc::ClientContext* context, const ::IntegerArrayMessage* request, ::IntegerArrayMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoIntegerArray_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::IntegerArrayMessage>* EchoService::Stub::PrepareAsyncEchoIntegerArrayRaw(::grpc::ClientContext* context, const ::IntegerArrayMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::IntegerArrayMessage, ::IntegerArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoIntegerArray_, context, request);
}

::grpc::ClientAsyncResponseReader< ::IntegerArrayMessage>* EchoService::Stub::AsyncEchoIntegerArrayRaw(::grpc::ClientContext* context, const ::IntegerArrayMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoIntegerArrayRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoLongArray(::grpc::ClientContext* context, const ::LongArrayMessage& request, ::LongArrayMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::LongArrayMessage, ::LongArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoLongArray_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoLongArray(::grpc::ClientContext* context, const ::LongArrayMessage* request, ::LongArrayMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::LongArrayMessage, ::LongArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoLongArray_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoLongArray(::grpc::ClientContext* context, const ::LongArrayMessage* request, ::LongArrayMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoLongArray_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::LongArrayMessage>* EchoService::Stub::PrepareAsyncEchoLongArrayRaw(::grpc::ClientContext* context, const ::LongArrayMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::LongArrayMessage, ::LongArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoLongArray_, context, request);
}

::grpc::ClientAsyncResponseReader< ::LongArrayMessage>* EchoService::Stub::AsyncEchoLongArrayRaw(::grpc::ClientContext* context, const ::LongArrayMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoLongArrayRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoFloatArray(::grpc::ClientContext* context, const ::FloatArrayMessage& request, ::FloatArrayMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::FloatArrayMessage, ::FloatArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoFloatArray_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoFloatArray(::grpc::ClientContext* context, const ::FloatArrayMessage* request, ::FloatArrayMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::FloatArrayMessage, ::FloatArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoFloatArray_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoFloatArray(::grpc::ClientContext* context, const ::FloatArrayMessage* request, ::FloatArrayMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoFloatArray_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::FloatArrayMessage>* EchoService::Stub::PrepareAsyncEchoFloatArrayRaw(::grpc::ClientContext* context, const ::FloatArrayMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::FloatArrayMessage, ::FloatArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoFloatArray_, context, request);
}

::grpc::ClientAsyncResponseReader< ::FloatArrayMessage>* EchoService::Stub::AsyncEchoFloatArrayRaw(::grpc::ClientContext* context, const ::FloatArrayMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoFloatArrayRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status EchoService::Stub::EchoDoubleArray(::grpc::ClientContext* context, const ::DoubleArrayMessage& request, ::DoubleArrayMessage* response) {
  return ::grpc::internal::BlockingUnaryCall< ::DoubleArrayMessage, ::DoubleArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_EchoDoubleArray_, context, request, response);
}

void EchoService::Stub::experimental_async::EchoDoubleArray(::grpc::ClientContext* context, const ::DoubleArrayMessage* request, ::DoubleArrayMessage* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::DoubleArrayMessage, ::DoubleArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoDoubleArray_, context, request, response, std::move(f));
}

void EchoService::Stub::experimental_async::EchoDoubleArray(::grpc::ClientContext* context, const ::DoubleArrayMessage* request, ::DoubleArrayMessage* response, ::grpc::experimental::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_EchoDoubleArray_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::DoubleArrayMessage>* EchoService::Stub::PrepareAsyncEchoDoubleArrayRaw(::grpc::ClientContext* context, const ::DoubleArrayMessage& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::DoubleArrayMessage, ::DoubleArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_EchoDoubleArray_, context, request);
}

::grpc::ClientAsyncResponseReader< ::DoubleArrayMessage>* EchoService::Stub::AsyncEchoDoubleArrayRaw(::grpc::ClientContext* context, const ::DoubleArrayMessage& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncEchoDoubleArrayRaw(context, request, cq);
  result->StartCall();
  return result;
}

EchoService::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::StringMessage, ::StringMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::StringMessage* req,
             ::StringMessage* resp) {
               return service->EchoString(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::IntegerMessage, ::IntegerMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::IntegerMessage* req,
             ::IntegerMessage* resp) {
               return service->EchoInteger(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::LongMessage, ::LongMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::LongMessage* req,
             ::LongMessage* resp) {
               return service->EchoLong(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::FloatMessage, ::FloatMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::FloatMessage* req,
             ::FloatMessage* resp) {
               return service->EchoFloat(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::DoubleMessage, ::DoubleMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::DoubleMessage* req,
             ::DoubleMessage* resp) {
               return service->EchoDouble(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::StringArrayMessage, ::StringArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::StringArrayMessage* req,
             ::StringArrayMessage* resp) {
               return service->EchoStringArray(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::IntegerArrayMessage, ::IntegerArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::IntegerArrayMessage* req,
             ::IntegerArrayMessage* resp) {
               return service->EchoIntegerArray(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[7],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::LongArrayMessage, ::LongArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::LongArrayMessage* req,
             ::LongArrayMessage* resp) {
               return service->EchoLongArray(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[8],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::FloatArrayMessage, ::FloatArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::FloatArrayMessage* req,
             ::FloatArrayMessage* resp) {
               return service->EchoFloatArray(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      EchoService_method_names[9],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< EchoService::Service, ::DoubleArrayMessage, ::DoubleArrayMessage, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](EchoService::Service* service,
             ::grpc::ServerContext* ctx,
             const ::DoubleArrayMessage* req,
             ::DoubleArrayMessage* resp) {
               return service->EchoDoubleArray(ctx, req, resp);
             }, this)));
}

EchoService::Service::~Service() {
}

::grpc::Status EchoService::Service::EchoString(::grpc::ServerContext* context, const ::StringMessage* request, ::StringMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoInteger(::grpc::ServerContext* context, const ::IntegerMessage* request, ::IntegerMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoLong(::grpc::ServerContext* context, const ::LongMessage* request, ::LongMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoFloat(::grpc::ServerContext* context, const ::FloatMessage* request, ::FloatMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoDouble(::grpc::ServerContext* context, const ::DoubleMessage* request, ::DoubleMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoStringArray(::grpc::ServerContext* context, const ::StringArrayMessage* request, ::StringArrayMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoIntegerArray(::grpc::ServerContext* context, const ::IntegerArrayMessage* request, ::IntegerArrayMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoLongArray(::grpc::ServerContext* context, const ::LongArrayMessage* request, ::LongArrayMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoFloatArray(::grpc::ServerContext* context, const ::FloatArrayMessage* request, ::FloatArrayMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status EchoService::Service::EchoDoubleArray(::grpc::ServerContext* context, const ::DoubleArrayMessage* request, ::DoubleArrayMessage* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


