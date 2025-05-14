#include "TcpServerController.h"

int main(int argc, char **argv[]){
    TcpServerController *server = new TcpServerController("127.0.0.1",40000,"Default TCP Server");
    server->Start();
    scanf("\n");

    return 0;
}