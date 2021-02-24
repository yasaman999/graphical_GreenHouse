
#ifndef VASE_HPP
#define VASE_HPP
#include "flower.hpp"
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>

class Vase
{
private:
    Flower* flower;
    bool locked = true;
    bool empty = false;
    bool growing = false;
    bool readyToPick = false;
    sf::Texture vaseTexture;
    sf::Sprite vaseSprite;
    sf::Texture stateTexture;
    sf::Sprite stateSprite;
public:
    // set functions
    void set_locked(bool);
    void set_empty(bool);
    void set_growing(bool);
    void set_readyToPick(bool);
    void set_vaseTexture(std::string);
    void set_vaseSprite();
    void set_positionOfVaseSprite(float x, float y);
    // get functions
    bool get_locked();
    bool get_empty();
    bool get_growing();
    bool get_readyToPick();
    sf::Sprite get_vaseSprite();

};
#endif // VASE_HPP
