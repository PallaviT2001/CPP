#include "laptoptemplate.h"
#include <iostream>
using namespace std;

template<typename I,typename S,typename D>
Laptoptemplate<I,S,D>::Laptoptemplate()
{
    cout<<"template class default constructor called"<<endl;
}

template<typename I,typename S,typename D>
Laptoptemplate<I,S,D>::~Laptoptemplate()
{
    cout<<"destructor called"<<endl;
}

template<typename I,typename S,typename D>
S Laptoptemplate<I,S,D>::function(I a,S b)
{
    return a+b;
}

template class Laptoptemplate<int,int,int>;
template class Laptoptemplate<string,string,string>;
//template class Laptoptemplate<int,double>;

