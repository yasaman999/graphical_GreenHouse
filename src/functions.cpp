#include "functions.hpp"
void setBackground(sf::RenderWindow &window, sf::Texture &backgroundTexture, sf::Sprite &backgroundSprite)
{
    backgroundTexture.loadFromFile("../image/background.png");
    backgroundSprite.setTexture(backgroundTexture);
}
