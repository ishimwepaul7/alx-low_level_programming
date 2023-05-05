#include "main.h"

/**
 * flip_bits - Entry point - return the number
 * @i: input number 1
 * @k: input number 2
 * Return: 0 and value
 */
unsigned int flip_bits(unsigned long int i, unsigned long int k)
{
	int numb = 0;
	int p = 0;

	for (; p <= 63; p++)
	{
		if (((i ^ k) >> p) & 1)
			numb++;
	}
	return (numb);
}
