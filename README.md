PROJECT PRINTF
It's a variadic function
int _printf(const char *format, ...)

creat an alias 
type structure
typedef struct type
{
	char *spec;
	int (*f)(va_list ap);
}print_type;

creat a fonction who selection
for exple
