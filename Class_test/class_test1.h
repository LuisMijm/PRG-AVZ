#include <string.h>

#ifndef __CAR_H_
#define __CAR_H_ 1

class Car
{
public:
    // Methods
      // Init Methods
    void init(const float g, const int d);
    void init(float g);
    void init();

    void refuelGas(const int g);
    void consumeGas(const int g);
    void openDoors();
    void closeDoors();

    // Default constructor
    Car();
    // copy constructor
    Car(const Car& other);

    ~Car();

public:
  // Data members
  int doors_;
  bool open_;
  float gas_;
  char* brand_; 
};
#endif // __CAR_H__

