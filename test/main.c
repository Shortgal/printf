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
	int len, len2;

	len = _printf("%c\n", NULL);
	len2 = printf("%c\n", NULL);
	_printf("len from null char:%d\n", len);
	printf("len from null char:%d\n", len2);
	return (0);
}
