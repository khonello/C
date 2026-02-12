#include <stdio.h>
#include <stdlib.h>
#include <setjmp.h>

void parent();
void child();

int main()
{
	parent();
	return 0;
}
void parent()
{
	int retval; 
	jmp_buf env;

	void child()
	{
		printf("Before jump\n");
		longjmp(env, 1);
	}
	retval = setjmp(env);
	if (retval == 1)
	{
		exit(EXIT_SUCCESS);
	}
	child();
	printf("After jump");
}
