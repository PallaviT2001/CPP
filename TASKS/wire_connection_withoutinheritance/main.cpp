#include <iostream>
using namespace std;
#include "switch.h"
#include "ac.h"
#include "polycab.h"

enum MainMenuChoice
{
    POLYCAB_OPERATIONS = 1,
    FINOLEX_OPERATIONS,
    HAVELS_OPERATIONS,
    EXIT_PROGRAM
};

int main()
{
    AC acobj1;
    Switch switchobj1;
    int choice;
    Polycab *p;
    Finolex *f;
    Havels *h;

    cout<<"enter the wire brand"<<endl;
    cout<<"1.Polycab 2.Finolex 3.Havels"<<endl;
    cin>>choice;
    switch(choice)
    {
    case POLYCAB_OPERATIONS:
    {
        p=new Polycab;
        acobj1.initializewiretoac(p);
        switchobj1.initializewire(p);
        switchobj1.switchOn();
        break;
    }
    case FINOLEX_OPERATIONS:
    {
        f=new Finolex;
        acobj1.initializewiretoac(f);
        switchobj1.initializewire(f);
        switchobj1.switchOn();
        break;

    }
    case HAVELS_OPERATIONS:
    {
        h=new Havels;
        acobj1.initializewiretoac(h);
        switchobj1.initializewire(h);
        switchobj1.switchOn();
        break;

    }
    case EXIT_PROGRAM:
    {
        exit(0);
    }
    }
    return 0;
}
