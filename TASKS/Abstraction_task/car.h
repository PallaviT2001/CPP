#ifndef CAR_H
#define CAR_H
#include "engine.h"

class Car
{
private:
    Engine eng1;
public:
    Car();
    ~Car();
    void startcar();
    void stopcar();
};

#endif
