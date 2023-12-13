#include "main.h"
/**
<<<<<<< HEAD
 * _strspn - Function that gets the length of a prefix substring
 * @s: string literal
 * @accept: characters to match
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
=======
 * _strspn - Function which gets the length of a prefix substring
 * @s: string literal
 * @accept: characters to match
 * Return: Returns the number of bytes in the initial segment of s
>>>>>>> cf4c59ddb14252619910a3f232251a46cad933ed
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, j, counter;

	counter = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[index])
			{
				counter++;
				break;
			}
		}
		if (accept[j] != s[index])
		{
		break;
		}
	}
	return (counter);
}
