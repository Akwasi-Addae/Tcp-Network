#ifndef __TcpNewConnectionAcceptor__
#define __TcpNewConnectionAcceptor__

class TcpServerController;

class TcpNewConnectionAcceptor{
    public:
        TcpServerController *tcp_ctlr;
        TcpNewConnectionAcceptor(TcpServerController *);
        ~TcpNewConnectionAcceptor();

    private:
};

#endif