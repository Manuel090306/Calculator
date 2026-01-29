#include <SFML/Graphics.hpp>
#include <iostream>
int main() {
    int x = 300;
    int y = 600;
    //crea la finestra
    sf::RenderWindow window(sf::VideoMode(x, y), "Finestra SFML");

    //dichiarazione rettangolo
    sf::RectangleShape rectangle(sf::Vector2f(x, y));
    rectangle.setFillColor(sf::Color::Green);

    while(true){
        //gestione eventi
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                return 0; //esci dal programma se la finestra viene chiusa
        }

        //pulisci la finestra con un colore bianco
        window.clear(sf::Color::White);

        //disegna qui gli oggetti grafici
        window.draw(rectangle);

        //mostra il contenuto disegnato
        window.display();

    }
}