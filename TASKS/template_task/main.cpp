/*#include <iostream>
using namespace std;
#include "temp.h"

int main()
{
    Temp te;
    auto C=te.add<double>(10,20,30);
    cout<<"c value is "<<C<<endl;

    Temp te1;
    auto D=te1.sum<double>(30,40);
    cout<<"d value is "<<D<<endl;

    Temp te2;
    auto E=te2.num<int>(50);
    cout<<"e value is "<<E<<endl;

    Temp te3;
    auto F=te3.num1<float>(50.2,56.0,30.0,25.0);
    cout<<"f value is "<<F<<endl;
    return 0;
}*/

/*#include<iostream>
using namespace std;
#include "tempclass.h"

int main()
{
    Tempclass<double>te;
    auto A=te.add(10,20);
    cout<<"a value is "<<A<<endl;
    return 0;
}*/

#include<iostream>
using namespace std;
#include "tempcar.h"

int main()
{
    Tempcar<int>ca(90);
    auto D=ca.add(20,30);
    cout<<"d value is "<<D<<endl;
    return 0;
}


