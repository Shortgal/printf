#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format
 * Return: 0
 */

int _printf(const char *format, ...)
{
	unsigned int x = 0;
	va_list args;

	va_start(args, format);
	/* iterate through the string */
	while (format[x])
	{
		/* % in ASCII = 37 */
		/* check if the character currently pointed to is % */
		if (format[x] == 37)
		{
			/* pass the next character i.e x+1 */
			/* to the get format function */
			(*get_format_func(format[x + 1]))(args);
			/* increment x to skip this character */
			x++;
		}
		else
		{
			/* it's a regular character, print it with _putchar */
			_putchar(format[x]);
		}
		x++;
	}
	va_end(args);
	return (x);
}
