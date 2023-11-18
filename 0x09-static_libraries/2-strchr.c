#include "main.h"
/**
 * _strchr - Function that locates a character in a string
 * @s: string to be searched
 * @c: character to be located
 * Return: Return to the character found, if not return a NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
