#include <stdio.h>
#include <stdint.h>

int main()
{
	int c = fgetc(stdin) - '0';
	if (c < UINT_FAST8_MAX)
	{
		uint8_t num = c;
		printf("Value is less than %d\n", UINT_FAST8_MAX);
	}
	else
	{
		uint16_t num = c;
		printf("Value is greater than %d\n", UINT_FAST8_MAX);

	}

	return 0;
}
