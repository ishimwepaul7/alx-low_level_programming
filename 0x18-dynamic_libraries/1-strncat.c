#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: input string destination
 * @src: input string to append
 * @n: number of characters to append
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int i = 0;

	while (dest[l])
		l++;

	while (i < n && src[i])
	{
		dest[l + i] = src[i];
		i++;
	}

	dest[l + i] = '\0';
	return (dest);
}
