#include <stdio.h>
#include <errno.h>

int main()
{
    // setbuf
    char buf[BUFSIZ];

    FILE *stream = fopen("log.txt", "w");
    int retval;
    if ((retval = setvbuf(stream, buf, _IOLBF, BUFSIZ - 1)) != 0)
    {
        perror("Error");
    }
    else
    {
        fprintf(stream, "Lorem ipsum dolor sit amet, consectetur adipisicing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua.");
        fflush(stream);

    }
    fclose(stream); 
    return 0;
}