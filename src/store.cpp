#include "store.hpp"
using namespace std;

Store * Store::storePtr=nullptr;

Store::Store()
{}

Store * Store::oneStore()
{
  if(storePtr==nullptr)
  {
    storePtr=new Store();
  }
  return storePtr;
}

Store::~Store()
{
  delete storePtr;
}
void Store::set_userName(string name)
{
  userName = name;
}
void Store::set_bio(string b)
{
  bio = b;
}
string Store::get_userName()
{
  return userName;
}
string Store::get_bio()
{
  return bio;
}
