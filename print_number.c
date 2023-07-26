#include "main.h"

/**
 * print_int - funtion that print an integer
 * @args: argument
 * Return: length
 */
int print_int(va_list args)
{
	int d = va_arg(args, int);
	char str[50];

	int_to_str(d, str);
	return (_puts(str));
}
/**
 * print_unsigned - funtion that print an unsigned int
 * @args: argument
 * Return: length
 */
int print_unsigned(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	char str[50];

	int_to_str(num, str);
	return (_puts(str));
}
