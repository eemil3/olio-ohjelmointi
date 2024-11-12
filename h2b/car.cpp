#include "car.h"
#include <iostream>

using namespace std;
Car::Car()
{

}

Car::Car(string br, string mo, int ye)
{
    this->setBrand(br);
    this->setModel(mo);
    this->setYearModel(ye);
}

string Car::getBrand() const
{
    return brand;
}

void Car::setBrand(const string &br)
{
    brand = br;
}

string Car::getModel() const
{
    return model;
}

void Car::setModel(const string &mo)
{
    model = mo;
}

int Car::getYearModel() const
{
    return yearModel;
}

void Car::setYearModel(int ye)
{
    yearModel = ye;
}

void Car::printData() const
{
    cout<<"Brand: "<<this->getBrand()<<endl;
    cout<<"Model: "<<this->getModel()<<endl;
    cout<<"Yearmodel: "<<this->getYearModel()<<endl;
    cout<<"*****************************\n";
}


