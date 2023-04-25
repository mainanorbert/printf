#ifndef MAIN_H
#define MAIN_H
#include <stddef.h>
#include <stdarg.h>

typedef struct myfunc
{
	char *sp;
	int (*myprint)(va_list);
}
myfunc_t;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list list);
int print_s(va_list list);
int (*compare_func(const char *a))(va_list);
int percentage_sign(va_list list);
#endif
