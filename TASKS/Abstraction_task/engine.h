#ifndef ENGINE_H
#define ENGINE_H

class Accelerator;
class Engine
{
private:
Accelerator *ac;
public:
    Engine();
    ~Engine();
    void startengine(Accelerator *ac);
    void stopengine();

};

#endif
