#include "TcpClientServiceManager.h"

TcpClientServiceManager::TcpClientServiceManager(TcpServerController *tcp_ctlr){
    this->tcp_ctlr = tcp_ctlr;
}

TcpClientServiceManager::~TcpClientServiceManager(){
    
}