#include <stdio.h>
#include <stdlib.h>

#define COLS 4
#define ROWS 2

int main()
{
    int arr[COLS][ROWS];

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            *(*(arr+i) + j) = j;
            printf("%d\n", arr[i][j]);
        }
    }
    return 0;
}