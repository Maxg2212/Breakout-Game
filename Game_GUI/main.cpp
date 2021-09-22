#include "SocketServer/SocketServer.h"
    #include <iostream>
    #include <SFML/Graphics.hpp>
    #include <SFML/System.hpp>
    #include <SFML/Window.hpp>
    #include <SFML/Audio.hpp>
    #include <SFML/Network.hpp>

SocketServer* server;

void * serverRun(void *){
    try{
        server->run();
    }catch (string ex){
        cout << ex << endl;
    }
    pthread_exit(NULL);
}

int main()
{

    
    server = new SocketServer;
    pthread_t hiloS;
    pthread_create(&hiloS,0,serverRun,NULL);
    pthread_detach(hiloS);

    //Ciclo para enviar mensajes al cliente
    string json = "Hola desde el servidor";
    while(1){
        string msn;
        cin >> msn;
        if(msn == "salir")
            break;
        server->setMensaje(json.c_str());
    }
    delete server;

    return 0;

}