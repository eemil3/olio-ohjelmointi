#include "assosiatona.h"
#include <iostream>

using namespace std;

assosiationA::assosiationA(classB value):objectB(value)
{
}

string assosiationA::getBinfo()
{
    return objectB.getInfo();
}

void assosiationA::setBinfo(string value)
{
    objectB.setInfo(value);
}
