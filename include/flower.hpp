#ifndef FLOWER_HPP
#define FLOWER_HPP
#include <iostream>
typedef unsigned int ui;
class Flower
{
private:
    bool soil = 0;
    bool water = 0;
    float purchasePriceOfBulb;
    float salePriceOfBulb;
    float returnPrice;
    float salePriceOfFlowers;
    std::string name;

public:
    Flower() {}  //constructor
    ~Flower() {} //distructor
    virtual void set_name(std::string);
    virtual std::string get_name() const;
    virtual void set_water(bool);
    virtual void set_soil(bool);
    virtual bool get_water() const;
    virtual bool get_soil() const;

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
//endl of Flower class
class OrdinaryFlower final : public Flower //be final class
{
    // friend void manageVases(Vase &v, bool &, bool &, bool &clickOnLaboratory, sf::Texture &, sf::RenderWindow &, sf::Event &, sf::Texture *rectanglesTexture, sf::Sprite *rectanglesSprite, sf::Font &font, sf::Text *text1, sf::Text *text2, sf::Text *, Store *, bool &, Vase *&);

private:
public:
    OrdinaryFlower() {}  //constructor
    ~OrdinaryFlower() {} //destructor
    virtual void set_name(std::string) override;
    virtual std::string get_name() const override;

protected:
    virtual void set_PurchasePriceOfBulb();
    virtual void set_salePriceOfBulb();
    virtual void set_returnPrice();
    virtual void set_salePriceOfFlowers();
};
//end of OrdinaryFlower class

class RareFlower final : public Flower //be final class
{
private:
    bool spray = false;

public:
    RareFlower() {}
    ~RareFlower() {}
    void set_spray(bool);
    bool get_spray();
    virtual void set_name(std::string) override;
    virtual std::string get_name() const override;

protected:
    virtual void set_PurchasePriceOfBulb();
    virtual void set_salePriceOfBulb();
    virtual void set_returnPrice();
    virtual void set_salePriceOfFlowers();
};
//end of RareFlower class
class decorativeFlower final : public Flower
{
private:
    bool extract = false;

public:
    decorativeFlower() {}
    ~decorativeFlower() {}
    virtual void set_name(std::string) override;
    virtual std::string get_name() const override;

protected:
    virtual void set_PurchasePriceOfBulb();
    virtual void set_salePriceOfBulb();
    virtual void set_returnPrice();
    virtual void set_salePriceOfFlowers();
};
//end of class decorativeFlower
#endif // FLOWER_HPP
