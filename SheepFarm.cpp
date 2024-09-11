#include "SheepFarm.h"
SheepFarm::SheepFarm():Farm() {
    for (int i = 0; i < 3; i++) {
        this->Animals.push_back(new Sheep());
    }
}
void SheepFarm::FarmProductivity() {
    for (int i = 0; i<this->Animals.size(); i++)
    {
        this->MyProducts += this->Animals[i]->getAge();
    }
}
void SheepFarm::ProductsSale()
{
    //I Sell all My Products to My Clients
    for(int i = 0; i < this->Clients.size(); i++)
    {
        int counter =0;
        while(MyProducts>0 && this->Clients[i]->getMoney() >= 2)
        {
            this->Clients[i]->ProductsPurchasement();
            this->MyProducts--;
            this->Money = Money+2;
            counter++;
        }
        if(counter!=0)
            cout << "Chicken farm("<<this->Clients[i]->getFarmID()<<") bought "<< counter << " wool for "<< 2*counter <<" dollars from Sheep farm("<<this->FarmID<<")"<<endl;
    }
}
void SheepFarm::ProductsPurchasement() {
    this->PurchasedProducts++;
    this->Money = Money - 3;
}
void SheepFarm::AnimalPurchasement() {
    int counter =0;
    int prevMoney = this->Money;
    while(Money>= 5)
    {
        this->Animals.push_back(new Sheep());
        this->Money = Money-5;
        counter++;
    }
    if(counter !=0)
        cout << "Sheep farm("<<this->FarmID<<") bought "<< counter << " sheeps for "<< prevMoney - this->Money <<" dollars"<<endl;
}

void SheepFarm::FarmPrint() {
    cout << "Farm Id: " << this->FarmID << " type: Sheep Farm, Money: " << this->Money << ", Animals : " << this->Animals.size() << " sheeps, Products: Milk["<<this->PurchasedProducts<<"], Wool[" << this->MyProducts << "], Eggs[0]"<<endl;
}
SheepFarm::~SheepFarm() {
    for(int i =0; i < this->Animals.size(); i ++ )
    {
        delete(this->Animals[i]);
    }
    this->Animals.clear();
}

void SheepFarm::AddClient(Farm *client) {
    if(client->BuyWool()) {
        this->Clients.push_back(client);
        cout << "Sheep farm("<<this->FarmID<<") Added Chicken farm("<<client->getFarmID()<<") to his client list"<<endl;
    }
        if(client->SellMilk())
        client->AddClient(this);
}
void SheepFarm::NextYear() {
    for(int i =0; i<this->Animals.size(); i++)
    {
        this->Animals[i]->IncreaseAge();
        if(this->Animals[i]->getAge()== this->Animals[i]->getMortAge()) {
            delete(this->Animals[0]);
            this->Animals.erase(Animals.begin() +0);
            i = -1;
        }
    }
}
