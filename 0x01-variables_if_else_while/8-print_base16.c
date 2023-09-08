#include <stdio.h>
#include <stdlib.h>
/**
 * main - main Entry 
 * Return: 0 
*/
int main(void)
{
	int x;
	char b;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}
	for (b = 'a'; b <= 'f'; b++)
	{
		putchar(b);
	}
	putchar('\n');
	return (0);
}
