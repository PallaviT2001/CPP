#ifndef POLYCAB_H
#define POLYCAB_H
#include "wire.h"

class Polycab:public Wire
{
public:
    Polycab();
    ~Polycab();
    int *b=new int[200];
};

#endif
