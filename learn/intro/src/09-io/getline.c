#include <stdio.h>
#include <stdlib.h>

int main()
{
    // getline
    FILE *stream = fopen("log.txt", "r");
    
    char *buffer = NULL;
    size_t s = 0;
    ssize_t retval;

    if (stream !=  NULL)
    {
        retval = getline(&buffer, &s, stream);
        if (retval != -1)
        {
            printf("%s\n", buffer);
        }
        else
        {
            perror("Error");
        }

    }

    free(buffer);
    return 0;
}