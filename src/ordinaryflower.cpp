#include "flower.hpp"
void OrdinaryFlower::set_PurchasePriceOfBulb()
{
    Flower::set_PurchasePriceOfBulb(1000);
}
void OrdinaryFlower::set_salePriceOfBulb()
{
    Flower::set_salePriceOfBulb(500);
}
void OrdinaryFlower::set_returnPrice()
{
    Flower::set_returnPrice(500);
}
void OrdinaryFlower::set_salePriceOfFlowers()
{
    Flower::set_salePriceOfFlowers(2000);
}

void OrdinaryFlower::set_name(std::string name)
{
    Flower::set_name(name);
}
std::string OrdinaryFlower::get_name() const
{
    return Flower::get_name();
}