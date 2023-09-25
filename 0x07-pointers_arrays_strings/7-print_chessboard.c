#include "main.h"
/**
 * print_chessboard - as the name suggests it Prints a chessboard
 * @a: chessboard to be printed
 * Return: has no return
 */
void print_chessboard(char (*a)[8])
{
	int count, index;

	for (count = 0; count < 8; count++)
	{
		for (index = 0; index < 8; index++)
		{
			_putchar(a[count][index]);
		}
		_putchar('\n');
	}
}
