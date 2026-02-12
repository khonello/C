#include <stdio.h>
#include <errno.h>
#include <string.h>

int main()
{
    // fgetpos and fsetpos
    FILE *stream = fopen("log.txt", "r");

    int retval;
    fpos_t gPos;

    if ((retval = fgetpos(stream, &gPos)) != 0)
    {
        perror("Error");
    }
    else
    {
        fpos_t newPos = gPos + 6;
        int ret;

        if ((ret = fsetpos(stream, &newPos)) != 0)
        {
            perror("Error");
        }
        else
        {
            char buffer[BUFSIZ];
            fread(buffer, sizeof(int) + 1, sizeof(char), stream);

            if (strlen(buffer) < 0)
            {
                printf("Buffer is empty");
            }
            else
            {
                printf("%s\n", buffer);
            }

            
        }
    }

    fclose(stream);
    return 0;
}