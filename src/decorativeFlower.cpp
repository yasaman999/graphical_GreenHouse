#include "flower.hpp"
void decorativeFlower::set_PurchasePriceOfBulb()
{
    Flower::set_PurchasePriceOfBulb(15000);
}
void decorativeFlower::set_salePriceOfBulb()
{
    Flower::set_salePriceOfBulb(10000);
}
void decorativeFlower::set_returnPrice()
{
    Flower::set_returnPrice(10000);
}
void decorativeFlower::set_salePriceOfFlowers()
{
    Flower::set_salePriceOfFlowers(30000);
}

void decorativeFlower::set_name(std::string name)
{
    Flower::set_name(name);
}
std::string decorativeFlower::get_name() const
{
    return Flower::get_name();
}
