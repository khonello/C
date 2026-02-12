#include <stdio.h>

void swap(int*, int*);
int main( )
{

    int a, b;
    a = 21;
    b = 50;

    printf("Before: a= %d\t b= %d\n", a,b);
    // MUST PASS ADDRESSES

    swap(&a, &b);

    printf("After: a= %d\t b= %d\n", a,b);
    return 0;
}

void swap(int *first, int *second)
{
    int tmpArr[3];

    tmpArr[0] = *first;
    tmpArr[1] = *second;

    *first = tmpArr[1];
    *second = tmpArr[0];

}