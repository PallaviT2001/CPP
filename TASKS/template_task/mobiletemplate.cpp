#include "mobiletemplate.h"
#include <iostream>
using namespace std;

template<typename I,typename D>
Mobiletemplate<I,D>::Mobiletemplate()
{
    cout<<"Mobiletemplate class default constructor called"<<endl;
}

template<typename I,typename D>
Mobiletemplate<I,D>::~Mobiletemplate()
{
    cout<<"mobiletemplate class destructor called"<<endl;
}

template<typename I,typename D>
I Mobiletemplate<I,D>::sum(I c,D e)
{
    return c+e;
}

template class Mobiletemplate<int,int>;
template class Mobiletemplate<double,double>;
template class Mobiletemplate<int,double>;
template class Mobiletemplate<double,int>;

