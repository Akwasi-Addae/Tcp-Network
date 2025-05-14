#ifndef __TCPSERVERCONTROLLER__
#define __TCPSERVERCONTROLLER_

#include <string>
#include <stdint.h>
#include "TcpNewConnectionAcceptor.h"
#include "TcpClientDbManager.h"
#include "TcpClientServiceManager.h"

class TcpServerController {
    public:
        std::string name;
        uint16_t port_no;
        uint32_t ip_addr;
        
        TcpServerController(std::string ip_addr, u_int16_t port_no, std::string name);
        ~TcpServerController();
        void Start();
        void Stop();

    private:
        TcpNewConnectionAcceptor *tcp_new_conn_acc;
        TcpClientDbManager *tcp_client_db_mgr;
        TcpClientServiceManager *tcp_client_svc_mgr;
};

#endif