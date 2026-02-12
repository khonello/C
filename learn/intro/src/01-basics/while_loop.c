#include <stdio.h>

int main()
{
    /************************************************************************************************************************
     * As fellow programmers let try and declare variables before we enter the block that will use the declared variables in
     * 
     * *********************************************************************************************************************/

    int i = 1;
    while (i != 5)
    {
        printf("%d\t", i);
        i++;
    }
    return 0;
}