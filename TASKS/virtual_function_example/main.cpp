#include <iostream>
using namespace std;
#include "b.h"
#include "c.h"

int main()
{
    /*B bobj;
    bobj.fun();*/

    /*A *ptr= new C;
    ptr->fun();*/

    A *ptr=new C;
    ptr->fun();

    return 0;
}
