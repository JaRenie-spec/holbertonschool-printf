#ifndef _GUARD_H
#define _GUARD_H
#include <stdarg.h>
#include <stddef.h>


typedef struct type
{
	char *spec;
	void (*f)(va_list ap);
}print_type;

int _putchar(char c);
int _printf(const char *format, ...);
void pchar(va_list ap);
void pstring(va_list ap);
void pmodulo(va_list ap);
void pdecimal(va_list ap);
#endif
