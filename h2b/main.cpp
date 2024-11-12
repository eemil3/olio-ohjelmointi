#include <iostream>
#include <vector>
#include "car.h"
using namespace std;

int main()
{
    vector<Car> CarList;

    Car objectCar0("Audi","Q3",2013);
    Car objectCar1("Mercedes","E",2017);
    Car objectCar2("Toyota","Corolla",2011);

    CarList.push_back(objectCar0);
    CarList.push_back(objectCar1);
    CarList.push_back(objectCar2);

    cout<<"Printing information of the second car"<<endl;
    CarList[1].printData();

    cout<<"Printing all car information"<<endl;
    for(int x=0; x<=2; x++){
        CarList[x].printData();
    }
    return 0;
}
