#include "ConcreteAPIService.h"
#include <grpcpp/impl/codegen/status.h>

::grpc::Status dtop::server::ConcreteAPIService::GetServerStatus(::grpc::ServerContext *context, const ::google::protobuf::Empty *request, ::ServerStatusArrMessage *response) {
  return ::grpc::Status::OK;
}