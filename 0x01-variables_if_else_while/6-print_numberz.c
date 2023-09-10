#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = '0';

	while (first <= '9')
	{
		putchar(first);
		first++;
	}
	putchar('\n');
	return (0);
}
