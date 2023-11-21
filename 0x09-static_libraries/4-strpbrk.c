#include "main.h"
/**
 * _strpbrk - finds the first character that matches character specified
 * @s: string to be scanned
 * @accept: This is the string to locate
 * Return: If a set is matched - a pointer to the matched byte
 *         If no set is matched - NULL
 */
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}
