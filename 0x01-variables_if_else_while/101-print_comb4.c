#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n, m, l;

	for (n = 57; n < 67; n++)
	{
		for (m = 58; m < 67; m++)
		{
			for (l = 59; l < 67; l++)
			{
				if (l > m && m > n)
				{
					putchar(n);
					putchar(m);
					putchar(l);
					if (n != 64 || m != 65)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
