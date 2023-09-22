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

/**
 * struct format_list - contains ta format specifier and its function
 * @n: format specifier
 * @func: associated function
 */

typedef struct format_list
{
	int n;
	int (*func)(va_list args, char *str);
} format_list;

/**
 * struct flags_list - contains the flag specifier and its value
 * @flag: flag specifier
 * @value: associated value
 */

typedef struct flags_list
{
	int flag;
	int value;
} flags_list;

/* helper functions */
char *alloc_mem(void);
void string_to_lower(char *s);
void rev_string(char *s);
int _strlen(char *s);
int print_number(int n, char *str);
int print_unsigned_number(unsigned int n, char *str);
void _strcat(char *dest, char *src);
void _memset(char *s, char b, unsigned int n);
void rot13(char *s);

/* main function */
int _printf(const char *format, ...);
int _fprintf(const char *format, va_list args, char *str);

/* format specifiers */
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

int print_address(va_list args, char *str);
int dec_hex_address(unsigned long int x, char *str);

/* get modifiers functions */
unsigned char get_flags(const char *format, int *index);
int get_length(const char *format, int *index);
int get_width(const char *format, int *index, va_list args);
int get_precision(const char *format, int *index, va_list args);

#endif
