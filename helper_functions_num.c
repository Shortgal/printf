#include "main.h"

/**
 * print_number - writes an integer to a buffer position.
 * @n: input integer.
 * @str: printf local buffer
 * Return: no return.
 */

int print_number(int n, char *str)
{
	int length = 0;
	unsigned int m, d, count;

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

int print_unsigned_number(unsigned int n, char *str)
{
	int length;
	unsigned int m, d, count;

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
 * convert_decimal - converts decimal to base x, appends it to string
 * @x: integer
 * @base: the base(2-b, 8-o, 16-X, 17-x, 18-X(2 char format))
 * @str: pointer to the string
 * Return: void
 */

int convert_decimal(unsigned int x, unsigned int base, char *str)
{
	char *ptr;
	unsigned int y = 0, rem = 0, temp_x, temp_y,  max_sizeof_ptr = 0;

	temp_x = x;
	temp_y = base;
	if (base == 17 || base == 18)
		base = 16;
	while (temp_x > 0)
	{
		max_sizeof_ptr++;
		temp_x /= base;
	}
	ptr = malloc(sizeof(char) * (max_sizeof_ptr + 2));
	if (ptr == NULL)
		exit(1);
	_memset(ptr, 0, max_sizeof_ptr);
	while (x > 0)
	{
		rem = x % base;
		if (rem >= 10)
			ptr[y] = rem - 10 + 65;
		else
			ptr[y] = rem + 48;
		x /= base;
		y++;
	}
	if (temp_y == 18)
	{
		if (_strlen(ptr) < 2)
		{
			ptr[y] = 48;
			y++;
		}
	}
	ptr[y] = '\0';
	rev_string(ptr);
	if (temp_y == 17)
		string_to_lower(ptr);
	_strcat(str, ptr);
	temp_y = _strlen(ptr);
	free(ptr);
	return (temp_y);
}
