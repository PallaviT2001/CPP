#include <iostream>
using namespace std;
#include "switch.h"

int main()
{
    light light1("brand1",500);
    light light2("brand2",600);
    light light3("brand3",900);

    wire wire1("brand1",900,&light1);
    wire wire2("brand2",800,&light2);
    wire wire3("brand3",600,&light3);

    Switch switch1("brand1",500,&wire1,&wire2,&wire3);
    switch1.switchon();
    return 0;
}


