#ifndef PROJECT4__FARM_H
#define PROJECT4__FARM_H
#include <iostream>
#include <string.h>
#include "Animal.h"
#include <vector>
using namespace std;
class Farm
{
private:
    static int ID;
protected:
    int FarmID;
    int Money;
    int MyProducts;//Amount of Products per each Farm
    int PurchasedProducts;
public:
    Farm();
    int getFarmID(){return this->FarmID;}
    virtual void FarmProductivity()=0;
    virtual void ProductsPurchasement()=0;
    virtual void ProductsSale()=0;
    virtual void AnimalPurchasement()=0;
    int getMoney(){return this->Money;}
    void gainMoney(){this->Money = Money + 10;}
    virtual void FarmPrint()=0;
    virtual bool SellEggs()=0;
    virtual bool SellMilk()=0;
    virtual bool SellWool()=0;
    virtual bool BuyEggs()=0;
    virtual bool BuyMilk()=0;
    virtual bool BuyWool()=0;
    virtual void AddClient(Farm *client)=0;
    virtual void NextYear()=0;
    virtual ~Farm()=0;
};

#endif //PROJECT4__FARM_H
