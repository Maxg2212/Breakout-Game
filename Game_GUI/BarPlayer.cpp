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

void BarPlayer::updateWindowBoundsCollision(const sf::RenderTarget *target) {

    //Left
    sf::FloatRect playerBounds = this->shape.getGlobalBounds();
    if (playerBounds.left <= 0.f)
        this->shape.setPosition(0.f, playerBounds.top);
    //Right
    else if(playerBounds.left + playerBounds.width >= target->getSize().x)
        this->shape.setPosition(target->getSize().x - playerBounds.width, playerBounds.top);
    //Top
    if (playerBounds.top <= 0.f)
        this->shape.setPosition(playerBounds.left,0.f) ;
    //Bottom
    else if(playerBounds.top + playerBounds.height >= target->getSize().y)
        this->shape.setPosition(playerBounds.left, target->getSize().y - playerBounds.height);

}

void BarPlayer::update(const sf::RenderTarget* target) {

    this->updateInput();

    //Window bounds collision
    this->updateWindowBoundsCollision(target);

}

void BarPlayer::render(sf::RenderTarget *target) {
    target->draw(this->shape);

}






