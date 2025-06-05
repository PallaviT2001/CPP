#include "Example.h"
#include <iostream>
using namespace std;

int main()
{
    Example obj;
    if (obj.ptr != nullptr)
    {
        obj.ptr();
    }
    return 0;
}

