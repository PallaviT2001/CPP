#ifndef BASEOBJECT_H
#define BASEOBJECT_H
#include <string>
#include <iostream>
#include <vector>

class BaseObject
{
public:
    BaseObject(const std::string name);
    BaseObject();
    virtual ~BaseObject();

    std::string GetName() const;
    virtual void print();

    void addChild(BaseObject* child);
    void getme();
    std::vector<BaseObject*> findChild(const std::string name);

protected:
    std::string name;
    std::vector<BaseObject*> children;
};

#endif

