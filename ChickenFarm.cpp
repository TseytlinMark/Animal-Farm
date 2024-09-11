#include "ChickenFarm.h"
ChickenFarm::ChickenFarm():Farm() {
    for(int i =0; i< 3; i++)
    {
        this->Animals.push_back(new Chicken());
    }
}

void ChickenFarm::FarmProductivity() {
    for (int i = 0; i<this->Animals.size(); i++)
    {
        this->MyProducts += this->Animals[i]->getAge();
    }
}
void ChickenFarm::ProductsSale()
{
    //I Sell all My Products to My Clients
    for(int i = 0; i < this->Clients.size(); i++)
    {
        int counter =0;
        while(MyProducts>0 && this->Clients[i]->getMoney() >= 1)
        {
            this->Clients[i]->ProductsPurchasement();
            this->MyProducts--;
            this->Money = Money+1;
            counter++;
        }
        if(counter!=0)
            cout << "Cow farm("<<this->Clients[i]->getFarmID()<<") bought "<< counter << " eggs for "<< counter <<" dollars from Chicken farm("<<this->FarmID<<")"<<endl;
    }
}
void ChickenFarm::ProductsPurchasement() {
    this->PurchasedProducts++;
    this->Money = Money - 2;
}

void ChickenFarm::AnimalPurchasement() {
    int counter = 0;
    int prevMoney = this->Money;
    while(this->Money>= 3)
    {
        this->Animals.push_back(new Chicken());
        this->Money = Money -3;
        counter++;
    }
    if(counter !=0)
        cout << "Chicken farm("<<this->FarmID<<") bought "<< counter << " chickens for "<< prevMoney - this->Money <<" dollars"<<endl;
}
void ChickenFarm::FarmPrint() {
    cout << "Farm Id: " << this->FarmID << " type: Chicken Farm, Money: " << this->Money << ", Animals : " << this->Animals.size() << " chickens, Products: Milk[0], Wool[" << this->PurchasedProducts <<"], Eggs[" << this->MyProducts <<"]"<<endl;
}


ChickenFarm::~ChickenFarm() {
    for(int i =0; i < this->Animals.size(); i ++ )
    {
        delete(this->Animals[i]);
    }
    this->Animals.clear();
}

void ChickenFarm::AddClient(Farm *client) {
    if(client->BuyEggs()) {
        this->Clients.push_back(client);
        cout << "Chicken farm("<<this->FarmID<<") Added Cow farm("<<client->getFarmID()<<") to his client list"<<endl;
    }
    if(client->SellWool())
        client->AddClient(this);
}
void ChickenFarm::NextYear() {
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
