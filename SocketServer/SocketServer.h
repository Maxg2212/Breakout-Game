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
#include <jsoncpp/json/value.h>
#include <jsoncpp/json/json.h>
#include <jsoncpp/json/reader.h>
#include <jsoncpp/json/writer.h>
using namespace std;


//Estructura para representar a los clientes
struct dataSocket{
    int descriptor;
    sockaddr_in info;
};

/**
 * @file SocketServer.h
 * @authors Michael Valverde Navarro
 * @brief Clase que se encarga de ser el servidor y realizar una conexión con el cliente
 * @version 2.0
 * @date 3/09/2021
 */
class SocketServer{
public:
    /**
     * @brief Constructor del server
     */
    SocketServer();
    /**
     * @brief Corre el servidor y establece una conexión con el cliente
     */
    void run();
    /**
     * @brief Envia un mensaje al cliente
     * @param msn puntero de const char que contiene el mensaje que se quiere enviar
     */
    void setMensaje(const char* msn);
    static string receivedMessage;

private:
    int descriptor; //Identifica clientes
    sockaddr_in info; //informacion del socket servidor
    vector<int> clientes; //almacena clientes

    /**
     * @brief Permite crear el socket que se va utilizar en la conexión
     * @return true si permite crear el socket, false en caso contrario
     */
    bool crear_socket();
    /**
     * @brief Establece la conexión con el cliente
     * @return true si permite establecer conexión, false en caso contrario
     */
    bool enlazar_kernel();
    /**
     * @brief Funciona como controlador de flujo de información para el servidor
     */
    void* ContoladorCliente(void* obj);
};

#endif //BREAKOUT_GAME_SOCKETSERVER_H
