#include <stdio.h>

#define WEEKDAYS \
    X(monday) \
    X(tuesday) \
    X(wednesday) \
    X(thursday) \
    X(friday)

const char* weekdays[] = {
    #define X(name) #name,
        WEEKDAYS
    #undef X
};

int main() {

    printf("%s\n", *(weekdays + 1));
    return 0;
}