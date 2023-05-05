#include<stdio.h>
#include <SFML/Graphics.hpp>
#include "Ente.h"


class Jogador: public Ente{

private:

    sf::Vector2f pos_inicial;
    sf::Vector2f vel;
public:

    Jogador(float vel_x = 15.0f, float vel_y = 15.0f);
    ~Jogador();
    void move();

};
