#ifndef POLYCAB_H
#define POLYCAB_H
#include <iostream>
using namespace std;
#include "wire.h"
#include "ac.h"

class Polycab:public Wire
{
private:
    AC* acptr;
public:
    Polycab();
    ~Polycab();
    void setac(AC *ac);
    void wireOn();
};

#endif
