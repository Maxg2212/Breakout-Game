//
// Created by maxgm on 3/9/21.
//

#include "Game.h"
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>

//Private functions
void Game::initializeVariables() {
    this->window = nullptr;

}

void Game::initWindow() {
    this->videoMode.height = 600;
    this->videoMode.width = 800;
    this->window = new sf::RenderWindow(this->videoMode, "Breakout", sf::Style::Titlebar | sf::Style::Close | sf::Style::Resize); //Ventana que tiene un tamana de 800x600, titulo Breakout, que tiene boton de cierre y puede ser expandida

}

//Constructors / Destructors
Game::Game() {
    this->initializeVariables();
    this->initWindow();

}

Game::~Game() {
    delete this->window;

}

//Accesors
const bool Game::running() const {
    return this->window->isOpen();
}

//Functions
void Game::pollEvents() { //getIsOpen
    //Event polling
    while (this->window->pollEvent(this->event)){
        switch (this->event.type) {
            case sf::Event::Closed:
                this->window->close();
                break;

        }
    }
}


void Game::update() {
    this->pollEvents();
}

void Game::render() {
    /*
     * @return void
     * -Clear old frame
     * -render objects
     * -display frame in window
     *
     * Renders the game objects
     */
    this->window->clear(sf::Color::White);


    //Draw game objects
    this->window->display();

}






