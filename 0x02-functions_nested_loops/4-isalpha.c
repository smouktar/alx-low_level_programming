#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabet
 *
 * Description: Check if parameter is lower case
 * @c: collect alphabets
 * Return: (1) if c lower , (0) otherwise
 *
 */
int _isalpha(int c)
{
	int ret;

	ret = isalpha(c);

	if (ret)
		return (1);
	else
		return (0);
}
