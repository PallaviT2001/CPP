#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>
using namespace std;
#include "wire.h"
class Wire;

class Light
{
public:
    Light();
    ~Light();
    Light(const Light &light);
    void operator=(Light light);
    void lighton();
    Light(string brand,string color);
    void setwire(Wire *wire);

private:
    string m_brand;
    string m_color;
    Wire *m_wire;
};

#endif // LIGHT_H
