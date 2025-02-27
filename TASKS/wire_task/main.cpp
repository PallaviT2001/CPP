#include <iostream>
#include "wire.h"
#include "polycab.h"
#include "finolex.h"
#include "havels.h"
using namespace std;

int main()
{
    /*Wire *w=new Wire;
    Polycab *p=new Polycab;
    Finolex *f=new Finolex;
    Havels *h=new Havels;

    delete w;
    delete p;
    delete f;
    delete h;
    return 0;*/

    Wire *p;//I have assigned derived class reference to base class pointers in the below case(virtual function).

    p=new Polycab;
    delete p;

    p=new Finolex;
    delete p;

    p=new Havels;
    delete p;

    return 0;
}
