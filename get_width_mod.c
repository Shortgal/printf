#include "main.h"

/**
 * get_width - gets width modofier from format string
 * @format: format string
 * @index: position in format string
 * @args: list of arguments
 * Return: value
 */

int get_width(const char *format, int *index, va_list args)
{
	int value = 0;

	while ((*format >= 48 && *format <= 57) || *format == 42)
	{
		(*index)++;
		if (*format == 42)
			value == va_arg(args, int);
		if (value <= 0)
			return (0);
		return (value);

		value *= 10;
		value += (*format - 48);
		format++;
	}
	return (value);
}
