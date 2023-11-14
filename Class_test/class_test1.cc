

#include "class_test1.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Car::init(const float g, const int d)
{
    doors_ = d;
    gas_ = g;
    open_ = true;
}

void Car::init(const float g)
{
    doors_ = 3;
    gas_ = g;
    open_ = true;
}

void Car::init()
{
    doors_ = 3;
    gas_ = 0;
    open_ = true;
}

void Car::refuelGas(const int g)
{
    gas_ += g;
}

void Car::consumeGas(const int g)
{
    gas_ -= g;
}

void Car::openDoors()
{
    open_ = true;
}

void Car::closeDoors()
{
    open_ = false;
}

Car::Car()
{
    doors_ = 0;
    open_ = true;
    gas_ = 0.0f;
}

Car::Car(const Car& other)
{
    doors_ = other.doors_;
    open_ = other.open_;
    gas_ = other.gas_;

    if (other.brand_ == nullptr)
    {
        brand_ = nullptr;
    }else
    {
        size_t size = strlen(other.brand_);
        brand_ = (char*)calloc(1, size);
        strncpy(brand_, other.brand_, size);
    }
}

Car::~Car()
{
    
}
