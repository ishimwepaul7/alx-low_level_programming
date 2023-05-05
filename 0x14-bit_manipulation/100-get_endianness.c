#include "main.h"

/**
 * get_endianness - return endianness
 * Return: 0
 */
int get_endianness(void)
{
	int i = 1;

	return (*((char *) &i) + '0');
}
