#include "main.h"
/**
 * print_custom - function that printa spacific string
 * @args: argument
 * Return: length
 */
int print_custom(va_list args)
{
	char *s = va_arg(args, char *);
	char buf[3];
	int i, len = 0;

	if (!s)
	{
		s = "(null)";
		return (_puts(s));
	}
	for (i = 0; s[i]; i++)
	{
		if ((s[i] > 0 && s[i] < 32) || s[i] >= 127)
		{
			len += (s[i] < 16) ? _puts("\\x0") : _puts("\\x");
			buf[0] = 'A';
			convert_to_base(s[i], buf, 16);
			len += _puts(buf);
		}
		else
			len += _putchar(s[i]);
	}
	return (len);
}
