#ifndef AC_H
#define AC_H
#include <iostream>
using namespace std;
#include "polycab.h"
#include "finolex.h"
#include "havels.h"

class AC
{
    string m_brand;
    string m_colour;
    float m_price;
    Polycab *m_pwire;
    Finolex *m_fwire;
    Havels *m_hwire;

public:
    AC();
    ~AC();
    AC(string brand, string colour, float price);

    void initializewiretoac(Polycab *wire);
    void initializewiretoac(Finolex *wire);
    void initializewiretoac(Havels *wire);

    void acOn();
};

#endif
