#include "tempclass.h"
#include <iostream>
using namespace std;

template<typename T>
Tempclass<T>::Tempclass()
{
    cout<<"default constructor called"<<endl;
}

template<typename T>
Tempclass<T>::~Tempclass()
{
    cout<<"destructor called"<<endl;
}

template<typename T>
T Tempclass<T>::add(T a,T b)
{
    return a+b;
}
template class Tempclass<double>;
