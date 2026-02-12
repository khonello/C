#include <stdio.h>
#include <stdarg.h>

/* Prototype for sum:  Note the ... and no
    type info after first arg  */

int sum(int, ...);
int main()
{
    printf("%d\n", sum(3, 7, -2, 4));
    printf("%d\n", sum(5,1,2,3,4,5));
 }

 int sum(int n, ...) /* args have no names */
 {
    va_list arg;     /* arg refers to each arg in turn */
    int i, s;

    va_start(arg, n); /* arg points to first arg */

    for (i = s = 0; i < n ; i++ ) 
    {
       s += va_arg(arg, int);  /*return next arg*/
    }

    va_end(arg);   /* cleanup */
    return(s);
 }
