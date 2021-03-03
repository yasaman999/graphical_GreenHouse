#ifndef STORE_H
#define STORE_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "vase.hpp"
typedef unsigned int ui;
class Store // a singleton class
{
  friend void rightColumnOfSalesRoom(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &, sf::Text *);
  friend void leftColumnOfSalesRoom(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &, sf::Text *);
  friend void rightColumnOfFlowerStore(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Text *, sf::Font &, bool &, bool &, Vase *&);
  friend void leftColumnOfFlowerStore(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Text *, sf::Font &, bool &, bool &, Vase *&);
  friend void clickOnItemsOfLaboratory(sf::RenderWindow &, sf::Event &, sf::Sprite &, Store *, sf::Text *, sf::Sprite &, sf::Text *);
  friend void setRectangles(sf::RenderWindow &, sf::Texture *, sf::Sprite *, sf::Font &, sf::Text *, sf::Text *, sf::Text *, Store *);
  friend void manageVases(Vase &, bool &, bool &, bool &, sf::Texture &, sf::RenderWindow &, sf::Event &, sf::Texture *, sf::Sprite *, sf::Font &, sf::Text *, sf::Text *, sf::Text *, Store *, bool &, Vase *&);
  friend void giveWater(Vase &, Store *, sf::Text *, ui);
  friend void giveSoil(Vase &, Store *, sf::Text *, ui);
  friend void giveSpray(Vase &, Store *, sf::Text *);
  friend void giveExtract(Vase &, Store *, sf::Text *);
  friend bool waterWindow(Vase &, Store *);
  friend bool soilWindow(Vase &, Store *);
  friend bool sprayWindow(Vase &, Store *);
  friend bool extractWindow(Vase &, Store *);
public:
  // void increase(std::string);
  // void decrease(std::string);

  static Store *oneStore();
  ~Store();

private:
  //private constructor for singleton
  Store();

  static Store *storePtr;

  ui NumberOfWaterUnits = 0;
  ui NumberOfSoilUnits = 0;
  ui spray = 0;
  ui orkideExtract = 0;
  ui liliumExtract = 0;
  ui magnoliaExtract = 0;

  // bulbs
  ui ordinaryBulb = 0;
  ui rareBulb = 0;
  ui decorativeBulb = 0;
  // flowers
  ui kokab = 3;
  ui narges = 3;
  ui lale = 3;
  ui maryam = 1;
  ui sonbol = 2;
  ui magnolia = 3;
  ui lilium = 0;
  ui orkide = 0;
  ui deletedFlowers = 0;
  ui plantedFlowers = 0;
};

#endif
