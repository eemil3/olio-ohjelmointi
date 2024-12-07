#include "classb.h"
#include <iostream>

using namespace std;
string classB::getInfo() const
{
    return info;
}

void classB::setInfo(const string &newInfo)
{
    info = newInfo;
}

classB::classB() {}
