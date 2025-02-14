#include "temp.h"
#include <iostream>
using namespace std;

//template<typename T>
Temp::Temp()
{
    cout<<"temp class default constructor called"<<endl;
}

template<typename T>
T Temp::add(T a,T b,T c)
{
    return a+b+c;
}
template double Temp::add<double>(double,double,double);



template<typename T>
T Temp::sum(T a,T b)
{
    return a+b;
}
template double Temp::sum<double>(double,double);


template<typename T>
T Temp::num(T a)
{
    return a;
}
template int Temp::num<int>(int);


template<typename P>
P Temp::num1(P a,P b,P c,P d)
{
    return a+b+c-d;
}
template float Temp::num1<float>(float,float,float,float);


