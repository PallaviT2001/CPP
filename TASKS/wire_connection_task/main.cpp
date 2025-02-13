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
    s.initializewire(&w);
    a.initializewiretoac(&w);
    s.switchOn();
    return 0;
}
