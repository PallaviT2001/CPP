#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "mobilephone.h"
#include <iostream>
using namespace std;

class smartphone:public mobilephone
{
private:
    int camerasize;
    float displaysize;
public:
    ~smartphone();
    smartphone(int camerasize,float displaysize,string color,float price);
    void display();
};

#endif // SMARTPHONE_H
