#include <iostream>
#include "shallowcopy.h"
//#include "deepcopy.h"
using namespace std;

int main()
{
    Shallowcopy obj1(10);
    Shallowcopy obj2=obj1;

    cout<<&obj1<<endl;
    cout<<&obj2<<endl;

    obj1.show();
    obj2.show();
    return 0;
}

/*int main()
{
    Deepcopy obj1(30);
    Deepcopy obj2=obj1;

    cout<<&obj1<<endl;
    cout<<&obj2<<endl;

    obj1.show();
    obj2.show();
    return 0;
}*/
