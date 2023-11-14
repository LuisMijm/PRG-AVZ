
#include "Class_test2.h"

Vehicle::Vehicle()
{
    gas_ = 0.0f;
}

Vehicle::Vehicle(float gas)
{
    gas_ = gas;
}

Vehicle::Vehicle(const Vehicle &other)
{
    gas_ = other.gas_;
}

Vehicle::~Vehicle()
{
}