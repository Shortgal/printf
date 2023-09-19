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
	unsigned int ui = (unsigned int)INT_MAX + 1024;
	int p;

	_printf("%u\n", ui);
	printf("%u\n", ui);
	_printf("%o\n", ui);
	printf("%o\n", ui);
	_printf("%x\n", ui);
	printf("%x\n", ui);
	_printf("%X\n", ui);
	printf("%X\n", ui);
	_printf("%p\n", &p);
	printf("%p\n", &p);

	return (0);
}
