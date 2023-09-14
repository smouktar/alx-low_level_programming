#include <stdio.h>

/**
  * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
  * followed by a new line.
  *
  * The numbers should be separated by comma, followed by a space,
  * You are allowed to use the standard library
  * You are not allowed to use any other library (You can’t use GMP etc…)
  * You are not allowed to use long long, malloc, pointers,
  * arrays/tables, or structures
  * You are not allowed to hard code any Fibonacci number (except for 1 and 2)
  *
  * Return: Nothing!
  */
int main(void)
{
	int i;
	unsigned long x, y;

	i = 1;
	x = 1;
	y = 2;

	printf("%d, %d, ", 1, 2);
	while (i <= 96)
	{
		if (i != 96)
		{
			y += x;
			x = y - x;
			printf("%ld, ", y);
		}
		else
		{
			y += x;
			x = y - x;
			printf("%ld", y);

		}

		i++;
	}
	printf("\n");

	return (0);
}
