#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * except 2 and 4, followed by a new line
 */

void print_most_numbers(void)
{
	int r;

	for (r = 0; r < 10; r++)
	{
		if (r != 2 && r != 4)
		{
			_putchar(r + '0');
		}
	}

	_putchar('\n');
}
