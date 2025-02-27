#ifndef HAVELLS_H
#define HAVELLS_H
#include <iostream>
using namespace std;
#include "wire.h"
#include "ac.h"


class Havells:public Wire
{
    AC* acptr;

public:
    Havells();
    ~Havells();
    void setac(AC *ac)  ;
    void wireOn();


};

#endif // HAVELLS_H
