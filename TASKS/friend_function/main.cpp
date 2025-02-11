#include <iostream>
using namespace std;
//#include "person.h"
//#include "likitha.h"
#include "animal.h"
#include "elephant.h"

int main()
{
    /*Person p(10,"pallavi","789456");
    Likitha l;
    l.display(p);
    return 0;*/

    Animal a(10,"black",5.2f);
    Elephant e;
    e.display(a);
    return 0;
}
