#include <iostream>
using namespace std;

/*namespace pthinks
{

  class Employee
  {
   public:
      void display()
     {
        cout<<"hii pthinks"<<endl;
     }
  };
}

namespace benz
{
  class Employee
   {
   public:
       void display1()
       {
        cout<<"HII benz"<<endl;
       }
    };
}

namespace striker
{
class Employee{
public:
    void display()
    {
        cout<<"hii striker"<<endl;
    }
};
}

int main()
{
    pthinks::Employee e1;
    e1.display();
    benz::Employee e2;
    e2.display1();
    striker::Employee e3;
    e3.display();
    return 0;
}*/

void display();

auto sum()
{
    int a=1;
    int b=2;
    int c;
    c=a+b;
    cout<<c<<endl;
    return c;
}

int main()
{
    int a=10;
    auto b=2.5;
    auto c="k";
    cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    display();
    sum();
    return 0;
}

void display()
{
    cout<<"hii"<<endl;
}



