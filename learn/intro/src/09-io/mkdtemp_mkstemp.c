#include <stdio.h>
#include <stdlib.h>

int main()
{
	char templ1[] = "khXXXXXX";
	char templ2[] = "khXXXXXX";
	
	int fd = 0;
	char *tmpdir;

	if ((tmpdir = mkdtemp(templ1)) != NULL)
	{
		if ((fd = mkstemp(templ2)) != -1)
		{
			dprintf(fd, "Lorem ipsum");
		}
		else
		{
			perror("Error from mkstemp");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		perror("Error from mkdtemp");
		exit(EXIT_FAILURE);
	}

	return 0;
}
