#ifndef POLYCAB_H
#define POLYCAB_H

class AC;
class Polycab
{
private:
    AC *acptr;
public:
    Polycab();
    ~Polycab();

    void setac(AC* ac);
    void wireOn();
};

#endif



