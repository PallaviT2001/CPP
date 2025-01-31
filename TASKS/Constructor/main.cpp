#include <iostream>
#include "ac.h"
#include "Switch.h"
#include "wire.h"
using namespace std;
#include <string>

int main()
{
    cout<<"AC REPRESENTATION"<<endl;

    ac a1(1,10,20,"voltas","white");
    cout<<a1.acnumber<<" "<<a1.length<<" "<<a1.breadth<<" "<<a1.brand<<" "<<a1.color<<endl;

    ac a2(2,10,20,"voltas","white");
    cout<<a2.acnumber<<" "<<a2.length<<" "<<a2.breadth<<" "<<a2.brand<<" "<<a2.color<<endl;

    ac a3(3,10,20,"voltas","white");
    cout<<a3.acnumber<<" "<<a3.length<<" "<<a3.breadth<<" "<<a3.brand<<" "<<a3.color<<endl;

    ac a4(4,10,20,"voltas","white");
    cout<<a4.acnumber<<" "<<a4.length<<" "<<a4.breadth<<" "<<a4.brand<<" "<<a4.color<<endl;

    ac a5(5,10,20,"voltas","white");
    cout<<a5.acnumber<<" "<<a5.length<<" "<<a5.breadth<<" "<<a5.brand<<" "<<a5.color<<endl;

    ac a6(6,10,20,"voltas","white");
    cout<<a6.acnumber<<" "<<a6.length<<" "<<a6.breadth<<" "<<a6.brand<<" "<<a6.color<<endl;

    ac a7(7,10,20,"voltas","white");
    cout<<a7.acnumber<<" "<<a7.length<<" "<<a7.breadth<<" "<<a7.brand<<" "<<a7.color<<endl;
    cout<<endl;


    cout<<"Switches REPRESENTATION"<<endl;

    Switch s1(1,5,10,"Havells","white");
    cout<<s1.switchnumber<<" "<<s1.length<<" "<<s1.breadth<<" "<<s1.brand<<" "<<s1.color<<endl;

    Switch s2(2,5,10,"Havells","white");
    cout<<s2.switchnumber<<" "<<s2.length<<" "<<s2.breadth<<" "<<s2.brand<<" "<<s2.color<<endl;

    Switch s3(3,5,10,"Havells","white");
    cout<<s3.switchnumber<<" "<<s3.length<<" "<<s3.breadth<<" "<<s3.brand<<" "<<s3.color<<endl;

    Switch s4(4,5,10,"Havells","white");
    cout<<s4.switchnumber<<" "<<s4.length<<" "<<s4.breadth<<" "<<s4.brand<<" "<<s4.color<<endl;

    Switch s5(5,5,10,"Havells","white");
    cout<<s5.switchnumber<<" "<<s5.length<<" "<<s5.breadth<<" "<<s5.brand<<" "<<s5.color<<endl;

    Switch s6(6,5,10,"Havells","white");
    cout<<s6.switchnumber<<" "<<s6.length<<" "<<s6.breadth<<" "<<s6.brand<<" "<<s6.color<<endl;

    Switch s7(7,5,10,"Havells","white");
    cout<<s7.switchnumber<<" "<<s7.length<<" "<<s7.breadth<<" "<<s7.brand<<" "<<s7.color<<endl;
    cout<<endl;

    cout<<"WIRES REPRESENTATION"<<endl;

    wire w1(2,1.8,"polycab","Red",280.00);
    cout<<w1.length<<" "<<w1.thickness<<" "<<w1.brand<<" "<<w1.color<<" "<<w1.price<<endl;

    wire w2(3,1.8,"polycab","Red",280.00);
    cout<<w2.length<<" "<<w2.thickness<<" "<<w2.brand<<" "<<w2.color<<" "<<w2.price<<endl;

    wire w3(4,1.8,"philips","Red",280.00);
    cout<<w3.length<<" "<<w3.thickness<<" "<<w3.brand<<" "<<w3.color<<" "<<w3.price<<endl;

    wire w4(5,2.8,"polycab","Red",280.00);
    cout<<w4.length<<" "<<w4.thickness<<" "<<w4.brand<<" "<<w4.color<<" "<<w4.price<<endl;

    wire w5(6,3.8,"polycab","white",380.00);
    cout<<w5.length<<" "<<w5.thickness<<" "<<w5.brand<<" "<<w5.color<<" "<<w5.price<<endl;

    wire w6(5,2.8,"polycab","Red",280.00);
    cout<<w6.length<<" "<<w6.thickness<<" "<<w6.brand<<" "<<w6.color<<" "<<w6.price<<endl;

    wire w7(7,4.8,"polycab","yellow",980.00);
    cout<<w7.length<<" "<<w7.thickness<<" "<<w7.brand<<" "<<w7.color<<" "<<w7.price<<endl;

    return 0;

}

