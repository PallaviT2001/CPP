#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
using namespace std;
#include "wire.h"
#include "ac.h"

class Switch {
private:
    string m_colour;
    string m_state;
    string m_brand;
    string m_name;
    int m_price;
    Wire *m_wire;

public:
    Switch();
    ~Switch();
    Switch(string colour, string state, string brand, string name, int price, Wire* wire);

    void initializewire(Wire *wire);
    void switchOn();
};

#endif
