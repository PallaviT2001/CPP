#ifndef PETROLENGINE_H
#define PETROLENGINE_H
#include "engine.h"
#include "string"
using namespace std;

class Petrolengine:virtual public Engine
{
public:
    Petrolengine();
    ~Petrolengine();
    Petrolengine(int engineid, string enginename);
    //void start();
};

#endif // PETROLENGINE_H
