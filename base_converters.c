#include "main.h"

/**
 * dec_binary - converts decimal to base 2, appends it to string
 * @x: decimal integer
 * @str: pointer to the string
 * Return: length of appended string
 */

int dec_binary(unsigned int x, char *str)
{
	char *ptr;
	unsigned int y = 0, rem = 0, temp_x,  max_sizeof_ptr = 0;

	if (x == 0)
	{
		str[_strlen(str)] = 48;
		return (1);
	}
	temp_x = x;
	while (temp_x > 0)
	{
		max_sizeof_ptr++;
		temp_x /= 2;
	}
	ptr = malloc(sizeof(char) * (max_sizeof_ptr + 1));
	if (ptr == NULL)
		exit(1);
	_memset(ptr, 0, max_sizeof_ptr);
	while (x > 0)
	{
		rem = x % 2;
		ptr[y] = rem + 48;
		x /= 2;
		y++;
	}
	ptr[y] = '\0';
	rev_string(ptr);
	_strcat(str, ptr);
	temp_x = _strlen(ptr);
	free(ptr);
	return (temp_x);
}

/**
 * dec_octal - converts decimal to base 8, appends it to string
 * @x: integer
 * @str: pointer to the string
 * Return: length of appended string
 */

int dec_octal(unsigned int x, char *str)
{
	char *ptr;
	unsigned int y = 0, rem = 0, temp_x, max_sizeof_ptr = 0;

	if (x == 0)
	{
		str[_strlen(str)] = 48;
		return (1);
	}
	temp_x = x;
	while (temp_x > 0)
	{
		max_sizeof_ptr++;
		temp_x /= 8;
	}
	ptr = malloc(sizeof(char) * (max_sizeof_ptr + 1));
	if (ptr == NULL)
		exit(1);
	_memset(ptr, 0, max_sizeof_ptr);
	while (x > 0)
	{
		rem = x % 8;
		ptr[y] = rem + 48;
		x /= 8;
		y++;
	}
	ptr[y] = '\0';
	rev_string(ptr);
	_strcat(str, ptr);
	temp_x = _strlen(ptr);
	free(ptr);
	return (temp_x);
}

/**
 * dec_hex_upper - converts decimal to base 16, appends it to string
 * @x: integer
 * @str: pointer to the string
 * Return: length of appended string
 */

int dec_hex_upper(unsigned int x, char *str)
{
	char *ptr;
	unsigned int y = 0, rem = 0, temp_x, max_sizeof_ptr = 0;

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
	_strcat(str, ptr);
	temp_x = _strlen(ptr);
	free(ptr);
	return (temp_x);
}

/**
 * dec_hex_lower - converts decimal to base 16, appends it to string
 * @x: integer
 * @str: pointer to the string
 * Return: length of appended string
 */

int dec_hex_lower(unsigned int x, char *str)
{
	char *ptr;
	unsigned int y = 0, rem = 0, temp_x, max_sizeof_ptr = 0;

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

/**
 * dec_hex_format - converts num to hex - 2 char format, appends it to string
 * @x: integer
 * @str: pointer to the string
 * Return: length of appended string
 */

int dec_hex_format(unsigned int x, char *str)
{
	char *ptr;
	unsigned int y = 0, rem = 0, temp_x, max_sizeof_ptr = 0;

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
	if (_strlen(ptr) < 2)
	{
		ptr[y] = 48;
		y++;
	}
	ptr[y] = '\0';
	rev_string(ptr);
	_strcat(str, ptr);
	temp_x = _strlen(ptr);
	free(ptr);
	return (temp_x);
}
