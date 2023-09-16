#include "main.h"

/**
 * _putchar - writes the character c to the standard output
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _strcpy - copies a string to a buffer
 * @dest: pointer pointint to buffer
 * @src: pointer pointing to string
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int x;
	int length;

	length = 0;
	for (x = 0; ; x++)
	{
		if (*(src + x))
			length++;
		else
			break;
	}
	for (x = 0; x < length; x++)
		*(dest + x) = *(src + x);
	*(dest + (length)) = '\0';

	return (dest);
}

/**
 * _strlen - returrns the length of a string
 * @s: string variable
 * Return: length of string
 */

int _strlen(char *s)
{
	int length;

	length = 0;
	while (*s++ != '\0')
		length++;
	return (length);
}


/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
		m = n;

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
		_putchar(((m / count) % 10) + 48);
}
