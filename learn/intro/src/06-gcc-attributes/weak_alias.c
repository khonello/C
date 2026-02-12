#include <stdio.h>

void __f ();
void f () __attribute__ ((weak, alias("__f")));

int main()
{
    f();
    return 0;
}

void __f() { printf("Hello world"); }