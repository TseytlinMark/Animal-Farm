#ifndef PROJECT4__COWFARM_H
#define PROJECT4__COWFARM_H
#include "Farm.h"
#include "Cow.h"
#include "ChickenFarm.h"
class CowFarm:public Farm
{
    vector<Cow*> Animals;
    vector<Farm*> Clients;
    //Add Vector of customers
public:
    CowFarm();
    void FarmProductivity();
    void ProductsPurchasement();//Maybe I can Implement it at Father's
    void ProductsSale();
    void AnimalPurchasement();
    void FarmPrint();
    bool SellEggs() {return false;}
    bool SellMilk() {return true;}
    bool SellWool(){return false;}
    bool BuyEggs(){return true;}
    bool BuyMilk(){return false;}
    bool BuyWool(){return false;}
    void AddClient(Farm *client);
    void NextYear();
    ~CowFarm();
};
#endif //PROJECT4__COWFARM_H
