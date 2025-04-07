#include <iostream>
#include "a.h"
#include "c.h"
#include "b.h"

using namespace std;

int main()
{
    A* ptr = new C;
    delete ptr;
    return 0;
}
