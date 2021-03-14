#include <iostream>
#include "flower.hpp"
#include "functions.hpp"

using namespace std;
int main()
{
  // files for writing
  ofstream storeFileWrite;
  ofstream vaseFileWrite;
   // files for reading
  ifstream storeFileRead;
  ifstream vaseFileRead;

  //main window
  sf::RenderWindow mainWindow(sf::VideoMode(1401, 812), "Graphical_GreenHouse");
  // event for mainWindow
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
  // for showing saving
  sf::Text savingText;
  savingText.setFont(font);
  savingText.setString("100,000 Rial");
  savingText.setPosition(sf::Vector2f(40, 8));
  savingText.setFillColor(sf::Color::Black);
  savingText.setCharacterSize(40);
  // vases of green house
  Vase vases[10];
  vases[0].set_locked(false);
  vases[0].set_empty(true);

  //bottom menu of store
  sf::Texture storeMenuTexture;
  sf::Sprite storeMenuSprite;
  setStoreMenu(mainWindow, storeMenuTexture, storeMenuSprite);
  //table elements of store and salesRoom
  sf::Texture rectanglesTexture[14];// for rectangles of salesRoom and flower's store
  sf::Sprite rectanglesSprite[14];// for rectangles of salesRoom and flower's store
  sf::Text text1[20];// for names of elements of sale room
  sf::Text text2[14];// for names of flowers store's elements
  for (size_t i = 0; i < 14; i++)
  {
    text2[i].setFillColor(sf::Color(200, 100, 100));
  }
  sf::Text StoreMenuTexts[18];// for number of elements of store menu and flower's store
  // set font
  for (size_t i = 0; i < 18; i++)
  {
    StoreMenuTexts[i].setFont(font);
  }
  //set color
  for (size_t i = 0; i < 4; i++)
  {
    StoreMenuTexts[i].setFillColor(sf::Color::Black);
  }
  for (size_t i = 4; i < 18; i++)
  {
    StoreMenuTexts[i].setFillColor(sf::Color(200, 100, 100));
  }
  //setPostion
  StoreMenuTexts[0].setPosition(storeMenuSprite.getPosition().x + storeMenuSprite.getGlobalBounds().width - 340, storeMenuSprite.getPosition().y + 12);
  StoreMenuTexts[1].setPosition(storeMenuSprite.getPosition().x + storeMenuSprite.getGlobalBounds().width - 650, storeMenuSprite.getPosition().y + 12);
  StoreMenuTexts[2].setPosition(storeMenuSprite.getPosition().x + storeMenuSprite.getGlobalBounds().width - 950, storeMenuSprite.getPosition().y + 12);
  StoreMenuTexts[3].setPosition(sf::Vector2f(storeMenuSprite.getPosition().x + 80, storeMenuSprite.getPosition().y + 12));

  sf::Text profileText[6]; //for number elements of profile menu
  //profile tecture and sprite
  sf::Texture proTexture;
  sf::Sprite proSprite;
  // for showing userName and bio in profile
  sf::Text userNameText;
  sf::Text bioText;
  // rectangle of laboratory
  sf::Texture labRectangleTexture;
  sf::Sprite labRectangleSprite;
  //make one object from Store class
  Store *mainStore = Store::oneStore();
  // variables that specifiy part of game
  bool clickOnSalesRoom;
  bool clickOnLaboratory;
  bool clickOnGreenHouse;
  bool clickOnProfile;
  bool fromGreenHouse = false;// going to salesRoom is directly
  // The variable that specifies the vase that is clicked
  Vase selectedVase;
  Vase *vasePtr = &selectedVase;
  // while mainWindow is open
  while (mainWindow.isOpen())
  {
    // for manage events of mainWindow
    while (mainWindow.pollEvent(mainEvent))
    {
      // for close mainWindow
      if (mainEvent.type == sf::Event::Closed)
      {
        mainWindow.close();
      }
      // for click on elements of menu
      clickOnItemsOfMenu(mainWindow, mainEvent, menuTexture, menuSprite, rectanglesTexture,
                         rectanglesSprite, text1, font, clickOnSalesRoom, clickOnLaboratory, clickOnGreenHouse, mainStore, StoreMenuTexts, text2, labRectangleTexture, labRectangleSprite, vases, fromGreenHouse, clickOnProfile, proTexture, proSprite, profileText);
      if (clickOnProfile) // profile part
      {
        // for click on elements of profile
        clickOnItemsOfProfile(mainWindow, mainEvent, mainStore, font, userNameText, bioText, storeFileWrite, vaseFileWrite, storeFileRead, vaseFileRead,StoreMenuTexts,profileText,vases);
      }
      if (clickOnSalesRoom) // salesRoom part
      {
        // for click on elements of salesRoom
        clickOnItemsOfTable(mainWindow, rectanglesSprite, mainEvent, mainStore, StoreMenuTexts, storeMenuSprite, text2, font, fromGreenHouse, vasePtr);
        // set getPosition of numbers of store
        for (size_t i = 4; i < 18; i++)
        {
          if (i % 2 == 0)
          {
            StoreMenuTexts[i].setPosition(sf::Vector2f(rectanglesSprite[(i - 4) / 2].getPosition().x - 30, rectanglesSprite[(i - 4) / 2].getPosition().y + 2));
          }
          else
            StoreMenuTexts[i].setPosition(sf::Vector2f(rectanglesSprite[(i - 5) / 2].getPosition().x - rectanglesSprite[(i - 5) / 2].getGlobalBounds().width / 2 - 30, rectanglesSprite[(i - 5) / 2].getPosition().y + 2));
        } // end of for
      }
      if (clickOnLaboratory) // laboratory part
      {
        // for click on elements of laboratory
        clickOnItemsOfLaboratory(mainWindow, mainEvent, labRectangleSprite, mainStore, StoreMenuTexts, storeMenuSprite, text2);
      }
      if (clickOnGreenHouse) //green house part
      {
        // for click on elements of greenHouse
        clickOnVases(mainWindow, mainEvent, vases, clickOnSalesRoom, clickOnGreenHouse, clickOnLaboratory, menuTexture, rectanglesTexture, rectanglesSprite, font, text1, text2, StoreMenuTexts, mainStore, fromGreenHouse, vasePtr);
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

    if (clickOnLaboratory)
    {
      mainWindow.draw(labRectangleSprite);
    }
    if (clickOnGreenHouse)
    {
      for (size_t i = 0; i < 10; i++)
      {
        mainWindow.draw(vases[i].get_vaseSprite());
      }
    }
    if (clickOnProfile)
    {
      mainWindow.draw(proSprite);
      for (size_t i = 0; i < 6; i++)
      {
        mainWindow.draw(profileText[i]);
      }
      mainWindow.draw(userNameText);
      mainWindow.draw(bioText);
      // mainWindow.draw(rec);
    }
    mainWindow.draw(savingText);
  }
  return 0;
}
