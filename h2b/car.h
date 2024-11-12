#ifndef CAR_H
#define CAR_H
#include <iostream>

using namespace std;
class Car
{
private:
    string brand;
    string model;
    int yearModel;
public:
    Car();
    Car(string &brand,string &model, int yearModel);
    string getBrand() const;
    void setBrand(const string &br);
    string getModel() const;
    void setModel(const string &mo);
    int getYearModel() const;
    void setYearModel(int ye);

    void printData() const; //tulostaa auton merkin, mallin ja valmistusvuoden.
    Car(string br, string mo, int ye); // konstruktori, jolla voidaan alustaa kaikki jäsenmuuttujat
};

#endif // CAR_H
