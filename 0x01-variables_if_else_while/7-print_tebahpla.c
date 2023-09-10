#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 'z';

	while (first >= 'a')
	{
		putchar(first);
		first--;
	}
	putchar('\n');
	return (0);
}
