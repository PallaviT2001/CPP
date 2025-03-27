#ifndef SWITCH_H
#define SWITCH_H
#include "wire.h"
class Wire;

class Switch
{
public:
    Switch();
    ~Switch();
    Switch(Switch &Switch);
    void operator =(Switch &Switchobj);

    Switch(string brand,string color);
    void setwire(Wire *wire);

    void switchon();

private:
    string m_brand;
    string m_color;
    Wire *m_wire;


};

#endif // SWITCH_H
