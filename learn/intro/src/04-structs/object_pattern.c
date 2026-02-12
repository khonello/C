#include <stdio.h> 
#include <stdlib.h>

/************************************************
 *            Object Creation
 * 1. Collection of data
 * 2. Assigning memory
 * 3. Freeing memory
 *
 * **********************************************/

typedef struct
{
    // Collection of data
    const char *name[2];
    void (*f)(void);
}info_t;

static inline info_t* create_obj(const char*, void (*)(void)) __attribute__((always_inline));
static inline void free_obj(info_t *);

void t(void);
int main()
{
    const char *name = "khonello";
    info_t *obj = create_obj(name, t);

    obj->f();
    printf("%s\n", obj->name[0]);

    free_obj(obj);

    return 0;
} 
void t(void)
{
    printf("I am person\n");
}
inline info_t* create_obj(const char *name, void (*f)(void))
{
    // Assigning memory
    info_t *new_obj = (info_t*)malloc(sizeof(info_t));

    if (new_obj != NULL)
    {
        new_obj->name[0] = name;
        new_obj->f = f;
    }

    return new_obj;
}

inline void free_obj(info_t* mem)
{
    if (mem != NULL)
    {
        free(mem);  // free memory
        mem = NULL; // assigning NULL to dangling pointer
    }
}