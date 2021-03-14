
#ifndef VASE_HPP
#define VASE_HPP
#include "flower.hpp"
#include <SFML/Window.hpp>
#include <SFML/System.hpp>
#include <SFML/Graphics.hpp>
class Store;
class Vase
{
friend void writeInFile(std::ofstream &, std::ofstream &, Store *,Vase* );
friend void readInFile(std::ofstream &, std::ofstream &, Store *,Vase* );

private:
    Flower *flower;
    bool locked = true;
    bool empty = false;
    bool growing = false;
    bool readyToPick = false;
    sf::Texture vaseTexture;
    sf::Sprite vaseSprite;
public:
    // set functions
    void set_locked(bool);
    void set_empty(bool);
    void set_growing(bool);
    void set_readyToPick(bool);
    void set_vaseTexture(std::string); // for load image(the parameter is path of image)
    void set_vaseSprite();
    void set_positionOfVaseSprite(float x, float y);
    void set_flower(int type, std::string name);
    // get functions
    bool get_locked();
    bool get_empty();
    bool get_growing();
    bool get_readyToPick();
    sf::Sprite get_vaseSprite();
    Flower *get_flowerStar();
    //const Vase* operator=(const Vase&);
};
#endif // VASE_HPP
