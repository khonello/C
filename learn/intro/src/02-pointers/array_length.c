#include <stdio.h>

int intlen(const int* arr)
{
    const int *ptr = arr;
    for (; *arr; arr++);

    int len = arr - ptr;
}

int main()
{
    int arr[6] = {1, 2, 3, 4, 5};
    printf("length of arr is %d\n", intlen(arr));

    return 0;
}