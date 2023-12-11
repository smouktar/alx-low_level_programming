#include "main.h"
#include <ctype.h>
/**
 * _islower - checks for lower letters
 *
 * Description: Check if parameter is lower case
 * @c: collect alphabets
 * Return: (1) if c lower , (0) otherwise
 *
 */
int _islower(int c)
{
	int ret;

	ret = islower(c);

	if (ret)
		return (1);
	else
		return (0);
}
