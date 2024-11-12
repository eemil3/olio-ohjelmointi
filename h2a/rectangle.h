#ifndef RECTANGLE_H
#define RECTANGLE_H
#include <iostream>
using namespace std;
class Rectangle
{
private:
    double width;
    double height;
public:
    Rectangle();
    double getWidth() const;
    void setWidth(double newHeight);
    double getHeight() const;
    void setHeight(double newHeight);

    double getArea()const;
    double getCircum()const;
};

#endif // RECTANGLE_H
