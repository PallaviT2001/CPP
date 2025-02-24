#ifndef FINOLEX_H
#define FINOLEX_H

class AC;
class Finolex
{
private:
    AC *acptr;
public:
    Finolex();
    ~Finolex();

    void setac(AC* ac);
    void wireOn();

};

#endif
