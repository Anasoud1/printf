#include "main.h"

/**
 * get_func - function that return the right function
 * @s: string
 * Return: pointer of the function needed
 */

int (*get_func(const char *s))(va_list)
{
	int j;
	form_t formt[] = {
		{"p", print_address},
		{"S", print_custom},
		{"u", print_unsigned},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_HEX},
		{"b", print_binary},
		{"d", print_int},
		{"i", print_int},
		{"%", print_prc},
		{"c", print_ch},
		{"s", print_str},
		{NULL, NULL}
	};
	for (j = 0; formt[j].ch; j++)
		if (s[0] == formt[j].ch[0])
			return (formt[j].f);
	return (NULL);
}
