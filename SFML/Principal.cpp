#include "Principal.h"
#include "Inimigo.h"
#include <list>

#include <SFML/Graphics.hpp>

Principal::Principal(){

    executar();


}
Principal::~Principal(){}

void Principal::executar(){


    Inimigo inimigo;
    Jogador jogador;
    inimigo.setJogador(&jogador);
    sf::RenderWindow window(sf::VideoMode(500, 500), "Jogo");
   // sf::RectangleShape jogador(sf::Vector2f(100.0f, 100.0f));

    std::vector<Ente*> vet_entes;
    Ente* pEnte = NULL;
    Jogador* pJogador = &jogador;
    Inimigo* pInimigo = &inimigo;
    pEnte = static_cast<Ente*> (pJogador);
    vet_entes.push_back(pEnte);
    pEnte = static_cast<Ente*> (pInimigo);
    vet_entes.push_back(pEnte);

    while (window.isOpen())
    {

        sf::Event event;

        if(window.pollEvent(event)){
            if (event.type == sf::Event::Closed)
                window.close();
            else if (event.type == sf::Event::KeyPressed){
                for(int i = 0; i < (int) vet_entes.size(); i++)
                    pEnte->move();
            }
        }

        window.clear();
        for(int i = 0; i < (int) vet_entes.size(); i++)
            window.draw(pEnte->getCorpo());
        window.display();
    }
}





