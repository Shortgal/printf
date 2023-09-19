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
 * @str: output buffer
 * Return: length of string
 */

int _fprintf(const char *format, va_list args, char *str)
{
	int x = 0, length = 0;

	while (format[x])
	{
		if (format[x] == 37)
		{
			if (format[x + 1] == 37)
			{
				str[_strlen(str)] = format[x + 1];
				length++;
				x++;
			}
			else if (!(format[x + 1] == 0 || format[x + 1] == 32))
			{
				if ((*get_format_func(format[x + 1])) == NULL)
				{
					str[_strlen(str)] = format[x];
					length++;
				}
				else
				{
					length += (*get_format_func(format[x + 1]))(args, str);
					x++;
				}
			}
			else
				return (-1);
		}
		else
		{
			str[_strlen(str)] = format[x];
			length++;
		}
		x++;
	}
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
	char *str = alloc_mem();

	if (format == NULL)
		return (-1);
	va_start(args, format);
	length += _fprintf(format, args, str);
	write (1, str, _strlen(str));
	free(str);
	return (length);
}
