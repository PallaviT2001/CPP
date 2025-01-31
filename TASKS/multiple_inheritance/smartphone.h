#ifndef SMARTPHONE_H
#define SMARTPHONE_H
#include "phone.h"
#include "camera.h"
#include "music.h"

class smartphone:public phone,public camera,public music
{
public:
    smartphone();
    ~smartphone();
};

#endif // SMARTPHONE_H
