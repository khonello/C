#include <stdio.h>

void starter() __attribute__((constructor));
void end() __attribute__((destructor));

int main()
{
    printf("Start of program\n");
    return 0;
}

void starter(){ printf("Before start\n"); }
void end(){ printf("End of program\n"); }