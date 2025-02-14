#ifndef TEMP_H
#define TEMP_H

class Temp
{
public:
    Temp();

    template<typename T>
    T add(T,T,T);

    template<typename T>
    T sum(T,T);

    template<typename T>
    T num(T);

    template<typename P>
    P num1(P,P,P,P);
};

#endif
