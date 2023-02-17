// #include<SFML/System.hpp>
// #include<SFML/Window.hpp>
// #include<SFML/Graphics.hpp>

// using namespace std;

// int main()
// {
//     sf::RenderWindow window(sf::VideoMode(sf::Vector2u {1280, 720}), "SFML works!");
//     sf::CircleShape shape(100.f);
//     shape.setFillColor(sf::Color::Green);

//     while (window.isOpen())
//     {
//         sf::Event event;
//         while (window.pollEvent(event))
//         {
//             if (event.type == sf::Event::Closed)
//                 window.close();
//         }

//         window.clear();
//         window.draw(shape);
//         window.display();
//     }

//     return 0;
// }

#include<stdio.h>

int main()
{
    printf("Hello World!");
    return 0;
}