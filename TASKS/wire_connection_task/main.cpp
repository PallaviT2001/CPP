#include <iostream>
#include "ac.h"
#include "switch.h"
#include "wire.h"

using namespace std;

int main()
{
    Wire wireobj1(2.2,12,"black","abc",1500);
    AC acobj1("Voltas","white",2000,&wireobj1);
    Switch switchobj1("white","on","xyz","AC1",2000,&wireobj1);

    switchobj1.SwitchOn();

    return 0;
}
