#ifndef STORE_H
#define STORE_H
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>

typedef unsigned int ui;
class Store // a singleton class
{
  friend void rightColumnOfSalesRoom(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &, sf::Text *);
  friend void leftColumnOfSalesRoom(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &, sf::Text *);
  friend void clickOnItemsOfLaboratory(sf::RenderWindow &, sf::Event &, sf::Sprite &, Store *, sf::Text *, sf::Sprite &);

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
  ui kokab = 0;
  ui narges = 0;
  ui lale = 0;
  ui maryam = 0;
  ui sonbol = 0;
  ui magnolia = 0;
  ui lilium = 0;
  ui orkide = 0;
};

#endif
