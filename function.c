#include "main.h"
#include <stdarg.h>
#include <stdio.h>

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
int num = va_arg(ap, int);
	int buffer[11];
	int count = 0, i = 0, j;

	if (num < 0)
	{
		_putchar('-');
		num = -num;
		count++;
	}

	while (num > 0)
	{
		buffer[i++] = num % 10;
		num /= 10;
	}

	if (i == 0)
	{
		buffer[i++] = 0;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar('0' + buffer[j]);
		count++;
	}
	return (count);
}
