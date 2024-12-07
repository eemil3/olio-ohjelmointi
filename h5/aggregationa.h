#ifndef AGGREGATIONA_H
#define AGGREGATIONA_H
#include "classb.h"
#include <iostream>

using namespace std;
class AggregationA
{
private:
    classB &refB;
public:
    AggregationA(classB&);
    string getBinfo();
    void setBinfo(string);
};

#endif // AGGREGATIONA_H
