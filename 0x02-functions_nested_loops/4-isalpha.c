#include "main.h"

/**
 * _isalpha - Checks if alphabetic
 * @c: character to be checked
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise
 */

int _isalpha(int c)
{
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
}
