#include <iostream>
using namespace std;

/*#include "temp.h"

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

/*#include<iostream>
using namespace std;
#include "tempcar.h"

int main()
{
    Tempcar<int>ca(90);
    auto D=ca.add(20,30);
    cout<<"d value is "<<D<<endl;
    return 0;
}*/


/*#include "cartemplate.h"
int main()
{
    cartemplate<int,double> car1;
    auto A=car1.add(10,10.5);
    cout<<"a value is "<<A<<endl;

    cartemplate<int,int> car2;
    auto B=car2.add(5,10);
    cout<<"b value is "<<B<<endl;

    cartemplate<double,double> car3;
    auto C=car3.add(50.00,60.00);
    cout<<"c value is "<<C<<endl;

    cartemplate<double,int>car4;
    auto D=car4.add(20.00,25);
    cout<<"d value is "<<D<<endl;

    return 0;
}*/

/*#include "mobiletemplate.h"
int main()
{
    Mobiletemplate<int,int>mob1;
    auto A=mob1.sum(10,20);
    cout<<"a value is "<<A<<endl;

    Mobiletemplate<double,double>mob2;
    auto B=mob2.sum(10.25,13.52);
    cout<<"b value is "<<B<<endl;

    Mobiletemplate<int,double>mob3;
    auto C=mob3.sum(52,52.36);
    cout<<"c value is "<<C<<endl;

    Mobiletemplate<double,int>mob4;
    auto D=mob4.sum(36.25,5);
    cout<<"d value is "<<D<<endl;

    return 0;
}*/

/*#include "bottletemplate.h"
int main()
{
    Bottletemplate<int,int>bot1;
    auto A=bot1.sum(10,20);
    cout<<"a value is "<<A<<endl;

    Bottletemplate<double,double>bot2;
    auto B=bot2.sum(20.00,30.00);
    cout<<"b value is "<<B<<endl;

    Bottletemplate<int,double>bot3;
    auto C=bot3.sum(10,63.00);
    cout<<"c value is "<<C<<endl;

    Bottletemplate<double,int>bot4;
    auto D=bot4.sum(50.00,12);
    cout<<"d value is "<<D<<endl;

    return 0;
}*/

#include "laptoptemplate.h"
int main()
{
    Laptoptemplate<int,int,int>lap1;
    auto A=lap1.function(10,20);
    cout<<"a value is "<<A<<endl;

    Laptoptemplate<string,string,string>lap2;
    auto B=lap2.function("pallavi","pallavi1");
    cout<<"b value is "<<B<<endl;
}



