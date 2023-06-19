#include "main.h"

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int flag = 0;
	int sign = 0;
	int digit = 0;
	int num = 0;

	while (i < _strlen(s) && flag != 1)
	{
		if (s[i] == '-')
			sign++;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (sign % 2 != 0)
				digit = -digit;
			num = num * 10 + digit;

			if (s[i + 1] < '0' || s[i + 1] > '9')
				flag = 1;
		}
		i++;
	}
	return (num);
}
