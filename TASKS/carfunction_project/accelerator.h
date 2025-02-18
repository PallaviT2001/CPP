#ifndef ACCELERATOR_H
#define ACCELERATOR_H

#include "Engine.h"

class Accelerator {
public:
    Accelerator();
    ~Accelerator();
    void press(Engine &engine);
};

#endif
