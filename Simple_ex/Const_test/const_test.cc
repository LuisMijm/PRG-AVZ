
#include <stdio.h>

const int g_my_score = 42;

void DumpScore(const int my_score)
{
    my_score--;
    printf("score = %d\n", my_score);
}

int main()
{  
    DumpScore(g_my_score);
}