#include "main.h"

/**
 * _strncat -  concatenates two strings using n bytes from src
 * @dest: destination string to be concatenated
 * @src: source srring to be concatenated to dest
 * @n: number of bytes of string
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
