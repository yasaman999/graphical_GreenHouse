#ifndef FLOWER_HPP
#define FLOWER_HPP
#include <iostream>
typedef unsigned int ui;

class Flower // an abstract class
{
private:
    std::string name;// for keeping name of flower
    bool soil = 0;
    bool water = 0;
    float purchasePriceOfBulb;// for keeping purchase price of bulb
    float salePriceOfBulb;// for keeping sale price of bulb
    float returnPrice;// for keeping return price
    float salePriceOfFlowers;// for keeping sale price of flowers

public:
    Flower() {}  //constructor
    ~Flower() {} //distructor
    virtual void set_name(std::string);
    virtual std::string get_name() const;
    virtual void set_water(bool);
    virtual void set_soil(bool);
    virtual bool get_water() const;
    virtual bool get_soil() const;
    virtual void printFlowerInfo() const = 0;// abstract class

protected:
    virtual float get_PurchasePriceOfBulb() const;
    virtual float get_salePriceOfBulb() const;
    virtual float get_returnPrice() const;
    virtual float get_salePriceOfFlowers() const;
    virtual void set_PurchasePriceOfBulb(float);
    virtual void set_salePriceOfBulb(float);
    virtual void set_returnPrice(float);
    virtual void set_salePriceOfFlowers(float);
};
//end of Flower class
class OrdinaryFlower final : public Flower //this is final class
{
public:
    OrdinaryFlower() {}  //constructor
    ~OrdinaryFlower() {} //destructor
    virtual void set_name(std::string) override;
    virtual std::string get_name() const override;
    virtual void printFlowerInfo() const override{}
protected:
    virtual void set_PurchasePriceOfBulb() ;
    virtual void set_salePriceOfBulb() ;
    virtual void set_returnPrice() ;
    virtual void set_salePriceOfFlowers() ;
};
//end of OrdinaryFlower class

class RareFlower final : public Flower //be final class
{
private:
    bool spray = 0;
public:
    RareFlower() {}
    ~RareFlower() {}
    void set_spray(bool);
    bool get_spray();
    virtual void set_name(std::string) override;
    virtual std::string get_name() const override;
    virtual void printFlowerInfo() const override{}

protected:
    virtual void set_PurchasePriceOfBulb() ;
    virtual void set_salePriceOfBulb() ;
    virtual void set_returnPrice() ;
    virtual void set_salePriceOfFlowers() ;
};
//end of RareFlower class
class decorativeFlower final : public Flower
{
private:
    bool extract = 0;

public:
    decorativeFlower() {}
    ~decorativeFlower() {}
    void set_extract(bool);
    bool get_extract();
    virtual void set_name(std::string) override;
    virtual std::string get_name() const override;
    virtual void printFlowerInfo() const override{}

protected:
    virtual void set_PurchasePriceOfBulb();
    virtual void set_salePriceOfBulb();
    virtual void set_returnPrice();
    virtual void set_salePriceOfFlowers();
};
//end of class decorativeFlower
#endif // FLOWER_HPP
