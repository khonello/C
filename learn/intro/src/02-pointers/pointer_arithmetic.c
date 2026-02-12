#include <stdio.h>
#define MAX 10

int main()
{

    int *end, *begin, numbers[MAX], sum = 0;

    for (int i=0 ; i<MAX; i++)
    {
        numbers[i] = i;
    }

    begin = numbers; // begin pointer = numbers array of 10
                     // begin = numbers[10]
                     // .'. By default begin pointer points to first value

    end = numbers + MAX;   // pointer arithmetic
                           // end pointer = numbers array + 10
                           // end = (numbers + 10)
                           // end pointer is pointing to the tenth value in the numbers array

    while (begin < end) // while first value that the begin pointer is pointing to is less than the value end is pointing to
    {     // pointer comparison

        if (*begin < 0) // if begin which is first value is less than 0
        {
        break;
        } 
        sum += *begin++;     // pointer arithmetic
                             // sum = sum + *(begin++)
                             // get the next value begin pointer is pointing to
    }
    if (begin == (numbers + MAX))  // ptr arithmetic
    printf("no negatives\n");
}
