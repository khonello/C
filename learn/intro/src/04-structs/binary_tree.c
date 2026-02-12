#include <stdio.h>
#include <stdlib.h>

typedef struct window
{
    struct window *left;
    struct window *right;
}WIN;

int main()
{
    WIN *w = (WIN*)malloc(sizeof(WIN));
    WIN *l = (WIN*)calloc(1, sizeof(w->left));

    // free(w) Will not free (l) also, for everytime malloc is used free must be used also
    // Thus

    free(w);
    free(l);

    return 0;
}