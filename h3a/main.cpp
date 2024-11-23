#include <iostream>
#include "chef.h"
#include "italianchef.h"
using namespace std;

int main()
{

   //Chef obj("Gordon ramsay");

    //obj.makeSalad();
    //obj.makeSoup();

    cout<<"----------------------------------------------------"<<endl;

    italianChef obj2("Anthony Bourdain");

    obj2.makeSalad();
    obj2.makeSoup();
    obj2.makePasta();
    cout<<"Name of the italian chef is "<<obj2.getName()<<endl;


    return 0;
}
