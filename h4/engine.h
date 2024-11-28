#ifndef ENGINE_H
#define ENGINE_H
#include <iostream>

using namespace std;
class Engine
{
    int horsepower; //moottorin hevosvoimat.
    double displacement; //moottorin tilavuus litroissa
public:
    Engine();
    Engine(int, double);

    int getHorsepower() const;
    void setHorsepower(int newHorsepower);
    double getDisplacement() const;
    void setDisplacement(double newDisplacement);
};

#endif // ENGINE_H
