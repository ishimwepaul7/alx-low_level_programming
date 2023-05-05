#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i;

	i = 1024;
	set_bit(&i, 5);
	printf("%lu\n", i);
	i = 0;
	set_bit(&i, 10);
	printf("%lu\n", i);
	i = 98;
	set_bit(&i, 0);
	printf("%lu\n", i);
	return (0);
}
