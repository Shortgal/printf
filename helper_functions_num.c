#include "main.h"

/**
 * print_number - writes an integer to a buffer position.
 * @n: input integer.
 * @str: printf local buffer
 * Return: no return.
 */

int print_number(long int n, char *str)
{
	int length = 0;
	unsigned long int m, d, count;

	if (n < 0)
	{
		str[_strlen(str)] = 45;
		length++;
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
		length++;
	}
	return (length);
}

/**
 * print_unsigned_number - writes an unsigned integer to a buffer position.
 * @n: input unsigned integer.
 * @str: printf local buffer
 * Return: no return.
 */

int print_unsigned_number(unsigned long int n, char *str)
{
	int length = 0;
	unsigned long int m, d, count;

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
		length++;
	}
	return (length);
}
