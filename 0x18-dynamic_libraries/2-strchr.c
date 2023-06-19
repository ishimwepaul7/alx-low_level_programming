#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string
 * @s: the reference string
 * @c: the target character
 * Return: pointer to the first occurrence of the character c
 */

char *_strchr(char *s, char c)
{

	while ((*s) && (*s != c))
		s++;

	if (*s == c)
		return (s);
	else
		return (NULL);
}
