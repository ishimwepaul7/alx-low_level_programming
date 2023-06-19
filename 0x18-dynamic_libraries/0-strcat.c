#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input string destination
 * @src: input string to append
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i = 0;

	while (dest[l])
		l++;

	while (src[i])
	{
		dest[l + i] = src[i];
		i++;
	}
	dest[l + i] = '\0';
	return (dest);
}
