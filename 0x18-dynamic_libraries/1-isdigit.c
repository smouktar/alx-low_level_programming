#include <stdio.h>
#include <ctype.h>
/**
 * _isdigit - Short description, single line
 * @c: only parameter
 *
 * Description: Checks if argument is upper case
 *
 * Return: (1) or (0)
 */
int _isdigit(int c)
{
	int ret;

	ret = isdigit(c);
	if (ret)
		return (1);
	else
		return (0);
}
