#include <stdio.h>
#include <errno.h>

int main()
{
    // clearerr
    FILE *stream = fopen("log.txt", "r");
    ssize_t retval;
    int c, err;

    while (1)
    {
        if ((retval = feof(stream)) != 0)
        {
            err = errno;

            clearerr(stream);
            break;

        }
        else
        {
                c = getc(stream);
                printf("%c", c);
        }
    }

    fclose(stream);
    return 0;
}