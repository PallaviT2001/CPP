#ifndef B_H
#define B_H
#include "a.h"

class b:virtual public a
{
public:
    b();
    ~b();
    void display();
    void callb();
};

#endif // B_H
