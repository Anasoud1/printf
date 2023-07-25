#include "main.h"

/**
 * _putchar - function that print a character
 * @c: character to print
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _puts - function that print a string
 * @s: string
 * Return: length of string
 */

int _puts(char *s)
{
	int i = 0, len = 0;

	for (i = 0; s[i]; i++)
	{
		_putchar(s[i]);
		len++;
	}
	return (len);
}
