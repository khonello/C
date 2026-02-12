#include <stdio.h>

int main()
{

    #if ( defined _WIN32 || defined _WIN64 )
        goto error_handling;
    #endif

    error_handling:
        __attribute__((cold, unused));
        #define DBG(format, ...) \
            fprintf(stderr, format __VA_OPT__(,) __VA_ARGS__) 

    DBG("Error in file %s on line %d", __FILE__, __LINE__);
    return 0;
}