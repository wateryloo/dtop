#include "ConcreteAPIServiceClient.h"
#include "Client.h"

void dtop::client::ConcreteAPIServiceClient::get_status_arr() {
  grpc::ClientContext context;
  auto empty = ::google::protobuf::Empty();
  ::ServerStatusArrMessage response;
  ::grpc::Status status = this->stub->GetServerStatus(&context, empty, &response);
}