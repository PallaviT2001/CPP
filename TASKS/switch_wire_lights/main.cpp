#include <iostream>
using namespace std;
#include "switch.h"
#include <vector>

int main()
{
    Light l1("havels","havels");
    Light l2("havels","havels");
    Light l3("havels", "havels");

    Switch switch1("havels","havels");
    vector <Light> lights ;
    lights.push_back(l1);
    lights.push_back(l2);
    lights.push_back(l3);


    Wire wire1("polycab","polycab",lights);
    switch1.setwire(&wire1);
    l1.setwire(&wire1);
    l2.setwire(&wire1);
    l3.setwire(&wire1);
    switch1.switchon();

    return 0;
}
