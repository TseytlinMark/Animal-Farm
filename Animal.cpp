#include "Animal.h"
Animal::Animal() {
    this->Age=0;
}
Animal::~Animal() {}
int Animal::getAge() {return this->Age;}
int Animal::getMortAge() {return this->MortAge;}
int Animal::getPrice() {return this->Price;}
void Animal::IncreaseAge() {this->Age++;}