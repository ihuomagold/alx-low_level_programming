#include <stdio.h>

/**
 * main- prints the size of various types
 * on the computer rit is compiled on.
 * Return: 0 if properly exited
 */
int main(void)
{
	printf("Size of a char: %d bytes\n", sizeof(char));    
	printf("Size of an int: %d bytes\n", sizeof(int));
	printf("Size of a long int: %d bytes\n", sizeof(long int));
	printf("Size of a long long int: %d bytes \n", sizeof(long long int));
	printf("Size of a float: %d bytes\n", sizeof(float));
	return (0);
}
