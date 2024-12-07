#include "aggregationa.h"
#include "assosiatona.h"
#include "classb.h"
#include <iostream>

using namespace std;

int main()
{
    int a = 5;
    int b = 10;

    cout << "a:n arvo on: "<< a <<" ja osoite on: "<< &a << endl;
    cout << "b:n arvo on: "<< b <<" ja osoite on: "<< &b <<"\n" << endl;


    int* myPointer = &a;

    cout << "Pointterin osoittama osoite on: " << myPointer << "\n" <<
    "Pointterin osoittaman muistipaikan arvo on: "<< *myPointer <<"\n" << endl;

    int* myPointer2 = &b;

    cout << "Pointterin osoittama osoite on: " << myPointer2 << "\n" <<
        "Pointterin osoittaman muistipaikan arvo on: "<< *myPointer2 << "\n" << endl;

    int& refA = a;

    cout << "refA osoittama osoite on: " << &refA << "\n" <<
        "refA:n osoittaman muistipaikan arvo on: "<< refA << "\n" << endl;

    classB objB;
    objB.setInfo("Olion B asettama info");

    assosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<<endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    classB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;


    return 0;
}
