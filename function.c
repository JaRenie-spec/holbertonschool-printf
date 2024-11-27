#include "main.h"
#include <stdarg.h>

/**
 * pchar - function to print a character
 * @ap: argument pointer
 */

int pchar(va_list ap)
{
	char c = va_arg(ap, int);
		_putchar(c);
		return (1);
}

/**
 * pstring - function to print a string
 * @ap: argument pointer
 */

int pstring(va_list ap)
{
	int i = 0;
	char *str = va_arg(ap, char *);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
	return (1);
}

int pmodulo(va_list ap)
{
	(void) ap;
	_putchar('%');
	return (1);
}

int pdecimal(va_list ap)
{
	int n = va_arg(ap, int);
	int j = 0;
	char buffer[10];

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		buffer[j] = (n % 10) + '0';
		j++;
		n /= 10;
	}
	for (j = j - 1; j >= 0; j--)
	{
		_putchar(buffer[j]);
	}

	return (1);
}
