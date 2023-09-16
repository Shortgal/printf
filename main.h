#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * format_list - contains the format specifier and its associated function
 * @n: format specifier
 * @func: associated function
 */

typedef struct format_list
{
	int n;
	void (*func)(va_list args);
} format_list;

int _putchar(char c);
int _printf(const char *format, ...);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
void print_number(int n);
void (*get_format_func(int num))(va_list args);

void print_int(va_list args);
void print_unsigned_int(va_list args);
void print_char(va_list args);
void print_string(va_list args);

#endif
