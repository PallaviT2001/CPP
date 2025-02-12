#include <iostream>
#include "ac.h"
#include "switch.h"
#include "wire.h"

using namespace std;

int main()
{
    Wire w;
    Switch s;
    AC a;
    s.init(&w);
    a.setWire(&w);
    s.switchOn();
    return 0;
}
