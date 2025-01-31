#include <iostream>
#include "smartphone.h"
#include "phone.h"
#include "camera.h"

using namespace std;

int main()
{
    camera c1(1,"cliq");
    c1.takepic();
    smartphone obj;
    obj.camera::display();
    obj.phone::display();
    obj.takepic();
    obj.makecall();
    cout << "Hello World!" << endl;
    return 0;
}
