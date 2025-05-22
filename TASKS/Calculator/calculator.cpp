#include "calculator.h"
#include <iostream>
using namespace std;

void Calculator::add(int a, int b)
{
     cout<<"Sum = "<<a+b<<endl;
}

void Calculator::subtract(int a, int b)
{
    cout<<"Diff = "<<a-b<<endl;
}

void Calculator::multiply(int a, int b)
{
    cout<<"Diff = "<<a*b<<endl;
}

void Calculator::divide(int a, int b)
{

    cout<<"Quotient = "<<a/b<<endl;
}

void Calculator::modulus(int a, int b)
{
    cout<<"Remainder = "<<a % b<<endl;
}
