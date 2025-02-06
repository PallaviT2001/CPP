#ifndef DISTANCE_H
#define DISTANCE_H
#include <iostream>
using namespace std;

class Distance
{
private:
    int m_km;
public:
    Distance();
    ~Distance();
    Distance(int km);
    //void add(const Distance &obj);

    void displayadd();
    void add(Distance obj);

    void displaysub();
    void sub(Distance obj);

    void displaymul();
    void mul(Distance obj);

    void displaydiv();
    void div(Distance obj2);

};

#endif
