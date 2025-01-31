#ifndef CAMERA_H
#define CAMERA_H
#include <iostream>
using namespace std;

class camera
{
private:
    int m_cameraid;
    string m_cameraname;
public:
    camera(int cameraid,string cameraname);
    ~camera();
    camera();
    void takepic();
    void display();

};

#endif // CAMERA_H
