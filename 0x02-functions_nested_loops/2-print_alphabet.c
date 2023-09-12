#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int first = 'a';

	while (first <= 'z')
	{
		putchar(first);
		first++;
	}
	putchar('\n');
	return (0);
}
