#include "main.h"

/**
 * print_rev - reverses a string and appends its to an output buffer
 * @args: string to be reversed
 * @str: pointer to buffer
 * Return: length of reversed string
 */

int print_rev(va_list args, char *str)
{
	char *ptr;
	char *ptr2 = va_arg(args, char *);
	int x = 0;

	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
		exit(1);
	_memset(ptr, 0, 1024);
	if (ptr2 == NULL)
	{
		_strcat(str, "(null)");
		free(ptr);
		return (_strlen("(null)"));
	}
	else
	{
		while (ptr2[x])
		{
			ptr[x] = ptr2[x];
			x++;
		}
		rev_string(ptr);
		_strcat(str, ptr);
		x = _strlen(ptr);
		free(ptr);
		return (x);
	}
}

/**
 * print_rot - encodes a string using ROT13 and appends it an output buffer
 * @args: string to be encoded
 * @str: output buffer
 * Return: length of encoded string
 */

int print_rot(va_list args, char *str)
{
	char *ptr;
	char *ptr2 = va_arg(args, char *);
	int x = 0;

	ptr = malloc(sizeof(char) * 1024);
	if (ptr == NULL)
		exit(1);
	_memset(ptr, 0, 1024);
	if (ptr2 == NULL)
	{
		_strcat(str, "(null)");
		free(ptr);
		return (_strlen("(null)"));
	}
	else
	{
		while (ptr2[x])
		{
			ptr[x] = ptr2[x];
			x++;
		}
		rot13(ptr);
		_strcat(str, ptr);
		x = _strlen(ptr);
		free(ptr);
		return (x);
	}
}


/**
 * print_s - custom string printing
 * @args: string to be printed
 * @str: output buffer
 * Return: length of printed string
 */

int print_s(va_list args, char *str)
{
	char *ptr = va_arg(args, char *);
	char *ptr2;
	unsigned int x = 0, y = 0, z = 0;

	ptr2 = malloc(sizeof(char) * 1024);
	if (ptr2 == NULL)
		exit(1);
	_memset(ptr2, 0, 1024);
	if (ptr == NULL)
	{
		_strcat(str, "(null)");
		return (_strlen("(null)"));
	}
	else
	{
		while (ptr[x])
		{
			if ((ptr[x] > 0 && ptr[x] < 32) || ptr[x] >= 127)
			{
				y = ptr[x];
				_strcat(ptr2, "\\x");
				z += _strlen("\\x");
				z += dec_hex_format(y, ptr2);
			}
			else
			{
				ptr2[z] = ptr[x];
				z++;
			}
			x++;
		}
		y = _strlen(ptr2);
		_strcat(str, ptr2);
		free(ptr2);
		return (y);
	}
}
