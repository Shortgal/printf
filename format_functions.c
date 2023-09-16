#include "main.h"

/**
 * print_int - prints an integer
 * @args: integer
 * Return: void
 */

void print_int(va_list args, char *str)
{
	print_number(va_arg(args, int), str);
}

/**
 * print_unsigned_int - prints an integer
 * @args: integer
 * Return: void
 */

void print_unsigned_int(va_list args, char *str)
{
	print_number(va_arg(args, unsigned int), str);
}

/**
 * print_char - prints a char
 * @args: character
 * Return: void
 */

void print_char(va_list args, char *str)
{
	char c = va_arg(args, int);

	str[_strlen(str)] = c;
}

/**
 * print_string - prints a string
 * @args: string
 * Return: void
 */

void print_string(va_list args, char *str)
{
	char *ptr = va_arg(args, char *);

	_strcat(str, ptr);
}
