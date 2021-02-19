#ifndef FLOWER_HPP
#define FLOWER_HPP
#include <iostream>
typedef unsigned int ui;
class Flower 
{
private:
    ui soil = 1;
    ui water = 1;
    float purchasePriceOfBulb;
    float salePriceOfBulb;
    float returnPrice;
    float salePriceOfFlowers;
    std::string name;

public:
    Flower() {}  //constructor
    ~Flower() {} //distructor

protected:
    virtual float get_PurchasePriceOfBulb() const;
    virtual float get_salePriceOfBulb() const;
    virtual float get_returnPrice() const;
    virtual float get_salePriceOfFlowers() const;
    virtual void set_PurchasePriceOfBulb(float);
    virtual void set_salePriceOfBulb(float);
    virtual void set_returnPrice(float);
    virtual void set_salePriceOfFlowers(float);
    virtual void set_name(std::string);
    virtual std::string get_name() const;
};
//endl of Flower class
class OrdinaryFlower final : public Flower //be final class
{
private:
public:
    OrdinaryFlower() {}//constructor
    ~OrdinaryFlower() {}//destructor

protected:
    virtual void set_PurchasePriceOfBulb();
    virtual void set_salePriceOfBulb();
    virtual void set_returnPrice();
    virtual void set_salePriceOfFlowers();
    virtual void set_name(std::string) override;
    virtual std::string get_name() const override;
};
//end of OrdinaryFlower class

class RareFlower final : public Flower//be final class
{
private:
    bool needToSpray = false;

public:
    RareFlower() {}
    ~RareFlower() {}
    void set_needToSpray();

protected:
    virtual void set_PurchasePriceOfBulb();
    virtual void set_salePriceOfBulb();
    virtual void set_returnPrice();
    virtual void set_salePriceOfFlowers();
    virtual void set_name(std::string) override;
    virtual std::string get_name() const override;
};
//end of RareFlower class

#endif // FLOWER_HPP
