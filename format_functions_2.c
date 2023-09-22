#include "main.h"

/**
 * print_binary - writes binary from a decimal to a string
 * @args: integer argument
 * @str: pointer to the string
 * @len: length modifier
 * Return: void
 */

int print_binary(va_list args, char *str, int len)
{
	unsigned int x;

	if (len == S_LONG)
		x = va_arg(args, unsigned long int);
	else
		x = va_arg(args, unsigned int);
	if (len == S_SHORT)
		x = (short)x;

	return (dec_binary(x, str));
}

/**
 * print_octal - writes octal from a decimal to a string
 * @args: integer argument
 * @str: pointer to the string
 * @len: length modifier
 * Return: void
 */

int print_octal(va_list args, char *str, int len)
{
	unsigned int x;

	if (len == S_LONG)
		x = va_arg(args, unsigned long int);
	else
		x = va_arg(args, unsigned int);
	if (len == S_SHORT)
		x = (short)x;

	return (dec_octal(x, str));
}

/**
 * print_hex_lower - writes hex (lowercase) from a decimal to a string
 * @args: integer argument
 * @str: pointer to the string
 * @len: length modifier
 * Return: void
 */

int print_hex_lower(va_list args, char *str, int len)
{
	unsigned int x;

	if (len == S_LONG)
		x = va_arg(args, unsigned long int);
	else
		x = va_arg(args, unsigned int);
	if (len == S_SHORT)
		x = (short)x;

	return (dec_hex_lower(x, str));
}

/**
 * print_hex - writes binary from a decimal to a string
 * @args: integer argument
 * @str: pointer to the string
 * @len: length modifier
 * Return: void
 */

int print_hex(va_list args, char *str, int len)
{
	unsigned int x;

	if (len == S_LONG)
		x = va_arg(args, unsigned long int);
	else
		x = va_arg(args, unsigned int);
	if (len == S_SHORT)
		x = (short)x;

	return (dec_hex_upper(x, str));
}
