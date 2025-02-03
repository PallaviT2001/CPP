#ifndef CAMERA_H
#define CAMERA_H
#include <iostream>
using namespace std;

class camera
{
private:
    int cameraid;
    string cameraname;
protected:
    float displaysize;
public:
    camera(int cameraid,float displaysize);
    ~camera();
    camera();
    void takepic();
    void display();
};

#endif
