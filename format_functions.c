#include "main.h"

/**
 * print_int - writes an integer to a string
 * @args: integer
 * @str: pointer to the string
 * Return: void
 */

int print_int(va_list args, char *str)
{
	return(print_number(va_arg(args, int), str));
}

/**
 * print_unsigned_int - writes an unsigned integer to a string
 * @args: integer
 * @str: pointer to the string
 * Return: void
 */

int print_unsigned_int(va_list args, char *str)
{
	return(print_unsigned_number(va_arg(args, unsigned int), str));
}

/**
 * print_char - appends a character to a string
 * @args: character
 * @str: pointer to the string
 * Return: void
 */

int print_char(va_list args, char *str)
{
	char c = va_arg(args, int);

	str[_strlen(str)] = c;
	return (1);
}

/**
 * print_string - appends a string to another
 * @args: source string
 * @str: pointer to the destination string
 * Return: void
 */

int print_string(va_list args, char *str)
{
	char *ptr = va_arg(args, char *);

	if (ptr == NULL)
	{
		_strcat(str, "(null)");
		return (_strlen("(null)"));
	}
	else
	{
		_strcat(str, ptr);
		return(_strlen(ptr));
	}
}
