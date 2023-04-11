#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: input number 1
 * @m: input number 2
 *Return: 0 ehe value
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int num = 0;
	int x = 0;


	for (; x <= 63; x++)
	{
		if (((n ^ m) >> x) & 1)
			num++;
	}
	return (num);
}
