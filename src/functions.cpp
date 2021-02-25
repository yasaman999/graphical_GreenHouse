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
        cout << "bozorg tar az 0" << endl;
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
        cout << "kochic tar az 0" << endl;
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
                        sf::Text *text2, sf::Texture &labRectangleTexture, sf::Sprite &labRectangleSprite, Vase *vases)
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
        cout << "rareBulb : " << mainStore->rareBulb << endl;
        ui x = mainStore->rareBulb;
        StoreMenuTexts[13].setString(to_string(x));
        StoreMenuTexts[13].setPosition(sf::Vector2f(rectanglesSprite[4].getPosition().x - rectanglesSprite[4].getGlobalBounds().width / 2 - 30, rectanglesSprite[4].getPosition().y + 2));
        StoreMenuTexts[13].setFillColor(sf::Color::White);
        text2[9].setFillColor(sf::Color::White);
      }
      else if (index == 8)
      {
        (mainStore->spray)++;
        cout << "spray : " << mainStore->spray << endl;
        ui x = mainStore->spray;
        StoreMenuTexts[2].setString(to_string(x));
        StoreMenuTexts[2].setPosition(storeMenuSprite.getPosition().x + storeMenuSprite.getGlobalBounds().width - 950, storeMenuSprite.getPosition().y + 12);
      }
      else if (index == 9)
      {
        (mainStore->NumberOfWaterUnits)++;
        cout << "NumberOfWaterUnits : " << mainStore->NumberOfWaterUnits << endl;
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
                              sf::Text *text2, sf::Font &font)
{
  // cout<<"hello rightColumnOfFlowerStore function . "<<endl;
  if (event.type == sf::Event::MouseButtonPressed)
  {
    if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= rectanglesSprite[index].getPosition().x - rectanglesSprite[index].getGlobalBounds().width / 2 + 6 &&
        sf::Mouse::getPosition(window).x <= rectanglesSprite[index].getPosition().x &&
        sf::Mouse::getPosition(window).y >= rectanglesSprite[index].getPosition().y &&
        sf::Mouse::getPosition(window).y <= rectanglesSprite[index].getPosition().y + rectanglesSprite[index].getGlobalBounds().height)
    {
      cout << "hello if avval" << endl;
      if (index == 0)
      {
        cout << "index : " << index << endl;
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
            (mainStore->orkide)--;
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
            cout << "error_ordinaryBulb " << endl;
          }
        }
      }
      else if (index == 5)
      {
        if (confirmWindow())
        {
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
            cout << "error_decorativeBulb" << endl;
          }
        }
      }
    }
  }
}
bool confirmWindow()
{
  cout << "hello confirmWindow function " << endl;

  sf::RenderWindow ConfirmWindoww(sf::VideoMode(549, 309), "confirm ConfirmWindoww");
  // background of ConfirmWindoww

  sf::Texture backgroundTexture;

  sf::Sprite backgroundSprite;
  backgroundTexture.loadFromFile("../image/confirmWindowBackground.png");

  backgroundSprite.setTexture(backgroundTexture);

  sf::Event event;

  bool check;
  // sf::RectangleShape test;
  // test.setPosition(sf::Vector2f(375, 150));
  // test.setSize(sf::Vector2f(202, 2));
  // test.setFillColor(sf::Color::Black);

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
          cout << "we are in no :/" << endl;
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
          cout << "we are in are :)" << endl;
        }
      }
    } // end of while(ConfirmWindoww.pollEvent(event))
    ConfirmWindoww.draw(backgroundSprite);
   // ConfirmWindoww.draw(test);
    ConfirmWindoww.display();
  } // end of while(window.isOpen())

  return check;
} // end of manage_window function

void clickOnItemsOfTable(sf::RenderWindow &window, sf::Sprite *rectanglesSprite, sf::Event &event, Store *mainStore,
                         sf::Text *StoreMenuTexts, sf::Sprite &storeMenuSprite, sf::Text *text2, sf::Font &font)
{
  rightColumnOfSalesRoom(window, event, rectanglesSprite, 7, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  rightColumnOfSalesRoom(window, event, rectanglesSprite, 8, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  rightColumnOfSalesRoom(window, event, rectanglesSprite, 9, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  leftColumnOfSalesRoom(window, event, rectanglesSprite, 7, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  leftColumnOfSalesRoom(window, event, rectanglesSprite, 8, mainStore, StoreMenuTexts, storeMenuSprite, text2);
  leftColumnOfSalesRoom(window, event, rectanglesSprite, 9, mainStore, StoreMenuTexts, storeMenuSprite, text2);

  for (size_t j = 0; j < 7; j++)
  {
    rightColumnOfFlowerStore(window, event, rectanglesSprite, j, mainStore, StoreMenuTexts, text2, font);
  }
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
  vases[0].set_locked(false);
  vases[0].set_empty(true);

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
void clickOnVases(sf::RenderWindow &window, sf::Event &event, Vase *vases, bool &clickOnSalesRoom, bool &clickOnGreenHouse, bool &clickOnLaboratory, sf::Texture &menuTexture, sf::Texture *rectanglesTexture, sf::Sprite *rectanglesSprite, sf::Font &font, sf::Text *text1, sf::Text *text2, sf::Text *StoreMenuTexts, Store *mainStore)
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
          manageVases(vases[i], clickOnSalesRoom, clickOnGreenHouse, clickOnLaboratory, menuTexture, window, event, rectanglesTexture, rectanglesSprite, font, text1, text2, StoreMenuTexts, mainStore);
        }
      }    // end of if(i < 5)
      else // if(i >= 5)
      {
        if (event.key.code == sf::Mouse::Left && sf::Mouse::getPosition(window).x >= vases[i].get_vaseSprite().getPosition().x - 1 &&
            sf::Mouse::getPosition(window).x <= vases[i].get_vaseSprite().getPosition().x + vases[i].get_vaseSprite().getGlobalBounds().width - 1 &&
            sf::Mouse::getPosition(window).y >= vases[5].get_vaseSprite().getPosition().y + vases[5].get_vaseSprite().getGlobalBounds().height - 23 &&
            sf::Mouse::getPosition(window).y <= vases[5].get_vaseSprite().getPosition().y + vases[5].get_vaseSprite().getGlobalBounds().height - 5)
        {
          cout << "hora roye dokmeye goldone " << i << " om click kardi!!!" << endl;
          manageVases(vases[i], clickOnSalesRoom, clickOnGreenHouse, clickOnLaboratory, menuTexture, window, event, rectanglesTexture, rectanglesSprite, font, text1, text2, StoreMenuTexts, mainStore);
        }

      } // end of else
    }
  } // end of for loop
} // end of clickOnVases function
void manageVases(Vase &v, bool &clickOnSalesRoom, bool &clickOnGreenHouse, bool &clickOnLaboratory, sf::Texture &menuTexture, sf::RenderWindow &window, sf::Event &event, sf::Texture *rectanglesTexture, sf::Sprite *rectanglesSprite, sf::Font &font, sf::Text *text1, sf::Text *text2, sf::Text *StoreMenuTexts, Store *mainStore)
{
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
    menuTexture.loadFromFile("../image/menu/menu2.png");
    setRectangles(window, rectanglesTexture, rectanglesSprite, font, text1, text2, StoreMenuTexts, mainStore);
    for (size_t j = 0; j < 7; j++)
    {
      rightColumnOfFlowerStore(window, event, rectanglesSprite, j, mainStore, StoreMenuTexts, text2, font);
    }
  }
  else if (v.get_growing())
  {
    cout << "marhale growing!!!" << endl;
  }
  else if (v.get_readyToPick())
  {
    cout << "marhale readyToPick!!!" << endl;
  }
}
