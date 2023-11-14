#include <stdio.h>

struct Enemy {
    int id;
    short int team;
    float range_attack;
    char name;
};

struct Enemy2 {
    int id;
    short int team;
    char name;
    float range_attack;
};

int main() {
    Enemy e;
    Enemy2 e2;
    printf("Size : %d\n", sizeof(e));
    printf("Size : %d\n", sizeof(e2));
}