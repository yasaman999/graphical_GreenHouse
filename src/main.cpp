#include <iostream>
#include "flower.hpp"
#include "functions.hpp"
using namespace std;
int main()
{
    sf::RenderWindow mainWindow(sf::VideoMode(1401, 812), "Graphical_GreenHouse");
    sf::Event mainEvent;
    // background
    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;
    setBackground(mainWindow, backgroundTexture, backgroundSprite);
    // menu
    sf::Texture menuTexture;
    sf::Sprite menuSprite;
    setMenu(mainWindow, menuTexture, menuSprite);

    // sf::RectangleShape test;
    // test.setPosition(mainWindow.getSize().x - 610, 0);
    // test.setSize(sf::Vector2f(2, 200));
    while (mainWindow.isOpen())
    {

        while (mainWindow.pollEvent(mainEvent))
        {
            if (mainEvent.type == sf::Event::Closed)
            {
                mainWindow.close();
            }
            clickOnItemsOfMenu(mainWindow, mainEvent, menuTexture, menuSprite);
        }

        mainWindow.display();
        mainWindow.draw(backgroundSprite);
        mainWindow.draw(menuSprite);
        // mainWindow.draw(test);
    }

    return 0;
}
