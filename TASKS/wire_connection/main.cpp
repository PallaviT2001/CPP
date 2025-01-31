#include <iostream>
using namespace std;

void checkme(int *a)
{
    *a=*a+1;
    cout<<"a value is="<<*a<<endl;
    *a=*a+1;
    cout<<"a value is="<<*a;
}

int main()
{
    int a=10;
    cout<<"a value is="<<a<<endl;
    checkme(&a);
}
