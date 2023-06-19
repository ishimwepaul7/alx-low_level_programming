#include "main.h"

/**
 * _strspn - return length of string that matches values consistently
 * @s: the initial segment
 * @accept: bytes to match
 * Return: the number of bytes matched
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	unsigned int n = 0;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == *(accept + i))
			{
				n++;
				break;
			}
		}
		if (*s != *(accept + i))
			break;
		s++;
	}
	return (n);
}
