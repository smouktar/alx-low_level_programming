#include "main.h"
/**
 * print_alphabet - use a function that prints alphabets
 *
 * return: (no return value)
 *
 */
void print_alphabet(void)
{
	int first = 'a';

	while (first <= 'z')
	{
		_putchar(first);
		first++;
	}
	_putchar('\n');
	return ;
}
