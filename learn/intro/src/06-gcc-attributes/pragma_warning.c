#include <stdio.h>
#define DBG() _Pragma("GCC warning \"printf has been disabled.\"") \
    _Pragma("GCC poison printf")

int main()
{
    DBG();
    return 0;
}