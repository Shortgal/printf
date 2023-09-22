#include <limits.h>
#include <stdio.h>
#include "../main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int len1, len2;

	len1 = printf("%ld\n", LONG_MAX);
	len2 = _printf("%ld\n", LONG_MAX);
	printf("%d\n", len1);
	_printf("%d\n", len2);
	len1 = printf("%ld\n", LONG_MIN);
	len2 = _printf("%ld\n", LONG_MIN);
	printf("%d\n", len1);
	_printf("%d\n", len2);
	len1 = printf("%ld + %ld = %ld\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX));
	len2 = _printf("%ld + %ld = %ld\n", LONG_MIN, LONG_MAX, (LONG_MIN + LONG_MAX));
	printf("%d\n", len1);
	_printf("%d\n", len2);
	printf("%ho\n", 1024);
	_printf("%ho\n", 1024);
	return (0);
}
