#include <iostream>

#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

int main()
{
    //Window
    sf::RenderWindow window(sf::VideoMode(800, 600), "Breakout", sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize); //Ventana que tiene un tamana de 800x600, titulo Breakout, que tiene boton de cierre y puede ser expandida
    sf::Event event;

    //Game loop
    while (window.isOpen()){

        //Event polling
        while (window.pollEvent(event)){
            switch (event.type) {
                case sf::Event::Closed:
                    window.close();
                    break;


            }
        }
        //Update

        //Render
        window.clear(sf::Color::White); //Clear old frame
        window.setFramerateLimit(60); // Para jugar a 60 frames por segundo

        //Draw the game
        window.display(); //Tell app window is done drawing
    }

    return 0;


}