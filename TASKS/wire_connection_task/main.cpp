#include <iostream>
#include "ac.h"
#include "switch.h"
#include "wire.h"
using namespace std;

int main()
{
    wire wireobj1(5,2.8,"polycab","Red",280.00);
    ac a1(4,10,20,"voltas","white",&wireobj1);
    Switch s1(1,5,10,"Havells","white",&wireobj1);

    s1.displayswitch();
    a1.displayac();

    return 0;


}
