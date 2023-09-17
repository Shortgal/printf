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
	int (*func)(va_list args, char *str);
} format_list;

void string_to_lower(char *s);
void rev_string(char *s);
int _strlen(char *s);
int print_number(int n, char *str);
int print_unsigned_number(unsigned int n, char *str);
void _strcat(char *dest, char *src);
void _memset(char *s, char b, unsigned int n);
int convert_decimal(unsigned int x, unsigned int base, char *str);

int _printf(const char *format, ...);

int (*get_format_func(int num))(va_list args, char *str);
int print_int(va_list args, char *str);
int print_unsigned_int(va_list args, char *str);
int print_char(va_list args, char *str);
int print_string(va_list args, char *str);

int print_binary(va_list args, char *str);
int print_octal(va_list args, char *str);
int print_hex_lower(va_list args, char *str);
int print_hex(va_list args, char *str);

#endif
