#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: the copy string
 * @src: input string copied
 * @n: number of characters copied
 * Return: pointer to the resulting string
 */

char	*_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i]; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
