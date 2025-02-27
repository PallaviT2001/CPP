#include <iostream>
using namespace std;

/*void fun1(int a)
{
    a=20;
    cout<<"a value "<<a<<endl;
}

void fun2(int *b)
{
    *b=20;
    cout<<"b value "<<*b<<endl;
}

int main()
{

    int b=10;
    fun1(10);
    fun2(&b);
    return 0;
}*/


void fun1(int a,int b)
{
    cout<<"before swapping "<<a<<" "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"after swapping "<<a<<" "<<b<<endl;
}

void fun2(int *a, int *b)
{
    cout<<"before swapping "<<*a<<" "<<*b<<endl;
    int temp=*a;
    *a=*b;
    *b=temp;
    cout<<"after swapping "<<*a<<" "<<*b<<endl;
}

int main()
{
    int a=10;
    int b=20;
    fun1(a,b);
    fun2(&a,&b);
    return 0;
}
