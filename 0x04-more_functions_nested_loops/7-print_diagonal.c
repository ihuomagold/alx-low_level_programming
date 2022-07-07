#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * @n: The number of \ characters to be printed.
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				_putchar('\\');
			else if (j < i)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
