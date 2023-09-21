#include "main.h"

/**
  * _strncat - Concatenates two strings with buffer limit n
  * @dest: The destination value
  * @src: The source value
  * @n: The limit of the concatenation
  *
  * Return: A pointer to the resulting string dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int dl = 0, j = 0;

	for (; dest[dl]; dl++)

	while (j < n && src[j])
	{
		dest[dl] = src[j];
		dl++;
		j++;
	}

	dest[dl + n + 1] = '\0';

	return (dest);
}

