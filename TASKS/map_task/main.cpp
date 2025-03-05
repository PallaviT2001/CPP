#include <iostream>
using namespace std;
#include <map>

int main()
{

    map<string,string>india;
    india.add("ka", "one");
    india.add("kl", "two");
    india.add("hh", "three");
    cout<<"map values "<<india<<endl;
    return 0;
}
