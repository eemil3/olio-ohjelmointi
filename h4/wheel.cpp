#include "wheel.h"
#include <iostream>

using namespace std;
int Wheel::getSize() const
{
    return size;
}

void Wheel::setSize(int newSize)
{
    size = newSize;
}

string Wheel::getType() const
{
    return type;
}

void Wheel::setType(const string &newType)
{
    type = newType;
}

Wheel::Wheel() {}

Wheel::Wheel(int, string)
{

}