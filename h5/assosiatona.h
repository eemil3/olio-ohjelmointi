#ifndef ASSOSIATONA_H
#define ASSOSIATONA_H
#include "classb.h"
#include <iostream>

using namespace std;
class assosiationA
{
private:
    classB objectB;
public:
    assosiationA(classB);
    string getBinfo();
    void setBinfo(string);
};
#endif // ASSOSIATONA_H
