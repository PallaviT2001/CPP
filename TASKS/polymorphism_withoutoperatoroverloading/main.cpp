#include <iostream>
#include "distance.h"
using namespace std;
#include "base.h"

/*int main()
{
    Distance obj1(10);
    Distance obj2(20);

    Distance obj3(obj1);
    obj3.add(obj2);
    obj3.displayadd();

    Distance obj4(obj1);
    obj4.sub(obj2);
    obj4.displaysub();

    Distance obj5(obj1);
    obj5.mul(obj2);
    obj5.displaymul();

    Distance obj6(obj1);
    obj6.div(obj2);
    obj6.displaydiv();

    return 0;
}*/

int main()
{
    // base b1(10);
    // base b2(20);
    // base b3=b1.getnum()+b2.getnum();
    // cout<<"b3 result"<<b3.a<<endl;
    base b1(0);
    base b2(0);
    b1.getnum();
    b2.getnum();
    cout<<b1.getnum()<<endl;
    cout<<b2.getnum()<<endl;
    b1.setnum(10);
    b2.setnum(20);
    cout<<b1.getnum()<<endl;
    cout<<b2.getnum()<<endl;
    base b3=b1.getnum()+b2.getnum();
    base b4=b1.getnum()-b2.getnum();
    base b5=b1.getnum()*b2.getnum();
    base b6=b1.getnum()/b2.getnum();
    base b7=b1.getnum();
    cout<<b3.getnum()<<endl;
    cout<<b4.getnum()<<endl;
    cout<<b5.getnum()<<endl;
    cout<<b6.getnum()<<endl;
    cout<<b7.getnum()<<endl;
}
