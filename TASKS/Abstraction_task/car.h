#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "key.h"
#include "accelerator.h"
#include "break.h"

class Car
{
private:
    Engine eng1;
    Key key1;
    Accelerator ac1;
    Break br1;
public:
    Car();
    ~Car();
    void startcar();
    void stopcar();
};

#endif
