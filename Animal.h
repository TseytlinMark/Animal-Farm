#ifndef PROJECT4__ANIMAL_H
#define PROJECT4__ANIMAL_H
#include <iostream>
#include <string.h>
using namespace std;
class Animal
{
protected:
    int Price;
    int MortAge;
    int Age;
public:
    Animal();
    virtual ~Animal();
    int getAge();
    int getMortAge();
    int getPrice();
    void IncreaseAge();
    //Print (ADD) PURE
};

#endif //PROJECT4__ANIMAL_H
