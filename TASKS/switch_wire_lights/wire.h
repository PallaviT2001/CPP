#ifndef WIRE_H
#define WIRE_H
#include <vector>
#include <iostream>
using namespace std;
#include "light.h"

class Light;

class Wire
{
public:
    Wire();
    ~Wire();
    Wire(Wire &wire);
    void operator=(Wire &wireobj);
    Wire(string brand,string color,vector<Light>light);
    void wireon();
    //void addlight(const Light &light);

private:
    string m_brand;
    string m_color;
    vector<Light> m_light;
};

#endif // WIRE_H
