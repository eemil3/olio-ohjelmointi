#ifndef CAR_H
#define CAR_H
#include <iostream>
#include "engine.h"
#include "wheel.h"

using namespace std;
class Car
{
    Engine objEngine;
    Wheel objWheel1;
    Wheel objWheel2;
    Wheel objWheel3;
    Wheel objWheel4;
    string model;
    string brand;
public:
    Car();
    Car(string,string);
    void setEngine();
    void setWheels();
    void printDetails();
    string getModel() const;
    void setModel(const string &newModel);
    string getBrand() const;
    void setBrand(const string &newBrand);
};

#endif // CAR_H
