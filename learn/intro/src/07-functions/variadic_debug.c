#include <stdio.h>
#include <stdarg.h>

#define DEBUG(format, ...) \
    fprintf(stderr, format __VA_OPT__(,) __VA_ARGS__);

static inline void print(const char *frmt, ...)
{
    va_list arg; va_start(arg, frmt);
    {
        DEBUG(frmt, va_arg(arg, const char*));
    }
    va_end(arg);

}

int main()
{
    print("Hello from %s\n", __FILE__);
    return 0;
}