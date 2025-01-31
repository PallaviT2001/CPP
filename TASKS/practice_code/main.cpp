#include<iostream>
using namespace std;

class A{
    int a;
    int b;
public:
    void assign(int,int);
    int addfunc();
};

void A::assign(int x,int y)
{
    a=x;
    b=y;
}

int A::addfunc()
{
    return a+b;
}
int main()
{
    A a;
    a.assign(5,6);
    a.addfunc();
    cout<<"assigned values="<<a.assign(5,6)<<endl;
    cout<<"add func result="<<a.addfunc()<<endl;
    return 0;
}
