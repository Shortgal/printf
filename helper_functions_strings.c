#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int x;
	int length;

	x = length = 0;
	while (s[x])
	{
		length++;
		x++;
	}
	return (length);
}

/**
 * rev_string - reverses a string
 * @s: string
 * Return: void
 */

void rev_string(char *s)
{
	int temp;
	int x;
	int length;

	length = 0;
	for (x = 0; ; x++)
	{
		if (*(s + x))
			length++;
		else
			break;
	}
	for (x = 0; x < length / 2; x++)
	{
		temp = s[x];
		s[x] = s[length - 1 - x];
		s[length - 1 - x] = temp;
	}
}

/**
 * _strcat - appends a src string to a destination string
 * @dest: destination string
 * @src: src string
 * Return: void
 */

void _strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; ; x++)
	{
		if (dest[x])
			continue;
		else
			break;
	}
	for (y = 0; ; y++)
	{
		if (src[y])
			dest[x + y] = src[y];
		else
			break;
	}
	dest[x + y] = '\0';
}

/**
 * _memset - fills first n bytes of s with b
 * @s: pointer to memory area
 * @b: character for fill
 * @n: number of bytes
 * Return: pointer to s
 */

void _memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (; x < n; x++)
		s[x] = b;
}
