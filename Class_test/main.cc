#include "class_test1.h"

#include <stdio.h>
#include <stdlib.h>

void PrintfCar(Car car)
{
    printf("CAR: %f %d %d\n", car.gas_, car.doors_, car.open_);
}

int main(int argc, char** argv)
{
    // Car car0;
    // Car car1;

    // car0.init();

    // printf("CAR: %f %d %d\n", car0.gas_, car0.doors_, car0.open_);

    // car0.refuelGas(100);

    // printf("CAR: %f %d %d\n", car0.gas_, car0.doors_, car0.open_);


    // car1.init(10,5);

    // printf("CAR1: %f %d %d\n", car1.gas_, car1.doors_, car1.open_);


    // Car lot_of_cars[10];

    // for (int i = 0; i < 10; i++)
    // {
    //     lot_of_cars[i].init();
    // }
    
    // lot_of_cars[5].refuelGas(200);

    // for (int i = 0; i < 10; i++)
    // {
    //     printf("Car%d: %f, %d, %d", i, lot_of_cars[i].gas_, lot_of_cars[i].doors_, lot_of_cars[i].open_);
    // }
    
    // Car car2;
    // Car* pcar = nullptr;

    // pcar = &car2;

    // pcar->init();

    // printf("PCAR: %f, %d, %d", pcar->gas_, pcar->doors_, pcar->open_);

    Car car3;

    car3.init();

    PrintfCar(car3);

    return 0;
}