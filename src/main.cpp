#include <iostream>
#include <SFML/Graphics.hpp>
int main() {
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(300, 450), "Calculator");

    // Set the frame rate limit
    window.setFramerateLimit(60);

    // Main loop
    while (window.isOpen()) {
        // Process events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Clear the window with a black color
        window.clear(sf::Color::Black);

        // Draw things here
        
        // Display the contents of the window
        window.display();
    }

    return 0;
}