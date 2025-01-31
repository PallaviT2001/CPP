#ifndef AC_H
#define AC_H
#include "wire.h"
#include<string>
#include <iostream>
using namespace std;

class ac
{
public:
    ac();
    int acnumber;
    int length;
    int breadth;
    string brand;
    string color;
    wire* m_wire;
    void printAC();
    void displayac();
    ac(int acnumber1,int length1,int breadth1, string brand1,string color1,wire* wire);

};

#endif
