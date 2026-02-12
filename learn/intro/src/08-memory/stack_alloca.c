#include <stdio.h>

#ifndef SYS
    #define SYS
    static inline void sys() __attribute__((always_inline));

#endif
#if ( defined _WIN32 || defined _WIN64)
    #include <malloc.h>

    inline void sys()
    {
        int *sMem = (int*)_malloca(sizeof(int) * 4);

        if (sMem != NULL)
            printf("Stack memory has been allocated\n""On a windows system\n");

        _freea(sMem);
        // Allocated stack memory has been freed!
    }
#elif ( defined __unix__ )
    #include <alloca.h>

    inline void sys()
    {
        int *sMem = (int*)alloca(sizeof(int) * 8);
        
        if (sMem != NULL)
            printf("Stack memory has been allocated\n""On a Unix system\n");
    }
#endif

int main()
{
    sys();
    return 0;
}
