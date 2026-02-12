#include <stdio.h>
#include "xmacro.def"

#define X(day) char const *day;
// Using macro that does not take argument
    LIST1
#undef X

#define X(day) char const *day;
// Using macro that takes argument
    LIST2(X)
#undef X

int main(int x)
{
    printf("Hello world");
    return 0;
}