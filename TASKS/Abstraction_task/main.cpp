#include <iostream>
using namespace std;
#include "car.h"
#include "accelerator.h"
#include "engine.h"

int main()
{
    Car carobject;
    Engine eng;
    Accelerator ac;
    Break b;
    carobject.startcar(&eng,&ac);
    b.applybreak(&carobject);
    return 0;
}
