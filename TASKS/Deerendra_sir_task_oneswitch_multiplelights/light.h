#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>
using namespace std;
#include "wire.h"
class wire;

class light
{
public:
    light();
    ~light();
    light(string brand,float price);
    void lighton();

private:
    string m_brand;
    string m_price;
    wire *wire;
};

#endif // LIGHT_H
