#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: destination string to be concatenated
 * @src: source string to be concatenated to dest
 * @n: number of bytes to be copied
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
