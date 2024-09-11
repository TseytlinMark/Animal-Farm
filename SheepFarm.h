#ifndef PROJECT4__SHEEPFARM_H
#define PROJECT4__SHEEPFARM_H
#include "Farm.h"
#include "Sheep.h"
#include "CowFarm.h"
class SheepFarm:public Farm
{
    vector<Sheep*> Animals;
    vector<Farm*> Clients;
public:
    SheepFarm();
    void FarmProductivity();
    void ProductsPurchasement();//Maybe I can Implement it at Father's
    void ProductsSale();
    void AnimalPurchasement();
    void FarmPrint();
    bool SellEggs() {return false;}
    bool SellMilk() {return false;}
    bool SellWool(){return true;}
    bool BuyEggs(){return false;}
    bool BuyMilk(){return true;}
    bool BuyWool(){return false;}
    void AddClient(Farm *client);
    void NextYear();
    ~SheepFarm();
};
#endif //PROJECT4__SHEEPFARM_H
