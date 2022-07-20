#include "main.h"
int main_sqrt_recursion(int n, int i);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (main_sqrt_recursion(n, 0));
}

/**
 * main_sqrt_recursion - the main function that returns
 * the natural square root of a number
 * @n: number to calculate the sqaure root of
 * @i: iterator
 * Return: the resulting square root value
 */

int main_sqrt_recursion(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (main_sqrt_recursion(n, i + 1));
}
