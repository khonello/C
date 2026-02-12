%:include <stdio.h>
??=define DEBUG(...) fprintf(stdout, "[ File %s :: Line %d ]", __VA_ARGS__)

int main()
{
    DEBUG(__FILE__, __LINE__);
}