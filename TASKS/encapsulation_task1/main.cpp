#include <iostream>
#include "person.h"
#include "student.h"
using namespace std;

int main()
{
    person p;

    p.setname("pallavi");
    cout<<p.getname()<<endl;

    p.setid(23);
    cout<<p.getid()<<endl;

    p.setage(56);
    cout<<p.getage()<<endl;

    p.setcontactnumber(123654);
    cout<<p.getcontactnumber()<<endl;

    student s;

    s.setfees(50000.00);
    cout<<s.getfees()<<endl;

    s.setaddress("banglore");
    cout<<s.getaddress()<<endl;

    student s("vidya",26,25,123654,50000.00,"mandya");

    return 0;
}
