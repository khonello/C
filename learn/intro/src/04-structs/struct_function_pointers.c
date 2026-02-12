#include <stdio.h>
#include <stdlib.h>

struct T
{
    int t;
    char *ptr;
};

typedef struct T Type;

int tfunc(void)
{
    int a = 1;
    return a;
}

char *ptrfunc(void)
{
    char *name = "khonello";
    return name;
}

int main()
{   
    size_t n;

    Type test, *mem;
    mem = (Type*)(malloc(n));

    test.t = tfunc();
    test.ptr = ptrfunc();

    *mem = test;
    printf("%s\n", mem->ptr);

    free(mem);

    return 0;
}