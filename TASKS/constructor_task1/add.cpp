#include "add.h"
#include <iostream>

Add::Add() {}

void Add::add(int a,int b)
{
    int sum;
    sum=a+b;
    std::cout<<sum<<std::endl;
}

void Add::add(double a,int b)
{
    int result;
    result=a+b;
    cout<<result<<endl;
}

void Add::add(int a,string name)
{
    cout<<a<<" "<<name<<endl;
}
