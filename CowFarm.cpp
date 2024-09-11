#include "CowFarm.h"
CowFarm::CowFarm():Farm() {
    for(int i =0; i< 3; i++)
    {
        this->Animals.push_back(new Cow());
    }
}
void CowFarm::FarmProductivity() {
    for (int i = 0; i<this->Animals.size(); i++)
    {
        this->MyProducts += this->Animals[i]->getAge();
    }
}
void CowFarm::ProductsSale()
{
    //I Sell all My Products to My Clients
    for(int i = 0; i < this->Clients.size(); i++)
    {
        int counter =0;
        while(MyProducts>0 && this->Clients[i]->getMoney() >= 3)
        {
            this->Clients[i]->ProductsPurchasement();
            this->MyProducts--;
            this->Money = Money+3;
            counter++;
        }
        if(counter!=0)
        {
            cout << "Sheep farm("<<this->Clients[i]->getFarmID()<<") bought "<< counter << " milk for "<< 3*counter <<" dollars from Cow farm("<<this->FarmID<<")"<<endl;
        }
    }
}
void CowFarm::ProductsPurchasement() {
    this->PurchasedProducts++;
    this->Money = Money - 1;
}
void CowFarm::FarmPrint() {
    cout << "Farm Id: " << this->FarmID << " type: Cow Farm, Money: " << this->Money << ", Animals : " << this->Animals.size() << " cows, Products: Milk["<<this->MyProducts<<"], Wool[0], Eggs[" << this->PurchasedProducts <<"]"<<endl;
}
void CowFarm::AnimalPurchasement() {
    int counter = 0;
    int prevMoney = this->Money;
    while(Money >= 10)
    {
        this->Animals.push_back(new Cow());
        this->Money = Money - 10;
        counter++;
    }
    if(counter !=0)
        cout << "Cow farm("<<this->FarmID<<") bought "<< counter << " cows for "<< prevMoney - this->Money <<" dollars"<<endl;
}
CowFarm::~CowFarm() {
    for(int i =0; i < this->Animals.size(); i ++ )
        delete(this->Animals[i]);
    this->Animals.clear();

}

void CowFarm::AddClient(Farm *client) {
    if(client->BuyMilk()) {
        this->Clients.push_back(client);
        cout << "Cow farm("<<this->FarmID<<") Added Sheep farm("<<client->getFarmID()<<") to his client list"<<endl;
    }
        if(client->SellEggs())
        client->AddClient(this);

}
void CowFarm::NextYear() {
    for(int i =0; i < this->Animals.size();i++)
        this->Animals[i]->IncreaseAge();
    for(int i =0; i<this->Animals.size(); i++)
    {
        if(this->Animals[i]->getAge() >= this->Animals[i]->getMortAge()) {
            delete(this->Animals[0]);
            this->Animals.erase(Animals.begin() +0);
            i = -1;
        }
    }
}
