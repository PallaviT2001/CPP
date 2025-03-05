#include <iostream>
using namespace std;
#include "wire.h"
#include "polycab.h"

int main()
{
    Polycab *p1=new Polycab;
    Wire *w=p1;
    delete w;

    return 0;
}
