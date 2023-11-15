
#include <stdlib.h>
#include <transform.h>

#ifndef _ENTITY_H_
#define _ENTITY_H_


class Entity
{
private:
    int tag_;
    bool enabled_;
    Transform transform_;
public:
    // Constructor
    Entity();
    Entity(int tag, bool enabled);
    
    // Destructor
    ~Entity();

    // Methods
    bool Enable(bool enable);
};




#endif