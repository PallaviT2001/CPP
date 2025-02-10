#include <iostream>
//#include "distance.h"
using namespace std;
#include "base.h"
//#include "a.h"
//#include "b.h"
#include "student.h"

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
    cout<<"without operator overloading adding values"<<endl;
    base b1(10);
    base b2(20);
    base b3;
    b1.getnum();
    b2.getnum();
    cout<<b1.getnum()<<endl;
    cout<<b2.getnum()<<endl;

    b3=b1.getnum()+b2.getnum();
    cout<<"value "<<b3.getnum()<<endl;

    b1.setnum(30);
    b2.setnum(40);
    cout<<b1.getnum()<<endl;
    cout<<b2.getnum()<<endl;
    b3=b1.getnum()+b2.getnum();
    cout<<"value "<<b3.getnum()<<endl;


    base b4("pallavi");
    b4.getname();
    cout<<b4.getname()<<endl;

}

/*int main()
{
    A *a;
    B b;
    a = &b;
    a->display();
}*/

/*int main()
{
    student s(1,"Pallavi",123456987);
    s.display();
    s.setid(2);
    s.getid();
    cout<<s.getid()<<endl;
    s.display();
    student s1(3,"likitha",123654789);
    s.display();
    s1.setname("darshini");
    s1.getname();
    s1.display();
    return 0;
}*/

/*int main()
{
    student s1;
    s1.a=new int;
    *s1.a=25;
    student s2=s1;
    delete s1.a;
    cout<<*s2.a<<endl;
    //delete s1.a;
    //cout<<*s1.a<<endl;
    cout<<"before returning"<<endl;
    return 0;
}*/






