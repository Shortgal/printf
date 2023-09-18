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
	void (*func)(va_list args, char *str);
} format_list;

void string_to_lower(char *s);
void rev_string(char *s);
int _strlen(char *s);
void print_number(int n, char *str);
void print_unsigned_number(unsigned int n, char *str);
void _strcat(char *dest, char *src);
void _memset(char *s, char b, unsigned int n);
void convert_decimal(unsigned int x, unsigned int base, char *str);

int _printf(const char *format, ...);

void (*get_format_func(int num))(va_list args, char *str);
void print_int(va_list args, char *str);
void print_unsigned_int(va_list args, char *str);
void print_char(va_list args, char *str);
void print_string(va_list args, char *str);

void print_binary(va_list args, char *str);
void print_octal(va_list args, char *str);
void print_hex_lower(va_list args, char *str);
void print_hex(va_list args, char *str);

#endif
