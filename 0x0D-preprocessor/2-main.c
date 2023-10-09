#include<stdio.h>
/**
 * main - Prints the name of the file
 *
 * Return: Always 0
 */
int main(void)
{
/**
 * __FILE__ - is a standard predifined macro in the stdio library that
 * expands to the name of the current input file
 * in the form of a C string constant
*/
	printf("%s\n", __FILE__);
	return (0);
}

