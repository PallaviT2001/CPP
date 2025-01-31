#ifndef D_H
#define D_H
#include "b.h"
#include "c.h"

class d:public b,public c
{
public:
    d();
    ~d();
    void display();
    void calld();
};

#endif // D_H
