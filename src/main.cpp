#include <iostream>
#include "flower.hpp"
#include "functions.hpp"
using namespace std;
int main()
{
    //main window
    sf::RenderWindow mainWindow(sf::VideoMode(1401, 812), "Graphical_GreenHouse");
    // event
    sf::Event mainEvent;
    // font
    sf::Font font;
    font.loadFromFile("../image/aviny.ttf");
    // background
    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;
    setBackground(mainWindow, backgroundTexture, backgroundSprite);
    // menu
    sf::Texture menuTexture;
    sf::Sprite menuSprite;
    setMenu(mainWindow, menuTexture, menuSprite);

    sf::Texture storeMenuTexture;
    sf::Sprite storeMenuSprite;
    setStoreMenu(mainWindow, storeMenuTexture, storeMenuSprite);
    sf::Texture rectanglesTexture[12];
    sf::Sprite rectanglesSprite[12];
    sf::Text text1[24];

    bool clickOnSalesRoom;
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
            clickOnItemsOfMenu(mainWindow, mainEvent, menuTexture, menuSprite, rectanglesTexture, rectanglesSprite, text1, font, clickOnSalesRoom);
        }

        mainWindow.display();
        mainWindow.draw(backgroundSprite);
        mainWindow.draw(menuSprite);
        mainWindow.draw(storeMenuSprite);
        if(clickOnSalesRoom)
        {
          for(size_t i = 0; i < 12; i++)
          {
            mainWindow.draw(rectanglesSprite[i]);

          }
          for(size_t i = 12; i < 18; i++)
          {
            mainWindow.draw(text1[i]);

          }
        }

        // mainWindow.draw(test);
    }

    return 0;
}
