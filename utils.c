#include "main.h"

/**
 * int_to_str - function that convert int to string
 * @n: number to change
 * @s: string to create
 * Return: pointer
 */
void int_to_str(long n, char *s)
{
	unsigned int i = 0;
	long num = n;

	if (num < 0)
		n = -n;
	do {
		s[i++] = n % 10 + 48;
	} while ((n /= 10) > 0);
	if (num < 0)
		s[i++] = '-';
	s[i] = '\0';
	reverse_str(s);
}

/**
 * reverse_str - function that reverse a string
 * @s: string to reverse
 */
void reverse_str(char *s)
{
	unsigned int i, l;
	char tmp;

	l = strlen(s);
	for (i = 0; i < l / 2; i++)
	{
		tmp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = tmp;
	}
}

/**
 * convert_to_base - function that convert to binary
 * @n: number to convert
 * @s: string to put number
 * @b: base
 */
void convert_to_base(unsigned long n, char *s, int b)
{
	unsigned int r, i = 0;
	char p = s[0] == 'A' ? 'A' : 'a';

	if (n == 0)
		s[i++] = '0';
	while (n > 0)
	{
		r = n % b;
		if (r >= 10)
			s[i++] = r - 10 + p;
		else
			s[i++] = r + '0';
		n /= b;
	}
	s[i] = '\0';
	reverse_str(s);
}

