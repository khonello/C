#include <stdio.h>

// __attribute__ ((aligned))
// __attribute__ ((aligned (n)))
// __attribute__ ((packed))

// They allows you to specify special attributes of enum, struct and union types
// Two attributes are currently defined for types: aligned, and packed.


struct __attribute__((aligned)) INFO
{

    int age;
    char sex;
    int height;
};

enum __attribute__((packed)) GAME 
{
    // int EASY = 0, MEDIUM = 1, HARD = 2;
    EASY,
    MEDIUM,
    HARD
};

union __attribute__((aligned(8))) PROPS
{
    // Align this union for 8 byte
    int age;
    char sex;
};


int main(int x)
{
    struct INFO inf;
    printf("%d\n", sizeof inf);

    return 0;
}
