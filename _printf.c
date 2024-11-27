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
	int i = 0;
	int k = 0;
	int (*func)(va_list);

	va_start(ap, format);

if (format == NULL)
{
	return (-1);
}
while (format[i] != '\0')
{
	if (format[i] == '%' && format[i + 1] != '\0')
	{
		func = get_op_func((char *)&format[i]);

		if (func != NULL)
		{
			k += func(ap);
			i++;
		}
		else
		{
			_putchar(format[i]);
			k++;
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
