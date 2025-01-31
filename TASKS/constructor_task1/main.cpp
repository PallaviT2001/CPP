#include <iostream>
#include "add.h"
using namespace std;

int main()
{
    Add a;
    a.add(10,20);
    a.add(10.10,30.20);
    a.add(10.00f,"Pallavi");
    cout<<"hello world\n"<<endl;
    return 0;
}

