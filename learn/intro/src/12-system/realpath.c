#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
	char resolved_path[PATH_MAX];
	char filename[] = "Untitled-20.c";

	char *retval;
	if ((retval = realpath(filename, resolved_path)) != NULL)
	{
		printf("%s\n", retval);
	}
	else
	{
		perror("Error");
	}
	return 0;
}
