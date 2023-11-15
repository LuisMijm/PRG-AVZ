
#include <Entity.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


Entity::Entity()
{
    tag_ = 0;
    enabled_ = false;
}

Entity::Entity(int tag, bool enabled)
{
    tag_ = tag;
    enabled_ = enabled;
}

Entity::~Entity()
{

}

bool Entity::Enable(bool enable)
{
    enabled_ = enable;
    
    return enabled_;
}