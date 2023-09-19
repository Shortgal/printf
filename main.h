#ifndef PRINTF_H
#define PRINTF_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1

/******************* FUNCTIONS ******************/

/* Function to handle other other specifiers */
int get_flags(const char *format, int *i);
int get_precicision(const char *format, int *i, va_list list);
int get_size(const char *format, int size);

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
void rot13(char *s);

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

int print_s(va_list args, char *str);
int print_rot(va_list args, char *str);
int print_rev(va_list args, char *str);

int dec_binary(unsigned int x, char *str);
int dec_octal(unsigned int x, char *str);
int dec_hex_lower(unsigned int x, char *str);
int dec_hex_upper(unsigned int x, char *str);
int dec_hex_format(unsigned int x, char *str);

#endif
