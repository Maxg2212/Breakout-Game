//
// Created by michael on 3/9/21.
//

#ifndef BREAKOUT_GAME_SOCKETSERVER_H
#define BREAKOUT_GAME_SOCKETSERVER_H
#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <string.h>
#include <string>
#include <iostream>
#include <pthread.h>
#include <vector>
#include <unistd.h>
using namespace std;


//Estructura para representar a los clientes
struct dataSocket{
    int descriptor;
    sockaddr_in info;
};

class SocketServer{
public:
    SocketServer();
    void run();
    void setMensaje(const char* msn);

private:
    int descriptor; //Identifica clientes
    sockaddr_in info; //informacion del socket servidor
    vector<int> clientes; //almacena clientes

    bool crear_socket();
    bool enlazar_kernel();
    static void* ContoladorCliente(void* obj);


};

#endif //BREAKOUT_GAME_SOCKETSERVER_H
