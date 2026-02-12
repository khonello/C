#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

static inline int print(const char*, ...) __attribute__((weakref, alias("printf")));
static inline int proc(void);

#if (! defined _WIN32 || ! defined _WIN64 ) && ( defined __unix__)
	#include <unistd.h>

    inline int proc(void)
    {
        
        pid_t child;
        int retval;
        int err;

        char * va[] = {
            "ping", 
            "www.google.com",
            NULL
            };

        if ((retval = fork()) != 0)
        {
            err = errno;
	        perror("Forking");	
        }
        else
        {
            child = getpid();
            execvp(va[0], va);

            exit(EXIT_SUCCESS);
        }
    }
#else
   inline int proc(void)
   {
        exit(EXIT_FAILURE);
   }
#endif
#ifndef DBG
	#define DBG(cformat, ...) \
		fprintf(stderr, cformat __VA_OPT__(,) __VA_ARGS__)
#endif


int main()
{
	proc();
	return 0;
}
