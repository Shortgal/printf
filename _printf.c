#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string format
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int x = 0, length = 0;
	char *str;
	va_list args;

	if (format == NULL)
		return (-1);
	str = malloc(1024);
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
			{
				str[_strlen(str)] = format[x + 1];
				length++;
			}
			else if (format[x + 1] == '\0' || format[x + 1] == 32)
				return (-1);
			else
			{
				/* to the get format function */
				/* pass the next character i.e x+1 */
				if ((*get_format_func(format[x + 1])) == NULL)
				{
					str[_strlen(str)] = format[x];
					length++;
				}
				else
					length += (*get_format_func(format[x + 1]))(args, str);
			}
			/* increment x to point to format specifier */
			x++;
		}
		else
		{
			/* it's a regular character, add it to buffer */
			/* get the last index of the string and append it */
			str[_strlen(str)] = format[x];
			length++;
		}
		x++;
	}
	va_end(args);
	write(1, str, _strlen(str));
	free(str);
	return (length);
}
