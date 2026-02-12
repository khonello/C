#include <stdio.h>
#define COLS 10
#define ROWS 20


int main()
{
    int values[COLS][ROWS];

    int *p = &values[0][0];
    int *end = &values[COLS - 1][ROWS - 1];

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            values[i][j] = j;
        }
    }

    while(p <= end)
    {
        printf("%d ", *(p++));
    }
    return 0;
}