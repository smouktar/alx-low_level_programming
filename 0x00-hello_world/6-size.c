/* sizeof.c—Program to tell the size of the C variable */
/* type in bytes */

#include <stdio.h>

int main(void)
{
	printf("\nSize of a char: %d byte(s)", sizeof(char));
	printf("\nSize of an int: %d byte(s)", sizeof(int));
	printf("\nSize of an long: %d byte(s)", sizeof(long));
	printf("\nSize of an long long: %d byte(s)", sizeof(long long));
	printf("\nSize of an float: %d byte(s)\n", sizeof(float));
	return (0);
}