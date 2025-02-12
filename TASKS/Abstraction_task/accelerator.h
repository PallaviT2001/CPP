#ifndef ACCELERATOR_H
#define ACCELERATOR_H

class Accelerator
{
private:
    int speed;
public:
    Accelerator();
    ~Accelerator();
    void speedup();
    void speeddown();
};

#endif
