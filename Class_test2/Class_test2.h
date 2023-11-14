

#ifndef __VEHICLE__H_
#define __VEHICLE__H_ 1


class Vehicle
{
private:
    float gas_;
    
public:
    Vehicle();
    Vehicle(float gas);
    ~Vehicle();

    // copy constructor
    Vehicle(const Vehicle& other);
};











#endif  