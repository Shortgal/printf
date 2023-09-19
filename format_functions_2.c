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

	return (dec_binary(x, str));
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

	return (dec_octal(x, str));
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

	return (dec_hex_lower(x, str));
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

	return (dec_hex_upper(x, str));
}
