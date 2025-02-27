#ifndef FINOLEX_H
#define FINOLEX_H
#include <iostream>
#include "wire.h"
#include "ac.h"
using namespace std;


class Finolex:public Wire
{
private:
    AC* acptr;
public:
    Finolex();
    ~Finolex();
    void setac(AC* ac);
    void wireOn();
};

#endif // FINOLEX_H
