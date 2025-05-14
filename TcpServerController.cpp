#include "TcpServerController.h"
#include <assert.h>
#include "network_utils.h"
#include <stdio.h>

TcpServerController::TcpServerController(std::string ip_addr, u_int16_t port_no, std::string name){
    this->ip_addr = network_convert_ip_p_to_n(ip_addr.str());
    this->port_no = port_no;
    this->name = name;

    this->tcp_new_conn_acc = new TcpNewConnectionAcceptor(this);
    this->tcp_client_svc_mgr = new TcpClientServiceManager(this);
    this->tcp_client_db_mgr = new TcpClientDbManager(this);
}

TcpServerController::~TcpServerController(){

};

void TcpServerController::Start(){

};

void TcpServerController::Stop(){

};
