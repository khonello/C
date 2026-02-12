#include <stdio.h>

typedef struct Mystruct
{
    int a;
    int b;

    struct Mystruct *right;
    struct Mystruct *left;
}t_struct;

int main()
{
    t_struct *fpos = NULL;

    fpos->left->a = 0;
    fpos->right->b = 1;


    return 0;
}