#include<stdio.h>
#include <SFML/Graphics.hpp>


class Ente{

protected:
    sf::CircleShape corpo;

public:
    Ente();
    ~Ente();
    sf::CircleShape getCorpo();
    const sf::Vector2f getPosition() const;
    virtual void move() = 0;

};
