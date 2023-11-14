
#include <stdio.h>


int a = 42;
float f = 3.14f;
char s[16] = "BUBU\0";

void MyWeirdFunction(&a, 0)
{

}
void MyWeirdFunction(&f, 1)
{

}
void MyWeirdFunction(s, 2)
{
    
}