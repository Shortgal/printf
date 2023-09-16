#include "main.h"

/**
 * print_int - writes an integer to a string
 * @args: integer
 * @str: pointer to the string
 * Return: void
 */

void print_int(va_list args, char *str)
{
	print_number(va_arg(args, int), str);
}

/**
 * print_unsigned_int - writes an unsigned integer to a string
 * @args: integer
 * @str: pointer to the string
 * Return: void
 */

void print_unsigned_int(va_list args, char *str)
{
	print_unsigned_number(va_arg(args, unsigned int), str);
}

/**
 * print_char - appends a character to a string
 * @args: character
 * @str: pointer to the string
 * Return: void
 */

void print_char(va_list args, char *str)
{
	char c = va_arg(args, int);

	str[_strlen(str)] = c;
}

/**
 * print_string - appends a string to another
 * @args: source string
 * @str: pointer to the destination string
 * Return: void
 */

void print_string(va_list args, char *str)
{
	char *ptr = va_arg(args, char *);

	_strcat(str, ptr);
}
