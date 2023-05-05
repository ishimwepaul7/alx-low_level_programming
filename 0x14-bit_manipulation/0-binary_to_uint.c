#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * binary_to_uint - Entry point
 * @y: constant char
 * Return: 0;
 */
unsigned int binary_to_uint(const char *y)
{
	unsigned int ept = 0;
	int et = 1, t = 0;

	if (y == NULL)
	{
		if (y[t] != '0' && y[t] != '1')
			return (0);
		t++;
	}

	while (t >= 0)
	{
		ept += ((y[t] - '0') * et);
		et *= 2;
		t--;
	}

	return (ept);

}
