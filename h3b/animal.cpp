#include <iostream>

using namespace std;
#include "animal.h"

Animal::Animal() {}

Animal::~Animal()
{
    cout<<"AnimalObj tuhottu"<<endl;
}

void Animal::call0ut()
{
    cout<<"Elain aantelee.\n"<<endl;
}
