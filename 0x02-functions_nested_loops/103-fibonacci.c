#include <stdio.h>

/**
  * main - Prints the sum of Even Fibonacci numbers
  * less than 4000000.
  *
  * Description:E ach new term in the Fibonacci sequence is generated by
  * adding the previous two terms. By starting with 1 and 2, the first 10
  * terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
  * By considering the terms in the Fibonacci sequence whose values do not
  * exceed 4,000,000, write a program that finds and prints the sum of the
  * even-valued terms, followed by a new line.
  * Return: Nothing!
  */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k + j < 4000000)
	{
		k += j;

		if (k % 2 == 0)
			sum += k;

		j = k - j;

		++i;
	}

	printf("%ld\n", sum);
	return (0);
}