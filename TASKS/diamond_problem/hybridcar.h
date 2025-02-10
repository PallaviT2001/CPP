#ifndef HYBRIDCAR_H
#define HYBRIDCAR_H
#include "cngengine.h"
#include "petrolengine.h"

class Hybridcar:public Petrolengine,Cngengine
{
public:
    Hybridcar();
    ~Hybridcar();
    void start();
    Hybridcar(int engineid,string enginename);
};

#endif // HYBRIDCAR_H
