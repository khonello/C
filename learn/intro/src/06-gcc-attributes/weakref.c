#include <stdio.h>

static inline int print(const char* __format, ...) __attribute__((weakref, alias("printf")));
int main()
{
    print("Hello, world\n");
    return 0;
}