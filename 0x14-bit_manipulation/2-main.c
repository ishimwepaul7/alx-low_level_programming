#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = get_bit(1024, 10);
	printf("%d\n", i);
	i = get_bit(98, 1);
	printf("%d\n", i);
	i = get_bit(1024, 0);
	printf("%d\n", i);
	return (0);
}
