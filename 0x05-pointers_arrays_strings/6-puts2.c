#include "main.h"

/**
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: pointer to the string to print chars from
 */

void puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	i = 0;
	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
	}

	_putchar('\n');
}
