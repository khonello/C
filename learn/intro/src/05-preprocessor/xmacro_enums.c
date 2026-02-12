#include <stdio.h>
#define LVL \
    X(EASY, 0) \
    X(MEDIUM, 1) \
    X(HARD, 2)

#define INFO(InF) \
    InF(name) \
    InF(sex)

enum GAME {
    #define X(l, v) l = v,
        LVL
    #undef X
};

struct MY_INFO {
    #define INF(arg) const char const* my##arg;
        INFO(INF)
    #undef INF
};

int main()
{
    enum GAME level = EASY, nxt_level = HARD;
    struct MY_INFO info = {.myname= "khonello", .mysex= "Male"};

    printf("My name is %s and I am of the gender %s", info.myname, info.mysex);
    return 0;
}