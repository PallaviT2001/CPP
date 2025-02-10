#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "key.h"

class Car
{
private:
    Engine eng1;
    Key key1;
public:
    Car();
    ~Car();
    void startcar();
    void stopcar();
};

#endif
