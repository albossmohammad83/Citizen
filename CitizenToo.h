// CitizenToo.h - wdg - 2016
#ifndef CITIZEN_H
#define CITIZEN_H

#include <iostream>
#include <string>
using namespace std;

class Citizen
{
  public:
    static const int DRINKING_AGE=21; 
    Citizen();
    Citizen(string & nam, int ag);
    void setName(string & nam);
    void setAge(int ag);
    string getName() const;
    int getAge() const;
    bool canDrink() const;

  private:
    string name;
    int age;
};

#endif
