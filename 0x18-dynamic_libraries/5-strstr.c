#include "main.h"
#include <stdio.h>

/**
 * *_strstr - function that locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 * Return: pointer to the beginning of the located substring
 */

char	*_strstr(char *haystack, char *needle)
{
	int i;

	while (*haystack)
	{
		i = 0;
		while (*(haystack + i) == *(needle + i))
		{
			if (!*(needle + i + 1))
				return (haystack);
			i++;
		}
		if (!*(needle + i))
			return (haystack);
		haystack++;
	}
	return (NULL);
}
