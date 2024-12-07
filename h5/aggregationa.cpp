#include "aggregationa.h"
#include <iostream>

using namespace std;
AggregationA::AggregationA(classB &value):refB(value)
{
}

string AggregationA::getBinfo()
{
    return refB.getInfo();
}

void AggregationA::setBinfo(string value)
{
    refB.setInfo(value);
}
