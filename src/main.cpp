#include "flower.hpp"
#include "functions.hpp"
using namespace std;
int main()
{
    sf::RenderWindow mainWindow(sf::VideoMode(1401, 812), "Graphical_GreenHouse");
    sf::Event mainEvent;
    sf::Texture backgroundTexture;
    sf::Sprite backgroundSprite;
    setBackground(mainWindow, backgroundTexture, backgroundSprite);
    while (mainWindow.isOpen())
    {

        while (mainWindow.pollEvent(mainEvent))
        {
            if (mainEvent.type == sf::Event::Closed)
            {
                mainWindow.close();
            }
        }

        mainWindow.display();
        mainWindow.draw(backgroundSprite);
    }

    return 0;
}
