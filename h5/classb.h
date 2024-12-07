#ifndef CLASSB_H
#define CLASSB_H
#include <iostream>

using namespace std;
class classB
{
    string info;
public:
    classB();
    string getInfo() const;
    void setInfo(const string &newInfo);
};

#endif // CLASSB_H
