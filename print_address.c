#include "main.h"

/**
 * print_address - prints the memory address of a variable to a buffer
 * @args: variable
 * @str: output buffer
 * @len: length modifier
 * Return: length of appended string
 */

int print_address(va_list args, char *str, int len)
{
	int length;
	char *ptr = alloc_mem();
	unsigned long int x = va_arg(args, unsigned long int);

	(void)len;
	if (x == 0)
	{
		_strcat(str, "(nil)");
		return (_strlen("(nil)"));
	}
	ptr[0] = '0';
	ptr[1] = 'x';
	ptr[2] = '\0';
	dec_hex_address(x, ptr);
	_strcat(str, ptr);
	length = _strlen(ptr);
	free(ptr);
	return (length);
}


/**
 * dec_hex_address - converts long unsigned int to hex, appends it to string
 * @x: integer
 * @str: pointer to the string
 * Return: length of appended string
 */

int dec_hex_address(unsigned long int x, char *str)
{
	char *ptr;
	unsigned long int y = 0, rem = 0, temp_x, max_sizeof_ptr = 0;

	if (x == 0)
	{
		str[_strlen(str)] = 48;
		return (1);
	}
	temp_x = x;
	while (temp_x > 0)
	{
		max_sizeof_ptr++;
		temp_x /= 16;
	}
	ptr = malloc(sizeof(char) * (max_sizeof_ptr + 1));
	if (ptr == NULL)
		exit(1);
	_memset(ptr, 0, max_sizeof_ptr);
	while (x > 0)
	{
		rem = x % 16;
		if (rem >= 10)
			ptr[y] = rem - 10 + 65;
		else
			ptr[y] = rem + 48;
		x /= 16;
		y++;
	}
	ptr[y] = '\0';
	rev_string(ptr);
	string_to_lower(ptr);
	_strcat(str, ptr);
	temp_x = _strlen(ptr);
	free(ptr);
	return (temp_x);
}
