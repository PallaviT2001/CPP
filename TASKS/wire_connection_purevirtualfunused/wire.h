#ifndef WIRE_H
#define WIRE_H

#include <iostream>
using namespace std;

class AC;

class Wire
{
    float m_thickness;
    float m_length;
    string m_colour;
    string m_brand;
    float m_price;

public:
    Wire();
    Wire(float thickness, float length, string colour, string brand, float price);
    ~Wire();
    virtual void setac(AC* ac)=0;
    virtual void wireOn()=0;

};

#endif // WIRE_H
