#ifndef ENGINE_H
#define ENGINE_H

class Key;

class Engine
{
private:
    bool isOn;

public:
    Engine();
    ~Engine();
    void start(const Key& key);
    void stop();
    bool isRunning() const;
};

#endif // ENGINE_H
