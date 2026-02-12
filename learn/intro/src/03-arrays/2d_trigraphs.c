#include <stdio.h>
#define COLS 5
#define ROWS 10

int main()
{
    int arr[COLS][ROWS];

    for (int i = 0; i < COLS; i++)
    {
        for (int j = 0; j < ROWS; j++)
        {
            *( *(arr+i) + j) = j;
            printf("%d\n", j);
            
        }
    }


    return 0;
}