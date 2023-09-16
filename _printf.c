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
			/* increment x to point to format specifier */
			x++;
			/* check if character is % */
			if (format[x] == 37)
				str[_strlen(str)] = format[x];
			else
			{
				/* to the get format function */
				/* pass the next character i.e x+1 */
				(*get_format_func(format[x]))(args, str);
			}
		}
		else
		{
			/* it's a regular character, print it with */
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
