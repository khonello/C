#include <stdio.h>

// 1. A non-static inline function cannot define a non-const function-local static and cannot refer to a file-scope static.


inline void non_static();
static void non_const();

static void file_scope();

int main()
{
    printf("Hello world");
    return 0;
}

static void file_scope()
{
    // warning: 'file_scope' is static but used in inline function 'non_static' which is not static
}

inline void non_static()
{
    static void non_const()
    {
        // error: invalid storage class for function 'non_const'
    }

    file_scope();
}