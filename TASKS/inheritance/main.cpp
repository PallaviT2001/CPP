#include<iostream>
using namespace std;

int add(int a,int b)
{
    cout<<"Hii"<<endl;
}
int add(int a, int b)
{
    cout<<"hello"<<endl;
}
int main()
{
    add(4,5);

    add(3,2);
}

/*#include <iostream>
using namespace std;

class A{
    int a;
public:
    int b;
    void add();
    void result();
};

class B:public A
{
    int d;
public:
    int e;
    void mul();
    void mulresult();
};

void A::add()
{
    a=10;
    b=11;
}

void A::result()
{
    int c;
    c=a+b;
    cout<<"c value"<<c<<endl;
}

void B::mul()
{
    d=5;
    e=6;
}

void B::mulresult()
{
    int f;
    f=d*e;
    cout<<"f value"<<f<<endl;
}


int main()
{
    B b;
    b.add();
    b.result();
    b.mul();
    b.mulresult();

}*/

/*#include <iostream>
using namespace std;


class Parent {

public:
    int parentid;
    void printparentid()
    {
        cout << "parent id: " << parentid << endl;
    }
};

class Child : public Parent {
public:
    int childid;
    void printchildid()
    {
        cout << "Child ID: " << childid<< endl;
    }
};

int main()
{
    Child obj1;

    obj1.parentid = 10;
    obj1.printparentid();
    obj1.childid= 20;
    obj1.printchildid();

    return 0;
}*/
