#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = '0';
	int comma = ',';
	int space = ' ';

	while (first <= '9')
	{
		putchar(first);
		if (first != '9')
		{
			putchar(comma);
			putchar(space);
		}
		++first;
	}
	putchar('\n');
	return (0);
}
