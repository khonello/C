??=include <stdio.h>
%:define MAX 2

int main()
??<

    int arr<:MAX:> = {1};
    int (*ptr) [2] = &arr;

    printf("0x%x\n", (*ptr)[0]);

    return 0;
??>