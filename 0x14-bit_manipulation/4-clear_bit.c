#include "main.h"
/**
 * clear_bit - Entry point
 * @i: input
 * @index: index
 * Return: 0
 */
int clear_bit(unsigned long int *i, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*i = *i & ~(1 << index);
	return (1);
}
