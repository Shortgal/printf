#include "main.h"

/**
 * get_length - gets the length modifiers on a format string
 * @format: format string
 * @index: position in format string
 * Return: 0, short, long
 */

int get_length(const char *format, int *index)
{
	if (*format == 'h')
	{
		(*index)++;
		return (S_SHORT);
	}
	else if (*format == 'l')
	{
		(*index)++;
		return (S_LONG);
	}
	return (0);
}
