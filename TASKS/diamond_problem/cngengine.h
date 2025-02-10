#ifndef CNGENGINE_H
#define CNGENGINE_H
#include "engine.h"
#include "string"
using namespace std;

class Cngengine:virtual public Engine
{
public:
    Cngengine();
    ~Cngengine();
    Cngengine(int engineid,string enginename);
    //void start();
};

#endif
