#ifndef SWITCH_H
#define SWITCH_H
#include <iostream>
using namespace std;
#include "polycab.h"
#include "finolex.h"
#include "havels.h"
#include "ac.h"

class Switch
{
private:
    string m_colour;
    string m_state;
    string m_brand;
    string m_name;
    int m_price;
    Polycab *m_pwire;
    Finolex *m_fwire;
    Havels *m_hwire;

public:
    Switch();
    ~Switch();
    Switch(string colour, string state, string brand, string name, int price);

    void initializewire(Polycab *wire);
    void initializewire(Finolex *wire);
    void initializewire(Havels *wire);

    void switchOn();
};

#endif
