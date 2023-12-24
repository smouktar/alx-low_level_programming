#include <stdio.h>
#include <ctype.h>
/**
 * _isupper - Short description, single line
 * @c: only parameter
 *
 * Description: Checks if argument is upper case
 *
 * Return: (1) or (0)
 */
int _isupper(int c)
{
	int ret;

	ret = isupper(c);
	if (ret)
		return (1);
	else
		return (0);
}
