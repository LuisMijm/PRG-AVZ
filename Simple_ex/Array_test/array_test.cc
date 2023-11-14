
#include <stdio.h>

int v[5];
int *i_pointer;

void SetValues()
{
    for (int i = 0; i < 5; i++)
    {
        v[i] = i * 5;
    }
    i_pointer = v;
}

void ShowPtr()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%p-> %d\n", i_pointer, *i_pointer);
        i_pointer++;
    }
}

int main()
{
    SetValues();
    ShowPtr();
}