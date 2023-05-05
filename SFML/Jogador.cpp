#include "Jogador.h"



Jogador::Jogador(float vel_x, float vel_y): vel(vel_x, vel_y){
    corpo.setFillColor(sf::Color::Blue);
    corpo.setPosition(0.0f, 0.0f);

}
Jogador::~Jogador(){

}


void Jogador::move(){

    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A)){
        corpo.move(-vel.x, 0.0f);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D)){
        corpo.move(vel.x, 0.0f);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W)){
        corpo.move(0.0f, -vel.y);
    }
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S)){
        corpo.move(0.0f, vel.y);
    }


}





