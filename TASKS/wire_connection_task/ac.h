#ifndef AC_H
#define AC_H
#include <iostream>
using namespace std;
#include "wire.h"

class AC
{
    string m_brand;
    string m_colour;
    float m_price;
    Wire* m_wire;

public:
    AC();
    ~AC();
    AC(string brand, string colour, float price, Wire* wire);

    void setWire(Wire *wire);
    void acOn();
};

#endif
