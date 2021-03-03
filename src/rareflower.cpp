#include "flower.hpp"
void RareFlower::set_PurchasePriceOfBulb()
{
    Flower::set_PurchasePriceOfBulb(10000);
}
void RareFlower::set_salePriceOfBulb()
{
    Flower::set_salePriceOfBulb(5000);
}
void RareFlower::set_returnPrice()
{
    Flower::set_returnPrice(5000);
}
void RareFlower::set_salePriceOfFlowers()
{
    Flower::set_salePriceOfFlowers(20000);
}
void RareFlower::set_spray(bool s)
{
  spray = s;
}

void RareFlower::set_name(std::string name)
{
    Flower::set_name(name);
}
std::string RareFlower::get_name() const
{
    return Flower::get_name();
}
