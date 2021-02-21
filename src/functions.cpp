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
void clickOnItemsOfMenu(sf::RenderWindow& window, sf::Event& event, sf::Texture& menuTexture,
   sf::Sprite& menuSprite, sf::Texture * rectanglesTexture, sf::Sprite * rectanglesSprite, sf::Text * text1, sf::Font& font, bool& clickOnSalesRoom)
{
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x-110) &&
      sf::Mouse::getPosition(window).x <=  window.getSize().x &&
      sf::Mouse::getPosition(window).y >= 0 &&
      sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "profile" << endl;
      clickOnSalesRoom = false;
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
      clickOnSalesRoom = false;
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
      clickOnSalesRoom = true;
      menuTexture.loadFromFile("../image/menu/menu2.png");
      setRectangles(window, rectanglesTexture, rectanglesSprite, font, text1);

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
      clickOnSalesRoom = false;
      menuTexture.loadFromFile("../image/menu/menu3.png");

    }
  }
}
void setStoreMenu(sf::RenderWindow& window, sf::Texture& storeMenuTexture, sf::Sprite& storeMenuSprite)
{
  storeMenuTexture.loadFromFile("../image/strip6.png");
  storeMenuSprite.setTexture(storeMenuTexture);
  storeMenuSprite.setPosition(sf::Vector2f(50.5, 700));
}
void setRectangles(sf::RenderWindow& window, sf::Texture * rectanglesTexture, sf::Sprite * rectanglesSprite, sf::Font& font, sf::Text* text1)
{
  for (size_t i = 0; i < 24; i++)
  {
    text1[i].setFont(font);
  }
  for (size_t i = 0; i < 24; i++)
  {
    text1[i].setFillColor(sf::Color::Black);
  }

  for(size_t i = 0; i < 12; i++)
  {
    rectanglesTexture[i].loadFromFile("../image/strip4.png");
  }
  for(size_t i = 0; i < 12; i++)
  {
    rectanglesSprite[i].setTexture(rectanglesTexture[i]);
  }
  for(size_t i = 0; i < 6; i++)
  {
    rectanglesSprite[i].setOrigin(sf::Vector2f(rectanglesSprite[i].getGlobalBounds().width, 0));
    rectanglesSprite[i].setPosition(sf::Vector2f(window.getSize().x/2 - 35, 200+((i)*(rectanglesSprite[i].getGlobalBounds().height+10))));
  }

  for(size_t i = 6; i < 12; i++)
  {
    rectanglesSprite[i].setPosition(sf::Vector2f(window.getSize().x/2 + 35, 200+((i-6)*(rectanglesSprite[i].getGlobalBounds().height+10))));
  }
  text1[12].setString("piaz gol addi  1000");
  text1[13].setString("piaz gol nader  5000");
  text1[14].setString("piaz gol zinati  20000");
  text1[15].setString("made sam pashi 500");
  text1[16].setString("khak  450");
  text1[17].setString("aab  250");
  for(size_t i = 12; i <= 17; i++)
  {
    if(i%2 == 0)
    {
      text1[i].setPosition(sf::Vector2f(rectanglesSprite[i/2].getPosition().x
      + rectanglesSprite[i/2].getGlobalBounds().width/2 + 10, rectanglesSprite[i/2].getPosition().y + 2));
    }
    else
    {
      text1[i].setPosition(sf::Vector2f(rectanglesSprite[(i-1)/2].getPosition().x
      + 5, rectanglesSprite[i/2].getPosition().y + 2));
    }

  }





}
