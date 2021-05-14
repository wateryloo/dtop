// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: api.proto
#ifndef GRPC_api_2eproto__INCLUDED
#define GRPC_api_2eproto__INCLUDED

#include <grpc/impl/codegen/port_platform.h>
#include <grpcpp/impl/codegen/async_generic_service.h>
#include <grpcpp/impl/codegen/async_stream.h>
#include <grpcpp/impl/codegen/async_unary_call.h>
#include <grpcpp/impl/codegen/client_callback.h>
#include <grpcpp/impl/codegen/client_context.h>
#include <grpcpp/impl/codegen/completion_queue.h>
#include <grpcpp/impl/codegen/message_allocator.h>
#include <grpcpp/impl/codegen/method_handler.h>
#include <grpcpp/impl/codegen/proto_utils.h>
#include <grpcpp/impl/codegen/rpc_method.h>
#include <grpcpp/impl/codegen/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/impl/codegen/server_context.h>
#include <grpcpp/impl/codegen/service_type.h>
#include <grpcpp/impl/codegen/status.h>
#include <grpcpp/impl/codegen/stub_options.h>
#include <grpcpp/impl/codegen/sync_stream.h>

#include <functional>

#include "api.pb.h"

class APIService final {
 public:
  static constexpr char const* service_full_name() { return "APIService"; }
  class StubInterface {
   public:
    virtual ~StubInterface() {}
    virtual ::grpc::Status GetAllMachines(
        ::grpc::ClientContext* context,
        const ::google::protobuf::Empty& request,
        ::MachineArrMessage* response) = 0;
    std::unique_ptr<
        ::grpc::ClientAsyncResponseReaderInterface<::MachineArrMessage>>
    AsyncGetAllMachines(::grpc::ClientContext* context,
                        const ::google::protobuf::Empty& request,
                        ::grpc::CompletionQueue* cq) {
      return std::unique_ptr<
          ::grpc::ClientAsyncResponseReaderInterface<::MachineArrMessage>>(
          AsyncGetAllMachinesRaw(context, request, cq));
    }
    std::unique_ptr<
        ::grpc::ClientAsyncResponseReaderInterface<::MachineArrMessage>>
    PrepareAsyncGetAllMachines(::grpc::ClientContext* context,
                               const ::google::protobuf::Empty& request,
                               ::grpc::CompletionQueue* cq) {
      return std::unique_ptr<
          ::grpc::ClientAsyncResponseReaderInterface<::MachineArrMessage>>(
          PrepareAsyncGetAllMachinesRaw(context, request, cq));
    }
    class experimental_async_interface {
     public:
      virtual ~experimental_async_interface() {}
      virtual void GetAllMachines(::grpc::ClientContext* context,
                                  const ::google::protobuf::Empty* request,
                                  ::MachineArrMessage* response,
                                  std::function<void(::grpc::Status)>) = 0;
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      virtual void GetAllMachines(::grpc::ClientContext* context,
                                  const ::google::protobuf::Empty* request,
                                  ::MachineArrMessage* response,
                                  ::grpc::ClientUnaryReactor* reactor) = 0;
#else
      virtual void GetAllMachines(
          ::grpc::ClientContext* context,
          const ::google::protobuf::Empty* request,
          ::MachineArrMessage* response,
          ::grpc::experimental::ClientUnaryReactor* reactor) = 0;
#endif
    };
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    typedef class experimental_async_interface async_interface;
#endif
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    async_interface* async() { return experimental_async(); }
#endif
    virtual class experimental_async_interface* experimental_async() {
      return nullptr;
    }

   private:
    virtual ::grpc::ClientAsyncResponseReaderInterface<::MachineArrMessage>*
    AsyncGetAllMachinesRaw(::grpc::ClientContext* context,
                           const ::google::protobuf::Empty& request,
                           ::grpc::CompletionQueue* cq) = 0;
    virtual ::grpc::ClientAsyncResponseReaderInterface<::MachineArrMessage>*
    PrepareAsyncGetAllMachinesRaw(::grpc::ClientContext* context,
                                  const ::google::protobuf::Empty& request,
                                  ::grpc::CompletionQueue* cq) = 0;
  };
  class Stub final : public StubInterface {
   public:
    Stub(const std::shared_ptr<::grpc::ChannelInterface>& channel);
    ::grpc::Status GetAllMachines(::grpc::ClientContext* context,
                                  const ::google::protobuf::Empty& request,
                                  ::MachineArrMessage* response) override;
    std::unique_ptr<::grpc::ClientAsyncResponseReader<::MachineArrMessage>>
    AsyncGetAllMachines(::grpc::ClientContext* context,
                        const ::google::protobuf::Empty& request,
                        ::grpc::CompletionQueue* cq) {
      return std::unique_ptr<
          ::grpc::ClientAsyncResponseReader<::MachineArrMessage>>(
          AsyncGetAllMachinesRaw(context, request, cq));
    }
    std::unique_ptr<::grpc::ClientAsyncResponseReader<::MachineArrMessage>>
    PrepareAsyncGetAllMachines(::grpc::ClientContext* context,
                               const ::google::protobuf::Empty& request,
                               ::grpc::CompletionQueue* cq) {
      return std::unique_ptr<
          ::grpc::ClientAsyncResponseReader<::MachineArrMessage>>(
          PrepareAsyncGetAllMachinesRaw(context, request, cq));
    }
    class experimental_async final
        : public StubInterface::experimental_async_interface {
     public:
      void GetAllMachines(::grpc::ClientContext* context,
                          const ::google::protobuf::Empty* request,
                          ::MachineArrMessage* response,
                          std::function<void(::grpc::Status)>) override;
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      void GetAllMachines(::grpc::ClientContext* context,
                          const ::google::protobuf::Empty* request,
                          ::MachineArrMessage* response,
                          ::grpc::ClientUnaryReactor* reactor) override;
#else
      void GetAllMachines(
          ::grpc::ClientContext* context,
          const ::google::protobuf::Empty* request,
          ::MachineArrMessage* response,
          ::grpc::experimental::ClientUnaryReactor* reactor) override;
#endif
     private:
      friend class Stub;
      explicit experimental_async(Stub* stub) : stub_(stub) {}
      Stub* stub() { return stub_; }
      Stub* stub_;
    };
    class experimental_async_interface* experimental_async() override {
      return &async_stub_;
    }

   private:
    std::shared_ptr<::grpc::ChannelInterface> channel_;
    class experimental_async async_stub_ {
      this
    };
    ::grpc::ClientAsyncResponseReader<::MachineArrMessage>*
    AsyncGetAllMachinesRaw(::grpc::ClientContext* context,
                           const ::google::protobuf::Empty& request,
                           ::grpc::CompletionQueue* cq) override;
    ::grpc::ClientAsyncResponseReader<::MachineArrMessage>*
    PrepareAsyncGetAllMachinesRaw(::grpc::ClientContext* context,
                                  const ::google::protobuf::Empty& request,
                                  ::grpc::CompletionQueue* cq) override;
    const ::grpc::internal::RpcMethod rpcmethod_GetAllMachines_;
  };
  static std::unique_ptr<Stub> NewStub(
      const std::shared_ptr<::grpc::ChannelInterface>& channel,
      const ::grpc::StubOptions& options = ::grpc::StubOptions());

  class Service : public ::grpc::Service {
   public:
    Service();
    virtual ~Service();
    virtual ::grpc::Status GetAllMachines(
        ::grpc::ServerContext* context,
        const ::google::protobuf::Empty* request,
        ::MachineArrMessage* response);
  };
  template <class BaseClass>
  class WithAsyncMethod_GetAllMachines : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}

   public:
    WithAsyncMethod_GetAllMachines() { ::grpc::Service::MarkMethodAsync(0); }
    ~WithAsyncMethod_GetAllMachines() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetAllMachines(::grpc::ServerContext* /*context*/,
                                  const ::google::protobuf::Empty* /*request*/,
                                  ::MachineArrMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetAllMachines(
        ::grpc::ServerContext* context, ::google::protobuf::Empty* request,
        ::grpc::ServerAsyncResponseWriter<::MachineArrMessage>* response,
        ::grpc::CompletionQueue* new_call_cq,
        ::grpc::ServerCompletionQueue* notification_cq, void* tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response,
                                         new_call_cq, notification_cq, tag);
    }
  };
  typedef WithAsyncMethod_GetAllMachines<Service> AsyncService;
  template <class BaseClass>
  class ExperimentalWithCallbackMethod_GetAllMachines : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}

   public:
    ExperimentalWithCallbackMethod_GetAllMachines() {
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
#else
      ::grpc::Service::experimental().
#endif
          MarkMethodCallback(
              0, new ::grpc::internal::CallbackUnaryHandler<
                     ::google::protobuf::Empty, ::MachineArrMessage>(
                     [this](
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                         ::grpc::CallbackServerContext*
#else
                         ::grpc::experimental::CallbackServerContext*
#endif
                             context,
                         const ::google::protobuf::Empty* request,
                         ::MachineArrMessage* response) {
                       return this->GetAllMachines(context, request, response);
                     }));
    }
    void SetMessageAllocatorFor_GetAllMachines(
        ::grpc::experimental::MessageAllocator<
            ::google::protobuf::Empty, ::MachineArrMessage>* allocator) {
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::internal::MethodHandler* const handler =
          ::grpc::Service::GetHandler(0);
#else
      ::grpc::internal::MethodHandler* const handler =
          ::grpc::Service::experimental().GetHandler(0);
#endif
      static_cast<::grpc::internal::CallbackUnaryHandler<
          ::google::protobuf::Empty, ::MachineArrMessage>*>(handler)
          ->SetMessageAllocator(allocator);
    }
    ~ExperimentalWithCallbackMethod_GetAllMachines() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetAllMachines(::grpc::ServerContext* /*context*/,
                                  const ::google::protobuf::Empty* /*request*/,
                                  ::MachineArrMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetAllMachines(
        ::grpc::CallbackServerContext* /*context*/,
        const ::google::protobuf::Empty* /*request*/,
        ::MachineArrMessage* /*response*/)
#else
    virtual ::grpc::experimental::ServerUnaryReactor* GetAllMachines(
        ::grpc::experimental::CallbackServerContext* /*context*/,
        const ::google::protobuf::Empty* /*request*/,
        ::MachineArrMessage* /*response*/)
#endif
    {
      return nullptr;
    }
  };
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
  typedef ExperimentalWithCallbackMethod_GetAllMachines<Service>
      CallbackService;
#endif

  typedef ExperimentalWithCallbackMethod_GetAllMachines<Service>
      ExperimentalCallbackService;
  template <class BaseClass>
  class WithGenericMethod_GetAllMachines : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}

   public:
    WithGenericMethod_GetAllMachines() {
      ::grpc::Service::MarkMethodGeneric(0);
    }
    ~WithGenericMethod_GetAllMachines() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetAllMachines(::grpc::ServerContext* /*context*/,
                                  const ::google::protobuf::Empty* /*request*/,
                                  ::MachineArrMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
  };
  template <class BaseClass>
  class WithRawMethod_GetAllMachines : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}

   public:
    WithRawMethod_GetAllMachines() { ::grpc::Service::MarkMethodRaw(0); }
    ~WithRawMethod_GetAllMachines() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetAllMachines(::grpc::ServerContext* /*context*/,
                                  const ::google::protobuf::Empty* /*request*/,
                                  ::MachineArrMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    void RequestGetAllMachines(
        ::grpc::ServerContext* context, ::grpc::ByteBuffer* request,
        ::grpc::ServerAsyncResponseWriter<::grpc::ByteBuffer>* response,
        ::grpc::CompletionQueue* new_call_cq,
        ::grpc::ServerCompletionQueue* notification_cq, void* tag) {
      ::grpc::Service::RequestAsyncUnary(0, context, request, response,
                                         new_call_cq, notification_cq, tag);
    }
  };
  template <class BaseClass>
  class ExperimentalWithRawCallbackMethod_GetAllMachines : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}

   public:
    ExperimentalWithRawCallbackMethod_GetAllMachines() {
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
      ::grpc::Service::
#else
      ::grpc::Service::experimental().
#endif
          MarkMethodRawCallback(
              0, new ::grpc::internal::CallbackUnaryHandler<::grpc::ByteBuffer,
                                                            ::grpc::ByteBuffer>(
                     [this](
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
                         ::grpc::CallbackServerContext*
#else
                         ::grpc::experimental::CallbackServerContext*
#endif
                             context,
                         const ::grpc::ByteBuffer* request,
                         ::grpc::ByteBuffer* response) {
                       return this->GetAllMachines(context, request, response);
                     }));
    }
    ~ExperimentalWithRawCallbackMethod_GetAllMachines() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable synchronous version of this method
    ::grpc::Status GetAllMachines(::grpc::ServerContext* /*context*/,
                                  const ::google::protobuf::Empty* /*request*/,
                                  ::MachineArrMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
#ifdef GRPC_CALLBACK_API_NONEXPERIMENTAL
    virtual ::grpc::ServerUnaryReactor* GetAllMachines(
        ::grpc::CallbackServerContext* /*context*/,
        const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
#else
    virtual ::grpc::experimental::ServerUnaryReactor* GetAllMachines(
        ::grpc::experimental::CallbackServerContext* /*context*/,
        const ::grpc::ByteBuffer* /*request*/, ::grpc::ByteBuffer* /*response*/)
#endif
    {
      return nullptr;
    }
  };
  template <class BaseClass>
  class WithStreamedUnaryMethod_GetAllMachines : public BaseClass {
   private:
    void BaseClassMustBeDerivedFromService(const Service* /*service*/) {}

   public:
    WithStreamedUnaryMethod_GetAllMachines() {
      ::grpc::Service::MarkMethodStreamed(
          0,
          new ::grpc::internal::StreamedUnaryHandler<::google::protobuf::Empty,
                                                     ::MachineArrMessage>(
              [this](
                  ::grpc::ServerContext* context,
                  ::grpc::ServerUnaryStreamer<::google::protobuf::Empty,
                                              ::MachineArrMessage>* streamer) {
                return this->StreamedGetAllMachines(context, streamer);
              }));
    }
    ~WithStreamedUnaryMethod_GetAllMachines() override {
      BaseClassMustBeDerivedFromService(this);
    }
    // disable regular version of this method
    ::grpc::Status GetAllMachines(::grpc::ServerContext* /*context*/,
                                  const ::google::protobuf::Empty* /*request*/,
                                  ::MachineArrMessage* /*response*/) override {
      abort();
      return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
    }
    // replace default version of method with streamed unary
    virtual ::grpc::Status StreamedGetAllMachines(
        ::grpc::ServerContext* context,
        ::grpc::ServerUnaryStreamer<::google::protobuf::Empty,
                                    ::MachineArrMessage>*
            server_unary_streamer) = 0;
  };
  typedef WithStreamedUnaryMethod_GetAllMachines<Service> StreamedUnaryService;
  typedef Service SplitStreamedService;
  typedef WithStreamedUnaryMethod_GetAllMachines<Service> StreamedService;
};

#endif  // GRPC_api_2eproto__INCLUDED
