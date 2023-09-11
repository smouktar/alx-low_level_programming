#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generate pairs of two-digit numbers separated by a comma and space
 *              while following the specified style guide.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			putchar('0' + (i / 10));
			putchar('0' + (i % 10));
			putchar(' ');
			putchar('0' + (j / 10));
			putchar('0' + (j % 10));

			if (i != 98 || j != 99)
			{
				putchar(',');
				putchar(' ');
			}

			j++;
		}
		i++;
	}

	putchar('\n');
	return (0);
}




