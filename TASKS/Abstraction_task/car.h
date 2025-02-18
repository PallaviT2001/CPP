#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "accelerator.h"
#include "break.h"

class Engine;
class Car
{
private:
    Engine *eng;
public:
    Car();
    ~Car();
    void startcar(Engine *eng,Accelerator *ac);
    void stopcar(Engine *eng);
};

#endif
