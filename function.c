#include "main.h"
#include <stdarg.h>

/**
 * pchar - function to print a character
 * @ap: argument pointer
 */

void pchar(va_list ap)
{
	char c = va_arg(ap, int);
		_putchar(c);
}

/**
 * pstring - function to print a string
 * @ap: argument pointer
 */

void pstring(va_list ap)
{
	int i = 0;
	char *str = va_arg(ap, char *);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}

/**
 * pmodulo - function to ignore a modulo if write twice
 * @ap: argument pointer.
 */

void pmodulo(va_list ap)
{
	int i = 0;

	if (i == 37)
		_putchar('%');
}
