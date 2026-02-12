#include <stdio.h>

int main()
{
    // Will not work
    const char** names = {
        "khonello", "khonel", "maxxxe", "mabel"
    };

    // Will work
    const char* new_names[] = {
        "khonello", "khonel", "maxxxxe", "mabel"
    };
    
    return 0;
}