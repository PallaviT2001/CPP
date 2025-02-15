#include "cartemplate.h"
using namespace std;
#include <iostream>

template<typename I,typename D>
cartemplate<I,D>::cartemplate()
{
    cout<<"car class default constructoer called"<<endl;
}


template<typename I,typename D>
cartemplate<I,D>::~cartemplate()
{
    cout<<"car class destructor called"<<endl;
}

template<typename I,typename D>
D cartemplate<I,D>::add(I a,D b)
{
    return a+b;
}

template class cartemplate<int,double>;
template class cartemplate<int,int>;
template class cartemplate<double,double>;
template class cartemplate<double,int>;


