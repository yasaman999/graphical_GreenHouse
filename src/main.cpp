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
  //store menu
  sf::Texture storeMenuTexture;
  sf::Sprite storeMenuSprite;
  setStoreMenu(mainWindow, storeMenuTexture, storeMenuSprite);
  //table elements of store and salesRoom
  sf::Texture rectanglesTexture[14];
  sf::Sprite rectanglesSprite[14];
  sf::Text text1[20];// for names of elements of sale room
  sf::Text text2[14];// for names of flowers store's elements

  // rectangle of lababoratory
  sf::Texture labRectangleTexture;
  sf::Sprite labRectangleSprite;


  for (size_t i = 0; i < 14; i++)
  {
    text2[i].setFillColor(sf::Color(200, 100, 100));
  }
  //make one object from Store class
  Store *mainStore = Store::oneStore();
  //StoreMenuTexts
  sf::Text StoreMenuTexts[18];
  for (size_t i = 0; i < 18; i++)
  {
    StoreMenuTexts[i].setFont(font);
  }
  for (size_t i = 0; i < 18; i++)
  {
    StoreMenuTexts[i].setFillColor(sf::Color::Black);
  }
  //------------------------------
  for (size_t i = 4; i < 18; i++)
  {
    StoreMenuTexts[i].setString("0");
  }
  for (size_t i = 4; i < 18; i++)
  {
    StoreMenuTexts[i].setFillColor(sf::Color(200, 100, 100));
  }

  //----------------------------------
  bool clickOnSalesRoom;
  bool clickOnLaboratory;



  sf::RectangleShape test;

  while (mainWindow.isOpen())
  {

    while (mainWindow.pollEvent(mainEvent))
    {
      if (mainEvent.type == sf::Event::Closed)
      {
        mainWindow.close();
      }
      clickOnItemsOfMenu(mainWindow, mainEvent, menuTexture, menuSprite, rectanglesTexture, rectanglesSprite, text1,font, clickOnSalesRoom,clickOnLaboratory, mainStore, StoreMenuTexts, text2, labRectangleTexture, labRectangleSprite);
      if (clickOnSalesRoom)
      {
        clickOnItemsOfTable(mainWindow, rectanglesSprite, mainEvent, mainStore, StoreMenuTexts, storeMenuSprite, text2);
        // test.setPosition(sf::Vector2f(labRectangleSprite.getPosition().x + 432, labRectangleSprite.getPosition().y+labRectangleSprite.getGlobalBounds().height - 50));
        // test.setSize(sf::Vector2f(3, 200));
        // test.setFillColor(sf::Color::Blue);

        for (size_t i = 4; i < 18; i++)
        {
          if (i % 2 == 0)
          {
            StoreMenuTexts[i].setPosition(sf::Vector2f(rectanglesSprite[(i - 4) / 2].getPosition().x - 30, rectanglesSprite[(i - 4) / 2].getPosition().y + 2));
          }
          else
            StoreMenuTexts[i].setPosition(sf::Vector2f(rectanglesSprite[(i - 5) / 2].getPosition().x - rectanglesSprite[(i - 5) / 2].getGlobalBounds().width / 2 - 30, rectanglesSprite[(i - 5) / 2].getPosition().y + 2));
        }
      }
      if(clickOnLaboratory)
      {
        clickOnItemsOfLaboratory(mainWindow, mainEvent, labRectangleSprite);
      }

    }

    mainWindow.display();
    mainWindow.draw(backgroundSprite);
    mainWindow.draw(menuSprite);
    mainWindow.draw(storeMenuSprite);
    if (clickOnSalesRoom)
    {
      //write title of tables.
      sf::Text storeText, salesRoomText;

      setTitleOfTables(rectanglesSprite, storeText, salesRoomText, font);

      mainWindow.draw(storeText);
      mainWindow.draw(salesRoomText);
      for (size_t i = 0; i < 14; i++)
      {
        mainWindow.draw(rectanglesSprite[i]);
      }
      for (size_t i = 14; i < 20; i++)
      {
        mainWindow.draw(text1[i]);
      }
      for (size_t i = 0; i < 14; i++)
      {
        mainWindow.draw(text2[i]);
      }
      //draw number of flowers store's element
      for (size_t i = 4; i < 18; i++)
      {
        mainWindow.draw(StoreMenuTexts[i]);
      }
    }
    // draw number of water unit and soil unit
    // and spray and extract
    for (size_t i = 0; i < 4; i++)
    {
      mainWindow.draw(StoreMenuTexts[i]);
    }

    if(clickOnLaboratory)
    {
      mainWindow.draw(labRectangleSprite);

    }

     // mainWindow.draw(test);
  }

  return 0;
}
