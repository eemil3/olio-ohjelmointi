#include "car.h"
#include <iostream>

using namespace std;

int main()
{
    Car carObj("Toyota", "Corolla");

    carObj.setEngine();
    carObj.setWheels();
    carObj.printDetails();

    return 0;
}
