#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"
using namespace std;

int main()
{
    Car objectCar;
    objectCar.setBrand("Audi");
    objectCar.setModel("Q3");
    objectCar.setYearModel(2013);
    objectCar.printData();
    cout<<endl;

    Rectangle *objectRec = new Rectangle;
    objectRec->setHeight(13);
    objectRec->setWidth(13);
    cout<<"Area of rectangle: ";
    cout<<objectRec->getArea()<<endl;
    cout<<"Circum of rectangle: ";
    cout<<objectRec->getCircum()<<endl;
    cout<<endl;
    delete objectRec;
    objectRec = nullptr;

    unique_ptr<Student> objectStudent = make_unique<Student>();


    objectStudent->setName("Alice Smith");
    objectStudent->setStudentNumber(1102);
    objectStudent->setAverage(4.1);
    cout<<"Name: "<<objectStudent->getName()<<endl;
    cout<<"Studentnumber: "<<objectStudent->getStudentNumber()<<endl;
    cout<<"Average score: "<<objectStudent->getAverage()<<endl;



    return 0;
}
