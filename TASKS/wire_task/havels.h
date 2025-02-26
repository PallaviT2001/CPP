#ifndef HAVELS_H
#define HAVELS_H
#include "wire.h"

class Havels:public Wire
{
public:
    Havels();
    ~Havels();
    int *c=new int[300];
};

#endif
