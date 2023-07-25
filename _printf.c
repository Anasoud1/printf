#include "main.h"
/**
 * _printf - function that print
 * @format: string
 * Return: length of _printf
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int len = 0;
	int (*p)(va_list);

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	va_start(args, format);
	for (i = 0; format && format[i] ; i++)
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == ' ')
				while (format[i] == ' ')
					i++;
			if (format[i] == '\0')
				return (-1);
			if (format[i] == '%' || strchr("csdibuoxXSp", format[i]))
			{
				p = get_func(&format[i]);
				len += p(args);
			}
			else
				len += _putchar('%') + _putchar(format[i]);
		}
		else
		{
			len += _putchar(format[i]);
		}
	}
	va_end(args);
	return (len);
}
