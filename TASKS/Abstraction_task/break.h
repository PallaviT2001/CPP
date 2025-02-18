#ifndef BREAK_H
#define BREAK_H

class Car;
class Break
{
 Car *car;
public:
    Break();
    ~Break();
        void applybreak(Car *car);
};

#endif
