#ifndef __TcpClientDbManager__
#define __TcpClientDbManager__

#include <list>
class TcpClient;
class TcpServerController;

class TcpClientDbManager{
    public:
        TcpServerController *tcp_ctlr;
        TcpClientDbManager(TcpServerController *);
        ~TcpClientDbManager();

    private:
        std::list<TcpClient *> tcp_client_db;
};

#endif