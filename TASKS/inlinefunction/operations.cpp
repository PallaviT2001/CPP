#include "operations.h"
#include <iostream>
using namespace std;

operations::operations()
{
    cout<<"operator class constructor called"<<endl;
}

operations::~operations()
{
    cout<<"operator class destructor called"<<endl;
}

inline void operations::get()
{
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
}

inline void operations::addition()
{
    sum=a+b;
    cout<<"sum of the number is"<<endl;
}

inline void operations::difference()
{
    sub=a-b;
    cout<<"substraction of the 2 numbers is"<<endl;
}

inline void operations::product()
{
    mul=a*b;
    cout<<"multiplication of the 2 numbers is"<<endl;
}

inline void operations::division()
{
    div=a/b;
    cout<<"division of the 2 number is"<<endl;
}
