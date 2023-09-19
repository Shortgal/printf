#include "main.h"

/**
 * alloc_mem - allocates memory to a pointer and sets its bytes to zero
 * Return: pointer to memory
 */

char *alloc_mem(void)
{
	char *ptr;

	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
		exit(1);
	_memset(ptr, 0, 1024);
	ptr[0] = '\0';
	return (ptr);
}

/**
 * _fprintf - iterates through a format and creates the corresponding string
 * @format: string format
 * @args: array of arguments
 * Return: length of string
 */

int _fprintf(const char *format, va_list args)
{
	int x = 0, length = 0;
	char *str = alloc_mem();

	while (format[x])
	{
		if (format[x] == 37)/* check if the character is % (37) */
		{
			/* check if the next character is % */
			if (format[x + 1] == 37)
			{
				str[_strlen(str)] = format[x + 1];
				length++;
				x++;
			}
			else if (!(format[x + 1] == 0 || format[x + 1] == 32))
			{
				/* to the get format function */
				/* pass the next character i.e x+1 */
				if ((*get_format_func(format[x + 1])) == NULL)
				{
					str[_strlen(str)] = format[x];
					length++;
				}
				else
				{
					length += (*get_format_func(format[x + 1]))(args, str);
					/* increment x to point to format specifier */
					x++;
				}
			}
			else
				return (-1);
		}
		else/* it's a regular character, add it to buffer */
		{
			str[_strlen(str)] = format[x];
			length++;
		}
		x++;
	}
	write(1, str, _strlen(str));
	free(str);
	return (length);
}


/**
 * _printf - produces output according to a format
 * @format: string format
 * Return: length of string
 */

int _printf(const char *format, ...)
{
	int length = 0;
	va_list args;

	if (format == NULL)
		return (-1);
	va_start(args, format);
	length += _fprintf(format, args);
	return (length);
}
