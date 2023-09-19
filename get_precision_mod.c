#include "main.h"

/**
 * get_precision - gets the precision modifier in a string format
 * @format: string format
 * @index: position in string format
 * @args: list of arguments
 * Return: value if present, 0 if empty, 0 or -ve, else -1
 */

int get_precision(const char *format, int *index, va_list args)
{
	int value = 0;

	if (*format != '.')
		return (-1);

	format++;
	(*index)++;

	if ((*format <= '0' || *format > '9') &&
	     *format != '*')
	{
		if (*format == '0')
			(*index)++;
		return (0);
	}

	while ((*format >= '0' && *format <= '9') ||
	       (*format == '*'))
	{
		(*index)++;

		if (*format == '*')
		{
			value = va_arg(args, int);
			if (value <= 0)
				return (0);
			return (value);
		}

		value *= 10;
		value += (*format - '0');
		format++;
	}

	return (value);
}
