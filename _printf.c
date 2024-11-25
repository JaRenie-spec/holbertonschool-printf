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

	print_type spec[] = {
			{"%c", pchar},
			{"%s", pstring},
			{"%", pmodulo},
			{NULL, NULL},
	};

	va_start(ap, format);

	while (format && format[i])
	{
		j = 0;
		while (spec[j].spec)
		{
			if (format[i] == spec[j].spec[1])
			{
				spec[j].f(ap);
			}
			j++;
		}
		i++;
	}
	_putchar('\n');
	va_end(ap);
	return (0);
}
