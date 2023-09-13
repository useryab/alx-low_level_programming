#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
char chr;
int i = 0;
while (i < 10)
{
chr = 'a';
while (chr <= 'z')
{
_putchar(chr);
chr++;
}
_putchar('\n');
i++;
}
}
