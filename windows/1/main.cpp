#include <SFML/Graphics.hpp>

sf::RenderWindow window;
sf::Event event;
sf::RectangleShape character;

#define MOVEMENT_SPEED 0.1

void character_controller() {
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D)) {
        if (character.getPosition().x <= 700)
            character.move(sf::Vector2f(MOVEMENT_SPEED, 0));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A)) {
        if (character.getPosition().x >= 0)
            character.move(sf::Vector2f(-MOVEMENT_SPEED, 0));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W)) {
        if (character.getPosition().y >= 0)
            character.move(sf::Vector2f(0, -MOVEMENT_SPEED));
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        if (character.getPosition().y <= 700)
            character.move(sf::Vector2f(0, MOVEMENT_SPEED));
    }
}

int main() {
    window.create(sf::VideoMode(800, 800), "SFML", sf::Style::Close);

    character.setSize(sf::Vector2f(100, 100));
    character.setFillColor(sf::Color::Red);
    character.setPosition(sf::Vector2f(350, 350));

    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        character_controller();

        window.clear();
        window.draw(character);
        window.display();
    }
}