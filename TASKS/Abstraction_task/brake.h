#ifndef BRAKE_H
#define BRAKE_H

class Car;
class Engine;
class Brake
{
Car *car;
public:
    Brake();
    ~Brake();
    void applybrake(Car *car,Engine *eng);
};

#endif
