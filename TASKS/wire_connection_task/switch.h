#ifndef SWITCH_H
#define SWITCH_H
#include <string>
#include "wire.h"
#include <iostream>
using namespace std;

class Switch{

public:
    int switchnumber;
    int length;
    int breadth;
    string brand;
    string color;
    wire* m_wire;
    void printswitch();
    void displayswitch();
    Switch();
    Switch(int switchnumber1,int length1,int breadth1, string brand1,string color1,wire* wire);
};

#endif

