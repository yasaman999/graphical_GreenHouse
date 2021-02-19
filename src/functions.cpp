#include "functions.hpp"
using namespace std;
void setBackground(sf::RenderWindow &window, sf::Texture &backgroundTexture, sf::Sprite &backgroundSprite)
{
    backgroundTexture.loadFromFile("../image/background.png");
    backgroundSprite.setTexture(backgroundTexture);
}
void setMenu(sf::RenderWindow &window, sf::Texture &menuTexture, sf::Sprite &menuSprite)
{
    menuTexture.loadFromFile("../image/menu/menu4.png");
    menuSprite.setTexture(menuTexture);
}
void clickOnItemsOfMenu(sf::RenderWindow& window, sf::Event& event, sf::Texture& menuTexture, sf::Sprite& menuSprite)
{
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x-110) &&
      sf::Mouse::getPosition(window).x <=  window.getSize().x &&
      sf::Mouse::getPosition(window).y >= 0 &&
      sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "profile" << endl;
      menuTexture.loadFromFile("../image/menu/menu0.png");

    }
  }
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x-265) &&
      sf::Mouse::getPosition(window).x <=  (window.getSize().x-160) &&
      sf::Mouse::getPosition(window).y >= 0 &&
      sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "greenhouse!!" << endl;
      menuTexture.loadFromFile("../image/menu/menu1.png");

    }
  }
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x-435) &&
      sf::Mouse::getPosition(window).x <=  (window.getSize().x-345) &&
      sf::Mouse::getPosition(window).y >= 0 &&
      sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "froshgah!!" << endl;
      menuTexture.loadFromFile("../image/menu/menu2.png");

    }
  }
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x-610) &&
      sf::Mouse::getPosition(window).x <=  (window.getSize().x-495) &&
      sf::Mouse::getPosition(window).y >= 0 &&
      sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "azmayeshgah!!" << endl;
      menuTexture.loadFromFile("../image/menu/menu3.png");

    }
  }


}
