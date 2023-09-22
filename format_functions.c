#include "main.h"

/**
 * print_int - writes an integer to a string
 * @args: integer
 * @str: pointer to the string
 * @len: length modifier
 * Return: void
 */

int print_int(va_list args, char *str, int len)
{
	int x;

	if (len == S_LONG)
		x = va_arg(args, long int);
	else
		x = va_arg(args, int);
	if (len == S_SHORT)
		x = (short)x;

	return (print_number(x, str));
}

/**
 * print_unsigned_int - writes an unsigned integer to a string
 * @args: integer
 * @str: pointer to the string
 * @len: length modifier
 * Return: void
 */

int print_unsigned_int(va_list args, char *str, int len)
{
	unsigned int x;

	if (len == S_LONG)
		x = va_arg(args, unsigned long int);
	else
		x = va_arg(args, unsigned int);
	if (len == S_SHORT)
		x = (short)x;

	return (print_unsigned_number(x, str));
}

/**
 * print_char - appends a character to a string
 * @args: character
 * @str: pointer to the string
 * @len: length modifier
 * Return: void
 */

int print_char(va_list args, char *str, int len)
{
	unsigned char c = va_arg(args, int);

	(void)len;
	str[_strlen(str)] = c;
	return (1);
}

/**
 * print_string - appends a string to another
 * @args: source string
 * @str: pointer to the destination string
 * @len: length modifier
 * Return: void
 */

int print_string(va_list args, char *str, int len)
{
	char *ptr = va_arg(args, char *);

	(void)len;
	if (ptr == NULL)
	{
		_strcat(str, "(null)");
		return (6);
	}
	else
	{
		_strcat(str, ptr);
		return (_strlen(ptr));
	}
}
