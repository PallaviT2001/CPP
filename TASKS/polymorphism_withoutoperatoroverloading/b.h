#ifndef B_H
#define B_H
#include "a.h"
#include <iostream>
using namespace std;


class B:public A
{
public:
    B();
    void display();
};

#endif
