#include "SocketServer/SocketServer.h"
#include <iostream>
#include "Game.h"
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



int main(){

    /**
    TcpSocket socket;
    char connectionType, mode;
    IpAddress ip = IpAddress::getLocalAddress();
    char buffer[2000];
    size_t received;
    string text = "Connected to: ";



    cout << "Enter (s) for server, enter (c) for client : " << endl;
    cin >> connectionType;

    if(connectionType == 's'){
        TcpListener listener;
        listener.listen(2000);
        listener.accept(socket);
        text += "Server";
        mode = 's';

    }else if(connectionType == 'c'){
        socket.connect(ip,2000);
        text += "Client";
        mode = 'r';

    }
    socket.send(text.c_str(),text.length() +1);

    socket.receive(buffer,sizeof(buffer),received);

    cout << buffer << endl;

    //system(PAUSE);
    bool done = false;
    while(!done){
        if(mode == 's'){
            getline(cin,text);
            socket.send(text.c_str(),text.length() + 1);
            mode = 'r';
        }else if(mode == 'r'){
            socket.receive(buffer, sizeof(buffer), received);
            if(received > 0){
                cout << "Received: " << buffer << endl;
                mode = 's';
            }
        }
    }
    system("pause");

     */






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

    //Init game engine
    //Game game;
    //Game loop
    //while (game.running()){

        //Update
        //game.update();

        //Render
        //game.render();
    //}
    //End of application
    return 0;
}

