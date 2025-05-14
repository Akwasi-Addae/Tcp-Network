#include "TcpNewConnectionAcceptor.h"

TcpNewConnectionAcceptor::TcpNewConnectionAcceptor(TcpServerController *tcp_ctlr){
    this->tcp_ctlr = tcp_ctlr;
}

TcpNewConnectionAcceptor::~TcpNewConnectionAcceptor(){
}