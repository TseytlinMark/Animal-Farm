#include "Farm.h"
int Farm::ID = 1;
Farm::Farm() {
    this->FarmID = ID;
    this->Money=10;
    this->MyProducts=0;
    this->PurchasedProducts=0;
    ID++;
}
Farm::~Farm() {}
