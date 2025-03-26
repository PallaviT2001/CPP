#ifndef CAR_H
#define CAR_H
#include "Key.h"
#include "Engine.h"
#include "Accelerator.h"
#include "Brake.h"

class Car
{
private:
    Key key;
    Engine engine;
    Accelerator accelerator;
    Brake brake;

public:
    Car();
    ~Car();
    void insertKey();
    void startEngine();
    void pressAccelerator();
    void pressBrake();
};

#endif
