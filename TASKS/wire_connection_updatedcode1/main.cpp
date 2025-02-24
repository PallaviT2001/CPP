#include <iostream>
#include "ac.h"
#include "switch.h"
#include "wire.h"
#include "polycab.h"
#include "finolex.h"
#include "havels.h"

using namespace std;
int main()
{
    int choice;
    Wire w;
    Switch s;
    AC a;

    cout<<"enter the wire brand"<<endl;
    cout<<"1. Polycab 2. Finolex 3. Havels"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        {
           Polycab p;
           s.initializewire(&p);
           a.initializewiretoac(&p);
           s.switchOn();
           break;
        }
        case 2:
        {
            Finolex f;
            new Finolex;
            s.initializewire(&f);
            a.initializewiretoac(&f);
            s.switchOn();
            break;
        }
        case 3:
        {
            Havels h;
            s.initializewire(&h);
            a.initializewiretoac(&h);
            s.switchOn();
            break;
        }
        default:
            cout<<"invalid choice"<<endl;
            break;
    }
    return 0;
}

