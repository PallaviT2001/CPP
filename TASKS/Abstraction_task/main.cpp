#include <iostream>
using namespace std;
#include "car.h"
#include "accelerator.h"
#include "engine.h"
#include "brake.h"

int main()
{
    Car carobject;
    Engine eng;
    Accelerator ac;
    Brake b;

    carobject.startcar(&eng);
    ac.speedup();
    b.applybrake(&carobject,&eng);

    return 0;
}
