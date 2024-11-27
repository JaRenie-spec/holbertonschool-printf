#include "main.h"
#include <stdarg.h>

/**
 * pchar - function to print a character
 * @ap: argument pointer
 * Return: 1 if success
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
 * Return: 1 if success
 */

int pstring(va_list ap)
{
	char *str = va_arg(ap, char *);
	int i;
	int k = 0;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
	{
		k += _putchar(str[i]);
	}
	return (k);
}

/**
 * pmodulo - print the modulo
 *
 * @ap: argument pointer
 * Return: 1 if success
 */

int pmodulo(va_list ap)
{
	(void) ap;
	_putchar('%');
	return (1);
}

/**
 * pdecimal - print decimal and integer
 * @ap: argument pointer
 * Return: 1 if success
 */

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

	return (0);
}
