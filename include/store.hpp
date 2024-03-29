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
  friend void setProfile(sf::RenderWindow &, sf::Texture &, sf::Sprite &, sf::Text *, Store *, sf::Font &);
  friend void writeInFile(std::ofstream &, std::ofstream &, Store *,Vase*);
  friend void readInFile(std::ifstream &, std::ifstream &, Store *,Vase*);
  friend void clickOnItemsOfProfile(sf::RenderWindow &, sf::Event &, Store *, sf::Font &, sf::Text &, sf::Text &, std::ofstream &, std::ofstream &, std::ifstream &, std::ifstream &,sf::Text*,sf::Text*,Vase*);

public:
  static Store *oneStore();
  ~Store();
  void set_userName(std::string);
  void set_bio(std::string);
  std::string get_userName();
  std::string get_bio();

private:
  //private constructor for singleton
  Store();// constructor
  static Store *storePtr;

  ui NumberOfWaterUnits = 0;
  ui NumberOfSoilUnits = 0;
  ui spray = 0;
  // extracts
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
  ui deletedFlowers = 0;
  ui plantedFlowers = 0;
  std::string userName = "";
  std::string bio = "";
};

#endif
