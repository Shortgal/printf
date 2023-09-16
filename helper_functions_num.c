#include "main.h"

/**
 * print_number - writes an integer to a buffer position.
 * @n: input integer.
 * @str: printf local buffer
 * @x: starting point of write operation
 * Return: no return.
 */

void print_number(int n, char *str)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		str[_strlen(str)] = 45;;
		m = n * -1;
	}
	else
		m = n;

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		str[_strlen(str)] = ((m / count) % 10) + 48;
	}
}
