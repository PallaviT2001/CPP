#ifndef ENGINE_H
#define ENGINE_H
#include "string"
using namespace std;

class Engine
{
private:
    int engineid;
    string enginename;
public:
    Engine();
    ~Engine();
    void start();
    Engine(int engineid,string enginename);
};

#endif
