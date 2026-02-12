#include <stdio.h>
#define MAX 10

int main()
{
    // int numbers[MAX], i, sum = 0;
    // for (i = 0; i < MAX; i++)
    // {
    //     numbers[i] = i;
    // }

    // for (i = 0; i < MAX; i++)
    // {
    //     sum += numbers[i];
    //     printf("%d\n", sum);
    // }

    // OR

    int numbers[MAX], *p, sum = 0, i;

    for (i = 0; i < MAX; i++)
    {
        numbers[i] = i;
    }

    for (p = numbers; p < (numbers + MAX); p++)
    {
        sum += *p;
        printf("%d\n", sum);
    }
    

    // OR

    // int numbers[MAX], i;
    // int *p = numbers, *end = (numbers + MAX);

    // for (i = 0; i < MAX; i++)
    // {
    //     numbers[i] = i;
    // }

    // while(p < end)
    // {
    //     printf("%d ", *(p++));
    // }


    return 0;
}