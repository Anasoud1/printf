#include "main.h"
/**
 * print_binary - function that print binary
 * @args: argument
 * Return: length of string
 */
int print_binary(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char str[50];

	convert_to_base(n, str, 2);
	return (_puts(str));
}
/**
 * print_octal - function that convert to local
 * @args: argument
 * Return: length
 */
int print_octal(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char str[50];

	convert_to_base(n, str, 8);
	return (_puts(str));
}
/**
 * print_hex - function that convert to hex
 * @args: argument
 * Return: length
 */
int print_hex(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char str[50];

	convert_to_base(n, str, 16);
	return (_puts(str));
}
/**
 * print_HEX - fucntion that convert hex on uppecase
 * @args: argument
 * Return: length
 */
int print_HEX(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	char str[50];

	str[0] = 'A';
	convert_to_base(n, str, 16);
	return (_puts(str));
}
/**
 * print_address - function that print an address
 * @args: argument
 * Return: length
 */
int print_address(va_list args)
{
	void *ptr = va_arg(args, void *);
	char str[50];
	unsigned long add = (unsigned long)ptr;

	if (!ptr)
		return (_puts("(nil)"));
	convert_to_base(add, str, 16);
	return (_puts("0x") + _puts(str));
}
