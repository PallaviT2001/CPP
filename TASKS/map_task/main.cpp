#include <iostream>
using namespace std;
#include <map>
#include "capital.h"
#include "state.h"
int main()
{
    map<State,Capital>india;
    india.emplace("karnataka","bengaluru");
    india.emplace("tamilnaadu","chennai");
    india.emplace("andrapradesh", "Amaravathi");
    india.emplace("telangana","hyderabad");

    for (auto i=india.begin();i!=india.end();i++)
    {
        cout<<"state and capital "<<i->first<<" "<<i->second<<endl;
    }

    return 0;
}
