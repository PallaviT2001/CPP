#include "mystatic.h"
#include <iostream>
using namespace std;

int mystatic::staticvariable=0;


mystatic::mystatic() {

    staticvariable++;

}

void mystatic::staticfunc()
{

}

void mystatic::nonstaticfunc()
{
    cout<<"static variable "<<staticvariable<<endl;
    staticvariable++;
}
