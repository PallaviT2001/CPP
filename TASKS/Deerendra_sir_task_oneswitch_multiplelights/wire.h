#ifndef WIRE_H
#define WIRE_H
#include "light.h"
class light;

class wire
{
public:
    wire();
    ~wire();
    wire(string brand,float price,light *light);
    void wireon();

private:
    string m_brand;
    float m_price;
    light *m_light;
};

#endif // WIRE_H
