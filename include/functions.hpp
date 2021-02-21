#ifndef FUNCTIONS_HPP
#define FUNCTIONS_HPP
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
void setBackground(sf::RenderWindow&,sf::Texture&,sf::Sprite&);
void setMenu(sf::RenderWindow &window, sf::Texture &, sf::Sprite &);
void clickOnItemsOfMenu(sf::RenderWindow&, sf::Event&, sf::Texture&, sf::Sprite&,
 sf::Texture *, sf::Sprite *, sf::Text*, sf::Font& font, bool &);
void setStoreMenu(sf::RenderWindow&, sf::Texture&, sf::Sprite&);
void setRectangles(sf::RenderWindow&, sf::Texture *, sf::Sprite *, sf::Font&, sf::Text*);

#endif // FUNCTIONS_HPP
