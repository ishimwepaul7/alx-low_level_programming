#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned long int i;

	i = 1024;
	clear_bit(&i, 10);
	printf("%lu\n", i);
	i = 0;
	clear_bit(&i, 10);
	printf("%lu\n", i);
	i = 98;
	clear_bit(&i, 1);
	printf("%lu\n", i);
	return (0);
}
