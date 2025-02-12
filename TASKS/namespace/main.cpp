#include <iostream>
using namespace std;

namespace pthinks
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

int main()
{
    pthinks::Employee e1;
    e1.display();
    benz::Employee e2;
    e2.display1();
    return 0;
}
