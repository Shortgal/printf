#include "main.h"

/**
 * print_binary - writes binary from a decimal to a string
 * @args: integer argument
 * @str: pointer to the string
 * Return: void
 */

int print_binary(va_list args, char *str)
{
	unsigned int x = va_arg(args, unsigned int);

	return (convert_decimal(x, 2, str));
}

/**
 * print_octal - writes octal from a decimal to a string
 * @args: integer argument
 * @str: pointer to the string
 * Return: void
 */

int print_octal(va_list args, char *str)
{
	unsigned int x = va_arg(args, unsigned int);

	return (convert_decimal(x, 8, str));
}

/**
 * print_hex_lower - writes hex (lowercase) from a decimal to a string
 * @args: integer argument
 * @str: pointer to the string
 * Return: void
 */

int print_hex_lower(va_list args, char *str)
{
	unsigned int x = va_arg(args, unsigned int);

	return (convert_decimal(x, 17, str));
}

/**
 * print_hex - writes binary from a decimal to a string
 * @args: integer argument
 * @str: pointer to the string
 * Return: void
 */

int print_hex(va_list args, char *str)
{
	unsigned int x = va_arg(args, unsigned int);

	return (convert_decimal(x, 16, str));
}
