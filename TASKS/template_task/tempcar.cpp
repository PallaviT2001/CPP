#include "tempcar.h"
#include <iostream>
using namespace std;

template <typename C>
Tempcar<C>::Tempcar()
{
    cout<<"tempcar class default constructor called"<<endl;
}

template <typename C>
Tempcar<C>::~Tempcar()
{
    cout<<"tempcar destructor called"<<endl;
}

template <typename C>
Tempcar<C>::Tempcar(C z)
{
    m_z=z;
    cout<<"z value is"<<m_z<<endl;
}

template <typename C>
C Tempcar<C>::add(C a, C b)
{
    return a+b;
}
template class Tempcar<int>;



