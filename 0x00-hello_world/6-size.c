#include <stdio.h>


/**
 * main - A program that prints the size of various computer types
 * the computer it is compiled and run on..
 * Return 0.
 */

int main(void)

{
	printf("Size of a char: %zu bytes(s)\n", sizeof(char));
	printf("Size of an int: %zu bytes(s)\n", sizeof(int));
	printf("Size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %zu bytes(s)\n", sizeof(float));
	return(0);
}
