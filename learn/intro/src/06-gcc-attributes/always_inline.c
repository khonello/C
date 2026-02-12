#include <stdio.h>

// 2. If a non-static function is declared inline, then it must be defined in the same translation unit.
static inline void f() __attribute__((always_inline));

int main()
{
    f();
    return 0;
}

inline void f(){ printf("Hello world\n"); }