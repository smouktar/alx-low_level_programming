#include "main.h"
/**
 * print_alphabet_x10 - print alphabets loop
 *
 */

void print_alphabet_x10(void)
{
	int num = 0;

	while (num < 10)
	{

		int first = 'a';

		while (first <= 'z')
		{
			_putchar(first);
			first++;
		}
		_putchar('\n');
		num++;
	}
}
