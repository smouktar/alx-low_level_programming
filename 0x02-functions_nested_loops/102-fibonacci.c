#include <stdio.h>

/**
  * main - Prints fibonacci series stop at 50
  *
  * The numbers must be separated by comma, followed by a space ,
  * Return: Always (Success)
  */
int main(void)
{
	int i = 0;
	long y = 2, x = 1;

	while (i < 50)
	{

		if (i >= 2)
		{
			y = y + x;
			x = y - x;

			printf(", %ld", y);
		}

		else if (i == 1)
		{
			printf(", %ld", y);
		}

		else
			printf("%ld", x);
		i++;

	}


	printf("\n");
	return (0);
}
