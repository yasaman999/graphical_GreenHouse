#include "flower.hpp"
float Flower::get_PurchasePriceOfBulb() const //return purchasePriceOfBulb
{
    return purchasePriceOfBulb;
}
float Flower::get_salePriceOfBulb() const //return salePriceOfBulb
{
    return salePriceOfBulb;
}
float Flower::get_returnPrice() const //return returnPrice
{
    return returnPrice;
}
float Flower::get_salePriceOfFlowers() const //return salePriceOfFlowers;
{
    return salePriceOfFlowers;
}

void Flower::set_PurchasePriceOfBulb(float price) //set PurchasePriceOfBulb
{
    purchasePriceOfBulb = price;
}
void Flower::set_salePriceOfBulb(float price) //set PurchasePriceOfBulb
{
    salePriceOfBulb = price;
}
void Flower::set_returnPrice(float price) //set returnPrice
{
    returnPrice = price;
}
void Flower::set_salePriceOfFlowers(float price) //set salePriceOfFlowers
{
    salePriceOfFlowers = price;
}
void Flower::set_name(std::string name)
{
    this->name = name;
}
std::string Flower::get_name() const
{
    return name;
}

void Flower::set_water(bool w)
{
  water = w;
}
void Flower::set_soil(bool s)
{
  soil = s;
}
bool Flower::get_water() const
{
    return water;
}
bool Flower::get_soil() const
{
  return soil;
}
//---------
// std::istream& operator>>(std::istream & cin, Flower& f)
// {
//     cin>>&f;
//     return cin;
// }
// //-----------
// std::ostream& operator<<(std::ostream & cout, Flower& f)
// {
//     cout<<&f;
//     return cout;
// }