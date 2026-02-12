#include <stdlib.h>
#include <stdio.h>

#define ROWS 3
#define COLS 5

int main()
{
    int **p, i, j;

    p = malloc(ROWS * sizeof(int *));
    if ( p == NULL) 
    {
        printf("Memory allocation error\n");
        exit(1);
    }

   for( i = 0; i < ROWS; i++)
   {
        p[i] = malloc( COLS * sizeof(int));
        if (p[i] == NULL)
        {
            printf("Memory allocation error\n");
            exit(2);
       }
   }

   for ( i = 0; i < ROWS; i++)
   {
        for ( j = 0; j < COLS ; j++)
        {
            p[i][j] = 10 * i + j;
        }
   }
 }
