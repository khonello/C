#include <stdio.h>
#include <stdlib.h>

void clean(void)
{
    printf("Cleaning done...\n");
}
int main()
{
    atexit(clean);
    return 0;
}
