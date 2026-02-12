#include <stdio.h>
#include <stdlib.h>

#define data \
    impl(type) \
    impl(category)

#define impl(arg0) int arg0;
    typedef struct T {
        data
    } test;
#undef impl

int main(int argc, char **argv, char **envp) {

    test t_data = {.type= 1, .category= 4};
    return 0;
}