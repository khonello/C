#include <stdio.h>

int main()
{
    char *buff = "Hello";
    char dest[20];

    int ret = sscanf(buff, "%s", dest);
    if (!(ret > 0))
    {
        perror("Error");
    }
    else
    {
        printf(dest);
    }

    return 0;
}