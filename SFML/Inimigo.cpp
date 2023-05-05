#include "Inimigo.h"



Inimigo::Inimigo(float vel_x, float vel_y): vel(vel_x, vel_y){
    corpo.setFillColor(sf::Color::Red);
    corpo.setPosition(0.0f, 0.0f);

}
Inimigo::~Inimigo(){

}


void Inimigo::move(){
    if(jogador){
        sf::Vector2f pos_jogador, pos_inimigo;
        pos_jogador = jogador->getPosition();
        pos_inimigo = getPosition();
        if(pos_inimigo.x - pos_jogador.x > 0.0f)
            corpo.move(-vel.x, 0.0f);
        else
            corpo.move(vel.x, 0.0f);
        if(pos_inimigo.y - pos_jogador.y < 0.0f)
            corpo.move(0.0f, vel.y);
        else
            corpo.move(0.0f, -vel.y);

    }
}

void Inimigo::setJogador(Jogador* aux_jogador){
    jogador = aux_jogador;
}





