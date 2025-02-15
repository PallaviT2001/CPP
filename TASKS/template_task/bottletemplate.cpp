#include "bottletemplate.h"
#include <iostream>
using namespace std;

template<typename D,typename I>
Bottletemplate<D,I>::Bottletemplate()
{
    cout<<"bottle class default constructor called"<<endl;
}

template<typename D,typename I>
Bottletemplate<D,I>::~Bottletemplate()
{
    cout<<"bottle destructor called"<<endl;
}

template<typename D,typename I>
D Bottletemplate<D,I>::sum(D a,I b)
{
    return a+b;
}

template class Bottletemplate<int,int>;
template class Bottletemplate<double,double>;
template class Bottletemplate<int,double>;
template class Bottletemplate<double,int>;

