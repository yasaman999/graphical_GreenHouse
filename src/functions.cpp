#include "functions.hpp"
#include <cstring>
using namespace std;
typedef unsigned int ui;
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
void setElementsOfLabaratory(sf::RenderWindow &window, sf::Event &event, sf::Texture &labRectangleTexture, sf::Sprite &labRectangleSprite)
{
  labRectangleTexture.loadFromFile("../image/labRect.png");
  labRectangleSprite.setTexture(labRectangleTexture);
  labRectangleSprite.setOrigin(sf::Vector2f(labRectangleSprite.getGlobalBounds().width / 2, 0));
  labRectangleSprite.setPosition(sf::Vector2f(window.getSize().x / 2, 130));
}
void clickOnItemsOfLaboratory(sf::RenderWindow &window, sf::Event &event, sf::Sprite &labRectangleSprite, Store *mainStore, sf::Text *StoreMenuTexts, sf::Sprite &storeMenuSprite, sf::Text *text2)
{
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= labRectangleSprite.getPosition().x - 438 &&
        sf::Mouse::getPosition(window).x <= labRectangleSprite.getPosition().x - 163 &&
        sf::Mouse::getPosition(window).y >= labRectangleSprite.getPosition().y + labRectangleSprite.getGlobalBounds().height - 100 &&
        sf::Mouse::getPosition(window).y <= labRectangleSprite.getPosition().y + labRectangleSprite.getGlobalBounds().height - 20)
    {
      cout << "osare gole orkide!!!!!!!!" << endl;
      if ((mainStore->NumberOfWaterUnits) > 0 && (mainStore->sonbol) > 0)
      {
        (mainStore->NumberOfWaterUnits)--;
        (mainStore->sonbol)--;
        (mainStore->orkideExtract)++;
        ui x = mainStore->NumberOfWaterUnits;
        ui y = mainStore->orkideExtract;
        ui z = mainStore->liliumExtract + mainStore->orkideExtract + mainStore->magnoliaExtract;
        StoreMenuTexts[3].setString(to_string(z));
        StoreMenuTexts[3].setPosition(sf::Vector2f(storeMenuSprite.getPosition().x + 80, storeMenuSprite.getPosition().y + 12));

        StoreMenuTexts[0].setString(to_string(x));
        StoreMenuTexts[17].setString(to_string(y));
        StoreMenuTexts[17].setFillColor(sf::Color::White);
        text2[13].setFillColor(sf::Color::White);
      }
      else
      {
        sf::RenderWindow errorWindow(sf::VideoMode(549, 348), "Error window");
        sf::Event errorEvent;
        sf::Texture errorTexture;
        sf::Sprite errorSprite;
        errorTexture.loadFromFile("../image/Back.png");
        errorSprite.setTexture(errorTexture);
        while (errorWindow.isOpen())
        {
          while (errorWindow.pollEvent(errorEvent))
          {
            if (errorEvent.type == sf::Event::Closed)
              errorWindow.close();
          }
          errorWindow.draw(errorSprite);
          errorWindow.display();
        }
      }
    }
    else if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= labRectangleSprite.getPosition().x - 137 &&
             sf::Mouse::getPosition(window).x <= labRectangleSprite.getPosition().x + 137 &&
             sf::Mouse::getPosition(window).y >= labRectangleSprite.getPosition().y + labRectangleSprite.getGlobalBounds().height - 100 &&
             sf::Mouse::getPosition(window).y <= labRectangleSprite.getPosition().y + labRectangleSprite.getGlobalBounds().height - 20)
    {
      cout << "osare gole lilium!!!!!!!!" << endl;
      if ((mainStore->maryam) > 0 && (mainStore->narges) > 0 && (mainStore->NumberOfWaterUnits) > 0)
      {
        (mainStore->maryam)--;
        (mainStore->narges)--;
        (mainStore->NumberOfWaterUnits)--;
        (mainStore->liliumExtract)++;
        ui x = mainStore->NumberOfWaterUnits;
        ui y = mainStore->liliumExtract;
        StoreMenuTexts[0].setString(to_string(x));
        ui z = mainStore->liliumExtract + mainStore->orkideExtract + mainStore->magnoliaExtract;
        StoreMenuTexts[3].setString(to_string(z));
        StoreMenuTexts[3].setPosition(sf::Vector2f(storeMenuSprite.getPosition().x + 80, storeMenuSprite.getPosition().y + 12));

        StoreMenuTexts[16].setString(to_string(y));
        StoreMenuTexts[16].setFillColor(sf::Color::White);
        text2[12].setFillColor(sf::Color::White);

        cout << "lilium Bozorg tare !" << endl;
      }
      else
      {
        sf::RenderWindow errorWindow(sf::VideoMode(549, 348), "Error window");
        sf::Event errorEvent;
        sf::Texture errorTexture;
        sf::Sprite errorSprite;
        errorTexture.loadFromFile("../image/errorWindowBack.png");
        errorSprite.setTexture(errorTexture);
        while (errorWindow.isOpen())
        {
          while (errorWindow.pollEvent(errorEvent))
          {
            if (errorEvent.type == sf::Event::Closed)
              errorWindow.close();
          }
          errorWindow.draw(errorSprite);
          errorWindow.display();
        }
        cout << "lilium kochic tar az 0" << endl;
      }
    }

    else if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= labRectangleSprite.getPosition().x + 160 &&
             sf::Mouse::getPosition(window).x <= labRectangleSprite.getPosition().x + 432 &&
             sf::Mouse::getPosition(window).y >= labRectangleSprite.getPosition().y + labRectangleSprite.getGlobalBounds().height - 100 &&
             sf::Mouse::getPosition(window).y <= labRectangleSprite.getPosition().y + labRectangleSprite.getGlobalBounds().height - 20)
    {
      cout << "osare gole magnolia!!!!!!!!" << endl;
      if ((mainStore->lale) > 0 && (mainStore->kokab) > 0 && (mainStore->NumberOfWaterUnits) > 0)
      {
        (mainStore->lale)--;
        (mainStore->kokab)--;
        (mainStore->NumberOfWaterUnits)--;
        (mainStore->magnoliaExtract)++;
        ui x = mainStore->NumberOfWaterUnits;
        ui y = mainStore->magnoliaExtract;
        ui z = mainStore->liliumExtract + mainStore->orkideExtract + mainStore->magnoliaExtract;
        StoreMenuTexts[3].setString(to_string(z));
        StoreMenuTexts[3].setPosition(sf::Vector2f(storeMenuSprite.getPosition().x + 80, storeMenuSprite.getPosition().y + 12));

        StoreMenuTexts[0].setString(to_string(x));
        StoreMenuTexts[15].setString(to_string(y));
        StoreMenuTexts[15].setFillColor(sf::Color::White);
        text2[11].setFillColor(sf::Color::White);

        cout << "magnolia Bozorg tare !" << endl;
      }
      else
      {
        sf::RenderWindow errorWindow(sf::VideoMode(549, 348), "Error window");
        sf::Event errorEvent;
        sf::Texture errorTexture;
        sf::Sprite errorSprite;
        errorTexture.loadFromFile("../image/errorWindowBack.png");
        errorSprite.setTexture(errorTexture);
        while (errorWindow.isOpen())
        {
          while (errorWindow.pollEvent(errorEvent))
          {
            if (errorEvent.type == sf::Event::Closed)
              errorWindow.close();
          }
          errorWindow.draw(errorSprite);
          errorWindow.display();
        }
        cout << "magnoli kochic tar az 0" << endl;
      }
    }
  }
}
void clickOnItemsOfMenu(sf::RenderWindow &window, sf::Event &event, sf::Texture &menuTexture,
                        sf::Sprite &menuSprite, sf::Texture *rectanglesTexture,
                        sf::Sprite *rectanglesSprite, sf::Text *text1, sf::Font &font,
                        bool &clickOnSalesRoom, bool &clickOnLaboratory, bool &clickOnGreenHouse, Store *mainStore, sf::Text *StoreMenuTexts,
                        sf::Text *text2, sf::Texture &labRectangleTexture, sf::Sprite &labRectangleSprite, Vase *vases, bool &fromGreenHouse)
{
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x - 110) &&
        sf::Mouse::getPosition(window).x <= window.getSize().x &&
        sf::Mouse::getPosition(window).y >= 0 &&
        sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "profile" << endl;
      clickOnSalesRoom = false;
      clickOnLaboratory = false;
      clickOnGreenHouse = false;

      menuTexture.loadFromFile("../image/menu/menu0.png");
    }
  }
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x - 265) &&
        sf::Mouse::getPosition(window).x <= (window.getSize().x - 160) &&
        sf::Mouse::getPosition(window).y >= 0 &&
        sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "greenhouse!!" << endl;
      clickOnSalesRoom = false;
      clickOnLaboratory = false;
      clickOnGreenHouse = true;
      menuTexture.loadFromFile("../image/menu/menu1.png");
      setVases(window, event, vases);
    }
  }
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x - 435) &&
        sf::Mouse::getPosition(window).x <= (window.getSize().x - 345) &&
        sf::Mouse::getPosition(window).y >= 0 &&
        sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "froshgah!!" << endl;
      clickOnSalesRoom = true;
      clickOnLaboratory = false;
      clickOnGreenHouse = false;
      fromGreenHouse = false;
      menuTexture.loadFromFile("../image/menu/menu2.png");
      setRectangles(window, rectanglesTexture, rectanglesSprite, font, text1, text2, StoreMenuTexts, mainStore);
    }
  }
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= (window.getSize().x - 610) &&
        sf::Mouse::getPosition(window).x <= (window.getSize().x - 495) &&
        sf::Mouse::getPosition(window).y >= 0 &&
        sf::Mouse::getPosition(window).y <= menuSprite.getGlobalBounds().height)
    {
      cout << "azmayeshgah!!" << endl;
      clickOnSalesRoom = false;
      clickOnLaboratory = true;
      clickOnGreenHouse = false;

      menuTexture.loadFromFile("../image/menu/menu3.png");
      setElementsOfLabaratory(window, event, labRectangleTexture, labRectangleSprite);
    }
  }
}
void setStoreMenu(sf::RenderWindow &window, sf::Texture &storeMenuTexture, sf::Sprite &storeMenuSprite)
{
  storeMenuTexture.loadFromFile("../image/strip6.png");
  storeMenuSprite.setTexture(storeMenuTexture);
  storeMenuSprite.setPosition(sf::Vector2f(50.5, 650));
}

void setRectangles(sf::RenderWindow &window, sf::Texture *rectanglesTexture,
                   sf::Sprite *rectanglesSprite, sf::Font &font, sf::Text *text1, sf::Text *text2, sf::Text *StoreMenuTexts, Store *mainStore)
{

  //set elements of Sale room
  for (size_t i = 0; i < 24; i++)
  {
    text1[i].setFont(font);
  }
  for (size_t i = 0; i < 24; i++)
  {
    text1[i].setFillColor(sf::Color::White);
  }

  for (size_t i = 0; i < 14; i++)
  {
    rectanglesTexture[i].loadFromFile("../image/strip4.png");
  }
  for (size_t i = 0; i < 14; i++)
  {
    rectanglesSprite[i].setTexture(rectanglesTexture[i]);
  }
  for (size_t i = 0; i < 7; i++)
  {
    rectanglesSprite[i].setOrigin(sf::Vector2f(rectanglesSprite[i].getGlobalBounds().width, 0));
    rectanglesSprite[i].setPosition(sf::Vector2f(window.getSize().x / 2 - 35, 200 + ((i) * (rectanglesSprite[i].getGlobalBounds().height + 10))));
  }

  for (size_t i = 7; i < 14; i++)
  {
    rectanglesSprite[i].setPosition(sf::Vector2f(window.getSize().x / 2 + 35, 200 + ((i - 7) * (rectanglesSprite[i].getGlobalBounds().height + 10))));
  }
  text1[14].setString("piaz gol addi  1000");
  text1[15].setString("piaz gol nader  5000");
  text1[16].setString("piaz gol zinati  20000");
  text1[17].setString("made sam pashi 500");
  text1[18].setString("khak  450");
  text1[19].setString("aab  250");
  for (size_t i = 14; i <= 19; i++)
  {
    if (i % 2 == 0)
    {
      text1[i].setPosition(sf::Vector2f(rectanglesSprite[i / 2].getPosition().x + rectanglesSprite[i / 2].getGlobalBounds().width / 2 + 10, rectanglesSprite[i / 2].getPosition().y + 2));
    }
    else
    {
      text1[i].setPosition(sf::Vector2f(rectanglesSprite[(i - 1) / 2].getPosition().x + 5, rectanglesSprite[i / 2].getPosition().y + 2));
    }
  }
  //set elements of Flower Store
  // for (size_t i = 4; i < 18; i++)
  // {
  //   StoreMenuTexts[i].setString("0");
  // }
  ui x = mainStore->magnolia;
  StoreMenuTexts[4].setString(to_string(x));
  x = mainStore->lilium;
  StoreMenuTexts[5].setString(to_string(x));
  x = mainStore->orkide;
  StoreMenuTexts[6].setString(to_string(x));
  x = mainStore->lale;
  StoreMenuTexts[7].setString(to_string(x));
  x = mainStore->maryam;
  StoreMenuTexts[8].setString(to_string(x));
  x = mainStore->sonbol;
  StoreMenuTexts[9].setString(to_string(x));
  x = mainStore->kokab;
  StoreMenuTexts[10].setString(to_string(x));
  x = mainStore->narges;
  StoreMenuTexts[11].setString(to_string(x));
  x = mainStore->ordinaryBulb;
  StoreMenuTexts[12].setString(to_string(x));
  x = mainStore->rareBulb;
  StoreMenuTexts[13].setString(to_string(x));
  x = mainStore->decorativeBulb;
  StoreMenuTexts[14].setString(to_string(x));
  x = mainStore->magnoliaExtract;
  StoreMenuTexts[15].setString(to_string(x));
  x = mainStore->liliumExtract;
  StoreMenuTexts[16].setString(to_string(x));
  x = mainStore->orkideExtract;
  StoreMenuTexts[17].setString(to_string(x));
  for (size_t i = 4; i < 18; i++)
  {
    if (StoreMenuTexts[i].getString() != "0")
    {
      StoreMenuTexts[i].setFillColor(sf::Color::White);
      text2[i - 4].setFillColor(sf::Color::White);
    }
    else if (StoreMenuTexts[i].getString() == "0")
    {
      StoreMenuTexts[i].setFillColor(sf::Color(200, 100, 100));
      text2[i - 4].setFillColor(sf::Color(200, 100, 100));
    }
  }

  for (size_t i = 0; i < 14; i++)
  {
    text2[i].setFont(font);
  }
  text2[0].setString("Magnolia");
  text2[1].setString("Lilium");
  text2[2].setString("Orkide");
  text2[3].setString("Lale");
  text2[4].setString("Maryam");
  text2[5].setString("Sonbol");
  text2[6].setString("Kokab");
  text2[7].setString("Narges");
  text2[8].setString("Piaz gol aadi");
  text2[9].setString("Piaz gol nader");
  text2[10].setString("Piaz gol zinati");
  text2[11].setString("Osare magnolia");
  text2[12].setString("Osare lilium");
  text2[13].setString("osare orkide");

  for (size_t i = 0; i <= 13; i++)
  {
    if (i % 2 == 0)
    {
      text2[i].setPosition(sf::Vector2f(rectanglesSprite[i / 2].getPosition().x - rectanglesSprite[i / 2].getGlobalBounds().width / 2 + 10, rectanglesSprite[i / 2].getPosition().y + 2));
    }
    else
    {
      text2[i].setPosition(sf::Vector2f(rectanglesSprite[(i - 1) / 2].getPosition().x - rectanglesSprite[(i - 1) / 2].getGlobalBounds().width + 5, rectanglesSprite[(i - 1) / 2].getPosition().y + 2));
    }
  }
}

void rightColumnOfSalesRoom(sf::RenderWindow &window, sf::Event &event, sf::Sprite *rectanglesSprite, int index, Store *mainStore, sf::Text *StoreMenuTexts, sf::Sprite &storeMenuSprite, sf::Text *text2)
{
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= rectanglesSprite[index].getPosition().x + rectanglesSprite[index].getGlobalBounds().width / 2 + index &&
        sf::Mouse::getPosition(window).x <= rectanglesSprite[index].getPosition().x + rectanglesSprite[index].getGlobalBounds().width &&
        sf::Mouse::getPosition(window).y >= rectanglesSprite[index].getPosition().y &&
        sf::Mouse::getPosition(window).y <= rectanglesSprite[index].getPosition().y + rectanglesSprite[index].getGlobalBounds().height)
    {
      if (index == 7)
      {
        (mainStore->ordinaryBulb)++;
        cout << "ordinary : " << mainStore->ordinaryBulb << endl;
        ui x = mainStore->ordinaryBulb;
        StoreMenuTexts[12].setString(to_string(x));
        StoreMenuTexts[12].setPosition(sf::Vector2f(rectanglesSprite[4].getPosition().x - 30, rectanglesSprite[4].getPosition().y + 2));
        StoreMenuTexts[12].setFillColor(sf::Color::White);
        text2[8].setFillColor(sf::Color::White);
      }
      else if (index == 8)
      {
        (mainStore->decorativeBulb)++;
        cout << "decorativeBulb : " << mainStore->decorativeBulb << endl;
        ui x = mainStore->decorativeBulb;
        StoreMenuTexts[14].setString(to_string(x));
        StoreMenuTexts[14].setPosition(sf::Vector2f(rectanglesSprite[5].getPosition().x - 30, rectanglesSprite[5].getPosition().y + 2));
        StoreMenuTexts[14].setFillColor(sf::Color::White);
        text2[10].setFillColor(sf::Color::White);
      }
      else if (index == 9)
      {
        (mainStore->NumberOfSoilUnits)++;
        cout << "NumberOfSoilUnits : " << mainStore->NumberOfSoilUnits << endl;
        ui x = mainStore->NumberOfSoilUnits;
        StoreMenuTexts[1].setString(to_string(x));
        StoreMenuTexts[1].setPosition(storeMenuSprite.getPosition().x + storeMenuSprite.getGlobalBounds().width - 650, storeMenuSprite.getPosition().y + 12);
      }
    }
  }
}
void leftColumnOfSalesRoom(sf::RenderWindow &window,
                           sf::Event &event, sf::Sprite *rectanglesSprite, int index, Store *mainStore, sf::Text *StoreMenuTexts, sf::Sprite &storeMenuSprite, sf::Text *text2)
{
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= rectanglesSprite[index].getPosition().x &&
        sf::Mouse::getPosition(window).x <= rectanglesSprite[index].getPosition().x + rectanglesSprite[index].getGlobalBounds().width / 2 &&
        sf::Mouse::getPosition(window).y >= rectanglesSprite[index].getPosition().y &&
        sf::Mouse::getPosition(window).y <= rectanglesSprite[index].getPosition().y + rectanglesSprite[index].getGlobalBounds().height)
    {
      if (index == 7)
      {
        (mainStore->rareBulb)++;
        ui x = mainStore->rareBulb;
        StoreMenuTexts[13].setString(to_string(x));
        StoreMenuTexts[13].setPosition(sf::Vector2f(rectanglesSprite[4].getPosition().x - rectanglesSprite[4].getGlobalBounds().width / 2 - 30, rectanglesSprite[4].getPosition().y + 2));
        StoreMenuTexts[13].setFillColor(sf::Color::White);
        text2[9].setFillColor(sf::Color::White);
      }
      else if (index == 8)
      {
        (mainStore->spray)++;
        ui x = mainStore->spray;
        StoreMenuTexts[2].setString(to_string(x));
        StoreMenuTexts[2].setPosition(storeMenuSprite.getPosition().x + storeMenuSprite.getGlobalBounds().width - 950, storeMenuSprite.getPosition().y + 12);
      }
      else if (index == 9)
      {
        (mainStore->NumberOfWaterUnits)++;
        ui x = mainStore->NumberOfWaterUnits;
        StoreMenuTexts[0].setString(to_string(x));
        StoreMenuTexts[0].setPosition(storeMenuSprite.getPosition().x + storeMenuSprite.getGlobalBounds().width - 340, storeMenuSprite.getPosition().y + 12);
      }
    }
  }
}

void rightColumnOfFlowerStore(sf::RenderWindow &window,
                              sf::Event &event, sf::Sprite *rectanglesSprite,
                              int index, Store *mainStore, sf::Text *StoreMenuTexts,
                              sf::Text *text2, sf::Font &font, bool &fromGreenHouse, bool &checkCallFunction, Vase *&vasePtr)
{
  // cout<<"hello rightColumnOfFlowerStore function . "<<endl;
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= rectanglesSprite[index].getPosition().x - rectanglesSprite[index].getGlobalBounds().width / 2 + 6 &&
        sf::Mouse::getPosition(window).x <= rectanglesSprite[index].getPosition().x &&
        sf::Mouse::getPosition(window).y >= rectanglesSprite[index].getPosition().y &&
        sf::Mouse::getPosition(window).y <= rectanglesSprite[index].getPosition().y + rectanglesSprite[index].getGlobalBounds().height)
    {
      cout << "toye rightim alan" << endl;
      checkCallFunction = true;
      if (index == 0)
      {
        if (confirmWindow())
        {
          if (mainStore->magnolia > 0)
          {
            (mainStore->magnolia)--;
            ui x = (mainStore->magnolia);
            StoreMenuTexts[4].setString(to_string(x));
            if (mainStore->magnolia == 0)
            {
              StoreMenuTexts[4].setFillColor(sf::Color(200, 100, 100));
              text2[0].setFillColor(sf::Color(200, 100, 100));
            }
            else
            {
              StoreMenuTexts[4].setFillColor(sf::Color::White);
              text2[0].setFillColor(sf::Color::White);
            }
          }
          else
          {
            cout << "error_magnolia" << endl;
          }
        }
      }
      else if (index == 1)
      {
        if (confirmWindow())
        {
          if (mainStore->orkide > 0)
          {
            (mainStore->orkide--);
            ui x = (mainStore->orkide);
            StoreMenuTexts[6].setString(to_string(x));
            if (mainStore->orkide == 0)
            {
              StoreMenuTexts[6].setFillColor(sf::Color(200, 100, 100));
              text2[2].setFillColor(sf::Color(200, 100, 100));
            }
            else
            {
              StoreMenuTexts[6].setFillColor(sf::Color::White);
              text2[2].setFillColor(sf::Color::White);
            }
          }
          else
          {
            cout << "error_orkide " << endl;
          }
        }
      }
      else if (index == 2)
      {
        if (confirmWindow())
        {
          if (mainStore->maryam > 0)
          {
            (mainStore->maryam)--;
            ui x = (mainStore->maryam);
            StoreMenuTexts[8].setString(to_string(x));
            if (mainStore->maryam == 0)
            {
              StoreMenuTexts[8].setFillColor(sf::Color(200, 100, 100));
              text2[4].setFillColor(sf::Color(200, 100, 100));
            }
            else
            {
              StoreMenuTexts[8].setFillColor(sf::Color::White);
              text2[4].setFillColor(sf::Color::White);
            }
          }
          else
          {
            cout << "error_maryam " << endl;
          }
        }
      }
      else if (index == 3)
      {
        if (confirmWindow())
        {
          if (mainStore->kokab > 0)
          {
            (mainStore->kokab)--;
            ui x = (mainStore->kokab);
            StoreMenuTexts[10].setString(to_string(x));
            if (mainStore->kokab == 0)
            {
              StoreMenuTexts[10].setFillColor(sf::Color(200, 100, 100));
              text2[6].setFillColor(sf::Color(200, 100, 100));
            }
            else
            {
              StoreMenuTexts[10].setFillColor(sf::Color::White);
              text2[6].setFillColor(sf::Color::White);
            }
          }
          else
          {
            cout << "error_kokab" << endl;
          }
        }
      }
      else if (index == 4)
      {
        if (fromGreenHouse == false)
        {
          if (confirmWindow())
          {
            if (mainStore->ordinaryBulb > 0)
            {
              (mainStore->ordinaryBulb)--;
              ui x = (mainStore->ordinaryBulb);
              StoreMenuTexts[12].setString(to_string(x));
              if (mainStore->ordinaryBulb == 0)
              {
                StoreMenuTexts[12].setFillColor(sf::Color(200, 100, 100));
                text2[8].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[12].setFillColor(sf::Color::White);
                text2[8].setFillColor(sf::Color::White);
              }
            }
            else
            {
              cout << "error_ordinarybulb " << endl;
            }
          }
        }
        else if (fromGreenHouse == true)
        {
          cout << "in right , fromGreenHouse==true , index==4" << endl;

          if (confirmWindow2())
          {
            cout << "mikham bekaram!!!(right 4)" << endl;
            if (mainStore->ordinaryBulb > 0)
            {
              ++mainStore->plantedFlowers;
              (mainStore->ordinaryBulb)--;
              ui x = (mainStore->ordinaryBulb);
              StoreMenuTexts[12].setString(to_string(x));
              if (mainStore->ordinaryBulb == 0)
              {
                StoreMenuTexts[12].setFillColor(sf::Color(200, 100, 100));
                text2[8].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[12].setFillColor(sf::Color::White);
                text2[8].setFillColor(sf::Color::White);
              }
              vasePtr->set_empty(false);
              vasePtr->set_growing(true);
              srand(time(NULL));
              int randomFlower = rand() % 2 + 1;
              if (randomFlower == 1) // kokab flower will be planted
              {
                cout << "kokab flower" << endl;
                vasePtr->set_vaseTexture("../image/kokab0.png");
                vasePtr->set_flower(1, "kokab");
              }
              else // narges flower will be planted
              {
                cout << "narges flower" << endl;
                vasePtr->set_vaseTexture("../image/narges0.png");
                vasePtr->set_flower(1, "narges");
              }
              vasePtr->set_vaseSprite();
            }
            else
            {
              cout << "error_ordinarybulb" << endl;
            }
          }
          else // if(confirmWindow2() == false)
          {
            cout << "mikham befrosham!!!(right 4)" << endl;
            if (mainStore->ordinaryBulb > 0)
            {
              (mainStore->ordinaryBulb)--;
              ui x = (mainStore->ordinaryBulb);
              StoreMenuTexts[12].setString(to_string(x));
              if (mainStore->ordinaryBulb == 0)
              {
                StoreMenuTexts[12].setFillColor(sf::Color(200, 100, 100));
                text2[8].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[12].setFillColor(sf::Color::White);
                text2[8].setFillColor(sf::Color::White);
              }
            }
            else
            {
              cout << "error_ordinarybulb" << endl;
            }
          }
        }
      }

      else if (index == 5)
      {
        if (fromGreenHouse == false)
        {
          if (confirmWindow())
          {
            if (mainStore->decorativeBulb > 0)
            {
              ++mainStore->plantedFlowers;
              (mainStore->decorativeBulb)--;
              ui x = (mainStore->decorativeBulb);
              StoreMenuTexts[14].setString(to_string(x));
              if (mainStore->decorativeBulb == 0)
              {
                StoreMenuTexts[14].setFillColor(sf::Color(200, 100, 100));
                text2[10].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[14].setFillColor(sf::Color::White);
                text2[10].setFillColor(sf::Color::White);
              }
            }
            else
            {
              cout << "error_decorativebulb " << endl;
            }
          }
        }
        else if (fromGreenHouse == true)
        {
          cout << "in right , fromGreenHouse==true ,index==5" << endl;
          if (confirmWindow2())
          {
            cout << "mikham bekaram!!!(right 5)" << endl;
            if (mainStore->decorativeBulb > 0)
            {
              ++mainStore->plantedFlowers;
              (mainStore->decorativeBulb)--;
              ui x = (mainStore->decorativeBulb);
              StoreMenuTexts[14].setString(to_string(x));
              if (mainStore->decorativeBulb == 0)
              {
                StoreMenuTexts[14].setFillColor(sf::Color(200, 100, 100));
                text2[10].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[14].setFillColor(sf::Color::White);
                text2[10].setFillColor(sf::Color::White);
              }
              vasePtr->set_empty(false);
              vasePtr->set_growing(true);
              srand(time(NULL));
              int randomFlower = rand() % 3 + 1;
              if (randomFlower == 1) // magnolia flower will be planted
              {
                cout << "magnolia flower" << endl;
                vasePtr->set_vaseTexture("../image/magnolia0.png");
                vasePtr->set_vaseSprite();
                vasePtr->set_flower(3, "magnolia");
              }
              else if (randomFlower == 2) // lilium flower will be planted
              {
                cout << "lilium flower" << endl;
                vasePtr->set_vaseTexture("../image/lilium0.png");
                vasePtr->set_vaseSprite();
                vasePtr->set_flower(3, "lilium");
              }
              else // orkide flower will be planted
              {
                cout << "orkide flower" << endl;
                vasePtr->set_vaseTexture("../image/orkide0.png");
                vasePtr->set_vaseSprite();
                vasePtr->set_flower(3, "orkide");
              }
            }
            else
            {
              cout << "error_decorativebulb" << endl;
            }
          }
          else // if(confirmWindow2() == false)
          {
            cout << "mikham befrosham!!!(right 5)" << endl;
            if (mainStore->decorativeBulb > 0)
            {
              (mainStore->decorativeBulb)--;
              ui x = (mainStore->decorativeBulb);
              StoreMenuTexts[14].setString(to_string(x));
              if (mainStore->decorativeBulb == 0)
              {
                StoreMenuTexts[14].setFillColor(sf::Color(200, 100, 100));
                text2[10].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[14].setFillColor(sf::Color::White);
                text2[10].setFillColor(sf::Color::White);
              }
            }
            else
            {
              cout << "error_decorativebulb" << endl;
            }
          }
        }
      }
    }
  }
}

void leftColumnOfFlowerStore(sf::RenderWindow &window,
                             sf::Event &event, sf::Sprite *rectanglesSprite,
                             int index, Store *mainStore, sf::Text *StoreMenuTexts,
                             sf::Text *text2, sf::Font &font, bool &fromGreenHouse, bool &checkCallFunction, Vase *&vasePtr)
{
  // cout<<"hello rightColumnOfFlowerStore function . "<<endl;
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= rectanglesSprite[index].getPosition().x - rectanglesSprite[index].getGlobalBounds().width &&
        sf::Mouse::getPosition(window).x <= rectanglesSprite[index].getPosition().x - rectanglesSprite[index].getGlobalBounds().width / 2 - 6 &&
        sf::Mouse::getPosition(window).y >= rectanglesSprite[index].getPosition().y &&
        sf::Mouse::getPosition(window).y <= rectanglesSprite[index].getPosition().y + rectanglesSprite[index].getGlobalBounds().height)
    {
      cout << "toye leftim alan" << endl;
      checkCallFunction = true;
      if (index == 0)
      {
        if (confirmWindow())
        {
          if (mainStore->lilium > 0)
          {
            (mainStore->lilium)--;
            ui x = (mainStore->lilium);
            StoreMenuTexts[5].setString(to_string(x));
            if (mainStore->lilium == 0)
            {
              StoreMenuTexts[5].setFillColor(sf::Color(200, 100, 100));
              text2[1].setFillColor(sf::Color(200, 100, 100));
            }
            else
            {
              StoreMenuTexts[5].setFillColor(sf::Color::White);
              text2[1].setFillColor(sf::Color::White);
            }
          }
          else
          {
            cout << "error_lilium" << endl;
          }
        }
      }
      else if (index == 1)
      {
        if (confirmWindow())
        {
          if (mainStore->lale > 0)
          {
            (mainStore->lale)--;
            ui x = (mainStore->lale);
            StoreMenuTexts[7].setString(to_string(x));
            if (mainStore->lale == 0)
            {
              StoreMenuTexts[7].setFillColor(sf::Color(200, 100, 100));
              text2[3].setFillColor(sf::Color(200, 100, 100));
            }
            else
            {
              StoreMenuTexts[7].setFillColor(sf::Color::White);
              text2[3].setFillColor(sf::Color::White);
            }
          }
          else
          {
            cout << "error_lale " << endl;
          }
        }
      }
      else if (index == 2)
      {
        if (confirmWindow())
        {
          if (mainStore->sonbol > 0)
          {
            (mainStore->sonbol)--;
            ui x = (mainStore->sonbol);
            StoreMenuTexts[9].setString(to_string(x));
            if (mainStore->sonbol == 0)
            {
              StoreMenuTexts[9].setFillColor(sf::Color(200, 100, 100));
              text2[5].setFillColor(sf::Color(200, 100, 100));
            }
            else
            {
              StoreMenuTexts[9].setFillColor(sf::Color::White);
              text2[5].setFillColor(sf::Color::White);
            }
          }
          else
          {
            cout << "error_sonbol " << endl;
          }
        }
      }
      else if (index == 3)
      {
        if (confirmWindow())
        {
          if (mainStore->narges > 0)
          {
            (mainStore->narges)--;
            ui x = (mainStore->narges);
            StoreMenuTexts[11].setString(to_string(x));
            if (mainStore->narges == 0)
            {
              StoreMenuTexts[11].setFillColor(sf::Color(200, 100, 100));
              text2[7].setFillColor(sf::Color(200, 100, 100));
            }
            else
            {
              StoreMenuTexts[11].setFillColor(sf::Color::White);
              text2[7].setFillColor(sf::Color::White);
            }
          }
          else
          {
            cout << "error_narges" << endl;
          }
        }
      }
      else if (index == 4)
      {
        if (fromGreenHouse == false)
        {
          if (confirmWindow())
          {
            if (mainStore->rareBulb > 0)
            {
              (mainStore->rareBulb)--;
              ui x = (mainStore->rareBulb);
              StoreMenuTexts[13].setString(to_string(x));
              if (mainStore->rareBulb == 0)
              {
                StoreMenuTexts[13].setFillColor(sf::Color(200, 100, 100));
                text2[9].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[13].setFillColor(sf::Color::White);
                text2[9].setFillColor(sf::Color::White);
              }
            }
            else
            {
              cout << "error_rarebulb " << endl;
            }
          }
        }
        else if (fromGreenHouse == true)
        {
          cout << "in left , fromGreenHouse==true ,index==4" << endl;
          if (confirmWindow2())
          {
            //cout << "mikham bekaram!!!(left 4)" << endl;
            if (mainStore->rareBulb > 0)
            {
              ++mainStore->plantedFlowers;
              (mainStore->rareBulb)--;
              ui x = (mainStore->rareBulb);
              StoreMenuTexts[13].setString(to_string(x));
              if (mainStore->rareBulb == 0)
              {
                StoreMenuTexts[13].setFillColor(sf::Color(200, 100, 100));
                text2[9].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[13].setFillColor(sf::Color::White);
                text2[9].setFillColor(sf::Color::White);
              }
              vasePtr->set_empty(false);
              vasePtr->set_growing(true);
              srand(time(NULL));
              int randomFlower = rand() % 3 + 1;
              if (randomFlower == 1) // lale flower will be planted
              {
                cout << "lale flower" << endl;
                vasePtr->set_vaseTexture("../image/lale0.png");
                vasePtr->set_vaseSprite();
                vasePtr->set_flower(2, "lale");
              }
              else if (randomFlower == 2) // maryam flower will be planted
              {
                cout << "maryam flower" << endl;
                vasePtr->set_vaseTexture("../image/maryam0.png");
                vasePtr->set_vaseSprite();
                vasePtr->set_flower(2, "maryam");
              }
              else // sonbol flower will be planted
              {
                cout << "sonbol flower" << endl;
                vasePtr->set_vaseTexture("../image/sonbol0.png");
                vasePtr->set_vaseSprite();
                vasePtr->set_flower(2, "sonbol");
              }
            }
            else
            {
              cout << "error_rarebulb" << endl;
            }
          }
          else // if(confirmWindow2() == false)
          {
            cout << "mikham befrosham!!!(left 4)" << endl;
            if (mainStore->rareBulb > 0)
            {
              (mainStore->rareBulb)--;
              ui x = (mainStore->rareBulb);
              StoreMenuTexts[13].setString(to_string(x));
              if (mainStore->rareBulb == 0)
              {
                StoreMenuTexts[13].setFillColor(sf::Color(200, 100, 100));
                text2[9].setFillColor(sf::Color(200, 100, 100));
              }
              else
              {
                StoreMenuTexts[13].setFillColor(sf::Color::White);
                text2[9].setFillColor(sf::Color::White);
              }
            }
            else
            {
              cout << "error_rarebulb" << endl;
            }
          }
        }
      }
    }
  }
}

bool confirmWindow()
{
  //cout << "hello confirmWindow function " << endl;

  sf::RenderWindow ConfirmWindoww(sf::VideoMode(549, 309), "confirm ConfirmWindoww");
  // background of ConfirmWindoww

  sf::Texture backgroundTexture;

  sf::Sprite backgroundSprite;
  backgroundTexture.loadFromFile("../image/confirmWindowBackground.png");

  backgroundSprite.setTexture(backgroundTexture);

  sf::Event event;

  bool check;
  //while user dose not click on the close button, YES
  // or NO , ConfirmWindoww is open
  while (ConfirmWindoww.isOpen())
  {
    while (ConfirmWindoww.pollEvent(event))
    {
      // if user clicks on the close button, ConfirmWindoww will be closed
      if (event.type == sf::Event::EventType::Closed)
      {
        ConfirmWindoww.close();
        check = false;
      }
      //if user clicks on "NO", ConfirmWindoww will be closed
      if (event.type == sf::Event::EventType::MouseButtonPressed)
      {
        if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(ConfirmWindoww).x >= 195 &&
            sf::Mouse::getPosition(ConfirmWindoww).x <= 264 &&
            sf::Mouse::getPosition(ConfirmWindoww).y >= 150 &&
            sf::Mouse::getPosition(ConfirmWindoww).y <= 176)
        {
          ConfirmWindoww.close();
          check = false;
        }
      }
      //if user clicks on "YES", task will be deleted and ConfirmWindoww will be closed

      if (event.type == sf::Event::EventType::MouseButtonPressed)
      {
        if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(ConfirmWindoww).x >= 313 &&
            sf::Mouse::getPosition(ConfirmWindoww).x <= 375 &&
            sf::Mouse::getPosition(ConfirmWindoww).y >= 150 &&
            sf::Mouse::getPosition(ConfirmWindoww).y <= 176)
        {

          ConfirmWindoww.close();
          check = true;
        }
      }
    } // end of while(ConfirmWindoww.pollEvent(event))
    ConfirmWindoww.draw(backgroundSprite);
    // ConfirmWindoww.draw(test);
    ConfirmWindoww.display();
  } // end of while(window.isOpen())
  return check;
} // end of manage_window function

bool confirmWindow2()
{
  sf::RenderWindow ConfirmWindoww2(sf::VideoMode(556, 323), "confirm Window");
  // background of ConfirmWindoww

  sf::Texture backgroundTexture;

  sf::Sprite backgroundSprite;
  backgroundTexture.loadFromFile("../image/confirmWindow2.png");

  backgroundSprite.setTexture(backgroundTexture);

  sf::Event event;

  bool check;

  //while user dose not click on the close button, YES
  // or NO , ConfirmWindoww is open
  while (ConfirmWindoww2.isOpen())
  {
    while (ConfirmWindoww2.pollEvent(event))
    {
      // if user clicks on the close button, ConfirmWindoww will be closed
      if (event.type == sf::Event::EventType::Closed)
      {
        ConfirmWindoww2.close();
        check = false;
      }
      //if user clicks on "NO", ConfirmWindoww will be closed
      if (event.type == sf::Event::EventType::MouseButtonPressed)
      {
        if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(ConfirmWindoww2).x >= 147 &&
            sf::Mouse::getPosition(ConfirmWindoww2).x <= 250 &&
            sf::Mouse::getPosition(ConfirmWindoww2).y >= 173 &&
            sf::Mouse::getPosition(ConfirmWindoww2).y <= 212)
        {
          ConfirmWindoww2.close();
          check = false;
        }
      }
      //if user clicks on "YES", task will be deleted and ConfirmWindoww will be closed

      if (event.type == sf::Event::EventType::MouseButtonPressed)
      {
        if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(ConfirmWindoww2).x >= 338 &&
            sf::Mouse::getPosition(ConfirmWindoww2).x <= 441 &&
            sf::Mouse::getPosition(ConfirmWindoww2).y >= 173 &&
            sf::Mouse::getPosition(ConfirmWindoww2).y <= 212)
        {

          ConfirmWindoww2.close();
          check = true;
        }
      }
    } // end of while(ConfirmWindoww.pollEvent(event))
    ConfirmWindoww2.draw(backgroundSprite);
    // ConfirmWindoww.draw(test);
    ConfirmWindoww2.display();
  } // end of while(window.isOpen())
  return check;
} // end of manage_window function
void errorWindow()
{
  sf::RenderWindow errorWindow(sf::VideoMode(580, 338), "Error window");
  sf::Event errorEvent;
  sf::Texture errorTexture;
  sf::Sprite errorSprite;
  errorTexture.loadFromFile("../image/errorWindow2.png");
  errorSprite.setTexture(errorTexture);
  while (errorWindow.isOpen())
  {
    while (errorWindow.pollEvent(errorEvent))
    {
      if (errorEvent.type == sf::Event::Closed)
        errorWindow.close();
    }
    errorWindow.draw(errorSprite);
    errorWindow.display();
  }
}

bool waterWindow(Vase &v, Store *mainStore)
{
  sf::RenderWindow waterWin(sf::VideoMode(477, 342), "Water Window");
  sf::Texture waterTexture;
  sf::Texture trash;
  waterTexture.loadFromFile("../image/waterWindow.png");
  trash.loadFromFile("../image/trash.png");
  sf::Sprite waterSprite;
  sf::Sprite trashSprite;
  waterSprite.setTexture(waterTexture);
  trashSprite.setTexture(trash);
  trashSprite.setPosition(sf::Vector2f(waterWin.getSize().x - 42, waterWin.getSize().y - 42));
  sf::Event waterEvent;
  bool check = false;
  // sf::RectangleShape test;
  // test.setSize(sf::Vector2f(200, 2));
  // test.setPosition(sf::Vector2f(200, 215));
  while (waterWin.isOpen())
  {
    while (waterWin.pollEvent(waterEvent))
    {
      if (waterEvent.type == sf::Event::Closed)
      {
        waterWin.close();
        check = false;
      }
      if (waterEvent.type == sf::Event::MouseButtonPressed)
      {
        if (waterEvent.key.code == sf::Mouse::Left && sf::Mouse::getPosition(waterWin).x >= 150 &&
            sf::Mouse::getPosition(waterWin).x <= 297 &&
            sf::Mouse::getPosition(waterWin).y >= 159 &&
            sf::Mouse::getPosition(waterWin).y <= 213)
        {
          check = true;
          waterWin.close();
        }
        if (waterEvent.key.code == sf::Mouse::Left && sf::Mouse::getPosition(waterWin).x >= waterWin.getSize().x - 42 &&
            sf::Mouse::getPosition(waterWin).x <= waterWin.getSize().x &&
            sf::Mouse::getPosition(waterWin).y >= waterWin.getSize().y - 42 &&
            sf::Mouse::getPosition(waterWin).y <= waterWin.getSize().y)
        {
          check = false;
          v.set_empty(true);
          v.set_growing(false);
          v.set_vaseTexture("../image/empty.png");
          v.get_vaseSprite();
          waterWin.close();
          mainStore->deletedFlowers++;
        }
      }
    }
    waterWin.display();
    waterWin.draw(waterSprite);
    waterWin.draw(trashSprite);
    //waterWin.draw(test);
  }
  return check;
}
// open a window for giving soil to flowers

bool soilWindow(Vase &v, Store *mainStore)
{
  sf::RenderWindow soilWin(sf::VideoMode(500, 300), "Soil Window");
  sf::Texture soilTexture;
  sf::Texture trash;
  soilTexture.loadFromFile("../image/soilWindow.png");
  trash.loadFromFile("../image/trash.png");
  sf::Sprite soilSprite;
  sf::Sprite trashSprite;
  soilSprite.setTexture(soilTexture);
  trashSprite.setTexture(trash);
  sf::Event soilEvent;
  bool check = false;
  trashSprite.setPosition(sf::Vector2f(soilWin.getSize().x - 42, soilWin.getSize().y - 42));
  while (soilWin.isOpen())
  {
    while (soilWin.pollEvent(soilEvent))
    {
      if (soilEvent.type == sf::Event::Closed)
      {
        soilWin.close();
        check = false;
      }
      if (soilEvent.type == sf::Event::MouseButtonPressed)
      {
        if (soilEvent.key.code == sf::Mouse::Left && sf::Mouse::getPosition(soilWin).x >= 191 &&
            sf::Mouse::getPosition(soilWin).x <= 313 &&
            sf::Mouse::getPosition(soilWin).y >= 146 &&
            sf::Mouse::getPosition(soilWin).y <= 190)
        {
          check = true;
          soilWin.close();
        }
        if (soilEvent.key.code == sf::Mouse::Left && sf::Mouse::getPosition(soilWin).x >= soilWin.getSize().x - 42 &&
            sf::Mouse::getPosition(soilWin).x <= soilWin.getSize().x &&
            sf::Mouse::getPosition(soilWin).y >= soilWin.getSize().y - 42 &&
            sf::Mouse::getPosition(soilWin).y <= soilWin.getSize().y)
        {
          check = false;
          v.set_empty(true);
          v.set_growing(false);
          v.set_vaseTexture("../image/empty.png");
          v.get_vaseSprite();
          soilWin.close();
          mainStore->deletedFlowers++;
        }
      }
    }
    soilWin.display();
    soilWin.draw(soilSprite);
    soilWin.draw(trashSprite);
  }
  return check;
}
// open a window for giving spray to rare flowers
bool sprayWindow(Vase &v, Store *mainStore)
{
  sf::RenderWindow sprayWin(sf::VideoMode(546, 339), "Spray Window");
  sf::Texture sprayTesture;
  sf::Texture trash;
  sprayTesture.loadFromFile("../image/spray.png");
  trash.loadFromFile("../image/trash.png");
  sf::Sprite spraySprite;
  sf::Sprite trashSprite;
  spraySprite.setTexture(sprayTesture);
  trashSprite.setTexture(trash);
  sf::Event sprayEvent;
  bool check = false;
  trashSprite.setPosition(sf::Vector2f(sprayWin.getSize().x - 42, sprayWin.getSize().y - 42));
  while (sprayWin.isOpen())
  {
    while (sprayWin.pollEvent(sprayEvent))
    {
      if (sprayEvent.type == sf::Event::Closed)
      {
        sprayWin.close();
        check = false;
      }
      if (sprayEvent.type == sf::Event::MouseButtonPressed)
      {
        if (sprayEvent.key.code == sf::Mouse::Left && sf::Mouse::getPosition(sprayWin).x >= 148 &&
            sf::Mouse::getPosition(sprayWin).x <= 390 &&
            sf::Mouse::getPosition(sprayWin).y >= 167 &&
            sf::Mouse::getPosition(sprayWin).y <= 232)
        {
          check = true;
          sprayWin.close();
        }
        if (sprayEvent.key.code == sf::Mouse::Left && sf::Mouse::getPosition(sprayWin).x >= sprayWin.getSize().x - 42 &&
            sf::Mouse::getPosition(sprayWin).x <= sprayWin.getSize().x &&
            sf::Mouse::getPosition(sprayWin).y >= sprayWin.getSize().y - 42 &&
            sf::Mouse::getPosition(sprayWin).y <= sprayWin.getSize().y)
        {
          check = false;
          v.set_empty(true);
          v.set_growing(false);
          v.set_vaseTexture("../image/empty.png");
          v.get_vaseSprite();
          sprayWin.close();
          mainStore->deletedFlowers++;
        }
      }
    }
    sprayWin.display();
    sprayWin.draw(spraySprite);
    sprayWin.draw(trashSprite);
  }
  return check;
}

// open a window for giving extract to decorative flowers
bool extractWindow(Vase &v, Store *mainStore)
{
  sf::RenderWindow extractWin(sf::VideoMode(546, 366), "extract Window");
  sf::Texture extractTexture;
  sf::Texture trash;
  extractTexture.loadFromFile("../image/extractWindow.png");
  trash.loadFromFile("../image/trash.png");
  sf::Sprite extractSprite;
  sf::Sprite trashSprite;
  extractSprite.setTexture(extractTexture);
  trashSprite.setTexture(trash);
  sf::Event extractEvent;
  trashSprite.setPosition(sf::Vector2f(extractWin.getSize().x - 42, extractWin.getSize().y - 42));
  bool check = false;
  while (extractWin.isOpen())
  {
    while (extractWin.pollEvent(extractEvent))
    {
      if (extractEvent.type == sf::Event::Closed)
      {
        extractWin.close();
        check = false;
      }
      if (extractEvent.type == sf::Event::MouseButtonPressed)
      {
        if (extractEvent.key.code == sf::Mouse::Left && sf::Mouse::getPosition(extractWin).x >= 174 &&
            sf::Mouse::getPosition(extractWin).x <= 380 &&
            sf::Mouse::getPosition(extractWin).y >= 173 &&
            sf::Mouse::getPosition(extractWin).y <= 234)
        {
          check = true;
          extractWin.close();
        }
      }
      if (extractEvent.key.code == sf::Mouse::Left && sf::Mouse::getPosition(extractWin).x >= extractWin.getSize().x - 42 &&
          sf::Mouse::getPosition(extractWin).x <= extractWin.getSize().x &&
          sf::Mouse::getPosition(extractWin).y >= extractWin.getSize().y - 42 &&
          sf::Mouse::getPosition(extractWin).y <= extractWin.getSize().y)
      {
        check = false;
        v.set_empty(true);
        v.set_growing(false);
        v.set_vaseTexture("../image/empty.png");
        v.get_vaseSprite();
        extractWin.close();
        mainStore->deletedFlowers++;
        cout << "number of deleted flowers -> " << mainStore->deletedFlowers << endl;
      }
    }
    extractWin.display();
    extractWin.draw(extractSprite);
    extractWin.draw(trashSprite);
  }
  return check;
}

void giveWater(Vase &v, Store *mainStore, sf::Text *StoreMenuTexts, ui type)
{
  if (waterWindow(v, mainStore))
  {
    cout << "aab dadan :)" << endl;
    if (mainStore->NumberOfWaterUnits > 0)
    {
      --(mainStore->NumberOfWaterUnits);
      ui x = mainStore->NumberOfWaterUnits;
      StoreMenuTexts[0].setString(to_string(x));
      if (type == 1) // ordinary flowers
      {
        if (v.get_flowerStar()->get_name() == "narges")
        {
          v.set_vaseTexture("../image/narges1.png");
          v.set_vaseSprite();
        }
        else // if ordinary flower was kokab
        {
          v.set_vaseTexture("../image/kokab1.png");
          v.set_vaseSprite();
        }
        v.get_flowerStar()->set_water(1);
      }                   // end of if (type == 1)
      else if (type == 2) // rare flowers
      {
        if (v.get_flowerStar()->get_name() == "maryam")
        {
          v.set_vaseTexture("../image/maryam1.png");
          v.set_vaseSprite();
        }
        else if (v.get_flowerStar()->get_name() == "sonbol")
        {
          v.set_vaseTexture("../image/sonbol1.png");
          v.set_vaseSprite();
        }
        else if (v.get_flowerStar()->get_name() == "lale")
        {
          v.set_vaseTexture("../image/lale1.png");
          v.set_vaseSprite();
        }
      }
      else // if type == 3 -> decorative flowers
      {

        if (v.get_flowerStar()->get_name() == "magnolia")
        {
          v.set_vaseTexture("../image/magnolia1.png");
          v.set_vaseSprite();
        }
        else if (v.get_flowerStar()->get_name() == "lilium")
        {
          v.set_vaseTexture("../image/lilium1.png");
          v.set_vaseSprite();
        }
        else if (v.get_flowerStar()->get_name() == "orkide")
        {
          v.set_vaseTexture("../image/orkide1.png");
          v.set_vaseSprite();
        }
      }
      v.get_flowerStar()->set_water(1);
    }
    else
    {
      errorWindow();
    }
  }
}
// open a window for giving soil to flowers

void giveSoil(Vase &v, Store *mainStore, sf::Text *StoreMenuTexts, ui type)
{
  if (soilWindow(v, mainStore))
  {
    cout << "khaak dadan :)" << endl;
    if (mainStore->NumberOfSoilUnits > 0)
    {
      --(mainStore->NumberOfSoilUnits);
      ui x = mainStore->NumberOfSoilUnits;
      StoreMenuTexts[1].setString(to_string(x));
      if (type == 1) // ordinary flowers
      {
        if (v.get_flowerStar()->get_name() == "narges")
        {
          v.set_vaseTexture("../image/flower2-3.png");
          v.set_vaseSprite();
        }
        else // if ordinary flower was kokab
        {
          v.set_vaseTexture("../image/flower1-3.png");
          v.set_vaseSprite();
        }
        v.set_growing(false);
        v.set_readyToPick(true);
      }                   // end of if (type == 1)
      else if (type == 2) // rare flowers
      {
        srand(time(NULL));
        int needToSpray = rand() % 2;
        if (needToSpray == 1) // the rare flower needs to spray
        {
          if (v.get_flowerStar()->get_name() == "maryam")
          {
            v.set_vaseTexture("../image/maryam2.png");
            v.set_vaseSprite();
          }
          else if (v.get_flowerStar()->get_name() == "sonbol")
          {
            v.set_vaseTexture("../image/sonbol2.png");
            v.set_vaseSprite();
          }
          else if (v.get_flowerStar()->get_name() == "lale")
          {
            v.set_vaseTexture("../image/lale2.png");
            v.set_vaseSprite();
          }
        }    // end of if(needToSpray == 1)
        else // if needToSpray == 0
        {
          if (v.get_flowerStar()->get_name() == "maryam")
          {
            v.set_vaseTexture("../image/flower4-3.png");
            v.set_vaseSprite();
          }
          else if (v.get_flowerStar()->get_name() == "sonbol")
          {
            v.set_vaseTexture("../image/flower5-3.png");
            v.set_vaseSprite();
          }
          else if (v.get_flowerStar()->get_name() == "lale")
          {
            v.set_vaseTexture("../image/flower3-3.png");
            v.set_vaseSprite();
          }
          // beacause of set_spray function is just for
          // RareFlower class we must use dynamic_cast
          RareFlower *rarePtr = dynamic_cast<RareFlower *>(v.get_flowerStar());
          rarePtr->set_spray(true);
          v.set_readyToPick(true);
          v.set_growing(false);
        }
      }    // end of else if (type == 2)
      else // if type == 3 -> decorative flowers
      {

        if (v.get_flowerStar()->get_name() == "magnolia")
        {
          v.set_vaseTexture("../image/magnolia2.png");
          v.set_vaseSprite();
        }
        else if (v.get_flowerStar()->get_name() == "lilium")
        {
          v.set_vaseTexture("../image/lilium2.png");
          v.set_vaseSprite();
        }
        else if (v.get_flowerStar()->get_name() == "orkide")
        {
          v.set_vaseTexture("../image/orkide2.png");
          v.set_vaseSprite();
        }
      }
      v.get_flowerStar()->set_soil(true);

    } // end of if (mainStore->NumberOfSoilUnits > 0)
    else
    {
      errorWindow();
    }
  } // end of if (soilWindow())
} // end of giveSoil function
void giveSpray(Vase &v, Store *mainStore, sf::Text *StoreMenuTexts)
{
  if (sprayWindow(v, mainStore))
  {
    cout << "spray dadan :)" << endl;
    if (mainStore->spray > 0)
    {
      --(mainStore->spray);
      ui x = mainStore->spray;
      StoreMenuTexts[2].setString(to_string(x));
      if (v.get_flowerStar()->get_name() == "maryam")
      {
        v.set_vaseTexture("../image/flower4-3.png");
      }
      else if (v.get_flowerStar()->get_name() == "sonbol")
      {
        v.set_vaseTexture("../image/flower5-3.png");
      }
      else if (v.get_flowerStar()->get_name() == "lale")
      {
        v.set_vaseTexture("../image/flower3-3.png");
      }
      v.set_vaseSprite();
      RareFlower *rarePtr = dynamic_cast<RareFlower *>(v.get_flowerStar());
      rarePtr->set_spray(true);
      v.set_readyToPick(true);
      v.set_growing(false);
    } // end of if (mainStore->spray > 0)
    else
    {
      errorWindow();
    }
  } // end of if (sprayWindow())
} // end of giveSpray function
void giveExtract(Vase &v, Store *mainStore, sf::Text *StoreMenuTexts)
{
  if (extractWindow(v, mainStore))
  {
    if (v.get_flowerStar()->get_name() == "magnolia")
    {
      if (mainStore->magnoliaExtract > 0)
      {
        --(mainStore->magnoliaExtract);
        ui x = mainStore->magnoliaExtract;
        ui y = mainStore->magnoliaExtract + mainStore->liliumExtract + mainStore->orkideExtract;
        StoreMenuTexts[15].setString(to_string(x));
        StoreMenuTexts[3].setString(to_string(y));
        v.set_vaseTexture("../image/flower6-3.png");
        v.set_vaseSprite();
        decorativeFlower *decorativePtr = dynamic_cast<decorativeFlower *>(v.get_flowerStar());
        decorativePtr->set_extract(true);
        v.set_readyToPick(true);
        v.set_growing(false);
      }
      else
      {
        errorWindow();
      }
    } // end of if (v.get_flowerStar()->get_name() == "magnolia")

    else if (v.get_flowerStar()->get_name() == "lilium")
    {
      if (mainStore->liliumExtract > 0)
      {
        --(mainStore->liliumExtract);
        ui x = mainStore->liliumExtract;
        ui y = mainStore->magnoliaExtract + mainStore->liliumExtract + mainStore->orkideExtract;
        StoreMenuTexts[16].setString(to_string(x));
        StoreMenuTexts[3].setString(to_string(y));
        v.set_vaseTexture("../image/flower7-3.png");
        v.set_vaseSprite();
        decorativeFlower *decorativePtr = dynamic_cast<decorativeFlower *>(v.get_flowerStar());
        decorativePtr->set_extract(true);
        v.set_readyToPick(true);
        v.set_growing(false);
      }
      else
      {
        errorWindow();
      }
    } // end of else if (v.get_flowerStar()->get_name() == "lilium")

    else if (v.get_flowerStar()->get_name() == "orkide")
    {
      if (mainStore->orkideExtract > 0)
      {
        --(mainStore->orkideExtract);
        ui x = mainStore->orkideExtract;
        ui y = mainStore->magnoliaExtract + mainStore->liliumExtract + mainStore->orkideExtract;
        StoreMenuTexts[17].setString(to_string(x));
        StoreMenuTexts[3].setString(to_string(y));
        v.set_vaseTexture("../image/flower8-3.png");
        v.set_vaseSprite();
        decorativeFlower *decorativePtr = dynamic_cast<decorativeFlower *>(v.get_flowerStar());
        decorativePtr->set_extract(true);
        v.set_readyToPick(true);
        v.set_growing(false);
      }
      else
      {
        errorWindow();
      }
    } // end of else if (v.get_flowerStar()->get_name() == "orkide")
  }   // end of if (extractWindow())
} // end of giveExtract function

void clickOnItemsOfTable(sf::RenderWindow &window, sf::Sprite *rectanglesSprite, sf::Event &event, Store *mainStore,
                         sf::Text *StoreMenuTexts, sf::Sprite &storeMenuSprite, sf::Text *text2, sf::Font &font, bool &fromGreenHouse, Vase *&vasePtr)
{
  bool checkCallFunction = false;
  rightColumnOfSalesRoom(window, event, rectanglesSprite, 7, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  rightColumnOfSalesRoom(window, event, rectanglesSprite, 8, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  rightColumnOfSalesRoom(window, event, rectanglesSprite, 9, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  leftColumnOfSalesRoom(window, event, rectanglesSprite, 7, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  leftColumnOfSalesRoom(window, event, rectanglesSprite, 8, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  leftColumnOfSalesRoom(window, event, rectanglesSprite, 9, mainStore, StoreMenuTexts, storeMenuSprite, text2);

  leftColumnOfFlowerStore(window, event, rectanglesSprite, 0, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    leftColumnOfFlowerStore(window, event, rectanglesSprite, 1, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    leftColumnOfFlowerStore(window, event, rectanglesSprite, 2, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    leftColumnOfFlowerStore(window, event, rectanglesSprite, 3, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    leftColumnOfFlowerStore(window, event, rectanglesSprite, 4, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    rightColumnOfFlowerStore(window, event, rectanglesSprite, 0, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    rightColumnOfFlowerStore(window, event, rectanglesSprite, 1, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    rightColumnOfFlowerStore(window, event, rectanglesSprite, 2, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    rightColumnOfFlowerStore(window, event, rectanglesSprite, 3, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    rightColumnOfFlowerStore(window, event, rectanglesSprite, 4, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
  if (!checkCallFunction)
    rightColumnOfFlowerStore(window, event, rectanglesSprite, 5, mainStore, StoreMenuTexts, text2, font, fromGreenHouse, checkCallFunction, vasePtr);
}

void setTitleOfTables(sf::Sprite *rectanglesSprite, sf::Text &storeText, sf::Text &salesRoomText, sf::Font &font)
{
  //set font :
  storeText.setFont(font);
  salesRoomText.setFont(font);
  //set string :
  storeText.setString("Anbare gol ha");
  salesRoomText.setString("liste forooshgah");
  //set color :
  storeText.setFillColor(sf::Color::Black);
  salesRoomText.setFillColor(sf::Color::Black);
  //set origin
  storeText.setOrigin(sf::Vector2f(storeText.getGlobalBounds().width / 2, 0));
  salesRoomText.setOrigin(sf::Vector2f(salesRoomText.getGlobalBounds().width / 2, 0));
  //set position :
  storeText.setPosition(sf::Vector2f(rectanglesSprite[0].getPosition().x - rectanglesSprite[0].getGlobalBounds().width / 2, rectanglesSprite[0].getPosition().y - 50));
  salesRoomText.setPosition(sf::Vector2f(rectanglesSprite[7].getPosition().x + rectanglesSprite[7].getGlobalBounds().width / 2, rectanglesSprite[7].getPosition().y - 50));
}
void setVases(sf::RenderWindow &window, sf::Event &event, Vase *vases)
{

  // vases[0].set_vaseTexture("../image/empty.png");
  for (size_t i = 0; i < 10; i++)
  {
    if (vases[i].get_locked())
    {
      vases[i].set_vaseTexture("../image/lock.png");
    }
    else if (vases[i].get_empty())
    {
      vases[i].set_vaseTexture("../image/empty.png");
    }
    else if (vases[i].get_growing())
    {
      // contain 3 if (for levels of growing)
      cout << "marhale growing dar setVases!!!" << endl;
    }
    else if (vases[i].get_readyToPick())
    {
      cout << "marhale readyToPickdar setVases!!!" << endl;
    }
  }
  for (size_t i = 0; i < 10; i++)
  {
    vases[i].set_vaseSprite();
  }
  for (size_t i = 0; i < 10; i++)
  {
    if (i >= 0 && i <= 4)
    {
      vases[i].set_positionOfVaseSprite((240.5 + i * 120 + i * 80), 130);
    }
    else
    {
      vases[i].set_positionOfVaseSprite((240.5 + (i - 5) * 120 + (i - 5) * 80), 400);
    }
  }
}
void clickOnVases(sf::RenderWindow &window, sf::Event &event, Vase *vases, bool &clickOnSalesRoom, bool &clickOnGreenHouse, bool &clickOnLaboratory,
                  sf::Texture &menuTexture, sf::Texture *rectanglesTexture, sf::Sprite *rectanglesSprite, sf::Font &font, sf::Text *text1, sf::Text *text2, sf::Text *StoreMenuTexts, Store *mainStore, bool &fromGreenHouse, Vase *&vasePtr)
{
  for (size_t i = 0; i < 10; i++)
  {
    if (event.type == sf::Event::MouseButtonPressed)
    {
      if (i < 5)
      {
        if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= vases[i].get_vaseSprite().getPosition().x - 1 &&
            sf::Mouse::getPosition(window).x <= vases[i].get_vaseSprite().getPosition().x + vases[i].get_vaseSprite().getGlobalBounds().width - 1 &&
            sf::Mouse::getPosition(window).y >= vases[0].get_vaseSprite().getPosition().y + vases[0].get_vaseSprite().getGlobalBounds().height - 23 &&
            sf::Mouse::getPosition(window).y <= vases[0].get_vaseSprite().getPosition().y + vases[0].get_vaseSprite().getGlobalBounds().height - 5)
        {
          cout << "hora roye dokmeye goldone " << i << " om click kardi!!!" << endl;
          manageVases(vases[i], clickOnSalesRoom, clickOnGreenHouse, clickOnLaboratory, menuTexture, window, event, rectanglesTexture, rectanglesSprite, font, text1, text2, StoreMenuTexts, mainStore, fromGreenHouse, vasePtr);
        }
      }    // end of if(i < 5)
      else // if i >= 5
      {
        if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= vases[i].get_vaseSprite().getPosition().x - 1 &&
            sf::Mouse::getPosition(window).x <= vases[i].get_vaseSprite().getPosition().x + vases[i].get_vaseSprite().getGlobalBounds().width - 1 &&
            sf::Mouse::getPosition(window).y >= vases[5].get_vaseSprite().getPosition().y + vases[5].get_vaseSprite().getGlobalBounds().height - 23 &&
            sf::Mouse::getPosition(window).y <= vases[5].get_vaseSprite().getPosition().y + vases[5].get_vaseSprite().getGlobalBounds().height - 5)
        {
          cout << "hora roye dokmeye goldone " << i << " om click kardi!!!" << endl;
          manageVases(vases[i], clickOnSalesRoom, clickOnGreenHouse, clickOnLaboratory, menuTexture, window, event, rectanglesTexture, rectanglesSprite, font, text1, text2, StoreMenuTexts, mainStore, fromGreenHouse, vasePtr);
        }

      } // end of else
    }
  } // end of for loop
} // end of clickOnVases function
void manageVases(Vase &v, bool &clickOnSalesRoom, bool &clickOnGreenHouse, bool &clickOnLaboratory, sf::Texture &menuTexture, sf::RenderWindow &window, sf::Event &event, sf::Texture *rectanglesTexture, sf::Sprite *rectanglesSprite, sf::Font &font, sf::Text *text1, sf::Text *text2, sf::Text *StoreMenuTexts, Store *mainStore, bool &fromGreenHouse, Vase *&vasePtr)
{
  cout << "manageVases function!!!!!" << endl;
  if (v.get_locked())
  {
    cout << "marhale locked" << endl;
    v.set_locked(false);
    v.set_empty(true);
    v.set_vaseTexture("../image/empty.png");
    v.set_vaseSprite();
  }
  else if (v.get_empty())
  {
    cout << "marhale empty!!!" << endl;
    clickOnSalesRoom = true;
    clickOnLaboratory = false;
    clickOnGreenHouse = false;
    fromGreenHouse = true;
    menuTexture.loadFromFile("../image/menu/menu2.png");
    setRectangles(window, rectanglesTexture, rectanglesSprite, font, text1, text2, StoreMenuTexts, mainStore);
    cout << "manageVases -> v -> get_locked : " << v.get_locked() << endl;
    vasePtr = &v;
    cout << "manageVases -> vasePtr -> get_locked : " << vasePtr->get_locked() << endl;
  }
  else if (v.get_growing())
  {
    cout << "marhale growing!!!" << endl;
    OrdinaryFlower *ordinaryPtr = nullptr;
    RareFlower *rarePtr = nullptr;
    decorativeFlower *decorativePtr = nullptr;
    ordinaryPtr = dynamic_cast<OrdinaryFlower *>(v.get_flowerStar());
    rarePtr = dynamic_cast<RareFlower *>(v.get_flowerStar());
    decorativePtr = dynamic_cast<decorativeFlower *>(v.get_flowerStar());
    if (ordinaryPtr != nullptr)
    {
      if (!v.get_flowerStar()->get_water())
      {
        giveWater(v, mainStore, StoreMenuTexts, 1);
      }
      else if (v.get_flowerStar()->get_water() && (!v.get_flowerStar()->get_soil()))
      {
        giveSoil(v, mainStore, StoreMenuTexts, 1);
      }
    }
    else if (rarePtr != nullptr)
    {
      if (!v.get_flowerStar()->get_water())
      {
        giveWater(v, mainStore, StoreMenuTexts, 2);
      }
      else if (v.get_flowerStar()->get_water() && (!v.get_flowerStar()->get_soil()))
      {
        giveSoil(v, mainStore, StoreMenuTexts, 2);
      }
      else if (!rarePtr->get_spray())
      {
        giveSpray(v, mainStore, StoreMenuTexts);
      }
    }
    else if (decorativePtr != nullptr)
    {
      if (!v.get_flowerStar()->get_water())
      {
        giveWater(v, mainStore, StoreMenuTexts, 3);
      }
      else if (v.get_flowerStar()->get_water() && (!v.get_flowerStar()->get_soil()))
      {
        giveSoil(v, mainStore, StoreMenuTexts, 3);
      }
      else if (!decorativePtr->get_extract())
      {
        giveExtract(v, mainStore, StoreMenuTexts);
      }
    } // end of else if (decorativePtr != nullptr)
  }
  else if (v.get_readyToPick())
  {
    cout << "marhale readyToPick!!!" << endl;
    v.set_vaseTexture("../image/empty.png");
    v.set_empty(true);
    v.set_readyToPick(false);
    string name = v.get_flowerStar()->get_name();
    if (name == "kokab")
    {
      mainStore->kokab++;
    }
    else if (name == "narges")
    {
      mainStore->narges++;
    }
    else if (name == "lale")
    {
      mainStore->lale++;
    }
    else if (name == "maryam")
    {
      mainStore->maryam++;
    }
    else if (name == "sonbol")
    {
      mainStore->sonbol++;
    }
    else if (name == "magnolia")
    {
      mainStore->magnolia++;
    }
    else if (name == "lilium")
    {
      mainStore->lilium++;
    }
    else if (name == "orkide")
    {
      mainStore->orkide++;
    }
  }
}
