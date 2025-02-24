#ifndef HAVELS_H
#define HAVELS_H
class AC;
class Havels
{
private:
    AC *acptr;
public:
    Havels();
    ~Havels();

    void setac(AC* ac);
    void wireOn();
};

#endif // HAVELS_H
