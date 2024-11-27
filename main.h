#ifndef _GUARD_H
#define _GUARD_H
#include <stdarg.h>
#include <stddef.h>


typedef struct type
{
	char *spec;
	int (*f)(va_list ap);
}print_type;

int (*get_op_func(char *format))(va_list);
int _putchar(char c);
int _printf(const char *format, ...);
int pchar(va_list ap);
int pstring(va_list ap);
int pmodulo(va_list ap);
int pdecimal(va_list ap);
#endif
