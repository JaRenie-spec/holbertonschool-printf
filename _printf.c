#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - function to print
 * @format: the argument to print.
 * Return: 0
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, j;
	int k = 0;

	print_type spec[] = {
		{"%c", pchar},
		{"%s", pstring},
		{"%", pmodulo},
		{"%d", pdecimal},
		{NULL, NULL},
	};

	va_start(ap, format);

	while (format && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				_putchar('%');
				k++;
			}
			else
			{
				j = 0;
				while (spec[j].spec)
				{
					if (format[i] == spec[j].spec[1])
					{
						spec[j].f(ap);
						k++;
						break;
					}
					j++;
				}
			}
		}
		else
		{
			_putchar(format[i]);
			k++;
		}
		i++;
	}
	va_end(ap);
	return (k);
}
