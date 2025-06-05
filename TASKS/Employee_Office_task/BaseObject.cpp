#include "BaseObject.h"

BaseObject::BaseObject(const std::string name): name(name)
{
    std::cout<<"base object parameterized constructor called"<<std::endl;
}

BaseObject::BaseObject()
{
    std::cout<<"base object empty constructor called"<<std::endl;
}

BaseObject::~BaseObject()
{
    std::cout<<"base object destructor called"<<std::endl;
}

std::string BaseObject::GetName() const
{
    return name;
}

void BaseObject::addChild(BaseObject* child)
{
    children.push_back(child);
}

void BaseObject::print()
{
    std::cout<<name <<" child print function called"<<std::endl;
    for (auto child : children)
    {
        child->print();
    }
}

void BaseObject::getme()
{
    std::cout << "base object getme function called for " << GetName() << std::endl;
    for (auto child : children)
    {
        child->getme();
    }
}

std::vector<BaseObject*> BaseObject::findChild(const std::string name)
{
    std::vector<BaseObject*> result;

    // Step 1: If this object's name matches the given name
    if (this->GetName() == name)
    {
        // Return its children
        result = this->children;
    }
    else
    {
        // Step 2: Otherwise, search in all children
        for (auto child : children)
        {
            // Recursively call findChild on each child
            result = child->findChild(name);

            // If a match is found, stop searching further
            if (!result.empty())
            {
                break;
            }
        }
    }

    // Step 3: Print appropriate message
    if (result.empty())
    {
        std::cout << "Child with name '" << name << "' not found or has no children." << std::endl;
    }
    else
    {
        std::cout << "Children of " << name << ":" << std::endl;
        for (auto c : result)
        {
            std::cout << c->GetName() << std::endl;
        }
    }

    return result;
}




/*std::vector<BaseObject*> BaseObject::findChild(const std::string name)
{
    std::vector<BaseObject*> result;
    if (this->GetName() == name)
    {
        result = this->children;
    }
    else
    {
        for (auto child : children)
        {
            result = child->findChild(name);
            if (!result.empty())
            {
                break;
            }
        }
    }
    if (result.empty())
    {
        std::cout << "Child with name '" << name << "' not found or has no children." << std::endl;
    }
    else
    {
        std::cout << "Children of " << name << ":" << std::endl;
        for (auto c : result)
        {
            std::cout << c->GetName()<< std::endl;
        }
    }
    return result;
}*/


