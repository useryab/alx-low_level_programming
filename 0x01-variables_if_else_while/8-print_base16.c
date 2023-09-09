#include <stdio.h>
#include <stdlib.h>
/**
 * main - main Entry
 * Return: 0
*/
int main(void)
{
int a;
char b;
for (a = 48; a < 58; a++)
{
putchar(a);
}
for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}
putchar('\n');
return (0);
}
