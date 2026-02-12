#include <stdio.h>

int main()
{
    // fgets
    char *buf;
    FILE *stream = fopen("log.txt", "r");
    if (stream != NULL)
    {
        int ret;
        if ((buf = fgets(buf, 6, stream)) != NULL)
        {
            printf("%s\n", buf);
        }
        else
        {
            perror("Error");
        }

    }

    fclose(stream);
    return 0;
}