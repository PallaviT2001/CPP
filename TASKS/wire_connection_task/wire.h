#ifndef WIRE_H
#define WIRE_H
#include <iostream>
using namespace std;
//#include "ac.h"

class AC;

class Wire {
    float m_thickness;
    float m_length;
    string m_colour;
    string m_brand;
    float m_price;
    AC* acptr;

public:
    Wire();
    ~Wire();
    Wire(float thickness, float length, string colour, string brand, float price);

    void setac(AC* ac);
    void wireOn();

};

#endif
