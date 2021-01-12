// CitizenToo.cpp - wdg - 2016
#include <iostream>
#include <string>
using namespace std;
#include "CitizenToo.h"

    // constructors
  Citizen::Citizen() : name("UNKNOWN"), age(0)
  { }

  Citizen::Citizen(string & nam, int ag) : name(nam), age(ag)
  { }

    //mutators
  void Citizen::setName(string & nam) 
  {
      name = nam;
  }

  void Citizen::setAge(int ag)
  {
      age = ag;
  }

    //accessors
  string Citizen::getName() const
  {
      return name;
  }

  int Citizen::getAge() const
  {
      return age;
  }

  bool Citizen::canDrink() const
  {
      return (age>=DRINKING_AGE);
  }

