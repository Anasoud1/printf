#include "main.h"

/**
 * print_ch - function that print a character
 * @args: argument
 * Return: 1
 */

int print_ch(va_list args)
{
	char c = va_arg(args, int);

	_putchar(c);
	return (1);
}

/**
 * print_str - function that print a string
 * @args: argument
 * Return: length of string
 */

int print_str(va_list args)
{
	int len;
	char *str = va_arg(args, char*);

	if (!str)
		str = "(null)";
	len = _puts(str);
	return (len);
}

/**
 * print_prc - function that print %
 * @args : argument
 *
 * Return: 1
 */

int print_prc(va_list args)
{
	(void)(args);
	_putchar('%');
	return (1);
}
