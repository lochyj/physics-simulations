#include<SFML/system.hpp>
#include<SFML/window.hpp>
#include<SFML/graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(sf::Vector2u {1280, 720}), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear();
        window.draw(shape);
        window.display();
    }

    return 0;
}