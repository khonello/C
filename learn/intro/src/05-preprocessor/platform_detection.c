#include <stdio.h>

typedef char (*SIG_a) (int);
typedef int (*SIG_r) (int);

int (*( signal(char (*)(int)) )) (int); 	// this is an example of a function declaration and not a pointer declaration

char foo(int);
int bar(int);

int main() {

	int (* (*handler) (int)) (int);			// this is an example of a pointer declaration
	SIG_r returnbar = signal(&foo);

	printf("%d\n", returnbar(2));
	return 0;
}

SIG_r signal(SIG_a param) {
	return bar;
}

char foo(int param) {
	return (char)param;
}
int bar(int param) {
	return param << 2;
}