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

	len1 = _printf("%c", '\0');
	len2 = printf("%c", '\0');
	printf("\n");
	_printf("%d\n", len1);
	printf("%d\n", len2);
	return (0);
}
