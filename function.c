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

void pmodulo(va_list ap)
{
	(void) ap;
	_putchar('%');
}

void pdecimal(va_list ap)
{
	int n = va_arg(ap, int);
	int j = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		char buffer[10];

		while (n > 0)
		{
			buffer[n] = (n % 10) + '0';
			n++;
			n /= 10;
		}
		for (j = n - 1; j >= 0; j--)
		{
			_putchar(buffer[j]);
		}
	}

}
