#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"
#include <iostream>

using namespace std;
class italianChef :  public Chef
{
public:
    italianChef(string);
    string getName();
    void makePasta();
    ~italianChef();
};

#endif // ITALIANCHEF_H
