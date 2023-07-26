#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct form - struct
 * @ch: string to check
 * @f: function pointer
 */
typedef struct form
{
	char *ch;
	int (*f)(va_list);
} form_t;

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int print_prc(va_list args);
int print_ch(va_list args);
int print_str(va_list args);
int (*get_func(const char *s))(va_list);

int print_int (va_list args);
void int_to_str(long n, char *s);
void reverse_str(char *s);

void convert_to_base(unsigned long n, char *s, int b);
int print_binary(va_list args);
int print_unsigned(va_list);
int print_octal(va_list args);
int print_hex(va_list args);
int print_HEX(va_list args);

int print_custom(va_list args);
int print_address(va_list args);

#endif
