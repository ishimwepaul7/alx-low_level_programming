#include <stdio.h>
#include "main.h"

/**
 * print_binary - print unsigned int - Entry point
 * @i: input
 * Return: 0
 */
void print_binary(unsigned long int i)
{
	int t, flag;

	if (i == 0)
		_putchar('0');
	for (flag = 0, t = sizeof(i) * 8 - 1; t >= 0; t--)
	{
		if ((i >> t) & 1)
			flag = 1;
			if (flag == 1)
				((i >> t) & 1) ? _putchar('1') : _putchar('0');
	}
}
