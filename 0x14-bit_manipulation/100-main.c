#include <stdio.h>
#include "main.h"

/**main - check the code
 *
 * Return: Always 0
 */
int main(void)
{
	int i;

	i = get_endianness();
	if (i != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
