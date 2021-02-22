#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include <iostream>
#include "store.hpp"

void setBackground(sf::RenderWindow &, sf::Texture &, sf::Sprite &);
void setMenu(sf::RenderWindow &window, sf::Texture &, sf::Sprite &);
void clickOnItemsOfMenu(sf::RenderWindow &, sf::Event &, sf::Texture &, sf::Sprite &,
                        sf::Texture *, sf::Sprite *, sf::Text *, sf::Font &font, bool &, Store *mainStore, sf::Text *StoreMenuTexts, sf::Text *text2);
void setStoreMenu(sf::RenderWindow &, sf::Texture &, sf::Sprite &);
void setRectangles(sf::RenderWindow &, sf::Texture *, sf::Sprite *, sf::Font &, sf::Text *);
void rightColumnOfSalesRoom(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &, sf::Text *);
void leftColumnOfSalesRoom(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &, sf::Text *);

void rightColumnOfFlowerStore(sf::RenderWindow &, sf::Event &, sf::Sprite *, Store *, sf::Text *, sf::Text *, sf::Font &);
void leftColumnOfFlowerStore(sf::RenderWindow &, sf::Event &, sf::Sprite *, int, Store *, sf::Text *, sf::Sprite &);

void clickOnItemsOfTable(sf::RenderWindow &window, sf::Sprite *, sf::Event &, Store *, sf::Text *, sf::Sprite &, sf::Text *);
void setTitleOfTables(sf::Sprite *, sf::Text &, sf::Text &, sf::Font &);

#endif // FUNCTIONS_HPP
