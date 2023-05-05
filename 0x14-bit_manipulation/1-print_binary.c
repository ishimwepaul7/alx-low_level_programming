#include <stdio.h>
#include "main.h"

/**
 * print_binary - print unsigned int - Entry point
 * @i: input
 * Return: 0
 */
void print_binary(unsigned long int i)
{
	int t, flag = 0;
	unsigned long int cur;

	for (t = 63; t >= 0; t--)
	{
		cur = i >> t;

		if (cur & 1)
		{
			_putchar('1');
			flag++;
		}
		else if (flag)
			_putchar('0');
	}
	if (!flag)
		_putchar('0');
}
