
#include <Entity.h>

#include <stdio.h>
#include <stdlib.h>
#include <string>




Entity::Entity()
{
    tag_ = 0;
    enabled_ = false;
    name_ = "EntityObj";
}

Entity::Entity(int tag, bool enabled, std::string name)
{
    tag_ = tag;
    enabled_ = enabled;
    name_ = name;
}

Entity::~Entity(){}

bool Entity::Enable(bool enable)
{
    enabled_ = enable;
    
    return enabled_;
}