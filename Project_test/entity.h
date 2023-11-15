
#include <stdlib.h>
#include <transform.h>
#include <string>

#ifndef _ENTITY_H_
#define _ENTITY_H_


class Entity
{
private:
    int tag_;
    bool enabled_;
    std::string name_;
    Transform transform_;
public:
    // Constructor
    Entity();
    Entity(int tag, bool enabled, std::string name);
    
    // Destructor
    ~Entity();

    // Methods
    bool Enable(bool enable);
};




#endif