#include "main.h"
/**
 * _strncat - concatenate two strings 
 * @dest: input
 * @src: input 
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
    int j;

    j = 0;
    while (j<n && src[j] != '\0')
    {
        dest[j] = src[j];
        j++;
    }
    while (j<n)
    {
        dest[j] = '\0';
        j++;
    }
    return(dest);    
}
