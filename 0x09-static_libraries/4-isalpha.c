#include "main.h"

/**
 * _isalpha - Checks if alphabetic
 * @c: character to be checked
<<<<<<< HEAD
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise
=======
 * Return: 1 if character is letter, 0 otherwise
>>>>>>> cd5a0c25d2637043b7eabaa5061ceb2455f47335
 */

int _isalpha(int c)
{
<<<<<<< HEAD
if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
{
return (1);
}
return (0);
=======
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
>>>>>>> cd5a0c25d2637043b7eabaa5061ceb2455f47335
}
