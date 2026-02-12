#include <stdio.h>

#ifdef __unix__
    // Unix system
#elif (defined _WIN32 || defined _WIN64)
    // Windows system
    #warning Compiling for Windows Platform
    
    #if (!defined __LP64__ || !defined __LLP64__)
        // 32 bit
    #else 
        // 64 bit
    #endif
#endif

int main()
{
    // We are on a 32 bit system
    return 0;
}