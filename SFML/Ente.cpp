#include<stdio.h>
#include <SFML/Graphics.hpp>
#include  "Ente.h"


Ente::Ente(): corpo(50.0f){

}
Ente::~Ente(){

}
sf::CircleShape Ente::getCorpo(){
    return corpo;
}

const sf::Vector2f Ente::getPosition() const{
    return corpo.getPosition();
}

