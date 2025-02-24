#ifndef CAR_H
#define CAR_H
#include "engine.h"

class Engine;
class Car
{
private:
    Engine *eng;
public:
    Car();
    ~Car();
    void startcar(Engine *eng);
    void stopcar();
};

#endif
