#include "SocketServer/SocketServer.h"

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


    //Window
    //sf::RenderWindow window(sf::VideoMode(800, 600), "Breakout", sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize); //Ventana que tiene un tamana de 800x600, titulo Breakout, que tiene boton de cierre y puede ser expandida
    //sf::Event event;

    //Game loop
    //while (window.isOpen()){

        //Event polling
        //while (window.pollEvent(event)){
            //switch (event.type) {
                //case sf::Event::Closed:
                    //window.close();
                    //break;

            //}
        //}
        //Update

        //Render
        //window.clear(sf::Color::White); //Clear old frame
        //window.setFramerateLimit(60); // Para jugar a 60 frames por segundo

        //Draw the game



        //window.display(); //Tell app window is done drawing
    //}

    //return 0;


}