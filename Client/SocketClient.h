//
// Created by michael on 3/9/21.
//

#ifndef BREAKOUT_GAME_SOCKETCLIENT_H
#define BREAKOUT_GAME_SOCKETCLIENT_H


#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <iostream>
#include <pthread.h>
#include <vector>
#include <unistd.h>
#include <arpa/inet.h>
using namespace std;


class SocketClient{
public:
    SocketClient();
    void conectar();
    void setMensaje(const char* msn);

private:
    int descriptor;
    sockaddr_in info;

    static void* Contolador(void* obj);


};




#endif //BREAKOUT_GAME_SOCKETCLIENT_H