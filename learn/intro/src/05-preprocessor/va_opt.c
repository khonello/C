#include <stdio.h>
void realdbgprintf (const char *SourceFilename,
                    int SourceLineno,
                    const char *CFormatString,
                    ...);


// #define dbgprintf(cformat, ...) \
//     realdbgprintf (__FILE__, __LINE__, cformat, __VA_ARGS__)

// #define dbgprintf(cformat, ...) \
//     realdbgprintf (__FILE__, __LINE__, cformat, ##__VA_ARGS__)

#define dbgprintf(cformat, ...) \
    realdbgprintf (__FILE__, __LINE__, cformat __VA_OPT__(,) __VA_ARGS__)


int main()
{
    dbgprintf("Hello, world");
    return 0;
    
}
void realdbgprintf (const char *SourceFilename,
                    int SourceLineno,
                    const char *CFormatString,
                    ...)
                    {
                        printf(CFormatString, SourceFilename, SourceLineno);
                    }