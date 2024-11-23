#include "italianchef.h"
#include <iostream>

using namespace std;
italianChef::italianChef(string name) : Chef(name)
{
   cout<<"ItalianChef "<<name<<" konstruktori"<<endl;
}

string italianChef::getName()
{
    return name;
}

void italianChef::makePasta()
{
    cout<<"ItalianChef "<<name<<" makes pasta"<<endl;
}

italianChef::~italianChef()
{
    cout<<"ItalianChef "<<name<<" destruktori"<<endl;
}
