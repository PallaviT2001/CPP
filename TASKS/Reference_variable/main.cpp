#include <iostream>
using namespace std;

void display(int *x, int *y)
{
    cout<<"Display function called"<<endl;
    cout<<"value of x is "<<*x<<endl;
    cout<<"value of y is "<<*y<<endl;
}
int main()
{
    int a=10;
    int b=15;
    display(&a,&b);
    return 0;
}
