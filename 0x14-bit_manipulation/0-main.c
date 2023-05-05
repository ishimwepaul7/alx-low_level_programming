#include <stdio.h>
#include "main.h"

/**
 * main - check the codes
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int i;

	i = binary_to_uint("1");
	printf("%u\n", i);
	i = binary_to_uint("101");
	printf("%u\n", i);
	i = binary_to_uint("1e01");
	printf("%u\n", i);
	i = binary_to_uint("1100010");
	printf("%u\n", i);
	i = binary_to_uint("0000000000000000000110010010");
	printf("%u\n", i);
	return (0);
}
