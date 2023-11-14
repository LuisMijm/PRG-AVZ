

#include <stdlib.h>
#include <stdio.h>

int main()
{
    printf("short int \t\t: %d \n", sizeof(short int));
    printf("unsigned short int \t: %d \n", sizeof(unsigned short int));
    printf("unsigned int \t\t: %d \n", sizeof(unsigned int));
    printf("int \t\t\t: %d \n", sizeof(int));
    printf("long int \t\t: %d \n", sizeof(long int));
    printf("long long int \t\t: %d \n", sizeof(long long int));
    printf("char \t\t\t: %d \n", sizeof(char));
    printf("unsigned char \t\t: %d \n", sizeof(unsigned char));
    printf("float \t\t\t: %d \n", sizeof(float));
    printf("double \t\t\t: %d \n", sizeof(double));
    printf("long double \t\t: %d \n", sizeof(long double));

    printf("bool \t\t\t: %d \n", sizeof(bool));
    printf("pointer \t\t: %d \n", sizeof(void*));
}