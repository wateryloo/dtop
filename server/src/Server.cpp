#include "Server.h"

#include <grpcpp/ext/proto_server_reflection_plugin.h>
#include <grpcpp/health_check_service_interface.h>
#include <grpcpp/security/credentials.h>
#include <grpcpp/server_builder.h>

#include <memory>
#include <sstream>
#include <string>

std::string dtop::server::Server::to_string() const {
  return this->server_property->to_string();
}

std::string dtop::server::Server::get_ip() const {
  return this->server_property->get_ip();
}

int dtop::server::Server::get_port() const {
  return this->server_property->get_port();
}

std::string dtop::server::Server::get_addr() const {
  return this->server_property->get_addr();
}

void dtop::server::Server::run() {
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  this->grpc_service = std::make_unique<ConcreteGRPCService>();
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  grpc::EnableDefaultHealthCheckService(true);
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  grpc::reflection::InitProtoReflectionServerBuilderPlugin();
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  this->grpc_service->server = this;

  // grpc::ServerBuilder builder;
  // std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  // builder.AddListeningPort(this->get_addr(),
  // grpc::InsecureServerCredentials()); std::cout << __FILE__ << ": " <<
  // __LINE__ << std::endl; builder.RegisterService(this->grpc_service.get());
  // std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  // this->grpc_server = builder.BuildAndStart();
  // std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  // std::cout << __FILE__ << ": " << __LINE__ << std::endl;

  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  this->api_service = std::make_unique<ConcreteAPIService>();
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  grpc::EnableDefaultHealthCheckService(true);
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  grpc::reflection::InitProtoReflectionServerBuilderPlugin();
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;

  grpc::ServerBuilder builder;
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  builder.AddListeningPort(this->get_addr(), grpc::InsecureServerCredentials());
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  builder.RegisterService(this->grpc_service.get());
  builder.RegisterService(this->api_service.get());
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  this->grpc_server = builder.BuildAndStart();
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  this->api_service->server = this;
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;

  this->manager.initialize(*(new worker::WorkerConfig()));
  this->manager.handle_auto_start();

  this->grpc_server->Wait();
}

void dtop::server::Server::init_config() {
  this->server_property =
      std::make_unique<ServerProperty>(this->config_file_path);
  this->client_add_target();
}

dtop::server::Server::Server(const std::string& config_file_path)
    : manager(worker::Manager()) {
  this->config_file_path = config_file_path;
  this->init_config();
}

bool dtop::server::Server::exec_command(const CommandArrayMessage* request,
                                        StringArrayMessage* reply) {
  for (auto& command : request->command_arr()) {
  	const std::string& worker_name = command.worker_name();
  	worker::WorkerCmdType cmd_type = worker::get_cmd_type(command.cmd_type());
  	bool success = this->manager.switch_worker_status(worker_name, cmd_type);
  	reply->mutable_arr()->Add(success ? "success" : "fail");
  }
  return true;
}

bool dtop::server::Server::get_server_metric(const FetchRequestMessage* request,
                                             FetchReplyMessage* reply) {
  std::cout << __FILE__ << ": " << __LINE__ << std::endl;
  reply->set_addr(this->get_addr());
  return this->manager.process_query(request, reply);
}

void dtop::server::Server::get_server_status(const StringArrayMessage* request,
                                             ServerStatusMessage* reply) {
  bool with_futures = false, with_future_desc = false;
  for (auto& flag : request->arr()) {
    if (flag == "-wf") with_futures = true;
    if (flag == "-wfd") with_future_desc = true;
  }
  reply->set_addr(this->get_addr());
  reply->mutable_worker_status_arr()->Swap(
      this->manager.get_worker_status(with_futures, with_future_desc));
  reply->set_status("Indirect");
}

void dtop::server::Server::client_add_target() {
  for (auto& iter : this->server_property->other_server_addr_list) {
    this->client.add_grpc_target(iter);
  }
}