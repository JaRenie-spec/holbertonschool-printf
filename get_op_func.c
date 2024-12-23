#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - function to search the specifier.
 * @format: the argument to print
 * Return: the pointer of function
 */

int (*get_op_func(char *format))(va_list)
{
	print_type spec[] = {
		{"%c", pchar},
		{"%s", pstring},
		{"%%", pmodulo},
		{"%d", pdecimal},
		{"%i", pdecimal},
		{NULL, NULL},
	};

	int i = 0;

	while (spec[i].spec != NULL)
	{
		if ((format[0] == '%') && (format[1] == spec[i].spec[1]))
		{
			return (spec[i].f);
		}
		i++;
	}
	return (NULL);
}
