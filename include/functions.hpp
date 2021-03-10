#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include <iostream>
#include "store.hpp"
#include "vase.hpp"
#include <cstdlib>
#include <time.h>
void setBackground(sf::RenderWindow &, sf::Texture &, sf::Sprite &);
void setMenu(sf::RenderWindow &window, sf::Texture &, sf::Sprite &);
void setElementsOfLabaratory(sf::RenderWindow &, sf::Event &, sf::Texture &, sf::Sprite &);
void clickOnItemsOfLaboratory(sf::RenderWindow &, sf::Event &, sf::Sprite &, Store *, sf::Text *, sf::Sprite &, sf::Text *);
void setVases(sf::RenderWindow &, sf::Event &, Vase *vases);
void clickOnVases(sf::RenderWindow &, sf::Event &, Vase *, bool &, bool &, bool &, sf::Texture &, sf::Texture *, sf::Sprite *, sf::Font &, sf::Text *, sf::Text *, sf::Text *, Store *, bool &, Vase *&);
void manageVases(Vase &, bool &, bool &, bool &, sf::Texture &, sf::RenderWindow &, sf::Event &, sf::Texture *, sf::Sprite *, sf::Font &, sf::Text *, sf::Text *, sf::Text *, Store *, bool &, Vase *&);

void clickOnItemsOfMenu(sf::RenderWindow &, sf::Event &, sf::Texture &, sf::Sprite &,
                        sf::Texture *, sf::Sprite *, sf::Text *, sf::Font &, bool &, bool &, bool &,
                        Store *, sf::Text *, sf::Text *, sf::Texture &, sf::Sprite &, Vase *vases, bool &,bool&,
                        sf::Texture&,sf::Sprite&,sf::Text*);
void setStoreMenu(sf::RenderWindow &, sf::Texture &, sf::Sprite &);
void setRectangles(sf::RenderWindow &, sf::Texture *, sf::Sprite *, sf::Font &, sf::Text *, sf::Text *, sf::Text *, Store *);
void rightColumnOfSalesRoom(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &, sf::Text *);
void leftColumnOfSalesRoom(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &, sf::Text *);

void rightColumnOfFlowerStore(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Text *, sf::Font &, bool &, bool &, Vase *&);
void leftColumnOfFlowerStore(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Text *, sf::Font &, bool &, bool &, Vase *&);
bool confirmWindow();
int confirmWindow2();
void errorWindow(std::string);
bool waterWindow(Vase &,Store*);
bool soilWindow(Vase &,Store*);
bool sprayWindow(Vase &,Store*);
bool extractWindow(Vase &,Store*);
void giveWater(Vase &, Store *, sf::Text *, ui);
void giveSoil(Vase &, Store *, sf::Text *, ui);
void giveSpray(Vase &, Store *, sf::Text *);
void giveExtract(Vase &, Store *, sf::Text *);

void clickOnItemsOfTable(sf::RenderWindow &window, sf::Sprite *, sf::Event &, Store *, sf::Text *, sf::Sprite &, sf::Text *, sf::Font &font, bool &, Vase *&);
void setTitleOfTables(sf::Sprite *, sf::Text &, sf::Text &, sf::Font &);

void setProfile(sf::RenderWindow &, sf::Texture &, sf::Sprite &,sf::Text*,Store*,sf::Font&);
void clickOnItemsOfProfile(sf::RenderWindow&,sf::Event&, Store *, sf::Font &, sf::Text &, sf::Text &);
void nameWindow(std::string, Store *);
#endif // FUNCTIONS_HPP
