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
    float display_size;
public:
    camera(int cameraid,string cameraname,float display_size);
    ~camera();
    camera();
    void takepic();
    void display();
};

#endif
