#include "printf.h"

/**
 * print_int - prints an integer
 * @args: integer
 * Return: void
 */

void print_int(va_list args)
{
	print_number(va_arg(args, int));
}

/**
 * print_unsigned_int - prints an integer
 * @args: integer
 * Return: void
 */

void print_unsigned_int(va_list args)
{
	print_number(va_arg(args, unsigned int));
}

/**
 * print_char - prints a char
 * @args: character
 * Return: void
 */

void print_char(va_list args)
{
	_putchar(va_arg(args, int));
}

/**
 * print_string - prints a string
 * @args: string
 * Return: void
 */

void print_string(va_list args)
{
	unsigned int x;
	char *str = va_arg(args, char *);

	x = 0;
	while (str[x])
	{
		_putchar(str[x]);
		x++;
	}
}
