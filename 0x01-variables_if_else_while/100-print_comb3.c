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
	int second = '0';

	while (first <= '9')
	{
		while (second <= '9')
		{
			if (first < second)
			{
				putchar(first);
				putchar(second);
				if (first < '8' || second != '9')
				{
					putchar(comma);
					putchar(space);
				}
			}
			second++;
		}
		first++;
		second = '0';
	}
	putchar('\n');
	return (0);
}
