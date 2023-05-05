#include "main.h"
/**
 * set_bit - Entry point
 * @i: input
 * @index: index
 * Return: 0
 */
int set_bit(unsigned long int *i, unsigned int index)
{
	if (index > 63)
		return (-1);

	*i = *i | 1ul << index;
	return (1);
}
