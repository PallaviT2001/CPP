#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include <string>

class music
{
private:
    int musicid;
    string musicname;
public:
    music();
    ~music();
    music(int musicid,string musicname);
    void playmusic();
    void display();
};

#endif // MUSIC_H
