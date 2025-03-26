#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"

class Switch
{
public:
    Switch ();
    ~Switch();
    Switch(string brand,float price,wire *wire1,wire *wire2,wire *wire3);

    void switchon();

private:
    string m_brand;
    float m_price;
    wire *m_wire1;
    wire *m_wire2;
    wire *m_wire3;
};

#endif // SWITCH_H
