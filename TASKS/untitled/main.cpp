#include <iostream>
class a{
public:
    virtual void base(){
        std::cout<<"a";
    };
};
class b:public a
{
     void base(){
        std::cout<<"b";
    };
};

using namespace std;

int main()
{

    a *b1=new b;
    b1->base();
    cout << "Hello World!" << endl;
    return 0;
}
