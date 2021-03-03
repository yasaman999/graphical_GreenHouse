#include "vase.hpp"
using namespace std;
// implementation of set functions :
void Vase::set_locked(bool b)
{
  locked = b;
}
void Vase::set_empty(bool b)
{
  empty = b;
  
}
void Vase::set_growing(bool b)
{
  growing = b;
}
void Vase::set_readyToPick(bool b)
{
  readyToPick = b;
}
sf::Sprite Vase::get_vaseSprite()
{
  return vaseSprite;
}

void Vase::set_vaseTexture(string path)
{
  vaseTexture.loadFromFile(path);
}
void Vase::set_vaseSprite()
{
  vaseSprite.setTexture(vaseTexture);
}
void Vase::set_positionOfVaseSprite(float x, float y)
{
  vaseSprite.setPosition(sf::Vector2f(x, y));
}
void Vase::set_flower(int type, std::string name)
{
  if (type == 1)
  {
    flower = new OrdinaryFlower();
  }
  else if (type == 2)
  {
    flower = new RareFlower();
  }
  else
  {
    flower = new decorativeFlower();
  }
  flower->set_name(name);
}
// implementation of get functions :
bool Vase::get_locked()
{
  return locked;
}
bool Vase::get_empty()
{
  return empty;
}
bool Vase::get_growing()
{
  return growing;
}
bool Vase::get_readyToPick()
{
  return readyToPick;
}
//--------------------------
Flower *Vase::get_flowerStar()
{
  return flower;
}
