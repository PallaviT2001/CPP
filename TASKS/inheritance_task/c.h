#ifndef C_H
#define C_H
#include "a.h"

class c:virtual public a
{
public:
    c();
    ~c();
    void display();
    void callc();
};

#endif // C_H
