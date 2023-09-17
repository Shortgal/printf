#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string format
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int x = 0;
	char *str;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	str = malloc(sizeof(char) * 1024);
	if (str == NULL)
		exit(1);
	_memset(str, 0, 1024);
	str[0] = '\0';
	va_start(args, format);
	while (format[x])
	{
		/* check if the character is % (in ASCII = 37) */
		if (format[x] == 37)
		{
			/* check if the next character is % */
			if (format[x + 1] == 37)
				str[_strlen(str)] = format[x + 1];
			else
			{
				/* to the get format function */
				/* pass the next character i.e x+1 */
				if ((*get_format_func(format[x + 1])) == NULL)
					return (-1);
				else
					(*get_format_func(format[x + 1]))(args, str);
			}
			/* increment x to point to format specifier */
			x++;
		}
		else
		{
			/* it's a regular character, add it to buffer */
			/* get the last index of the string and append it */
			str[_strlen(str)] = format[x];
		}
		x++;
	}
	x = _strlen(str);
	va_end(args);
	write(1, str, _strlen(str));
	free(str);
	return (x);
}
