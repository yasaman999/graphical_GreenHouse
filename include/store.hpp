#ifndef STORE_H
#define STORE_H
#include <iostream>
typedef unsigned int ui;
class Store
{
public:
  void increase(std::string);
  void decrease(std::string);

private:
  ui NumberOfWaterUnits = 0;
  ui NumberOfSoilUnits = 0;
  ui spray = 0;
  ui extract = 0;
  // bulbs
  ui ordinaryBulb = 0;
  ui rareBulb = 0;
  ui decorativeBulb = 0;
  // flowers
  ui kokab = 0;
  ui narges = 0;
  ui lale = 0;
  ui maryam = 0;
  ui sonbol = 0;
  ui magnolia = 0;
  ui lilium = 0;
  ui orkide = 0;



};

#endif
