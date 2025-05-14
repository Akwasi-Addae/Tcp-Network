#ifndef __TCPCLIENTSERVICEMANAGER__
#define __TCPCLIENTSERVICEMANAGER__


class TcpServerController;
class TcpClient;

class TcpClientServiceManager{
    public:
        TcpServerController *tcp_ctlr;
        TcpClientServiceManager(TcpServerController *);
        ~TcpClientServiceManager();

    private:
};

#endif