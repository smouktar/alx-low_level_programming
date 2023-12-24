/**
  * _strcat - Concatenates two strings
  * @dest: The destination value
  * @src: The source value
  *
  * Return: A pointer to the resulting string dest
  */
char *_strcat(char *dest, char *src)
{
	int ld = 0;
	int i;

	while (dest[ld])
	{
		ld++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[ld] = src[i];
		ld++;
	}

	dest[ld] = '\0';
	return (dest);
}
