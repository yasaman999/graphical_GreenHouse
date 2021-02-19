#include "store.hpp"
using namespace std;
void Store::increase(string name)
{
  if(name == "water")
  {
    NumberOfWaterUnits++;
  }
  else if(name == "soil")
  {
    NumberOfSoilUnits++;
  }
  else if(name == "spray")
  {
    spray++;
  }
  else if(name == "extract")
  {
    ui extract++;
  }
  else if(name == "ordinaryBulb")
  {
    ordinaryBulb++;
  }
  else if (name == "rareBulb")
  {
    rareBulb++;
  }
  else if(name == "decorativeBulb")
  {
    decorativeBulb++;
  }

  else if(name == "kokab")
  {
    kokab++;
  }

  else if(name == "narges")
  {
    ui narges++;
  }
  else if(name == "lale")
  {
    ui lale++;
  }
  else if(name == "maryam")
  {
    ui maryam++;
  }
  else if(name == "sonbol")
  {
    ui sonbol++;
  }
  else if(name == "magnolia")
  {
    ui magnolia++;
  }
  else if(name == "lilium")
  {
    ui lilium++;
  }
  else if(name == "orkide")
  {
    ui orkide++;
  }

}
void Store::decrease(string name)
{
  if(name == "water")
  {
    NumberOfWaterUnits--;
  }
  else if(name == "soil")
  {
    NumberOfSoilUnits--;
  }
  else if(name == "spray")
  {
    spray--;
  }
  else if(name == "extract")
  {
    ui extract--;
  }
  else if(name == "ordinaryBulb")
  {
    ordinaryBulb--;
  }
  else if (name == "rareBulb")
  {
    rareBulb--;
  }
  else if(name == "decorativeBulb")
  {
    decorativeBulb--;
  }

  else if(name == "kokab")
  {
    kokab--;
  }

  else if(name == "narges")
  {
    ui narges--;
  }
  else if(name == "lale")
  {
    ui lale--;
  }
  else if(name == "maryam")
  {
    ui maryam--;
  }
  else if(name == "sonbol")
  {
    ui sonbol--;
  }
  else if(name == "magnolia")
  {
    ui magnolia--;
  }
  else if(name == "lilium")
  {
    ui lilium--;
  }
  else if(name == "orkide")
  {
    ui orkide--;
  }


}
