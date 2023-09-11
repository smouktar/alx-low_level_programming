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
	int third = '0';

	while (first <= '9')
	{
		while (second <= '9')
		{
			while (third <= '9')
			{
				if (first < second && second < third)
				{
					putchar(first);
					putchar(second);
					putchar(third);

					if (first < '7' || second < '8' || third != '9')
					{
						putchar(comma);
						putchar(space);
					}
				}
				third++;
			}
			second++;
			third = '0';
		}
		first++;
		second = '0';
	}
	putchar('\n');
	return (0);
}
