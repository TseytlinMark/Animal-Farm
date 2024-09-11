#ifndef PROJECT4__MARKET_H
#define PROJECT4__MARKET_H
#include "Farm.h"
#include "CowFarm.h"
#include "ChickenFarm.h"
#include "SheepFarm.h"
class Market
{
    int year;
    vector<Farm*> Farms;
public:
    Market();
    void TradeDay();
    void nextYear();
    void CreateNewFarms();
    void FarmsCreator(int CowFarms, int SheepsFarms, int ChickenFarms);
    void fastForwardYears();
    void printMarketFarms();
    int getYear();
    ~Market();

};
#endif //PROJECT4__MARKET_H
