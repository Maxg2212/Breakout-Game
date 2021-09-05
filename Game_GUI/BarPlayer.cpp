//
// Created by maxgm on 4/9/21.
//

#include "BarPlayer.h"

void BarPlayer::initVariables() {

    this->movementSpeed = 10.f;

}

void BarPlayer::initShape() {
    this->shape.setFillColor(sf::Color::Black);
    this->shape.setSize(sf::Vector2f(150.f, 25.f));

}

void BarPlayer::resizeBarShape() {

}

BarPlayer::BarPlayer(float x, float y) {
    this->shape.setPosition(x, y);

    this->initVariables();
    this->initShape();

}

BarPlayer::~BarPlayer() {

}

void BarPlayer::updateInput() {
    //Keyboard input
    //Left
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Left)){
        this->shape.move(-this->movementSpeed, 0.f);

    }
    else if(sf::Keyboard::isKeyPressed(sf::Keyboard::Right)){
        this->shape.move(this->movementSpeed, 0.f);

    }
}

void BarPlayer::update(sf::RenderTarget* target) {
    //Window bounds collision

    this->updateInput();

}

void BarPlayer::render(sf::RenderTarget *target) {
    target->draw(this->shape);

}




