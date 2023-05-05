#include<stdio.h>
#include <SFML/Graphics.hpp>
#include "Jogador.h"


class Inimigo: public Ente{

private:

    Jogador* jogador;
    sf::Vector2f pos_inicial;
    sf::Vector2f vel;
public:

    Inimigo(float vel_x = 15.0f, float vel_y = 15.0f);
    ~Inimigo();
    void move();
    void setJogador(Jogador* aux_jogador);

};

