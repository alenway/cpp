#include <SFML/Graphics.hpp>
#include <iostream>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int PIXEL_SIZE = 4; // Size of each "pixel" for retro look

class Player {
public:
    sf::RectangleShape shape;
    float speed;

    Player() {
        shape.setSize(sf::Vector2f(32, 32));
        shape.setFillColor(sf::Color::Green);
        shape.setPosition(sf::Vector2f(100, 100)); // SFML 3.0 requires Vector2f
        speed = 5.0f;
    }

    void move(float dx, float dy) {
        shape.move(sf::Vector2f(dx * speed, dy * speed)); // SFML 3.0 requires Vector2f

        // Keep player in bounds
        sf::Vector2f pos = shape.getPosition();
        if (pos.x < 0) pos.x = 0;
        if (pos.y < 0) pos.y = 0;
        if (pos.x > WINDOW_WIDTH - shape.getSize().x) pos.x = WINDOW_WIDTH - shape.getSize().x;
        if (pos.y > WINDOW_HEIGHT - shape.getSize().y) pos.y = WINDOW_HEIGHT - shape.getSize().y;

        shape.setPosition(pos);
    }
};

class Game {
private:
    sf::RenderWindow window;
    Player player;
    sf::Clock clock;

public:
    Game() : window(sf::VideoMode(sf::Vector2u(WINDOW_WIDTH, WINDOW_HEIGHT)), "Pixel Game") { // SFML 3.0 requires Vector2u
        window.setFramerateLimit(60);
    }

    void run() {
        while (window.isOpen()) {
            handleEvents();
            update();
            render();
        }
    }

private:
    void handleEvents() {
        while (std::optional event = window.pollEvent()) { // SFML 3.0 returns optional
            if (event.has_value()) {
                if (event->is<sf::Event::Closed>()) { // SFML 3.0 new event system
                    window.close();
                }
            }
        }
    }

    void update() {
        // Handle input - SFML 3.0 uses scoped enums
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) player.move(0, -1);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) player.move(0, 1);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) player.move(-1, 0);
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) player.move(1, 0);
    }

    void render() {
        window.clear(sf::Color::Black);

        // Draw game objects
        window.draw(player.shape);

        window.display();
    }
};

int main() {
    Game game;
    game.run();
    return 0;
}
