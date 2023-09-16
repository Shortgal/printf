#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string format
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int x = 0;
	char *str = "";
	va_list args;

	va_start(args, format);
	str = malloc(sizeof(char) * 1024);
	if (str == NULL)
	{
		va_end(args);
		exit (1);
	}
	_memset(str, 0, 1024);
	/* iterate through the string */
	while (format[x])
	{
		/* % in ASCII = 37 */
		/* check if the character currently pointed to is % */
		if (format[x] == 37)
		{
			/* increment x to skip this character */
			x++;
			/* pass the next character i.e x+1 */
			/* to the get format function */
			(*get_format_func(format[x]))(args, str);
		}
		else
		{
			/* it's a regular character, print it with */
			/* get the last index of the string and append it */
			if (x > 0)
				str[_strlen(str)] = format[x];
			else
				str[x] = format[x];
		}
		x++;
	}
	x = _strlen(str);
	va_end(args);
	write(1, str, _strlen(str));
	free(str);
	return (x);
}
