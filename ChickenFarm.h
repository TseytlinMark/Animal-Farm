#ifndef PROJECT4__CHICKENFARM_H
#define PROJECT4__CHICKENFARM_H
#include "Farm.h"
#include "Chicken.h"
#include "SheepFarm.h"
class ChickenFarm:public Farm
{
    vector<Chicken*> Animals;
    vector<Farm*> Clients;
public:
    ChickenFarm();
    void FarmProductivity();
    void ProductsPurchasement();//Maybe I can Implement it at Father's
    void ProductsSale();
    void AnimalPurchasement();
    void FarmPrint();
    bool SellEggs() {return true;}
    bool SellMilk() {return false;}
     bool SellWool(){return false;}
     bool BuyEggs(){return false;}
     bool BuyMilk(){return false;}
     bool BuyWool(){return true;}
    void AddClient(Farm *client);
    void NextYear();
    ~ChickenFarm();
};
#endif //PROJECT4__CHICKENFARM_H
