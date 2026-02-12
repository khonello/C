#include <stdio.h>
#include <signal.h>

void handler(int sig)
{
	printf("Signal has been raised\n");
}
int main()
{
	signal(SIGTERM, handler);
	if (1)
	{
		raise(SIGTERM);
	}

	return 0;
}
