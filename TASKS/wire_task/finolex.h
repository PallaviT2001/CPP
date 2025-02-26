#ifndef FINOLEX_H
#define FINOLEX_H
#include "wire.h"

class Finolex:public Wire
{
public:
    Finolex();
    ~Finolex();
    int *a=new int[100];
};

#endif
