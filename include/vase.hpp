
#ifndef VASE_HPP
#define VASE_HPP
#include "flower.hpp"
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>
class Vase
{
private:
    Flower* flower;
    sf::Sprite t;
public:
    Vase(/* args */);
    ~Vase();
};
#endif // VASE_HPP
