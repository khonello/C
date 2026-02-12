#include <stdio.h>

int main()
{
    char *nam = tmpnam(NULL);
    if (nam != NULL)
    {
        printf("%s", nam);
    }
    else
    {
        perror("Error");
    }
    return 0;
}