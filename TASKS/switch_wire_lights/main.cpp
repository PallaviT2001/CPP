#include <iostream>
using namespace std;
#include "switch.h"
#include <vector>

int main()
{
    Light l1("havels","havels");
    Light l2("havels","havels");
    Light l3("havels", "havels");
    Light l4("havels", "havels");
    Light l5("havels", "havels");
    //Light l6("havels", "havels");
    // Light l7("havels", "havels");
    // Light l8("havels", "havels");
    // Light l9("havels", "havels");
    // Light l10("havels", "havels");
    // Light l11("havels", "havels");
    // Light l12("havels", "havels");
    // Light l13("havels", "havels");
    // Light l14("havels", "havels");
    // Light l15("havels", "havels");

    /*Light l150;
    l150 = l5;*/

    Switch switch1("havels","havels");
    vector <Light> lights ;

    lights.push_back(l1);
    cout<<"one object"<<endl;
    lights.push_back(l2);
    cout<<"two object"<<endl;
    lights.push_back(l3);
    cout<<"three object"<<endl;
    lights.push_back(l4);
    cout<<"four object"<<endl;
    lights.push_back(l5);
    cout<<"five objects"<<endl;
    // lights.push_back(l6);
    // lights.push_back(l7);
    // lights.push_back(l8);
    // lights.push_back(l9);
    // lights.push_back(l10);
    // lights.push_back(l11);
    // lights.push_back(l12);
    // lights.push_back(l13);
    // lights.push_back(l14);
    // lights.push_back(l15);

    Wire wire1("polycab","polycab",lights);
    switch1.setwire(&wire1);

    l1.setwire(&wire1);
    l2.setwire(&wire1);
    l3.setwire(&wire1);
    l4.setwire(&wire1);
    l5.setwire(&wire1);
    // l6.setwire(&wire1);
    // l7.setwire(&wire1);
    // l8.setwire(&wire1);
    // l9.setwire(&wire1);
    // l10.setwire(&wire1);
    // l11.setwire(&wire1);
    // l12.setwire(&wire1);
    // l13.setwire(&wire1);
    // l14.setwire(&wire1);
    // l15.setwire(&wire1);

    switch1.switchon();
    return 0;
}
