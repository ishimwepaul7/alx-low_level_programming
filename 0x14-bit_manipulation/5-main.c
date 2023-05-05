#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	unsigned int i;

	i = flip_bits(1024, 1);
	printf("%u\n", i);
	i = flip_bits(402, 98);
	printf("%u\n", i);
	i = flip_bits(1024, 3);
	printf("%u\n", i);
	i = flip_bits(1024, 1025);
	printf("%u\n", i);
	return (0);
}
